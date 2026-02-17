/* Kernbauer Version: 1.12 Konfiguration: FBL Erzeugungsgangnummer: 1 */

/***********************************************************************************************************************
 *  FILE DESCRIPTION
 *  ------------------------------------------------------------------------------------------------------------------*/
/** \file
 *  \brief         Application dependent nonvolatile memory access routines
 *
 *  \note          Please note, that this file contains a collection of callback functions to be used with the
 *                 Flash Bootloader. These functions may influence the behavior of the bootloader in principle.
 *                 Therefore, great care must be taken to verify the correctness of the implementation.
 *                 The contents of the originally delivered files are only examples resp. implementation proposals.
 *                 With regard to the fact that these functions are meant for demonstration purposes only, Vector
 *                 Informatik's liability shall be expressly excluded in cases of ordinary negligence, to the extent
 *                 admissible by law or statute.
 *
 *  --------------------------------------------------------------------------------------------------------------------
 *  COPYRIGHT
 *  --------------------------------------------------------------------------------------------------------------------
 *  \par Copyright
 *  \verbatim
 *  Copyright (c) 2023 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 */
/**********************************************************************************************************************/

/***********************************************************************************************************************
 *  REVISION HISTORY (KbFbl_apnvFrameOem.c)
 *  --------------------------------------------------------------------------------------------------------------------
 *  Version    Date        Author  Change Id        Description
 *  --------------------------------------------------------------------------------------------------------------------
 *  06.00.00   2019-02-26  visrie  ESCAN00102261    Added support for FblLib_NvPattern and FblLib_Lbt
 *  06.01.00   2019-06-26  vistbe  ESCAN00103515    Added support for stream output
 *  06.01.01   2019-10-02  visrcn  ESCAN00103874    Data structure of pseudo flash driver supports 1 Byte block IDs only
 *  07.00.00   2020-04-27  visrie  FBL-1412         Added callbacks for RC clear RFS data, new SecureBoot interface
 *  07.01.00   2020-05-07  visrie  FBL-1414         Added support for One-Step-Updater
 *  07.01.01   2020-06-16  vistmo  ESCAN00106608    Wrong call to FblMemSetInteger
 *  07.01.02   2020-07-13  visjdn  ESCAN00103848    ApplFblErasePatternArea calculated wrong patternLength
 *  07.02.00   2021-07-22  vistbe  FBL-3440         Added support for UNECE
 *  07.03.00   2022-06-29  vishor  FBL-5273         Update to specification set 2.11
 *  07.04.00   2023-06-20  vismix  FBL-4317         Add support for OTA
 *  07.05.00   2023-08-29  vismix  FBL-7246         Reuse flash driver after one-step bootloader updater
 *  07.05.01   2023-10-25  visrie  ESCAN00115720    No changes
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  --------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY (kbFbl_apAPI.c)
 *  --------------------------------------------------------------------------------------------------------------------
 *  Version    Date        Author  Change Id        Description
 *  --------------------------------------------------------------------------------------------------------------------
 *  02.00.00   2018-09-14  visrie  ESCAN00100739    Added support for FblLib_NvPattern
 *                                                  Removed unused code
 *                         viscb   ESCAN00101418    Callout function for memory condition check
 *                         visach  ESCAN00101686    Added interface definition for vendor verification routine
 *  02.01.00   2019-02-26  visrie  ESCAN00102257    Added additional callout functions
 *  02.01.01   2019-09-23  visrie  FBL-452          Added support for FrArTp
 *  02.02.00   2019-12-05  visrie  FBL-458          Added FblMio callout functions
 *  02.03.00   2020-05-07  visrie  FBL-1414         Added callout functions for One-Step-Updater
 *  02.03.01   2020-06-02  visjdn  ESCAN00106533    Update to latest MISRA version
 *  02.03.02   2020-09-14  visrcn  FBL-2257         Add MISRA justifications
 *  02.03.03   2020-11-23  visrcn  FBL-2564         Add MISRA justifications
 *  02.03.04   2021-03-19  visjdn  FBL-2916         Add MISRA justifications
 *  02.04.00   2021-05-26  vishor  FBL-3165         MISRA corrections and justifications
 *  02.05.00   2021-06-15  visrie  FBL-3591         Provide default implementation for ApplFbl_DetEntryHandler
 *                                                  Add MISRA justifications
 *  02.06.00   2021-07-15  visjdn  FBL-3381         Re-mapping of EcuM_SetWakeupEvent
 *  02.07.00   2021-07-22  visrie  FBL-3822         Update to QAC9 Helix-2021
 *  02.08.00   2021-09-14  visjdn  FBL-2859         Add MISRA justifications
 *  02.09.00   2021-10-12  vistmo  FBL-3901         Add authentication callbacks
 *  02.10.00   2021-10-15  visrie  FBL-3945         Remove content of ApplFblStartApplication
 *  02.10.01   2021-11-12  vishor  ESCAN00110133    Compiler error: Unknown symbols
 *                                                   ApplFblSave/RestoreStatusSector/Dynamic
 *  02.10.02   2022-06-27  visrie  FBL-4694         Add MISRA justifications
 *  02.10.03   2022-10-20  visjns  FBL-5452         Add MISRA justifications
 *  02.11.00   2022-12-22  vistbe  FBL-5691         Add support for LZSS compression
 *  02.11.01   2023-04-25  visjns  ESCAN00113808    Compiler error: TPLIN_VERSION/tLinFrameHandleType is not defined
 *  02.11.02   2023-08-07  visjns  FBL-7132         Add MISRA justifications
 *  02.12.00   2023-08-16  vismix  FBL-7050         Add API ApplFblIsDynamicProgSessionResponseInApplication
                                   ESCAN00114431    Compiler error: Missing include file Can.h
 *  02.13.00   2023-08-29  vismix  FBL-7246         Reuse flash driver after one-step bootloader updater
 *  02.13.01   2023-11-17  visrie  ESCAN00115700    No changes
 *  02.14.00   2024-04-26  visrie  FBL-2325         Add MISRA justifications
 *  02.14.01   2024-10-07  virjjn  ESCAN00118185    Compiler error: unknown include header files
 *  02.14.02   2025-01-20  virchl  ESCAN00119180    Compiler warning: Unused parameter 'channel' in
 *                                                  ApplFbl_ComM_<No/Silent/Full>ComModeEntered
 *  02.14.03   2025-03-05  virjjn  ESCAN00119536    Compiler error: Functions ApplFblTrcv* may not be defined
 *  02.14.04   2025-03-21  vismix  ESCAN00119674    Compiler error: Undefined CANTP_E_ DET error defines
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  REVISION HISTORY (KbFbl_apOem.c)
 *  --------------------------------------------------------------------------------------------------------------------
 *  Version    Date        Author  Change Id        Description
 *  --------------------------------------------------------------------------------------------------------------------
 *  06.00.00   2019-03-08  visrie  ESCAN00102262    Added support for FblLib_NvPattern and FblLib_Lbt
 *                                 ESCAN00102274    Fixed ReadDataByIdentifier-LogicalBlockDowngradeProtectionVersion
 *                         visach  ESCAN00102407    Support 80126 2.7
 *  06.00.01   2019-03-11  visrie  ESCAN00102428    Update CMAC after a block has been downloaded
 *                         visach  ESCAN00102447    Logical block validity is not read correctly for some usecases
 *  06.00.02   2019-04-25  vistbe  ESCAN00102870    Assertion is hit during validation/invalidation of application
 *  06.01.00   2019-05-16  visach  ESCAN00103160    Added configurable compression mode
 *  06.02.00   2019-06-16  vistbe  ESCAN00103514    Added support for stream output
 *  06.02.01   2019-09-23  visrie  FBL-452          Added support for FrArTp
 *  06.02.02   2019-09-27  visrcn  ESCAN00102945    Same seed is sent for subsequent requests
 *  07.00.00   2020-04-27  visrie  FBL-1412         Added support of new SecureBoot interface
 *  07.01.00   2020-05-07  visrie  FBL-1414         Added support for One-Step-Updater
 *  07.01.01   2020-06-23  visjdn  ESCAN00105424    Wrong/Random Data in ReadDID
 *                                 ESCAN00103341    LZMA decompression fails
 *                                 ESCAN00106311    LZMA decompression fails with COMPRESS_LZMA_STATUS_BITSTREAM_ERROR
 *  07.01.02   2020-08-05  visjdn  ESCAN00106957    Compiler error: 'lastCallByLibMem' : undeclared identifier
 *  07.01.03   2020-10-16  visrcn  ESCAN00107250    Processing of encrypted files fails with NRC 0x72/0x24
 *                                 ESCAN00107269    DSDG2 download modifies the application validity
 *  07.01.04   2021-01-13  vistmo  ESCAN00107087    Compressed and encrypted download stops with NRC 0x72
 *  07.01.05   2021-02-15  vishor  ESCAN00107905    Compiler error: FblDiagGetDsdg2() undefined
 *  07.02.00   2021-04-01  vishor  FBL-2523         Support of the new FblMio
 *  07.02.01   2021-07-21  visrie  ESCAN00108794    [XCP] Bootloader does not process XCP messages
 *                                 ESCAN00108042    Compiler error: ApplFblCheckProgConditions: declaration may not
 *                                                   appear after executable statement in block
 *                                 ESCAN00109818    Compiler error: ApplFbl[Pre/Post]MemDriver: declaration may not
 *                                                   appear after executable statement in block
 *  07.03.00   2021-11-10  visjdn  FBL-3077         Support of embedded checksum/signature
 *  07.03.01   2022-02-01  vistmo  ESCAN00110600    TP BlockSize parameters not preserved after one step updater completion
 *  07.04.00   2022-06-29  vishor  FBL-5273         Update to specification set 2.11
 *                                 ESCAN00112207    Compiler error: Undefined symbols CanInit, CanSleep, kCanOk,
 *                                                   CanHwIsSleep and CanGetStatus
 *  07.04.01   2022-09-28  visjns  ESCAN00112665    LZMA and ECL decompression are always enabled
 *                                 ESCAN00112667    Routine control fails when downloading non-readable block with
 *                                                   presence pattern enabled
 *  07.05.00   2023-06-20  vismix  FBL-4317         Add support for OTA
 *  07.06.00   2023-08-14  vishor  FBL-7410         Update to specification set 2.13
 *                                 ESCAN00115357    Compiler error: FblTp<Get/Set>RxBS not defined
 *                                 ESCAN00115423    Invalid DFIs are accepted
 *                                 ESCAN00115383    No changes
 *  07.07.00   2023-08-29  vismix  FBL-7246         Reuse flash driver after one-step bootloader updater
 *                                 ESCAN00113252    Compiler warning: Conversion to smaller type, possible loss of data
 *  07.08.00   2023-08-31  visjns  FBL-7269         Support Vector LZSS solution
 *  07.08.01   2024-05-02  visrie  ESCAN00116835    Erase request does not erase all requested logical blocks
 *  07.09.00   2024-06-27  visesm  ESCAN00117245    Uninitialized variable in example code
 *  07.09.01   2025-04-03  vishor  ESCAN00119603    Last not aligned to 16 bytes data are not decrypted
 *                                 ESCAN00119372    Wrong NRC for WriteDataByIdentifier - Fingerprint
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  --------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY (KbFbl_apHW.c, Brs)
 *  --------------------------------------------------------------------------------------------------------------------
 *  Version    Date        Author  Change Id        Description
 *  --------------------------------------------------------------------------------------------------------------------
 *  01.00.00   2018-02-26  viscsz                   Initial version
 *  01.00.01   2018-03-08  viscsz  ESCAN00102984    Call the BrsHwTogglePin functions directly and include BrsHw.h
 *  01.00.02   2019-04-16  viscsz  ESCAN00102985    Added calls to BrsHwPreInitPowerOn and BrsHwDisableEccErrorReporting
 *  02.00.00   2020-04-08  visrie  FBL-1016         Support of vBaseEnv
 *  02.01.00   2020-07-13  visjdn  ESCAN00106756    Compiler error: Undefined symbols BrsHw/BRSHW
 *  02.01.01   2022-10-20  visjns  ESCAN00112300    BrsHw functions are called twice
 *  02.02.00   2022-12-13  visjdn  FBL-6267         Add support to call InitPowerOn for FlashDrivers
 *  02.02.01   2023-01-09  vishor  ESCAN00113543    SWCP fails because file is not filtered correctly
 *  02.03.00   2023-08-18  vismix  FBL-6196         Add dummy message
 **********************************************************************************************************************/
#define FBL_APNV_SOURCE

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/

#include "fbl_inc.h"
# include "cmpr_lzma.h"
#  define FBL_APPL_ENABLE_DECOMPRESSION_LZMA


#if defined( FBL_APPL_ENABLE_DECOMPRESSION_LZMA )
# if defined( FBL_ENABLE_COMPRESSION_MODE )
#  include "cmpr_lzma.h"
# endif
#endif /* FBL_APPL_ENABLE_DECOMPRESSION_LZMA */




#include "BrsMain.h"
#include "BrsHw.h"
# include "Det.h"
# if (DET_ENABLED == STD_ON)
#   if (FBLCW_MODULE_CAN == STD_ON)
#    include FBLCW_CANDRV_HEADER_NAME
#    include "CanTp.h"
#   endif
# endif

/***********************************************************************************************************************
 *  VERSION
 **********************************************************************************************************************/

#if ( FBLKBAPI_FRAMENV_UDS1_VERSION != 0x0705u ) || \
    ( FBLKBAPI_FRAMENV_UDS1_RELEASE_VERSION != 0x01u )
# error "Error in fbl_apnv.c Source and header file are inconsistent!"
#endif

#if ( (FBLKBAPI_FRAMENV_UDS1_VERSION != _FBLKBAPI_FRAMENV_OEM_VERSION ) || \
      (FBLKBAPI_FRAMENV_UDS1_RELEASE_VERSION != _FBLKBAPI_FRAMENV_OEM_RELEASE_VERSION) )
# error "Error in fbl_apxx.c: Source and v_ver.h are inconsistent!"
#endif

/***********************************************************************************************************************
 *  DEFINES
 **********************************************************************************************************************/

/* Configuration check */
#if ( kEepSizeValidityFlags != kNrOfValidationBytes )
# error "Size of block validity data is not correct. Check GENy configuration of size."
#endif

/***********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  LOCAL DATA
 **********************************************************************************************************************/

/* Buffer for fingerprint */
V_MEMRAM0 static V_MEMRAM1 vuint8 V_MEMRAM2 blockFingerprint[kEepSizeFingerprint];

#if defined( FBL_APPL_ENABLE_STARTUP_DEPENDENCY_CHECK )
#else
# if defined( FBL_ENABLE_PRESENCE_PATTERN ) 
V_MEMRAM0 static V_MEMRAM1 tBlockDescriptor V_MEMRAM2 currentValidatedBlock;
# endif /* FBL_ENABLE_PRESENCE_PATTERN */
#endif /* FBL_APPL_ENABLE_STARTUP_DEPENDENCY_CHECK */


/***********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

#if defined( FBL_ENABLE_PRESENCE_PATTERN )
#else
static tFblResult ApplFblChgBlockValid( vuint8 mode, tBlockDescriptor descriptor );
#endif /* FBL_ENABLE_PRESENCE_PATTERN */


/***********************************************************************************************************************
 *   GLOBAL FUNCTIONS
 **********************************************************************************************************************/

#if defined( FBL_ENABLE_PRESENCE_PATTERN )
#else
/***********************************************************************************************************************
 *  ApplFblChgBlockValid
 **********************************************************************************************************************/
/*! \brief       This function changes the validation flag of a logical block.
 *               The state information is stored inverted.
 *  \pre         EEPROM driver must be initialized before call
 *  \param[in]   mode (kEepValidateBlock/kEepInvalidateBlock)
 *  \param[in]   descriptor Block descriptor
 *  \return      kFblOk if successful, kFblFailed otherwise
 **********************************************************************************************************************/
static tFblResult ApplFblChgBlockValid( vuint8 mode, tBlockDescriptor descriptor )
{
   vuint8         validityMask;
   tFblResult     result;

   vuint8         byteIdx;
   vuint8         validityFlags[kEepSizeValidityFlags];
   vuint8         validityCheck[kEepSizeValidityFlags];

   byteIdx = (vuint8)(descriptor.blockNr >> 0x03u);
   validityMask = (vuint8)(0x01u << (descriptor.blockNr & 0x07u));

   result = kFblFailed;

   if (((ApplFblNvReadValidityFlags(validityFlags))) == kFblOk)
   {
      if (mode == kEepValidateBlock)
      {
         validityFlags[byteIdx] &= FblInvert8Bit(validityMask);
      }
      else
      {
         validityFlags[byteIdx] |= validityMask;
      }

      /* Modify validity flags */
      if (ApplFblNvWriteValidityFlags(validityFlags) == kFblOk)
      {
         /* Read modified flags */
         if (ApplFblNvReadValidityFlags(validityCheck) == kFblOk)
         {
            /* Check if flags were written correctly */
            if (validityCheck[byteIdx] == validityFlags[byteIdx])
            {
               result = kFblOk;
            }
         }
      }
   }
   return result;
}
#endif /* FBL_ENABLE_PRESENCE_PATTERN */


/***********************************************************************************************************************
 *  ApplFblAdjustLbtBlockData
 **********************************************************************************************************************/
/*! \brief         This function is called whenever the bootloader queries the range for the logical blocks.
 *  \details       This info is typically stored in fbl_mtab.c and generated from GENy. This function
 *                 can be used to spare a range from the LBT at runtime that shall not be flashed, e.g. PresencePattern.
 *  \param[in,out] blockDescriptor Pointer to LBT-Descriptor
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_FblKbApi_3673 */
tFblResult ApplFblAdjustLbtBlockData( tBlockDescriptor * blockDescriptor )
{
   tFblResult        result;
#if defined( FBL_ENABLE_PRESENCE_PATTERN )
   IO_PositionType   presPtnAddress;
   IO_SizeType       presPtnLen;
#endif

#if !defined( FBL_ENABLE_PRESENCE_PATTERN ) 
# if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* Parameters not used: avoid compiler warning */ /* PRQA S 3112 1 */ /* MD_MSR_DummyStmt */
   (void)blockDescriptor;
# endif
#endif

   /* Initialize variables */
   result = kFblOk;

#if defined( FBL_ENABLE_PRESENCE_PATTERN )
   /* Calculate location of presence pattern.
    * Note that the end of the block descriptor already points to the presence pattern itself.
    */
   if (result == kFblOk) /* PRQA S 2991, 2995 */ /* MD_FblKbApiOem_2985_2991_2995_2996 */
   {
      /* PRQA S 4342, 4521 1 */ /* MD_FblKbApiOem_4342_4521_ConfigurationEnumLengthCast */
      memSegment = FblNvPatternGetBaseAddr(blockDescriptor->blockNr, (tFblNvPatternId)(kFblNvPatternId_Last - 1u), &presPtnAddress, &presPtnLen);

      if (memSegment >= 0)
      {
         /* Reduce length for presence pattern and mask */
         blockDescriptor->blockLength = presPtnAddress - blockDescriptor->blockStartAddress;
      }
      else
      {
         result = kFblFailed;
      }
   }
#endif


   return result;
}


/***********************************************************************************************************************
 *  ApplFblExtProgRequest
 **********************************************************************************************************************/
/*! \brief       Function is called on power-on reset to check if an external programming request exists.
 *  \details     If the flag is set, the flag is cleared and the function returns kProgRequest.
 *  \return      kProgRequest = external programming request, kNoProgRequest = programming request flag not set
 **********************************************************************************************************************/
tFblProgStatus ApplFblExtProgRequest( void )
{
   tFblProgStatus progStatus;
#if defined( FBL_ENABLE_FBL_START )
#else /* ! FBL_ENABLE_FBL_START */
   vuint8 progReqFlag;
#endif /* ! FBL_ENABLE_FBL_START */

   /* Initialize variables */
   progStatus = kNoProgRequest;

# if defined( FBL_ENABLE_FBL_START )
   /* Check a pattern in uninitialized RAM to see if this
    * is a reprogramming request from the application */
   if (FblBmChkFblStartMagicFlag())
   {
      /* Clear immediately the request */
      FblBmClrMagicFlag();

      progStatus = kProgRequest;
   }
# else /* ! FBL_ENABLE_FBL_START */
   /* Check the reprogramming request flag */
   if (ApplFblNvReadProgReqFlag(&progReqFlag) == kFblOk)
   {
      if (progReqFlag == kEepFblReprogram)
      {
         /* Reprogramming flag is set */
         progStatus = kProgRequest;
         /* Clear request flag */
         progReqFlag = 0u;
         (void)ApplFblNvWriteProgReqFlag(&progReqFlag);  /* PRQA S 3425 */ /* MD_FblKbApiOem_3425 */
      }
      /* start adaptation */
      else
      {
         /* Unknown/unset request flag */
      }
   }
# endif /* ! FBL_ENABLE_FBL_START */
# if defined( FBL_ENABLE_STAY_IN_BOOT )
   if (FblBmChkStayInBootMagicFlag())
   {
      /* Clear immediately the request */
      FblBmClrMagicFlag();

      progStatus = kCheckStayInBootRequest;
   }
# endif /* FBL_ENABLE_STAY_IN_BOOT */
   return progStatus;
}

/***********************************************************************************************************************
 *  ApplFblValidateBlock
 **********************************************************************************************************************/
/*! \brief       Function is called after a successful download (CRC check was successful) to validate the logical block
 *  \pre         Logical block must be successfully downloaded
 *  \param[in]   blockDescriptor Block descriptor structure
 *  \return      kFblOk: validation successfully performed, kFblFailed: validation failed
 **********************************************************************************************************************/
/* PRQA S 6010, 6030, 6050, 6080 1 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */
tFblResult ApplFblValidateBlock( tBlockDescriptor blockDescriptor )
{
   tFblResult result;
   tBlockDescriptor localBlockDescriptor;

   /* Initialize variables */
   result = kFblOk;
   localBlockDescriptor = blockDescriptor;

   {
# if defined( FBL_ENABLE_PRESENCE_PATTERN )
#  if defined( kBlockTypeNonReadableBlockBlockCount )
#   if ( kBlockTypeNonReadableBlockBlockCount > 0x0u )
#     error "Configuration error: non-readable logical blocks cannot support presence patterns, manual adaptation required"
#   endif
#  endif /* kBlockTypeNonReadableBlockBlockCount */
      /* Save block descriptor of currently validated block.
       * The block descriptor will be used to validate the application. */
      currentValidatedBlock = blockDescriptor;

      if (FblNvPatternSet(&localBlockDescriptor, kFblNvPatternId_BlockValidity) != kFblOk)
      {
         result = kFblFailed;
      }
# else
      /* Set current block valid */
      if (ApplFblChgBlockValid(kEepValidateBlock, localBlockDescriptor) != kFblOk)
      {
         result = kFblFailed;
      }
# endif /* FBL_ENABLE_PRESENCE_PATTERN */
   }


   return result;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/***********************************************************************************************************************
 *  ApplFblInvalidateBlock
 **********************************************************************************************************************/
/*! \brief       Whenever the bootloader needs to delete data, this function is called
 *               to invalidate the current logical block.
 *  \param[in]   blockDescriptor Block descriptor structure
 *  \return      kFblOk: invalidation successfully performed, kFblFailed: invalidation failed
 **********************************************************************************************************************/
tFblResult ApplFblInvalidateBlock( tBlockDescriptor blockDescriptor )
{
   tFblResult result;
   tBlockDescriptor localBlockDescriptor;

   /* Initialize variables */
   localBlockDescriptor = blockDescriptor;

      /* Invalidate application validity flag */
      {
         result = ApplFblInvalidateApp();
      }

   {
      /* Erase valid flag of current block */
      if (result == kFblOk)
      {
# if defined( FBL_ENABLE_PRESENCE_PATTERN )
#  if defined( kBlockTypeNonReadableBlockBlockCount )
#   if ( kBlockTypeNonReadableBlockBlockCount > 0x0u )
#     error "Configuration error: non-readable logical blocks cannot support presence patterns, manual adaptation required"
#   endif
#  endif /* kBlockTypeNonReadableBlockBlockCount */
         /* Only invalidate block if it is not valid */
         result = FblNvPatternClr(&localBlockDescriptor, kFblNvPatternId_BlockValidity);
# else
         result = ApplFblChgBlockValid(kEepInvalidateBlock, localBlockDescriptor);
# endif /* FBL_ENABLE_PRESENCE_PATTERN */
      }

      /* Write flashware information into NVM */
      if (result == kFblOk)
      {
         result = (tFblResult)ApplFblNvWriteFingerprint((IO_PositionType)localBlockDescriptor.blockNr, &blockFingerprint[0]);
      }
   }

   return result;
}

/***********************************************************************************************************************
 *  ApplFblIsValidApp
 **********************************************************************************************************************/
/*! \brief       Function is called on power-up to check if the application is successfully validated or not.
 *  \details     Returns kApplValid if application is valid (all mandatory blocks available) and application start is
 *               allowed. Otherwise it returns kApplInvalid.
 **********************************************************************************************************************/
/* PRQA S 2889 1 */ /* MD_FblKbApi_2889 */
tApplStatus ApplFblIsValidApp( void )
{
   tApplStatus applicationStatus;
# if defined( FBL_APPL_ENABLE_STARTUP_DEPENDENCY_CHECK )
# else
#  if defined( FBL_ENABLE_PRESENCE_PATTERN )
   tBlockDescriptor iterBlock;
   tFblLbtBlockFilter blockFilter;
   vuint8 device;
#  else
   vuint8 applValidity;
#  endif /* FBL_ENABLE_PRESENCE_PATTERN */
# endif /* FBL_APPL_ENABLE_STARTUP_DEPENDENCY_CHECK */

   /* Initialize variables */
   applicationStatus = kApplInvalid;

# if defined( FBL_APPL_ENABLE_STARTUP_DEPENDENCY_CHECK )
   /* Execute programming dependencies check here. Block validity has to be checked as well. */
   if (ApplFblCheckProgDependencies() == 0x00u)
   {
      applicationStatus = kApplValid;
   }
# else
#  if defined( FBL_ENABLE_PRESENCE_PATTERN )
#   if defined( kBlockTypeNonReadableBlockBlockCount )
#    if ( kBlockTypeNonReadableBlockBlockCount > 0x0u )
#      error "Configuration error: non-readable logical blocks cannot support presence patterns, manual adaptation required"
#    endif
#   endif /* kBlockTypeNonReadableBlockBlockCount */
   /* Read validity from application validity pattern
    * Scan all logical blocks until one block with application valid flag is found */
   FblLbtBlockFilterInit(&blockFilter);
   iterBlock = FblLbtBlockFirst(&blockFilter);
   while ((FblLbtBlockDone() == FALSE) && (applicationStatus == kApplInvalid))
   {
      if (kFblOk == FblMemGetDeviceByRange(iterBlock.blockStartAddress, iterBlock.blockLength, &device))
      {
#   if defined( kMioDeviceRam )
         /* Do not check the presence pattern for RAM */
         if (device != kMioDeviceRam)
#   endif
         {
            if (FblNvPatternGet(&iterBlock, kFblNvPatternId_ApplValidity) == kFblOk)
            {
               applicationStatus = kApplValid;
            }
         }
      }

      /* Prepare next cycle */
      iterBlock = FblLbtBlockNext();
   }
#  else
   /* Read validity from NV-memory */
   if (ApplFblNvReadApplValidity(&applValidity) == kFblOk)
   {
      if (applValidity == kEepApplConsistent)
      {
         applicationStatus = kApplValid;
      }
   }
#  endif /* FBL_ENABLE_PRESENCE_PATTERN */
# endif /* FBL_APPL_ENABLE_STARTUP_DEPENDENCY_CHECK */

# if ( FBL_PROJECT_STATE >= FBL_INTEGRATION )
   if ((applicationStatus == kApplValid) && (FblCheckBootVectTableIsValid()))
   {
      /* Application is valid but contains an APPLVECT_FROM_BOOT.
       * Therefore it is not possible to jump to startup code of application.
       * Probably the Bootloader was reprogrammed with a debugger. */
      applicationStatus = kApplInvalid;
   }
# endif /* FBL_PROJECT_STATE >= FBL_INTEGRATION */

   return applicationStatus;
}


#if defined( FBL_ENABLE_SEC_ACCESS_DELAY )
/***********************************************************************************************************************
 *  ApplFblRWSecurityAccessDelayFlag
 **********************************************************************************************************************/
/*! \brief       Read/write security access delay flag.
 *  \details     In read mode, the function will return the current value of the security access delay flag. In write
 *               mode it will return the return code of the EEPROM driver.
 *  \param[in]   mode The mode to be used (kEepReadData/kEepWriteData)
 *  \param[in]   value The value to be written
 *  \return      Status of access delay flag/return code of EEPROM driver
 **********************************************************************************************************************/
vuint8 ApplFblRWSecurityAccessDelayFlag( vuint8 mode, vuint8 value )
{
   tFblResult readResult;
   vuint8 buffer;
   vuint8 result;

   /* Read security access delay flag */
   readResult = (tFblResult)ApplFblNvReadSecAccessDelayFlag(&buffer);

   if (mode == kEepWriteData)
   {
      /* Check if read was successful and if the new value is already stored in memory */
      if ((readResult == kFblOk) && (buffer == value))
      {
         result = kFblOk;
      }
      else
      {
         buffer = value;
         result = ((tFblResult)ApplFblNvWriteSecAccessDelayFlag(&buffer));
      }
   }
   else
   {
#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
      /* Parameters not used: avoid compiler warning */
      (void)value;  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
#endif

      result = kEepSecAccessDelayActive;

      /* Check if read was successful */
      if (readResult == kFblOk)
      {
         result = buffer;
      }
   }

   return result;
}
#endif

/***********************************************************************************************************************
 *  ApplFblStoreFingerprint
 **********************************************************************************************************************/
/*! \brief       This function is called by the WriteDataByIdentifier service
 *               to store the received fingerprint in a temporary RAM buffer.
 *  \details     The fingerprint is written into a non-volatile memory when the corresponding logical block is invalidated.
 *  \param[in]   buffer Pointer to received fingerprint
 *  \return      kFblOk = fingerprint successfully stored
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_FblKbApi_3673 */
tFblResult ApplFblStoreFingerprint( vuint8 * buffer )
{
   /* Copy Fingerprint - programmingDate and repairShopCodeOrTesterSerialNumber */
   (void)MEMCPY(blockFingerprint, buffer, kEepSizeFingerprint); /* PRQA S 0312, 0314, 0315 */ /* MD_FblKbApiOem_MemCpy */

   return kFblOk;
}

/***********************************************************************************************************************
 *  ApplFblErrorNotification
 **********************************************************************************************************************/
/*! \brief       Call-back function for diagnostic trouble code entries.
 *  \details     This function is called whenever a flash programming error occurred.
 *  \param[in]   errorType The error type
 *  \param[in]   errorCode The error code
 **********************************************************************************************************************/
void ApplFblErrorNotification( tFblErrorType errorType, tFblErrorCode errorCode )
{
#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* Parameters not used: avoid compiler warning */ /* PRQA S 3112 2 */ /* MD_MSR_DummyStmt */
   (void)errorType;
   (void)errorCode;
#endif
}


/***********************************************************************************************************************
 *  ApplFblIncProgCounts
 **********************************************************************************************************************/
/*! \brief       Increment programming counter
 *  \param[in]   blockDescriptor Block descriptor
 *  \return      kFblOk / kFblFailed
 **********************************************************************************************************************/
tFblResult ApplFblIncProgCounts( tBlockDescriptor blockDescriptor )
{
   vuint16 progCounts;
   vuint8 nvBuffer[sizeof(vuint16)];
   tFblResult status;

   vuint32 idx = blockDescriptor.blockNr;

   status = (tFblResult)ApplFblNvReadProgCounter((WRAPNV_PositionType)idx, nvBuffer);
   progCounts = (vuint16)FblMemGetInteger(sizeof(nvBuffer), nvBuffer);

   if (status == kFblOk)
   {
      /* Value is stored inverted because of erase value */
      progCounts = FblInvert16Bit(progCounts);
      progCounts++;
      progCounts = FblInvert16Bit(progCounts);

      FblMemSetInteger(sizeof(nvBuffer), progCounts, nvBuffer);
      status = (tFblResult)ApplFblNvWriteProgCounter((WRAPNV_PositionType)idx, nvBuffer);
   }

   return status;
}

/***********************************************************************************************************************
 *  ApplFblGetProgCounts
 **********************************************************************************************************************/
/*! \brief       Get programming counter
 *  \param[in]   blockDescriptor Block descriptor
 *  \param[in]   progCounts The programming counter
 *  \return      kFblOk / kFblFailed
 **********************************************************************************************************************/
tFblResult ApplFblGetProgCounts( tBlockDescriptor blockDescriptor, V_MEMRAM1 vuint16 V_MEMRAM2 V_MEMRAM3 * progCounts)
{
   tFblResult status;
   vuint8 nvBuffer[sizeof(vuint16)];
   vuint16 tempCount;

   status = (tFblResult)ApplFblNvReadProgCounter((IO_PositionType)blockDescriptor.blockNr, nvBuffer);

   tempCount = (vuint16)FblMemGetInteger(sizeof(nvBuffer), nvBuffer);
   *progCounts = FblInvert16Bit(tempCount);

   return status;
}

/***********************************************************************************************************************
 *  ApplFblIncProgAttempts
 **********************************************************************************************************************/
/*! \brief       Increment programming attempt counter
 *  \param[in]   blockDescriptor Block descriptor
 *  \return      kFblOk / kFblFailed
 **********************************************************************************************************************/
tFblResult ApplFblIncProgAttempts( tBlockDescriptor blockDescriptor )
{
   vuint16 progAttempts;
   vuint8 nvBuffer[sizeof(vuint16)];
   tFblResult status;

   vuint32 idx = blockDescriptor.blockNr;

   status = (tFblResult)ApplFblNvReadProgAttempts((WRAPNV_PositionType)idx, nvBuffer);
   progAttempts = (vuint16)FblMemGetInteger(sizeof(nvBuffer), nvBuffer);

   if (status == kFblOk)
   {
      /* Value is stored inverted because of erase value */
      progAttempts = FblInvert16Bit(progAttempts);
      progAttempts++;
      progAttempts = FblInvert16Bit(progAttempts);

      FblMemSetInteger(sizeof(nvBuffer), progAttempts, nvBuffer);
      status = (tFblResult)ApplFblNvWriteProgAttempts((WRAPNV_PositionType)idx, nvBuffer);
   }


   return status;
}

/***********************************************************************************************************************
 *  ApplFblGetProgAttempts
 **********************************************************************************************************************/
/*! \brief       Get programming attempt counter
 *  \param[in]   blockDescriptor Block descriptor
 *  \param[out]  progAttempts The returned programming attempts
 *  \return      kFblOk / kFblFailed
 **********************************************************************************************************************/
tFblResult ApplFblGetProgAttempts( tBlockDescriptor blockDescriptor, V_MEMRAM1 vuint16 V_MEMRAM2 V_MEMRAM3 * progAttempts )
{
   tFblResult status;
   vuint8 nvBuffer[sizeof(vuint16)];
   vuint16 tempCount;

   status = (tFblResult)ApplFblNvReadProgAttempts((IO_PositionType)blockDescriptor.blockNr, nvBuffer);

   tempCount = (vuint16)FblMemGetInteger(sizeof(nvBuffer), nvBuffer);
   *progAttempts = FblInvert16Bit(tempCount);

   return status;
}

/***********************************************************************************************************************
 *  ApplFblGetPromMaxProgAttempts
 **********************************************************************************************************************/
/*! \brief       Get the maximum programming attempt value
 *  \param[in]   blockNr Number of the block
 *  \return      Maximum programming attempt value
 **********************************************************************************************************************/
tFblLbtMaxProgAttempts ApplFblGetPromMaxProgAttempts(tFblLbtBlockNr blockNr)
{
   tFblLbtMaxProgAttempts maxProgAttempt;

   if (FblLbtGetBlockMaxProgAttemptsByNr(blockNr, &maxProgAttempt) != kFblOk)
   {
      /* Error reading the maximum programming attempt value, return default value */
      maxProgAttempt = 0u;
   }

   return maxProgAttempt;
}

#if defined( FBL_ENABLE_SEC_ACCESS_DELAY )
/***********************************************************************************************************************
 *  ApplFblWriteSecAccessInvalidCount
 **********************************************************************************************************************/
/*! \brief       Write number of invalid security access attempts
 *  \param[in]   invalidCount Number of the invalid security access attempts
 *  \return      kFblOk / kFblFailed
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_FblKbApi_3673 */
tFblResult ApplFblWriteSecAccessInvalidCount( V_MEMRAM1 vuint8 V_MEMRAM2 V_MEMRAM3 * invalidCount )
{
   vuint8 buffer;

   buffer = FblInvert8Bit(*invalidCount);

   return (tFblResult)ApplFblNvWriteSecAccessInvalidCount(&buffer);
}

/***********************************************************************************************************************
 *  ApplFblGetSecAccessInvalidCount
 **********************************************************************************************************************/
/*! \brief       Read number of invalid security access attempts
 *  \param[out]  invalidCount The returned number of invalid security access attempts
 *  \return      kFblOk / kFblFailed
 **********************************************************************************************************************/
tFblResult ApplFblReadSecAccessInvalidCount( V_MEMRAM1 vuint8 V_MEMRAM2 V_MEMRAM3 * invalidCount )
{
   tFblResult status;

   status = (tFblResult)ApplFblNvReadSecAccessInvalidCount(invalidCount);

   if (status == kFblOk)
   {
      *invalidCount = FblInvert8Bit(*invalidCount);
   }
   else
   {
      *invalidCount = 0u;
   }

   return status;
}
#endif /* FBL_ENABLE_SEC_ACCESS_DELAY */

#if defined( SEC_DISABLE_CRC_TOTAL )
#else
/***********************************************************************************************************************
 *  ApplFblWriteCRCTotal
 **********************************************************************************************************************/
/*! \brief       Store CRC total. String buffer used to avoid little/big endian permutation.
 *  \param[in]   blockDescriptor Block descriptor
 *  \param[in]   crcStart Start address of CRC calculation
 *  \param[in]   crcLength Length of CRC calculation
 *  \param[in]   crcValue The CRC value
 *  \return      kFblOk / kFblFailed
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_FblKbApi_3673 */
tFblResult ApplFblWriteCRCTotal( V_MEMRAM1 tBlockDescriptor V_MEMRAM2 V_MEMRAM3 * blockDescriptor, vuint32 crcStart, vuint32 crcLength, vuint32 crcValue )
{
   tFblResult status;
   vuint8 strConversionBuffer[4u];
   vuint32 idx = blockDescriptor->blockNr;

# if ( kEepSizeCRCStart  != 4u ) || \
     ( kEepSizeCRCLength != 4u ) || \
     ( kEepSizeCRCValue  != 4u )
#  error "Error in FBL_APNV.C: Configuration error (kEepSizeCRC... != 4)"
# endif

   FblMemSetInteger(kEepSizeCRCStart, crcStart, strConversionBuffer);
   status = (tFblResult)ApplFblNvWriteCRCStart((WRAPNV_PositionType)idx, strConversionBuffer);

   FblMemSetInteger(kEepSizeCRCLength, crcLength, strConversionBuffer);
   status |= (tFblResult)ApplFblNvWriteCRCLength((WRAPNV_PositionType)idx, strConversionBuffer);

   FblMemSetInteger(kEepSizeCRCValue, crcValue, strConversionBuffer);
   status |= (tFblResult)ApplFblNvWriteCRCValue((WRAPNV_PositionType)idx, strConversionBuffer);

   return status;
}
#endif /* SEC_DISABLE_CRC_TOTAL */

#if defined( FBL_APPL_ENABLE_STARTUP_DEPENDENCY_CHECK )
#else
/***********************************************************************************************************************
 *  ApplFblValidateApp
 **********************************************************************************************************************/
/*! \brief       Function is called after a successful download to validate a file.
 *  \pre         Complete file must be successfully downloaded
 *  \return      kFblOk = validation successfully performed, kFblFailed = validation failed
 **********************************************************************************************************************/
/* PRQA S 6080 1 */ /* MD_MSR_STMIF */
tFblResult ApplFblValidateApp( void )
{
   tFblResult result;
# if defined( FBL_ENABLE_PRESENCE_PATTERN )
# else
   vuint8 applValidity;
# endif /* FBL_ENABLE_PRESENCE_PATTERN */

#  if defined( FBL_ENABLE_PRESENCE_PATTERN )
#   if defined( kBlockTypeNonReadableBlockBlockCount )
#    if ( kBlockTypeNonReadableBlockBlockCount > 0x0u )
#      error "Configuration error: non-readable logical blocks cannot support presence patterns, manual adaptation required"
#    endif
#   endif /* kBlockTypeNonReadableBlockBlockCount */
   {
      /* Set presence pattern in last flashed logical block. */
      result = FblNvPatternSet(&currentValidatedBlock, kFblNvPatternId_ApplValidity);
   }
#  else /* FBL_ENABLE_PRESENCE_PATTERN */
   applValidity = kEepApplConsistent;
   result = (tFblResult)ApplFblNvWriteApplValidity(&applValidity);
#  endif /* FBL_ENABLE_PRESENCE_PATTERN */
   return result;
} /* PRQA S 6080 */ /* MD_MSR_STMIF */

/***********************************************************************************************************************
 *  ApplFblInvalidateApp
 **********************************************************************************************************************/
/*! \brief       Function is called before erasure of the application
 *  \return      kFblOk = invalidation successfully performed, kFblFailed = invalidation failed
 **********************************************************************************************************************/
tFblResult ApplFblInvalidateApp( void )
{
   tFblResult result = kFblFailed;
#  if defined( FBL_ENABLE_PRESENCE_PATTERN )
   tFblLbtBlockNr blockNr;
   tBlockDescriptor blockDescriptor;
   vuint8 device;
#  else
   vuint8 applValidity;
#  endif /* FBL_ENABLE_PRESENCE_PATTERN */

#  if defined( FBL_ENABLE_PRESENCE_PATTERN )
#   if defined( kBlockTypeNonReadableBlockBlockCount )
#    if ( kBlockTypeNonReadableBlockBlockCount > 0x0u )
#      error "Configuration error: non-readable logical blocks cannot support presence patterns, manual adaptation required"
#    endif
#   endif /* kBlockTypeNonReadableBlockBlockCount */

   /* Loop over all logical blocks to invalidate application flag */
   for (blockNr = 0u; blockNr < FblLbtGetBlockCount(); blockNr++)
   {
      result = FblLbtGetBlockDescriptorByNr(blockNr, &blockDescriptor);
      if (result == kFblOk)
      {
         result = FblMemGetDeviceByRange(blockDescriptor.blockStartAddress, blockDescriptor.blockLength, &device);
         if (result == kFblOk)
         {
#   if defined( kMioDeviceRam )
            /* Do not check the presence pattern for RAM */
            if (device != kMioDeviceRam)
#   endif
            {
               {
                  result = FblNvPatternClr(&blockDescriptor, kFblNvPatternId_ApplValidity);
               }
            }
         }
      }

      if (result != kFblOk)
      {
         /* Break loop in case of any error */
         break;
      }
   }
#  else /* FBL_ENABLE_PRESENCE_PATTERN */
   applValidity = kEepApplInconsistent;
   result = (tFblResult)ApplFblNvWriteApplValidity(&applValidity);
#  endif /* FBL_ENABLE_PRESENCE_PATTERN */

   return result;
}
#endif /* FBL_APPL_ENABLE_STARTUP_DEPENDENCY_CHECK */


# if defined( FBL_CW_ENABLE_MULTIPLE_CONNECTIONS )
/***********************************************************************************************************************
 *  ApplFblWriteDcmDslRxTesterSourceAddr
 **********************************************************************************************************************/
/*! \brief       Function to write DcmDsl Rx Tester Source Address to non-volatile memory
 *  \param[in]   buffer Pointer to byte array containing the tester source address
 *  \return      Result of write operation
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_FblKbApi_3673 */
tFblResult ApplFblWriteDcmDslRxTesterSourceAddr(vuint8* buffer)
{
   return ApplFblNvWriteDcmDslRxTesterSourceAddr(buffer);
}

/***********************************************************************************************************************
 *  ApplFblReadDcmDslRxTesterSourceAddr
 **********************************************************************************************************************/
/*! \brief       Function to read DcmDsl Rx Tester Source Address from non-volatile memory
 *  \param[out]  buffer Pointer to byte array containing the tester source address
 *  \return      Result of read operation
 **********************************************************************************************************************/
tFblResult ApplFblReadDcmDslRxTesterSourceAddr(vuint8* buffer)
{
   return ApplFblNvReadDcmDslRxTesterSourceAddr(buffer);
}
# endif


#if defined( FBL_MEM_ENABLE_STREAM_OUTPUT )
/**********************************************************************************************************************
*  ApplFblErasePatternArea
**********************************************************************************************************************/
/*! \brief       Function is called by FblDiagMainHandlerRequestDownload to clear the pattern area
 *  \return      kFblOk = successfully cleared , kFblFailed = clearing failed
**********************************************************************************************************************/
tFblResult ApplFblErasePatternArea(const V_MEMRAM1 tBlockDescriptor V_MEMRAM2 V_MEMRAM3 * logicalBlockDescriptor)
{
   tFblResult     result;

#if defined( FBL_ENABLE_PRESENCE_PATTERN )
   tFblAddress    patternAddress;
#endif /* FBL_ENABLE_PRESENCE_PATTERN */


#if defined( FBL_ENABLE_PRESENCE_PATTERN ) 
   tFblLength     patternLength;
   tFblLength     macStructLength;
   tFblLength     dataLength;

   dataLength = 0u;
   patternLength = 0u;
   macStructLength = 0u;
#endif /* FBL_ENABLE_PRESENCE_PATTERN */

   result = kFblOk;

#if defined( FBL_ENABLE_PRESENCE_PATTERN )
   /* Calculate location of lowermost pattern */
   memSegment = FblNvPatternGetBaseAddr(logicalBlockDescriptor->blockNr, (tFblNvPatternId)(kFblNvPatternId_Last - 1u), &patternAddress, &patternLength);

   if (memSegment >= 0)
   {
      /* Get real pattern length -> may be different from returned value in some cases (i.e. multiple patterns) */
      if(FlashBlock[memSegment].end >= patternAddress)
      {
         patternLength = FlashBlock[memSegment].end - patternAddress + 1u;
      }
      else
      {
         result = kFblFailed;
      }
   }
   else
   {
      result = kFblFailed;
   }
#endif /* FBL_ENABLE_PRESENCE_PATTERN */


#if defined( FBL_ENABLE_PRESENCE_PATTERN ) 
   /* Proceed if valid memory segment has been found */
   if (result == kFblOk)
   {
      /* Send a RCRRP to avoid a timeout */
      DiagExRCRResponsePending(kForceSendRpIfNotInProgress);

      /* Complete flash block excluding pattern and MAC area (if existing) has to be backed up */
      dataLength = ((FlashBlock[memSegment].end + 1u) - FlashBlock[memSegment].begin) - (patternLength + macStructLength);
# if defined( FBL_BSPATCH_ENABLE_RAM_BUFFER )
      /* save flash block content */
      FblReadProm(FlashBlock[memSegment].begin, fblBspatchNewImageBuffer, dataLength);

      /* erase flash block */
      FblMemEraseRegion(FlashBlock[memSegment].begin, FlashBlock[memSegment].end - FlashBlock[memSegment].begin + 1u);

      FblMemProgramBuffer(FlashBlock[memSegment].begin, &dataLength, fblBspatchNewImageBuffer);
# else
#  error "This default implementation requires the Bspatch module with temporary RAM buffer, please adapt this example using an own buffer"
# endif /* FBL_BSPATCH_ENABLE_RAM_BUFFER */
      result = kFblOk;
   }
#endif /* FBL_ENABLE_PRESENCE_PATTERN */
   return result;
}
#endif /* FBL_MEM_ENABLE_STREAM_OUTPUT */

/* Module specific MISRA deviations:
   MD_FblKbApi_2741:
      Reason:    This 'if' controlling expression is a constant expression because its value is hardcoded.
      Risk:       Not changeable through runtime.
      Prevention: Dont use magic numbers.

   MD_FblKbApi_2889:
      Reason:     Multiple return paths are used to reduce code complexity, increase readability and reducing nesting level.
      Risk:       Some operations intended to conclude the function (e.g. states cleaning) can be unintentionally jumped.
      Prevention: Code inspection and runtime tests.

   MD_FblKbApi_2991_2995:
      Reason:     The result of the comparison/logical operation is dependent on the configuration and it is not always true.
      Risk:       No identifiable risk.
      Prevention: No prevention required.

   MD_FblKbApi_3201:
      Reason:     Configuration or platform specific dependent unreachable code.
      Risk:       Incorrect behavior depend on settings.
      Prevention: No prevention required.

   MD_FblKbApi_3206:
      Reason:     Function is part of the bootloader API and the modification or not of the parameter is dependent on
                  configuration and/or platform.
      Risk:       No identifiable risk.
      Prevention: No prevention required.

   MD_FblKbApi_3218_FileScopeStatic:
      Reason:     Configuration constants/tables are kept at a central location for a better overview and maintenance.
      Risk:       Unintended use of object in wrong scope.
      Prevention: Architectural pattern supports prevention of incorrect use of objects in wrong context.
                  Code inspection focus on correct use of objects.

   MD_FblKbApi_3325:
      Reason:     This control expression is always true or false depend on configuration aspect and used platform specific
                  implementation.
      Risk:       Incorrect behavior depend on settings.
      Prevention: No prevention required.

   MD_FblKbApi_3353:
      Reason:     Variable is set in an other function via call-by-reference.
      Risk:       No identifiable risk.
      Prevention: No prevention required.

   MD_FblKbApi_3673:
      Reason:     Function is part of the bootloader API which provides the possibility to influence the bootloader behavior
                  by modifying the output parameters. The provided default implementation of the function doesn't
                  necessarily make use of all available parameters.
      Risk:       The parameter value might be changed unintentionally, thus causing malfunction in the calling instance.
      Prevention: Provide detailed information about the API and its usage in the user documentation.

   MD_FblKbApi_4558:
     Reason:      Value is used in a boolean expression.
     Risk:        The Boolean logic does not behave as expected.
     Prevention:  No prevention required.


   MD_FblKbApiOem_0306:
      Reason:     Address conversion between integer values and pointers is required to allow for hardware independent
                  configuration and address range checks.
      Risk:       The size of integer required to hold the result of a pointer cast is implementation-defined.
      Prevention: The size of the respective integer data type which holds the address value is adapted on a hardware
                  specific basis.

   MD_FblKbApiOem_2741_4558:
      Reason:     The assertion macro has been designed to have an invariant condition and not using bool variable.
      Risk:       No identifiable risk. Assertion macro are disabled in production code.
      Prevention: No prevention required.

   MD_FblKbApiOem_2880_2992_2996:
      Reason:     These values might be modified or read from Flash.
      Risk:       No risk.
      Prevention: No prevention required.

   MD_FblKbApiOem_2982:
      Reason:     This value is set preemptively and may not be modified again before usage depending on the configuration.
      Risk:       No identifiable risk.
      Prevention: No prevention required.

   MD_FblKbApiOem_2987_EmptyFunction:
      Reason:     Function is empty depending on configuration aspects and platform specific implementation.
      Risk:       Function implementation missing.
      Prevention: Code inspection and test in the component test.

   MD_FblKbApiOem_2985_2991_2995_2996:
      Reason:     Code is shared between different configurations. In other configurations,
                  the result of the comparison/logical operation is not invariant.
      Risk:       No identifiable risk.
      Prevention: No prevention required.

   MD_FblKbApiOem_3199:
      Reason:     Value assignment is done but assigned value is not used in all configurations.
      Risk:       Adds an possibly unused assignment which could result in a compiler warning.
      Prevention: Ignore compiler warning if observed.

   MD_FblKbApiOem_3218_FileScopeStatic:
      Reason:     Configuration constants/tables are kept at a central location for a better overview and maintenance.
      Risk:       Unintended use of object in wrong scope.
      Prevention: Architectural pattern supports prevention of incorrect use of objects in wrong context.
                  Code inspection focus on correct use of objects.

   MD_FblKbApiOem_3315:
      Reason:     Example code shows how the function can be implemented and is therefore left empty.
      Risk:       No identifiable risk.
      Prevention: No prevention required.

   MD_FblKbApiOem_3425:
      Reason:     The WrapNv call uses the ternary operator to remap the return value of IO_E_OK to kFblOk. As both of
                  them are defined to the value zero the remapping has no side affects.
      Risk:       No identifiable risk.
      Prevention: No prevention required.

   MD_FblKbApiOem_4342_4521_ConfigurationEnumLengthCast:
      Reason:     The last element of an enum is used to determine the number of entries. This is required for
                  configurable code. The enum must have more than one entry - therefore it is always possible to
                  determine the last (length - 1) one.
      Risk:       No identifiable risk.
      Prevention: No prevention required.

   MD_FblKbApiOem_MemCpy:
      Reason:     The copy function have a void pointer as a function parameter.
      Risk:       No risk, because the underlying vuint8 pointer type is known.
      Prevention: No prevention necessary.

   MD_FblKbApiOem_2986:
      Reason:     The operation is redundant because the default definition of the initial value is 0. If the external
                  definition was redefined information would get lost.
      Risk:       No identifiable risk.
      Prevention: No prevention required.

   MD_FblKbApiFrameNV_2983:
      Reason:     Value assignment is done but assigned value is not used in all configurations.
      Risk:       Adds an possibly unused assignment which could result in a compiler warning.
      Prevention: Ignore compiler warning if observed.

*/

/***********************************************************************************************************************
 *  FBL_APNV.C
 **********************************************************************************************************************/
