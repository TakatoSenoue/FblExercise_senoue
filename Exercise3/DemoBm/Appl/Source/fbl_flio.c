/***********************************************************************************************************************
 *  FILE DESCRIPTION
 *  ------------------------------------------------------------------------------------------------------------------*/
/** \file
 *  \brief        Flash Driver Wrapper for Renesas RH850
 *
 *  --------------------------------------------------------------------------------------------------------------------
 *  COPYRIGHT
 *  --------------------------------------------------------------------------------------------------------------------
 *  \par Copyright
 *  \verbatim
 *  Copyright (c) 2024 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 */
/**********************************************************************************************************************/

/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Version    Date        Author  Change Id          Description
 *  --------------------------------------------------------------------------------------------------------------------
 *  00.09.00   2012-12-18  visrr   ESCAN00063781      Initial version
 *  01.00.00   2013-06-13  viscb                         Release
 *  01.01.00   2014-02-27  visach  ESCAN00073965      Support P1x derivatives
 *  01.02.00   2014-07-01  viscel  ESCAN00074163      Support ECC safe read function
 *  01.03.00   2014-10-23  visrr   ESCAN00078958      Provide API for changing reset vector via Selflib
 *                                 ESCAN00078773      ECC depends on FLASH_ENABLE_MACHINE_CHECK_ECC_DETECTION
 *                                                    Harmonized ECC handling
 *  01.04.00   2016-02-26  visdod  ESCAN00085770      Added support for P1x-C derivative
 *                         visdod  ESCAN00086372      Setting the reset vector always fails (FlashDriver_SetResetVector)
 *  01.05.00   2016-03-18  visqps  ESCAN00088975      Added support for secondary driver
 *  01.06.00   2016-05-09  vistns  ESCAN00087121      2 bit ECC SYSERR might occur even if
 *                                                      FLASH_ENABLE_MACHINE_CHECK_ECC_DETECTION is used
 *  01.07.00   2016-05-23  viscb                      Adapted filter settings for E1x, no code changes
 *  01.08.00   2017-09-07  viscb   ESCAN00096465      Use generalized switch for ECC-safe read
 *                         visjhg  ESCAN00096575      Pass affected core for reset vector change
 *  01.09.00   2017-09-11  viscel  ESCAN00096619      Support reset vector update for flash lib S53
 *  01.10.00   2017-12-13  visjbi  ESCAN00097250      Added support for option byte programming
 *                                 ESCAN00097742      Fixed Reset Vector API switch for secondary driver use-case.
 *  01.11.00   2019-03-11  vistmo  ESCAN00102437      No changes
 *  01.12.00   2019-03-11  vistmo  FBL-3110           Providing API for programming OTP bits
 *                                                    Added/adapted MemMap sections
 *  01.13.00   2022-04-29  visjdn  FBL-4849           Added support for RH850 FAD library
 *  01.13.01   2022-05-16  visjdn  ESCAN00111225      Erroneously detected erased area when ECC error is present
 *  01.14.00   2022-11-30  visknn  FBL-4366           Perform MISRA 2012 migration
 *  01.14.01   2023-07-18  visrie  ESCAN00114776      Wrong mask for reading ECC bits
 *  01.14.02   2024-10-11  visjns  ESCAN00118107      Compiler error: syncp and synci command not found
 **********************************************************************************************************************/

#define FBL_FLIO_SOURCE

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/

#include "fbl_inc.h"

/***********************************************************************************************************************
 *  VERSION
 **********************************************************************************************************************/

#if ( FBLWRAPPERFLASH_RH850RV40HIS_VERSION != 0x0114u ) || \
    ( FBLWRAPPERFLASH_RH850RV40HIS_RELEASE_VERSION != 0x02u )
# error "Error in fbl_flio.c: Source and header file are inconsistent!"
#endif

#if ( FBLWRAPPERFLASH_RH850RV40HIS_VERSION != _FBLWRAPPERFLASH_HW_VERSION ) || \
    ( FBLWRAPPERFLASH_RH850RV40HIS_RELEASE_VERSION != _FBLWRAPPERFLASH_HW_RELEASE_VERSION )
# error "Error in fbl_flio.c: Source and v_ver.h are inconsistent!"
#endif

/***********************************************************************************************************************
 *  MACROS AND DEFINES
 **********************************************************************************************************************/

/* Compatibility switch for ECC detection */
#if defined( FLASH_ENABLE_MACHINE_CHECK_ECC_DETECTION )
# define FBL_FLASH_ENABLE_ECC_SAFE_READ
#endif /* FLASH_ENABLE_MACHINE_CHECK_ECC_DETECTION */

# ifndef FLASH_AUTH_ID_0
#  define FLASH_AUTH_ID_0 0xFFFFFFFFuL
# endif
# ifndef FLASH_AUTH_ID_1
#  define FLASH_AUTH_ID_1 0xFFFFFFFFuL
# endif
# ifndef FLASH_AUTH_ID_2
#  define FLASH_AUTH_ID_2 0xFFFFFFFFuL
# endif
# ifndef FLASH_AUTH_ID_3
#  define FLASH_AUTH_ID_3 0xFFFFFFFFuL
# endif

#define FBL_FLIO_FLASH_ECC_VALID        0x000001FFuL
#define FBL_FLIO_FLASH_ECC_VALID_MASK   0x000001FFuL
#define FBL_FLIO_FLASH_ECC_16BYTE_ALGN  0xFFFFFFF0uL

#if defined( FLASH_ENABLE_G3KH_CORE )
# define FBL_FLIO_BUF_CTL_BASE          0xFFC5B000uL

/** Register access macro */
# define FBL_FLIO_IOS(type, base, offset)   (*((volatile type *)((base) + (offset))))

/** FBUFCCTL register access */
# define FBL_FLIO_FBUFCCTL                  FBL_FLIO_IOS(vuint32, FBL_FLIO_BUF_CTL_BASE, 0x00uL)

# if defined( V_COMP_RENESAS )
#  define FBL_FLIO_SYNCP                __syncp()
#  define FBL_FLIO_SYNCI                __synci()
# else
#  define FBL_FLIO_SYNCP                __asm(" syncp ")
#  define FBL_FLIO_SYNCI                __asm(" synci ")
# endif /* V_COMP_RENESAS */

#endif /* FLASH_ENABLE_G3*_CORE */

/***********************************************************************************************************************
 *  TYPEDEFS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL DATA
 **********************************************************************************************************************/
#define FLASHCODE_START_SEC_VAR
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

V_MEMRAM0 V_MEMRAM1 vuint8 V_MEMRAM2 flashCode[FLASH_SIZE];

#define FLASHCODE_STOP_SEC_VAR
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/***********************************************************************************************************************
 *  LOCAL DATA
 **********************************************************************************************************************/
#define FBLFLIO_START_SEC_VAR
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

static tFlashParam flashParam; /**< Data structure used as interface to flash driver. */

#define FBLFLIO_STOP_SEC_VAR
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/***********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/
#define FBLFLIO_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/***********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  FlashDriver_InitSync
 **********************************************************************************************************************/
/*! \brief       Initializes the flash driver
 *  \details     This function copies the flash driver to RAM if it is stored in a ROM image and calls the
 *               initialization routine in RAM.
 *  \pre         Flash driver has to be copied to RAM if downloadable flash driver is used.
 *  \param[in]   *address Unused parameter to implement HIS interface.
 *  \return      Reports if initialization was successful or not.
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_MSR_Rule8.13 */
IO_ErrorType FlashDriver_InitSync ( void * address )
{
   IO_ErrorType localErrorCode;

# if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   (void)address;
# endif /* V_ENABLE_USE_DUMMY_STATEMENT */

   {
      /* Verify if flashcode signature is correct */
      if ( (FLASH_DRIVER_MCUTYPE(flashCode) != FLASH_DRIVER_VERSION_MCUTYPE)  ||
         (FLASH_DRIVER_MASKTYPE(flashCode)  != FLASH_DRIVER_VERSION_MASKTYPE) ||
         (FLASH_DRIVER_INTERFACE(flashCode) != FLASH_DRIVER_VERSION_INTERFACE)
         )
      {
         /* Flash driver signature mismatch, wrong flash driver */
         localErrorCode = kFlashInitInvalidVersion;
      }
      else
         /* Initialize flash parameter structure */
      {
         flashParam.wdTriggerFct = (IO_U8(*)(void))&FblLookForWatchdog;
         flashParam.reserved1    = (IO_U8)   0x00u;
         flashParam.reserved2    = (IO_U8)   0x00u;
         flashParam.errorCode    = kFlashOk;
         /* Version defines are preset with version of compile time flash driver. */
         flashParam.majorVersion = (IO_U8)   FLASH_DRIVER_VERSION_MAJOR;
         flashParam.minorVersion = (IO_U8)   FLASH_DRIVER_VERSION_MINOR;
         flashParam.patchLevel   = (IO_U8)   FLASH_DRIVER_VERSION_PATCH;

         flashParam.authID[0u] = FLASH_AUTH_ID_0;
         flashParam.authID[1u] = FLASH_AUTH_ID_1;
         flashParam.authID[2u] = FLASH_AUTH_ID_2;
         flashParam.authID[3u] = FLASH_AUTH_ID_3;

         flashParam.frequencyMHz = FBL_SYSTEM_FREQUENCY;

         /* Call init routine of flash driver */
         FLASH_DRIVER_INIT(flashCode, &flashParam);    /* PRQA S 0305, 0310, 3305 */ /* MD_FblWrapperFlash_FlashApi */
         localErrorCode = flashParam.errorCode;
      }
   }
   return localErrorCode;
}

/***********************************************************************************************************************
 *  FlashDriver_DeinitSync
 **********************************************************************************************************************/
/*! \brief       Deinitializes the flash driver
 *  \details     This function calls the deinitialization routine in RAM and removes the flash driver
 *               from the RAM buffer.
 *  \pre         Flash driver is initialized.
 *  \param[in]   *address Unused parameter to implement HIS interface.
 *  \return      Reports if deinitialization was successful or not.
 **********************************************************************************************************************/
IO_ErrorType FlashDriver_DeinitSync ( void * address ) /* PRQA S 3673 */ /* MD_MSR_Rule8.13 */
{
   vuint32 i;
# if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   (void)address;
# endif /* V_ENABLE_USE_DUMMY_STATEMENT */

   /* Call deinit routine of flash driver */
   FLASH_DRIVER_DEINIT(flashCode, &flashParam);  /* PRQA S 0305, 0310, 3305 */ /* MD_FblWrapperFlash_FlashApi */

   /* Remove flash code from RAM */
   for (i = 0; i < FLASH_SIZE; i++)
   {
      flashCode[i] = 0x00u;

      /* Call FblLookForWatchdog() every 256 Bytes */
      if ((i & 0xFFuL) == 0x00uL)
      {
         (void)FblLookForWatchdog();
      }
   }

   return flashParam.errorCode;
}

/***********************************************************************************************************************
 *  FlashDriver_RWriteSync
 **********************************************************************************************************************/
/*! \brief       Writes data to flash memory.
 *  \details     This function programs flash memory by calling the flash driver routine stored in RAM.
 *  \pre         Flash driver is initialized, memory to be programmed is erased.
 *  \param[in]   writeBuffer Pointer to input data buffer.
 *  \param[in]   writeLength Data length.
 *  \param[in]   writeAddress Write target address ( in flash memory ).
 *  \return      Reports write success or error code.
 **********************************************************************************************************************/
IO_ErrorType FlashDriver_RWriteSync ( IO_MemPtrType writeBuffer, IO_SizeType writeLength, IO_PositionType writeAddress )
{
   /* PRQA S 0303 TAG_0303_MemoryMappedRegAccess */ /* MD_FblWrapperFlash_0303_MemoryMappedRegAccess */
   IO_ErrorType retVal;

   /* Check alignment of write address and write length. */
   if ((writeAddress & (FLASH_SEGMENT_SIZE - 1u)) != 0x00u)
   {
      retVal = kFlashWriteInvalidAddr;
   }
   else if ((writeLength & (FLASH_SEGMENT_SIZE - 1u)) != 0x00u)
   {
      retVal = kFlashWriteInvalidSize;
   }
   else
   {
      retVal = kFlashOk;
   }

   if ( (retVal == kFlashOk) && (writeLength > 0u) )
   {
      /* Initialize parameters */
      flashParam.address = (tFlashAddress)writeAddress;
      flashParam.length = (tFlashLength)writeLength;
      flashParam.data = (tFlashData*)writeBuffer;      /* PRQA S 0310, 3305 */ /* MD_FblWrapperFlash_0310 */


      /* Call flash driver in RAM */
      FLASH_DRIVER_WRITE(flashCode, &flashParam);   /* PRQA S 0305, 0310, 3305 */ /* MD_FblWrapperFlash_FlashApi */
      retVal = flashParam.errorCode;

   }

   return retVal;
   /* PRQA L: TAG_0303_MemoryMappedRegAccess */
}

/***********************************************************************************************************************
 *  FlashDriver_REraseSync
 **********************************************************************************************************************/
/*! \brief       Erases area in flash memory.
 *  \details     This function erases one or more logical sectors in flash memory.
 *  \pre         Flash driver is initialized.
 *  \param[in]   eraseLength Length of memory to be erased. The length has to be aligned to the length
 *               of one or more flash sectors.
 *  \param[in]   eraseAddress Start address of erase area. The start address has to be the start
 *               address of a logical flash sector.
 *  \return      Reports erase success or error code.
 **********************************************************************************************************************/
IO_ErrorType FlashDriver_REraseSync ( IO_SizeType eraseLength, IO_PositionType eraseAddress )
{
   /* PRQA S 0303 TAG_0303_MemoryMappedRegAccess */ /* MD_FblWrapperFlash_0303_MemoryMappedRegAccess */
   IO_ErrorType retValue;

   flashParam.address = eraseAddress;
   flashParam.length  = eraseLength;


   /* Call flash driver in RAM */
   FLASH_DRIVER_ERASE(flashCode, &flashParam); /* PRQA S 0305, 0310, 3305 */ /* MD_FblWrapperFlash_FlashApi */
   /* Store return value from flash driver */
   retValue   = flashParam.errorCode;


   return retValue;
   /* PRQA L: TAG_0303_MemoryMappedRegAccess */
}

#if defined ( FBL_ENABLE_USR_RREAD_SYNC )
#else
#define FBLFLIO_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#define FBLFLIO_RAMCODE_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
/***********************************************************************************************************************
 *  FlashDriver_RReadSync
 **********************************************************************************************************************/
/*! \brief       Reads data from flash memory.
 *  \details     This function reads data from flash memory. It can be configured to report ECC errors to the
 *               calling function.  Error correction is enabled.
 *  \param[out]  readBuffer Pointer to read target buffer. The buffer size must be at least readLength Bytes.
 *  \param[in]   readLength Size of data to be read.
 *  \param[in]   readAddress Start address of data to be read.
 *  \return      Reports read success or error code.
 **********************************************************************************************************************/
/* PRQA S 3006 1 */ /* MD_FblWrapperFlash_1006_3006_AssemblerCode */
IO_ErrorType FlashDriver_RReadSync ( IO_MemPtrType readBuffer, IO_SizeType readLength, IO_PositionType readAddress )
{
   /* PRQA S 0303 TAG_0303_MemoryMappedRegAccess */ /* MD_FblWrapperFlash_0303_MemoryMappedRegAccess */
   /* Initialize return value */
   IO_ErrorType retValue      = IO_E_OK;

# if defined( FBL_FLASH_ENABLE_ECC_SAFE_READ )
   vuint32 idx = 0u;
   vuint32 localEccValue;
#  if defined( FLASH_ENABLE_G3KH_CORE )
   vuint32 dummyBufCtlReg;
#  endif /* FLASH_ENABLE_G3KH_CORE */

   IO_SizeType localReadLength;
   IO_PositionType localReadAddress;

   /* Save the current SEG_CONT register */
   vuint16 tempSEGCONT        = FBL_SEG_CONT;
   /* Save the current ECC control register configurations */
   tFblEccCtl tempCFECCCTL    = FBL_CODE_FLASH_ECC_CTL;
   tFblEccErrInt tempCFERRINT = FBL_CODE_FLASH_ECC_ERRINT;

   /* Disable SYSERR generation for ECC C-Flash errors */
   FBL_SEG_CONT               = tempSEGCONT & FblInvert16Bit(kSegContRome);
   /* Enable ECC detection and ECC correction */
   FBL_CODE_FLASH_ECC_CTL     = kEccProtWrite;

   /* Disable ECC notification signal generation */
   FBL_CODE_FLASH_ECC_ERRINT  = kEccNotificationDisable;

   /* Clear Error status before read */
   FBL_CODE_FLASH_ECC_ERROR_CLEAR();

   /* Read from code flash */
   (void)MEMCPY(readBuffer, readAddress, readLength); /* PRQA S 0326 */ /* MD_FblWrapperFlash_0326 */

   /* Check for uncorrectable two bit error occurred -> Read again to check for erased memory */
   if ( (FBL_CODE_FLASH_ECC_FSTERSTR & kEccUncorrectableError) == kEccUncorrectableError )
   {
      /* For second read, disable ECC correction */
      FBL_CODE_FLASH_ECC_CTL  = ( kEccProtWrite | kEccCorrectionDisable );

      localReadLength = readLength;

      /* Read from code flash again */
      (void)MEMCPY(readBuffer, readAddress, localReadLength); /* PRQA S 0326 */ /* MD_FblWrapperFlash_0326 */

      /* Check for erased value, if all erased value driver assumes data to be erased */
      while ((retValue == IO_E_OK) && (localReadLength > 0u))
      {
         if (readBuffer[idx] != FBL_FLASH_DELETED)
         {
            retValue = IO_E_NOT_OK;
         }
         idx++;
         localReadLength--;
      }

      /* Check if all values were flash erased value */
      if (retValue == IO_E_OK)
      {
         /*!
          * Internal comment removed.
 *
 *
 *
 *
          */

         /* For ECC read, disable ECC */
         FBL_CODE_FLASH_ECC_CTL = (kEccProtWrite | kEccDisable);

         /* Enable ECC and address parity bits reading */
         FBL_CODE_FLASH_ECC_TSTCTL = (kEccProtWrite | kEccTestModeEnable);

#  if defined( FLASH_ENABLE_G3KH_CORE )

         /* Write consecutively 0, 1 and 0 to the buffer control register */
         FBL_FLIO_FBUFCCTL = 0x00uL;
         FBL_FLIO_FBUFCCTL = 0x01uL;
         FBL_FLIO_FBUFCCTL = 0x00uL;

         /* Dummy read of the register */
         dummyBufCtlReg = FBL_FLIO_FBUFCCTL; /* PRQA S 2983 */ /* MD_MSR_DummyStmt */

         /* Execute the SYNCP and SYNCI instructions */
         FBL_FLIO_SYNCP;  /* PRQA S 1006 */ /* MD_FblWrapperFlash_1006_3006_AssemblerCode */
         FBL_FLIO_SYNCI;  /* PRQA S 1006 */ /* MD_FblWrapperFlash_1006_3006_AssemblerCode */

#  endif /* FLASH_ENABLE_G3*_CORE */

         localReadAddress = readAddress & FBL_FLIO_FLASH_ECC_16BYTE_ALGN;

         if (localReadAddress == readAddress)
         {
            /* Address aligned to 16 bytes */
            if ((readLength & FBL_FLIO_FLASH_ECC_16BYTE_ALGN) == readLength )
            {
               /* Multiple of 16 bytes */
               localReadLength = readLength >> 4u;
            }
            else
            {
               /* Not multiple of 16 bytes */
               localReadLength = (readLength >> 4u) + 1uL;
            }
         }
         else
         {
            /* Address not aligned to 16 bytes */
            localReadLength = (((readAddress + readLength) - localReadAddress) >> 4u) + 1uL;
         }

         /* Check for ECC values to be 0x1FF (excluding parity bit as not present for all families) */
         while ((retValue == IO_E_OK) && (localReadLength > 0u))
         {
            (void)MEMCPY(&localEccValue, localReadAddress, 4u); /* PRQA S 0326 */ /* MD_FblWrapperFlash_0326 */

            /*!
             * Internal comment removed.
 *
 *
 *
 *
 *
             */
            if ((localEccValue & FBL_FLIO_FLASH_ECC_VALID_MASK) != FBL_FLIO_FLASH_ECC_VALID)
            {
               retValue = IO_E_NOT_OK;
            }

            localReadLength--;
            localReadAddress += 0x10uL;
         }

         /* Check if all ECC and address parity bits were OK */
         if (retValue == IO_E_OK)
         {
            retValue = IO_E_ERASED;
         }
      }

      /* Clear ECC Error status registers */
      FBL_CODE_FLASH_ECC_ERROR_CLEAR();
   }

   /* Restore previous ECC setting */
   FBL_SEG_FLAG &= FblInvert16Bit(kSegFlagRomf);   /* Clear pending Code flash error flag */
   FBL_SEG_CONT = tempSEGCONT;
   FBL_CODE_FLASH_ECC_CTL = (kEccProtWrite | tempCFECCCTL);

   /* Disable ECC and address parity bits reading */
   FBL_CODE_FLASH_ECC_TSTCTL = kEccProtWrite;

   FBL_CODE_FLASH_ECC_ERRINT = tempCFERRINT;
# else
   /* Read flash with plain memcpy */
   (void)MEMCPY(readBuffer, readAddress, readLength); /* PRQA S 0326 */ /* MD_FblWrapperFlash_0326 */
# endif /* FBL_FLASH_ENABLE_ECC_SAFE_READ */
   return retValue;
   /* PRQA L: TAG_0303_MemoryMappedRegAccess */
}

#define FBLFLIO_RAMCODE_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#define FBLFLIO_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
#endif /* FBL_ENABLE_USR_RREAD_SYNC */

/***********************************************************************************************************************
 *  FlashDriver_GetVersionOfDriver
 **********************************************************************************************************************/
/*! \brief       Reports the flash driver version.
 *  \details     This function reads the flash driver version and reports it to the application. Depending on the
 *               initialization state of the driver, the following data is reported:
 *               - Flash driver version which was used to build the Bootloader if no driver has been downloaded yet.
 *               - Actual flash driver version if the flash driver has been downloaded.
 *  \return      BCD coded version of flash driver.
 **********************************************************************************************************************/
IO_U32 FlashDriver_GetVersionOfDriver( void )
{
   IO_U32 returnValue;
   /* Check if flash code is present */
   if ( (FLASH_DRIVER_MCUTYPE(flashCode)   != FLASH_DRIVER_VERSION_MCUTYPE)  ||
        (FLASH_DRIVER_MASKTYPE(flashCode)  != FLASH_DRIVER_VERSION_MASKTYPE) ||
        (FLASH_DRIVER_INTERFACE(flashCode) != FLASH_DRIVER_VERSION_INTERFACE)
      )
   {
      /* Flash driver not present or signature mismatch: return built-in version */
      returnValue = (IO_U32)(((IO_U32)FLASH_DRIVER_VERSION_MAJOR << 16u) | \
                             ((IO_U32)FLASH_DRIVER_VERSION_MINOR <<  8u) | \
                             ((IO_U32)FLASH_DRIVER_VERSION_PATCH));
   }
   else
   {
      /* Flash driver is present, return actual version */
      returnValue = (IO_U32)(((IO_U32)flashParam.majorVersion << 16u) | \
                             ((IO_U32)flashParam.minorVersion <<  8u) | \
                             ((IO_U32)flashParam.patchLevel));
   }

   return returnValue;
}

#if defined( FLASH_ENABLE_SET_RESETVECTOR_API )
/***********************************************************************************************************************
 *  FlashDriver_SetResetVector
 **********************************************************************************************************************/
/*! \brief       Set new reset vector.
 *  \pre         Flash driver is initialized.
 *  \param[in]   vectorAddress  New reset vector address.
 *  \param[in]   coreIndex  Core for which the new reset vector applies.
 *  \return      Reports success or error code.
 **********************************************************************************************************************/
IO_ErrorType FlashDriver_SetResetVector ( IO_PositionType vectorAddress, IO_SizeType coreIndex )
{
   /* PRQA S 0303 TAG_0303_MemoryMappedRegAccess */ /* MD_FblWrapperFlash_0303_MemoryMappedRegAccess */
   /* Pass vector address and core index in address and length members */
   flashParam.address    = vectorAddress;
   flashParam.length     = coreIndex;


   /* PRQA S 0305, 0310, 3305 1 */ /* MD_FblWrapperFlash_FlashApi */
   FLASH_DRIVER_SET_RESET_VECTOR(flashCode, &flashParam);


   return (flashParam.errorCode);
   /* PRQA L: TAG_0303_MemoryMappedRegAccess */
}
#endif /* FLASH_ENABLE_SET_RESETVECTOR_API */

# if defined( FLASH_ENABLE_OPTIONBYTE_API )
/***********************************************************************************************************************
 *  FlashDriver_GetOptionByte
 **********************************************************************************************************************/
/*! \brief       Get the option bytes.
 *  \pre         Flash driver must be initialized. Global variable memDrvActive must be set prior to execution.
 *  \param[in]   Buffer where current option bytes are to be returned.
 *  \param[in]   Length of buffer.
 *  \return      Reports success or error code.
 **********************************************************************************************************************/
IO_ErrorType FlashDriver_GetOptionByte ( IO_U32 * readBuffer, IO_SizeType readLength )
{
   /* Pass buffer and length to the Flash Driver */
   flashParam.data = &readBuffer[0u];
   flashParam.length = readLength;

   /* Read the option bytes */
   FLASH_DRIVER_GET_OPTIONBYTE(flashCode, &flashParam); /* PRQA S 0305, 0310, 3305 */ /* MD_FblWrapperFlash_FlashApi */

   return (flashParam.errorCode);
}

/***********************************************************************************************************************
 *  FlashDriver_SetOptionByte
 **********************************************************************************************************************/
/*! \brief       Set the option bytes.
 *  \pre         Flash driver must be initialized. Global variable memDrvActive must be set prior to execution.
 *  \param[in]   Buffer containing new option bytes.
 *  \param[in]   Length of buffer.
 *  \return      Reports success or error code.
 **********************************************************************************************************************/
IO_ErrorType FlashDriver_SetOptionByte ( IO_U32 * writeBuffer, IO_SizeType writeLength )
{
   /* Pass buffer and length to the Flash Driver */
   flashParam.data = &writeBuffer[0u];
   flashParam.length = writeLength;


   /* Write the option bytes */
   FLASH_DRIVER_SET_OPTIONBYTE(flashCode, &flashParam);   /* PRQA S 0305, 0310, 3305 */ /* MD_FblWrapperFlash_FlashApi */


   return (flashParam.errorCode);
}
# endif /* FLASH_ENABLE_OPTIONBYTE_API */

# if defined( FLASH_ENABLE_OTPBIT_API )
/***********************************************************************************************************************
 *  FlashDriver_GetOtpBit
 **********************************************************************************************************************/
/*! \brief       Get the OTP bit of a specific flash block.
 *  \pre         Flash driver must be initialized.
 *  \param[in]   blockIdx Index of the flash block for which the OTP status is requested.
 *  \param[in]   blockSts Buffer to place the OTP status.
 *  \return      Reports success or error code.
 **********************************************************************************************************************/
IO_ErrorType FlashDriver_GetOtpBit ( IO_U32 blockIdx, IO_U32 *blockSts )
{
   /* Initialize parameters */
   flashParam.address = (tFlashAddress)blockIdx;
   flashParam.data = (tFlashData*)blockSts;

   /* Check the OTP status of the flash block */
   FLASH_DRIVER_GET_OTPBIT(flashCode, &flashParam);

   return (flashParam.errorCode);
}

/***********************************************************************************************************************
 *  FlashDriver_SetOtpBit
 **********************************************************************************************************************/
/*! \brief       Set the OTP bit for a specific flash block.
 *  \pre         Flash driver must be initialized.
 *  \param[in]   blockIdx Index of the flash block to be protected with OTP.
 *  \return      Reports success or error code.
 **********************************************************************************************************************/
IO_ErrorType FlashDriver_SetOtpBit ( IO_U32 blockIdx )
{

   /* Initialize parameters */
   flashParam.address = (tFlashAddress)blockIdx;

   /* Set the OTP status of the flash block */
   FLASH_DRIVER_SET_OTPBIT(flashCode, &flashParam);


   return (flashParam.errorCode);
}
# endif /* FLASH_ENABLE_OTPBIT_API */

#define FBLFLIO_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/***********************************************************************************************************************
 *  MISRA DEVIATIONS
 **********************************************************************************************************************/

/* Justification for module-specific MISRA deviations:

   MD_FblWrapperFlash_2992_2996_Configuration:
      Reason:     Depending on the configuration it might be that this controlling expression is always false
      Risk:       No identifiable risk.
      Prevention: No prevention required

   MD_FblWrapperFlash_0303_MemoryMappedRegAccess:
     Reason:      Hardware access need pointer as volatile.
     Risk:        Access of unknown memory.
     Prevention:  Runtime tests.

   MD_FblWrapperFlash_FlashApi:
      Reason:     Vector standard API to get flash function pointers in order to execute flash routines (init, write, erase, deinit)
                  All functions are executed in uniform way.
      Risk:       Reduced readability, might not work on all platforms.
      Prevention: Code reviews and testing that flash programming gets executed (trivial).

   MD_FblWrapperFlash_0326:
      Reason:     [I] Cast between a pointer to object and an integral type. This is mostly caused by address information
                  which is handed over as an integral type and has to be converted to a pointer type to be used.
      Risk:       Data loss because of cast.
      Prevention: Code inspection has to ensure no data is lost.

   MD_FblWrapperFlash_0310:
     Reason:      Casting to different object pointer type.
     Risk:        Cast discards address information used by pointer.
     Prevention:  Assertion and calling functions have to ensure correct alignment.

   MD_FblWrapperFlash_1006_3006_AssemblerCode:
     Reason:     Assembler code is used for executing the assembler instructions.
     Risk:       The code is not portable for different compilers and may disturb C Code.
     Prevention: The assembler code provided by each Flio module has to be tested.

*/

/***********************************************************************************************************************
 *  END OF FILE: FBL_FLIO.C
 **********************************************************************************************************************/
