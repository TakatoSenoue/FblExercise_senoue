/* Kernbauer Version: 1.12 Konfiguration: FBL Erzeugungsgangnummer: 1 */

/***********************************************************************************************************************
 *  FILE DESCRIPTION
 *  ------------------------------------------------------------------------------------------------------------------*/
/** \file
 *  \brief         Application dependent routines
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
 *  Version    Date        Author  Change Id        Description
 *  --------------------------------------------------------------------------------------------------------------------
 *  05.00.00   2018-03-13  visach  ESCAN00098699    Support VAG 80126 2.5
 *  05.00.01   2018-03-13  visach  -                ALM versions inconsistent
 *  05.01.00   2018-09-19  visach  ESCAN00100791    No changes
 *  05.02.00   2019-06-26  vistbe  ESCAN00103512    Added support for stream output
 *  05.03.00   2021-04-01  vishor  FBL-2523         Support of the new FblMio
 *  05.04.00   2021-11-10  visjdn  FBL-3077         Support of embedded checksum/signature
 *  05.05.00   2022-06-29  vishor  FBL-5273         Update to specification set 2.11
 *  05.06.00   2024-10-15  virjjn  FBL-9413         Support Download to inactive partition
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

#define FBL_AP_SOURCE
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


#if ( FBLKBAPI_UDS1_VERSION != 0x0709u ) || \
    ( FBLKBAPI_UDS1_RELEASE_VERSION != 0x01u )
# error "Error in fbl_apXX.c: Source and Header file are inconsistent!"
#endif

#if ( FBLKBAPI_UDS1_VERSION != _FBLKBAPI_OEM_VERSION ) || \
    ( FBLKBAPI_UDS1_RELEASE_VERSION != _FBLKBAPI_OEM_RELEASE_VERSION )
# error "Error in fbl_apXX.c: Source and v_ver.h are inconsistent!"
#endif

#if ( FBLKBAPI_BRS_VERSION != 0x0203u ) || \
    ( FBLKBAPI_BRS_RELEASE_VERSION != 0x00u )
# error "Error in fbl_apxx.c: Source and header file are inconsistent!"
#endif
#if ( FBLKBAPI_BRS_VERSION != _FBLKBAPI_HW_VERSION ) || \
    ( FBLKBAPI_BRS_RELEASE_VERSION != _FBLKBAPI_HW_RELEASE_VERSION )
# error "Error in fbl_apxx.c: Source and v_ver.h are inconsistent!"
#endif
#if ( FBLKBAPI_VERSION != 0x0214u ) || \
    ( FBLKBAPI_RELEASE_VERSION != 0x04u )
# error "Error in FBL_APxx.C: Source and header file are inconsistent!"
#endif
#if ( FBLKBAPI_VERSION != _FBLKBAPI_VERSION ) || \
    ( FBLKBAPI_RELEASE_VERSION != _FBLKBAPI_RELEASE_VERSION )
# error "Error in FBL_APxx.C: Source and V_VER.H are inconsistent!"
#endif

#if ( FBLKBAPI_FRAME_UDS1_VERSION != 0x0506u ) || \
    ( FBLKBAPI_FRAME_UDS1_RELEASE_VERSION != 0x00u )
# error "Error in FBL_AP.C: Source and header file are inconsistent!"
#endif

#if ( FBLKBAPI_FRAME_UDS1_VERSION != _FBLKBAPI_FRAME_OEM_VERSION )
# error "Error in fbl_apxx.c: Source and v_ver.h are inconsistent!"
#endif
#if ( FBLKBAPI_FRAME_UDS1_RELEASE_VERSION != _FBLKBAPI_FRAME_OEM_RELEASE_VERSION )
# error "Error in fbl_apxx.c: Source and v_ver.h are inconsistent!"
#endif

/***********************************************************************************************************************
 *  DEFINES
 **********************************************************************************************************************/

#if defined( FBL_ENABLE_VECTOR_HW ) && defined( FBL_ENABLE_VECTOR_HW_SEND_MESSAGE )
/* Defines for dummy message in ApplFblTask */
# if defined( FBLWRAPPERCOM_CAN_VERSION ) || \
     defined( FBLCW_CAN_BUSTYPEOFDCMDSLCONNECTIONINFO )
#  define kFblBrsApplTaskMsgBufferId     0x30uL
#  define kFblBrsApplTaskMsgBufferLength 8u
# endif /* FBLWRAPPERCOM_CAN_VERSION || FBLCW_CAN_BUSTYPEOFDCMDSLCONNECTIONINFO */
#endif /* FBL_ENABLE_VECTOR_HW && FBL_ENABLE_VECTOR_HW_SEND_MESSAGE */
/* Security seed response status defines */
#define kSeedAlreadyRequested             0x00u    /**< Seed sent out, but no key received */
#define kNewSeedRequest                   0x01u    /**< No seed sent out, new seed should be sent */

/* Configure Seed/Key implementation in callback file */
# if defined( SEC_BYTE_ARRAY_SEED )
#  define FBL_APPL_ENABLE_SEC_BYTE_ARRAY_SEED
# endif /* SEC_BYTE_ARRAY_SEED */
# if defined( SEC_WORD_ARRAY_SEED )
#  define FBL_APPL_ENABLE_SEC_WORD_ARRAY_SEED
# endif /* SEC_WORD_ARRAY_SEED */
# if defined( SEC_BYTE_ARRAY_KEY )
#  define FBL_APPL_ENABLE_SEC_BYTE_ARRAY_KEY
# endif /* SEC_BYTE_ARRAY_KEY */

# if defined( FBL_ENABLE_DATA_PROCESSING )
/* Configuration check */
#  if defined( FBL_ENABLE_ENCRYPTION_MODE )
#   if defined( SEC_ENABLE_DECRYPTION )
#   else
#    error "FBL_ENABLE_ENCRYPTION_MODE needs SEC_ENABLE_DECRYPTION to be configured."
#   endif /* SEC_ENABLE_DECRYPTION */
#  endif /* FBL_ENABLE_ENCRYPTION_MODE */
# endif /* FBL_ENABLE_DATA_PROCESSING */

# if defined( FBL_ENABLE_DATA_PROCESSING )
#  if defined( FBL_ENABLE_ENCRYPTION_MODE )
/* Handling of AES initialization vector
 * Possible values:
 * SEC_DECRYPTION_MODE_AES_128_PKCS_CBC_IV - Explicit IV included in data/ implicit constant IV
 * SEC_DECRYPTION_MODE_AES_128_PKCS_CBC - Implicit IV of 0 used */
#   define SEC_MODE_AES  SEC_DECRYPTION_MODE_AES_128_PKCS_CBC_IV

/* Origin of IV: Explicitly included in data or configured in implicit constant (decAesIv) */
#   define SEC_MODE_AES_IV_DATA        0u
#   define SEC_MODE_AES_IV_CONSTANT    1u
#    define SEC_MODE_AES_IV            SEC_MODE_AES_IV_DATA
#  endif /* FBL_ENABLE_ENCRYPTION_MODE */
# endif /* FBL_ENABLE_DATA_PROCESSING */

/***********************************************************************************************************************
 *  GLOBAL DATA
 **********************************************************************************************************************/

#if defined( FBL_ENABLE_MULTIPLE_NODES ) || \
    defined( FBL_CW_ENABLE_MULTIPLE_NODES )
V_MEMRAM0 V_MEMRAM1 vuint8 V_MEMRAM2 fblEcuHandle;
#endif

/***********************************************************************************************************************
 *  LOCAL DATA
 **********************************************************************************************************************/

#if defined( FBL_APPL_ENABLE_SEC_BYTE_ARRAY_SEED ) || \
    defined( FBL_APPL_ENABLE_SEC_WORD_ARRAY_SEED )
V_MEMRAM0 static V_MEMRAM1 SecM_WordType V_MEMRAM2 secSeedInput[2u]; /**< Initial seed value */
#else
V_MEMRAM0 static V_MEMRAM1 SecM_SeedType V_MEMRAM2 secSeedInput;     /**< Initial seed value */
#endif /* FBL_APPL_ENABLE_SEC_*_ARRAY_SEED */
V_MEMRAM0 static V_MEMRAM1 SecM_SeedType V_MEMRAM2 seed;             /**< Current seed value */
V_MEMRAM0 static V_MEMRAM1 vuint8 V_MEMRAM2 securitySeedResponse;    /**< Seed response status */


# if defined( FBL_ENABLE_DATA_PROCESSING )
#  if defined( FBL_ENABLE_ENCRYPTION_MODE )
#   if ( SEC_MODE_AES_IV == SEC_MODE_AES_IV_CONSTANT )
/* PRQA S 3218 1 */  /* MD_FblKbApiOem_3218_FileScopeStatic */
V_MEMROM0 static V_MEMROM1 vuint8 V_MEMROM2 decAesIv[SEC_DECRYPTION_BLOCK_SIZE_AES_PKCS_CBC] =
{
   0xB9u, 0x28u, 0xA8u, 0xAFu, 0x36u, 0x3Eu, 0xFEu, 0x24u, 0xB0u, 0x85u, 0x46u, 0x37u, 0xFDu, 0x4Fu, 0x1Au, 0x62u
};
#   endif /* SEC_MODE_AES_IV == SEC_MODE_AES_IV_CONSTANT */

V_MEMRAM0 static V_MEMRAM1 tFblResult V_MEMRAM2 decInitializeState;
V_MEMRAM0 static V_MEMRAM1 tFblResult V_MEMRAM2 decFinalizeState;
#   if defined( FBL_ENABLE_COMPRESSION_MODE )
/* Buffer for temporary output */
V_MEMRAM0 static V_MEMRAM1 vuint8 V_MEMRAM2 decTmpOutBuffer[FBL_LENGTH_ALIGN_ROUND_UP(FBL_MEM_PROC_BUFFER_SIZE, SEC_DECRYPTION_BLOCK_SIZE_AES_PKCS_CBC)];
/* Temporary output buffer usage */
V_MEMRAM0 static V_MEMRAM1 vuint16 V_MEMRAM2 decTmpOutFree;
V_MEMRAM0 static V_MEMRAM1 vuint16 V_MEMRAM2 decTmpOutUsed;
#   endif /* FBL_ENABLE_COMPRESSION_MODE */
#  endif /* FBL_ENABLE_ENCRYPTION_MODE */
# endif /* FBL_ENABLE_DATA_PROCESSING */


/***********************************************************************************************************************
 *  EXTERNAL DATA
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *   GLOBAL FUNCTIONS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  ApplFblInit
 **********************************************************************************************************************/
/*! \brief       Function is called before any other FBL initialization
 **********************************************************************************************************************/
void ApplFblInit( void )
{
   vuint8 dummyNull[kEepSizeFingerprint];
   vuintx index;

#if defined( BRS_FBL_LEGACY )
# if defined( BRSHW_PREINIT_AVAILABLE )
#  if !defined( BRS_ENABLE_PREFER_PLL_WATCHDOG_INIT )
   /* HW specific pre-initialization. */
   BrsHwPreInitPowerOn();
#  endif
# endif /* BRSHW_PREINIT_AVAILABLE */

# if defined( BRS_ENABLE_WATCHDOG )
#  if !defined( BRS_ENABLE_PREFER_PLL_WATCHDOG_INIT )
   /* Disable Watchdog */
   BrsHwWatchdogInitPowerOn();
#  endif
# endif /* BRS_ENABLE_WATCHDOG */

# if defined( BRS_ENABLE_PLLCLOCKS )
#  if !defined( BRS_ENABLE_PREFER_PLL_WATCHDOG_INIT )
   /* Initialize the PLLs. */
   BrsHwPllInitPowerOn();
#  endif
# endif /* BRS_ENABLE_PLLCLOCKS */

# if defined( BRSHW_DISABLE_ECC_AVAILABLE )
   /* Disable Flash ECC error reporting. */
   BrsHwDisableEccErrorReporting();
# endif /* BRSHW_DISABLE_ECC_AVAILABLE */

# if defined( FBL_ENABLE_PRE_TIMERINIT )
   /* Timer is stopped by mode switch and has to be re-initialized. */
   FblTimerInit();
# endif /* FBL_ENABLE_PRE_TIMERINIT */

# if defined( FBL_ENABLE_VECTOR_HW ) && \
     defined( BRS_ENABLE_PORT )
   /* Perform Port configuration. */
   BrsHwPortInitPowerOn();
# endif /* FBL_ENABLE_VECTOR_HW && BRS_ENABLE_PORT */
#endif /* BRS_FBL_LEGACY */





   /* Initialize NV-Driver */
   WrapNv_Init();

   /* Init Fingerprint buffer */
   for (index = 0u; index < kEepSizeFingerprint; index++)
   {
      dummyNull[index] = 0x00u;
   }
   (void)ApplFblStoreFingerprint(dummyNull);
   /* Init Seed response status */
   securitySeedResponse = kNewSeedRequest;

}

/***********************************************************************************************************************
 *  ApplFblStartup
 **********************************************************************************************************************/
/*! \brief       Bootloader initialization callback
 *  \details     This function is called during the Bootloader initialization if the application software is
 *               not started. It can be used to perform initializations which are not needed if the application
 *               software is started. Please note that the function is called several times with different
 *               initposition values. Timer and hardware can be accessed in post-init phase only.
 *  \param[in]   initposition Initialization state of Bootloader.
 **********************************************************************************************************************/
/* PRQA S 6010, 6030 1 */ /* MD_MSR_STPTH, MD_MSR_STCYC */
void ApplFblStartup( vuint8 initposition )
{
   switch (initposition)
   {
      case (kFblInitPreCallback | kFblInitBaseInitialization):
      {
         break;
      }
      case (kFblInitPostCallback | kFblInitBaseInitialization):
      {
         /* Basic hardware initialization */
         ApplFblInit();
         break;
      }
      case (kFblInitPreCallback | kFblInitFblCommunication):
      {
         break;
      }
      case (kFblInitPostCallback | kFblInitFblCommunication):
      {
         break;
      }
      case (kFblInitPreCallback | kFblInitFblFinalize):
      {
         break;
      }
      case (kFblInitPostCallback | kFblInitFblFinalize):
      {

         /* Only case where ResponseAfterReset already sent out (if enabled) */
         break;
      }
      default:
      {
         assertFblInternal(0u, kFblSysAssertParameterOutOfRange);  /* PRQA S 2741, 4558 */ /* MD_FblKbApiOem_2741_4558 */
         break;  /* PRQA S 2880 */ /* MD_MSR_Unreachable */
      }
   }
}

#if defined( FBL_MIO_ENABLE_HOOKS )
/***********************************************************************************************************************
 *  ApplFblPreMemDriver
 **********************************************************************************************************************/
/*! \brief        Function is called before the memory driver is executed.
 *  \param[in]    device   Memory device, which is going to be used.
 *  \param[in]    function Function of the memory device, which is going to be called.
 **********************************************************************************************************************/
void ApplFblPreMemDriver( vuint8 device, vuint8 function )
{

#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* Parameters not used: avoid compiler warning */
   (void)device;  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
   (void)function;  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
#endif

}
#endif /* FBL_MIO_ENABLE_HOOKS */

#if defined( FBL_MIO_ENABLE_HOOKS )
/***********************************************************************************************************************
 *  ApplFblPostMemDriver
 **********************************************************************************************************************/
/*! \brief        Function is called after the memory driver has finished the operation.
 *  \param[in]    device   Memory device, which is going to be used.
 *  \param[in]    function Function of the memory device, which is going to be called.
 **********************************************************************************************************************/
void ApplFblPostMemDriver( vuint8 device, vuint8 function )
{

#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* Parameters not used: avoid compiler warning */
   (void)device;  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
   (void)function;  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
#endif

}
#endif /* FBL_MIO_ENABLE_HOOKS */

/***********************************************************************************************************************
 *  ApplFblCheckProgConditions
 **********************************************************************************************************************/
/*! \brief       This function is called after receiving the service request sessionControl ProgrammingSession to check
 *               the programming conditions like reprogramming counter, ambient temperature, programming voltage, etc.
 *  \return      If all conditions are correct, the function returns kFblOk, otherwise kFblFailed.
 **********************************************************************************************************************/
tFblResult ApplFblCheckProgConditions( void )
{
   tFblResult result = kFblOk;
#  if defined( FBL_DIAG_ENABLE_CHECK_PROGRAMMING_PRECONDITIONS )
   vuint16 diagRespDataLen = 3u;
#  endif /* FBL_DIAG_ENABLE_CHECK_PROGRAMMING_PRECONDITIONS */

   /* Example: Test if programming preconditions are fulfilled */
   /*
   if (preCondition != OK)
   {
      DiagBuffer[diagRespDataLen + 1] = 0x01;
      diagRespDataLen++;
      result = kFblFailed;
   }
   */

#  if defined( FBL_DIAG_ENABLE_CHECK_PROGRAMMING_PRECONDITIONS )
   /* Transmit response message:*/
   DiagProcessingDone(diagRespDataLen);
#  endif /* FBL_DIAG_ENABLE_CHECK_PROGRAMMING_PRECONDITIONS */
   return result;
}

/***********************************************************************************************************************
 *  ApplFblCheckConditions
 **********************************************************************************************************************/
/*! \brief         Check conditions for diagnostic services
 *  \details       This function is called for each diagnostic service.
 *  \param[in,out] pbDiagData Pointer to diagnostic data buffer
 *  \param[in]     diagReqDataLen The request data length
 *  \return        kFblOk or kFblFailed
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_FblKbApi_3673 */
tFblResult ApplFblCheckConditions( vuint8 * pbDiagData, tTpDataType diagReqDataLen )
{
#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* PRQA S 3112 2 */ /* MD_MSR_DummyStmt */
   (void)pbDiagData;
   (void)diagReqDataLen;
#endif

   /* Parse Service IDs */

   /*
   switch (diagServiceCurrent)
   {
      case kDiagSidDiagnosticSessionControl:
      {
         if (...)
         {
            DiagNRCConditionsNotCorrect();
            return kFblFailed;
         }

         break;
      }
      case kDiagSidEcuReset:
      {
         break;
      }
      case kDiagSidReadDataByIdentifier:
      {
         break;
      }
      case kDiagSidSecurityAccess:
      {
         break;
      }
      case kDiagSidCommunicationControl:
      {
         break;
      }
      case kDiagSidWriteDataByIdentifier:
      {
         break;
      }
      case kDiagSidRoutineControl:
      {
         break;
      }
      case kDiagSidRequestDownload:
      {
         break;
      }
      case kDiagSidTransferData:
      {
         break;
      }
      case kDiagSidRequestTransferExit:
      {
         break;
      }
      case kDiagSidTesterPresent:
      {
         break;
      }
      case kDiagSidControlDTCSetting:
      {
         break;
      }
      default:
      {
         break;
      }
   }
   */

   return kFblOk;
}

/***********************************************************************************************************************
 *  ApplFblCheckProgDependencies
 **********************************************************************************************************************/
/*! \brief       Check if programming dependencies are given
 *  \return      Status of programming dependencies (OEM specific)
 **********************************************************************************************************************/
/* PRQA S 6010, 6030, 6050, 6080 1 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */
vuint8 ApplFblCheckProgDependencies( void )
{
   vuint8 result;
#if defined( FBL_ENABLE_PRESENCE_PATTERN )
   vuintx i;
#endif
   tBlockDescriptor iterBlock;
   tFblLbtBlockFilter blockFilter;
   vuint8 validityFlags[kEepSizeValidityFlags];

   /* Initialize variables */
   result = kDiagCheckCompatibilityOk;

   /* Check if LBT is valid */
   if (!IsLogicalBlockTableValid())
   {
      result = kDiagCheckCompatibilityFailed;
   }
   else
   {
      /* Mandatory logical blocks must be valid. Otherwise, they cannot be consistent. */
      /* Read validity flags */
#if defined( FBL_ENABLE_PRESENCE_PATTERN )
# if defined( kBlockTypeNonReadableBlockBlockCount )
#  if ( kBlockTypeNonReadableBlockBlockCount > 0x0u )
#    error "Configuration error: non-readable logical blocks cannot support presence patterns, manual adaptation required"
#  endif
# endif /* kBlockTypeNonReadableBlockBlockCount */
      for (i = 0u; i < sizeof(validityFlags); i++)
      {
         validityFlags[i] = 0xFFu;
      }
      FblLbtBlockFilterInit(&blockFilter);
      iterBlock = FblLbtBlockFirst(&blockFilter);
      while (FblLbtBlockDone() == FALSE)
      {
         /* Check for blocks with stored validity flags */
         {
            if (FblNvPatternGet(&iterBlock, kFblNvPatternId_BlockValidity) == kFblOk)
            {
               /* If present, clear the validity flag (inverse logic!!) */
               validityFlags[(iterBlock.blockNr >> 3u)] &= FblInvert8Bit(1u << (iterBlock.blockNr & 7u));
            }
         }

         /* Prepare next cycle */
         iterBlock = FblLbtBlockNext();
      }
#else
      if (ApplFblNvReadValidityFlags(validityFlags) != kFblOk)
      {
         result = kDiagCheckCompatibilityFailed;   /* General failure - validity flags couldn't be read */
      }
#endif
      if (result == kDiagCheckCompatibilityOk)  /* PRQA S 2991, 2995 */ /* MD_FblKbApiOem_2985_2991_2995_2996 */
      {
         FblLbtBlockFilterInit(&blockFilter);
         FblLbtBlockFilterSetMandatoryType(&blockFilter, TRUE);
         iterBlock = FblLbtBlockFirst(&blockFilter);
         while ((FblLbtBlockDone() == FALSE) && (result == kDiagCheckCompatibilityOk))
         {
            /* A set bit means that the block is not present */
            if ((validityFlags[(iterBlock.blockNr >> 3u)] & (1u << (iterBlock.blockNr & 7u))) != 0u)
            {
               result = kDiagCheckCompatibilityBlockMissing;
            }

            /* Prepare next cycle */
            iterBlock = FblLbtBlockNext();
         }
      }
   }

   /* If required, additional checks can be added here
      (e.g. SW-HW, version number, ... ) */
   /* Failures can be indicated using the following error codes:
      kDiagCheckCompatibilitySwHw
      kDiagCheckCompatibilitySwSw
   */


#if defined( FBL_APPL_ENABLE_STARTUP_DEPENDENCY_CHECK )
#else
   {
      /* Compatibility check done - write application valid flag now */
      if (result == kDiagCheckCompatibilityOk)
      {
         if (ApplFblValidateApp() != kFblOk)
         {
            result = kDiagCheckCompatibilityFailed;   /* General failure - application valid flag couldn't be written */
         }
      }
   }
#endif /* FBL_APPL_ENABLE_STARTUP_DEPENDENCY_CHECK */

   return result;
   /* PRQA S 6010, 6030, 6050 1 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

/***********************************************************************************************************************
 *  ApplTrcvrNormalMode
 **********************************************************************************************************************/
/*! \brief       Activate transceiver if necessary (e.g. pin configuration ENABLE = 1, _STDBY = 1)
 **********************************************************************************************************************/
void ApplTrcvrNormalMode( void )
{
}

/***********************************************************************************************************************
 *  ApplTrcvrSleepMode
 **********************************************************************************************************************/
/*! \brief       Turn off the transceiver to enter sleep mode (e.g. pin configuration ENABLE = 1, _STDBY = 0)
 **********************************************************************************************************************/
void ApplTrcvrSleepMode( void )
{
}

/***********************************************************************************************************************
 *  ApplFblSetVfp
 **********************************************************************************************************************/
/*! \brief       Function is called when the FBL enters programming mode.
 *  \details     Port bits have to be set so that the required programming voltage is available.
 **********************************************************************************************************************/
void ApplFblSetVfp( void )
{
   /* Set flash programming voltage */
#if defined( BRSHW_VOLTAGE_FOR_FLASH_PROGRAMMING_AVAILABLE )
   BrsHwSetVfp();
#endif
}

/***********************************************************************************************************************
 *  ApplFblResetVfp
 **********************************************************************************************************************/
/*! \brief       This function is called when the programming is done.
 **********************************************************************************************************************/
void ApplFblResetVfp( void )
{
   /* Reset flash programming voltage */
#if defined( BRSHW_VOLTAGE_FOR_FLASH_PROGRAMMING_AVAILABLE )
   BrsHwResetVfp();
#endif
}

/***********************************************************************************************************************
 *  ApplFblReset
 **********************************************************************************************************************/
/*! \brief       This function performs a reset.
 *  \details     The function will wait until the reset is performed. Please note: This function will
 *               never return to the calling code.
 **********************************************************************************************************************/
void ApplFblReset( void )
{
   /* Reset ECU */
   BrsHwSoftwareResetECU();
}

# define FBLAP_RAMCODE_START_SEC_CODE
# include "MemMap.h"   /* PRQA S 5087 */ /* MD_MSR_MemMap */
/***********************************************************************************************************************
 *  ApplFblSecuritySeedInit
 **********************************************************************************************************************/
/*! \brief       Initialize seed values.
 *  \return      Status of seed initialization
 **********************************************************************************************************************/
vuint8 ApplFblSecuritySeedInit( void )
{
   /* Initialize seed values */
#if defined( FBL_APPL_ENABLE_SEC_BYTE_ARRAY_SEED ) || \
    defined( FBL_APPL_ENABLE_SEC_WORD_ARRAY_SEED )
   secSeedInput[1u] += secSeedInput[0u];
   secSeedInput[0u]  = FblGetTimerValue();
#else
   secSeedInput.seedY += secSeedInput.seedX;
   secSeedInput.seedX = FblGetTimerValue();
#endif /* FBL_APPL_ENABLE_SEC_*_ARRAY_SEED */

   return kFblOk;
}
# define FBLAP_RAMCODE_STOP_SEC_CODE
# include "MemMap.h"   /* PRQA S 5087 */ /* MD_MSR_MemMap */

/***********************************************************************************************************************
 *  ApplFblSecuritySeed
 **********************************************************************************************************************/
/*! \brief       This function is called when the tester requests the security seed.
 *  \return      Status of seed generation
 **********************************************************************************************************************/
/* PRQA S 6010, 6030, 6080 1 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STMIF */
vuint8 ApplFblSecuritySeed( void )
{
   vuint8 result;
#if defined( FBL_APPL_ENABLE_SEC_WORD_ARRAY_SEED )
   vuintx i, j;
#endif /* FBL_APPL_ENABLE_SEC_WORD_ARRAY_SEED */

   result = kFblOk;

   /* Last seed is repeated if it was already sent to tester */
   if (securitySeedResponse != kSeedAlreadyRequested)
   {
#if defined( FBL_APPL_ENABLE_SEC_BYTE_ARRAY_SEED ) || \
    defined( FBL_APPL_ENABLE_SEC_WORD_ARRAY_SEED )
      /* Ensure that seed has been initialized */
      while (0u == secSeedInput[1u])
      {
         (void)ApplFblSecuritySeedInit();
      }

      /* Set initial seed value for random number generator */
# if defined( FBL_APPL_ENABLE_SEC_BYTE_ARRAY_SEED )
#  if ( SEC_WORD_TYPE_SIZE > SEC_SEED_LENGTH )
      FblMemSetInteger(SEC_SEED_LENGTH, secSeedInput[1u], seed);
#  else
      FblMemSetInteger(SEC_WORD_TYPE_SIZE, secSeedInput[1u], seed);
#  endif
# else
      seed[0u] = secSeedInput[1u];
# endif /* FBL_APPL_ENABLE_SEC_BYTE_ARRAY_SEED */

      /* Generate seed */
      if (SECM_OK == SecM_GenerateSeed(&seed))
      {
         /* Refresh seed initializer with "randomized" value from generator */
# if defined( FBL_APPL_ENABLE_SEC_BYTE_ARRAY_SEED )
#  if ( SEC_WORD_TYPE_SIZE > SEC_SEED_LENGTH )
         secSeedInput[0u] += FblMemGetInteger(SEC_SEED_LENGTH, seed);
#  else
         secSeedInput[0u] += FblMemGetInteger(SEC_WORD_TYPE_SIZE, seed);
#  endif
# else
         secSeedInput[0u] += seed[0u];
# endif /* FBL_APPL_ENABLE_SEC_BYTE_ARRAY_SEED */
      }
      else
      {
         result = kFblFailed;
      }
#else
      /* Ensure that seed has been initialized */
      while ((0u == secSeedInput.seedX) || (0u == secSeedInput.seedY))
      {
         (void)ApplFblSecuritySeedInit();
      }

      /* Generate seed */
      if (SECM_OK == SecM_GenerateSeed(&secSeedInput))
      {
         /* Save last seed */
         seed = secSeedInput;
      }
      else
      {
         result = kFblFailed;
      }
#endif /* FBL_APPL_ENABLE_SEC_*_ARRAY_SEED */
   }

   /* Write seed value into DiagBuffer */
   if (kFblOk == result)
   {
#if defined( FBL_APPL_ENABLE_SEC_BYTE_ARRAY_SEED )
      (void)MEMCPY(&DiagBuffer[kDiagFmtSeedKeyStart], seed, SEC_SEED_LENGTH);
#elif defined( FBL_APPL_ENABLE_SEC_WORD_ARRAY_SEED )
      for ((i = 0u, j = kDiagFmtSeedKeyStart); i < SEC_SEED_WORD_LENGTH; (i++, j += SEC_WORD_TYPE_SIZE))
      {
         FblMemSetInteger(SEC_WORD_TYPE_SIZE, seed[i], &DiagBuffer[j]);
      }
#else
      FblMemSetInteger(SEC_SEED_LENGTH, seed.seedX, (tFblMemRamData)(&DiagBuffer[kDiagFmtSeedKeyStart]));
#endif /* FBL_APPL_ENABLE_SEC_*_ARRAY_SEED */

      /* Set seed status to seed requested */
      securitySeedResponse = kSeedAlreadyRequested;
   }

   return result;
} /* PRQA S 6010, 6030, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STMIF */

/***********************************************************************************************************************
 *  ApplFblSecurityKey
 **********************************************************************************************************************/
/*! \brief       This function is called when the security key has been received from tester
 *  \return      Status of key verification
 **********************************************************************************************************************/
vuint8 ApplFblSecurityKey( void )
{
   vuint8 result;

#if defined( FBL_APPL_ENABLE_SEC_BYTE_ARRAY_KEY )
#else
   SecM_KeyType key;
#endif /* FBL_APPL_ENABLE_SEC_BYTE_ARRAY_KEY */

   /* Initialize variables */
   result = kFblFailed;

   /* Key received => New seed can be requested */
   securitySeedResponse = kNewSeedRequest;

   /* Check key from tester */
#if defined( FBL_APPL_ENABLE_SEC_BYTE_ARRAY_KEY )
   if (SECM_OK == SecM_CompareKey(&DiagBuffer[kDiagFmtSeedKeyStart], seed))
#else
   key = (SecM_KeyType)FblMemGetInteger(SEC_KEY_LENGTH, &DiagBuffer[kDiagFmtSeedKeyStart]);
   if (SECM_OK == SecM_CompareKey(key, seed))
#endif /* FBL_APPL_ENABLE_SEC_BYTE_ARRAY_KEY */
   {
      /* Key bytes are accepted */
      result = kFblOk;
   }

   return result;
}

/***********************************************************************************************************************
 *  ApplFblSecurityInit
 **********************************************************************************************************************/
/*! \brief       Initialize security module.
 *  \return      Status of security module initialization
 **********************************************************************************************************************/
vuint8 ApplFblSecurityInit( void )
{
#if defined( FBL_APPL_ENABLE_SEC_BYTE_ARRAY_SEED ) || \
    defined( FBL_APPL_ENABLE_SEC_WORD_ARRAY_SEED )
   secSeedInput[0u] = 0u;
   secSeedInput[1u] = 0u;
#else
   secSeedInput.seedX = 0u;
   secSeedInput.seedY = 0u;
#endif /* FBL_APPL_ENABLE_SEC_*_ARRAY_SEED */

   return kFblOk;
}

#if defined( FBL_ENABLE_DATA_PROCESSING )
/***********************************************************************************************************************
 *  ApplFblInitDataProcessing
 **********************************************************************************************************************/
/*! \brief         This function is called to initialize the application specific data processing function.
 *  \param[in,out] procParam Processing parameter data structure
 *  \return        kFblOk/kFblFailed
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_FblKbApi_3673 */
tFblResult ApplFblInitDataProcessing( tProcParam * procParam )
{
   tFblResult result = kFblFailed;

   /* PRQA S 2985, 2991, 2995, 2996 TAG_FblKbApiOem_DataProc */ /* MD_FblKbApiOem_2985_2991_2995_2996 */
   /* Check if data processing mode is supported */
   if (GetOemProcessingModeSupported(procParam->mode))
   {
      result = kFblOk;  /* PRQA S 2982 */ /* MD_FblKbApiOem_2982 */

# if defined( FBL_ENABLE_COMPRESSION_MODE )
      /* Initialize decompression */
#  if defined( FBL_APPL_ENABLE_DECOMPRESSION_LZMA )
      if (GetOemCompressionModeMasked(procParam->mode) == kDiagSubLzmaCompression)
      {
         result = CmprLzmaInit();
      }
#  endif /* FBL_APPL_ENABLE_DECOMPRESSION_LZMA */
# endif /* FBL_ENABLE_COMPRESSION_MODE */

#  if defined( FBL_ENABLE_ENCRYPTION_MODE )
      if ((result == kFblOk) && (GetOemEncryptionMode(procParam->mode)))
      {
         /* Initialize decryption */
         if (SecM_InitDecryption(V_NULL) != SECM_OK)
         {
            result = kFblFailed;
         }
         else
         {
            /* Initialize decryption on first run */
            decInitializeState = kFblOk;

            /* Prevent multiple finalization calls */
            decFinalizeState = kFblOk;

#   if defined( FBL_APPL_ENABLE_DECOMPRESSION_LZMA ) 
#    if defined( FBL_ENABLE_COMPRESSION_MODE )
            decTmpOutFree = sizeof(decTmpOutBuffer);
            decTmpOutUsed = 0u;
#    endif /* FBL_ENABLE_COMPRESSION_MODE */
#   endif /* FBL_APPL_ENABLE_DECOMPRESSION_ */
         }
      }
#  endif /* FBL_ENABLE_ENCRYPTION_MODE */
   }

   return result;
   /* PRQA L:TAG_FblKbApiOem_DataProc */
}

/***********************************************************************************************************************
 *  ApplFblDataProcessing
 **********************************************************************************************************************/
/*! \brief         Data processing function.
 *  \pre           Data processing has to be initialized by call of ApplFblInitDataProcessing
 *  \param[in,out] procParam Processing parameter data structure
 *  \return        kFblOk/kFblFailed
 **********************************************************************************************************************/
/* PRQA S 3673, 6010, 6030, 6080 1 */ /* MD_FblKbApi_3673, MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STMIF */
tFblResult ApplFblDataProcessing( tProcParam * procParam )
{
/* PRQA S 2985, 2991, 2995, 2996 TAG_FblKbApiOem_DataProc */ /* MD_FblKbApiOem_2985_2991_2995_2996 */
   tFblResult              result = kFblFailed;
# if defined( FBL_APPL_ENABLE_DECOMPRESSION_LZMA ) 
#  if defined( FBL_ENABLE_COMPRESSION_MODE )
#   if defined( FBL_APPL_ENABLE_DECOMPRESSION_LZMA )
   tProcParam              lzmaCmprParam = {0u};
   tFblResult              finalizeLzma = kFblFailed;
#   endif /* FBL_APPL_ENABLE_DECOMPRESSION_LZMA */
#   if (defined( FBL_APPL_ENABLE_DECOMPRESSION_LZMA ) || (defined( FBL_ENABLE_ENCRYPTION_MODE )))
   tFblResult              lastCallByLibMem = kFblFailed;
#   endif /* FBL_APPL_ENABLE_DECOMPRESSION_LZMA */
#  endif /* FBL_ENABLE_COMPRESSION_MODE */
# endif /* FBL_APPL_ENABLE_DECOMPRESSION_ */

#  if defined( FBL_ENABLE_ENCRYPTION_MODE )
   tFblResult              finalize = kFblFailed;

   SecM_DecInputParamType  decInBlock = {0u};
   SecM_DecOutputParamType decOutBlock = {0u};
   SecM_DecParamType       decParam = {0u};

   vuint16                 consumedLen = 0u;
   vuint16                 producedLen = 0u;
#  endif /* FBL_ENABLE_ENCRYPTION_MODE */

# if defined( FBL_ENABLE_COMPRESSION_MODE )
#  if (defined( FBL_APPL_ENABLE_DECOMPRESSION_LZMA ) || (defined( FBL_ENABLE_ENCRYPTION_MODE )))
   /* Last call by FblLib_Mem is done with length = 0 */
   if (procParam->dataLength == 0u)
   {
      lastCallByLibMem = kFblOk;
   }
#  endif /* FBL_APPL_ENABLE_DECOMPRESSION_LZMA */
# endif /* FBL_ENABLE_COMPRESSION_MODE */

   /* Check if data format is supported */
   if (GetOemProcessingModeSupported(procParam->mode))
   {
      result = kFblOk;

#  if defined( FBL_ENABLE_ENCRYPTION_MODE )
      /* Check if encryption mode is supported */
      if (GetOemEncryptionMode(procParam->mode))
      {
#   if defined( FBL_APPL_ENABLE_DECOMPRESSION_LZMA ) 
#    if defined( FBL_ENABLE_COMPRESSION_MODE )
         /* Check if compression did not consume all data during last cycle
          * and there isn't enough space in the temporary buffer for an additional encryption run */
         if (  (decTmpOutUsed > 0u)
            && ((lastCallByLibMem == kFblOk) || (decTmpOutFree < SEC_DECRYPTION_BLOCK_SIZE_AES_PKCS_CBC)))
         {
            /* No decryption during this cycle, only decompression of remainder from last cycle */
         }
         else
         {
#    endif /* FBL_ENABLE_COMPRESSION_MODE */
#   endif /* FBL_APPL_ENABLE_DECOMPRESSION_ */
            /* Pass watchdog trigger */
            decParam.wdTriggerFct = &FblLookForWatchdogVoid;
            /* Set standard mode for decryption and initialization vector handling */
            decParam.mode = SEC_MODE_AES;

            if (kFblOk == decInitializeState)
            {
               /* Only perform single initialization call */
               decInitializeState = kFblFailed;

               /* Add initialization bit to mode on first call after data processing initialization */
               decParam.mode |= SEC_DECRYPTION_MODE_INIT;

#    if ( SEC_MODE_AES_IV == SEC_MODE_AES_IV_CONSTANT )
               /* Initialize implicit constant IV */
               decInBlock.DataBuffer = decAesIv;
               decInBlock.Length = sizeof(decAesIv);

               /* No actual data produced */
               decOutBlock.DataBuffer = procParam->dataOutBuffer;
               decOutBlock.Length = procParam->dataOutMaxLength;

               /* Perform decryption */
               if (SecM_Decryption(&decInBlock, &decOutBlock, &decParam) != SECM_OK)
               {
                  result = kFblFailed;
               }

               /* Set mode for initialization vector handling */
               decParam.mode = SEC_MODE_AES;
#    endif /* SEC_MODE_AES_IV == SEC_MODE_AES_IV_CONSTANT */
            }

#    if ( SEC_MODE_AES_IV == SEC_MODE_AES_IV_CONSTANT )
            /* Check if initialization of explicit constant IV was successful */
            if (kFblOk == result)
#    endif /* SEC_MODE_AES_IV == SEC_MODE_AES_IV_CONSTANT */
            {
#   if defined( FBL_APPL_ENABLE_DECOMPRESSION_LZMA ) 
#    if defined( FBL_ENABLE_COMPRESSION_MODE )
               /* Check if compression mode is supported */
               if (GetOemCompressionMode(procParam->mode))
               {
                  /* Place decryption output in temporary buffer */
                  decOutBlock.DataBuffer = &decTmpOutBuffer[decTmpOutUsed];
                  decOutBlock.Length = decTmpOutFree;
               }
               else
#    endif /* FBL_ENABLE_COMPRESSION_MODE */
#   endif /* FBL_APPL_ENABLE_DECOMPRESSION_ */
               {
                  /* Place decryption output in buffer provided by caller, use complete buffer */
                  decOutBlock.DataBuffer = procParam->dataOutBuffer;
                  decOutBlock.Length = procParam->dataOutMaxLength;
               }

               /* Use input data provided by caller */
               decInBlock.DataBuffer = procParam->dataBuffer;
               decInBlock.Length = procParam->dataLength;

               /* Limit input size to output length (decryption module requires this internally) */
               if (FBL_LENGTH_ALIGN_ROUND_DOWN(decOutBlock.Length, SEC_DECRYPTION_BLOCK_SIZE_AES) < decInBlock.Length)
               {
                  decInBlock.Length = FBL_LENGTH_ALIGN_ROUND_DOWN(decOutBlock.Length, SEC_DECRYPTION_BLOCK_SIZE_AES);
               }

               consumedLen = decInBlock.Length;

               /* If actual decryption is not called, no data will be consumed or produced
                * Finalize decryption in case no new input data is provided */
               if (decInBlock.Length == 0u)
               {
                  decParam.mode |= SEC_DECRYPTION_MODE_FINALIZE;
                  finalize = decFinalizeState;
                  /* Prevent multiple finalization calls */
                  decFinalizeState = kFblFailed;
               }

               if ((decInBlock.Length > 0u) || (kFblOk == finalize))
               {
                  /* Perform decryption */
                  if (SecM_Decryption(&decInBlock, &decOutBlock, &decParam) == SECM_OK)
                  {
                     producedLen = decOutBlock.Length;
                  }
                  else
                  {
                     result = kFblFailed;
                  }
               }
            }
#   if defined( FBL_APPL_ENABLE_DECOMPRESSION_LZMA ) 
#    if defined( FBL_ENABLE_COMPRESSION_MODE )
         }

         if (GetOemCompressionMode(procParam->mode))
         {
            decTmpOutUsed += producedLen;
            decTmpOutFree -= producedLen;

            /* Pass temporary output buffer to decompression */
#     if defined( FBL_APPL_ENABLE_DECOMPRESSION_LZMA )
            if (GetOemCompressionModeMasked(procParam->mode) == kDiagSubLzmaCompression)
            {
               lzmaCmprParam.dataBuffer = decTmpOutBuffer;
               lzmaCmprParam.dataLength = decTmpOutUsed;
            }
#     endif /* FBL_APPL_ENABLE_DECOMPRESSION_LZMA */
         }
         else
#    endif /* FBL_ENABLE_COMPRESSION_MODE */
#   endif /* FBL_APPL_ENABLE_DECOMPRESSION_VECTOR */
         {
            /* Resulting output length */
            procParam->dataOutLength = producedLen;
         }

         /* Update processed input length */
         procParam->dataLength = consumedLen;
      }
      else
#  endif /* FBL_ENABLE_ENCRYPTION_MODE */
      {
# if defined( FBL_APPL_ENABLE_DECOMPRESSION_LZMA ) 
#  if defined( FBL_ENABLE_COMPRESSION_MODE )
         /* Directly pass input buffer to decompression */
#   if defined( FBL_APPL_ENABLE_DECOMPRESSION_LZMA )
         if (GetOemCompressionModeMasked(procParam->mode) == kDiagSubLzmaCompression)
         {
            lzmaCmprParam.dataBuffer = procParam->dataBuffer;
            lzmaCmprParam.dataLength = procParam->dataLength;
         }
#   endif /* FBL_APPL_ENABLE_DECOMPRESSION_LZMA */
#  endif /* FBL_ENABLE_COMPRESSION_MODE */
# endif /* FBL_APPL_ENABLE_DECOMPRESSION_VECTOR */
      }

# if defined( FBL_APPL_ENABLE_DECOMPRESSION_LZMA ) 
#  if defined( FBL_ENABLE_COMPRESSION_MODE )
      /* Check if compression mode is supported */
      if (GetOemCompressionMode(procParam->mode))
      {
         /* Check if optional decryption was successful */
         if (result == kFblOk)
         {
#   if defined( FBL_APPL_ENABLE_DECOMPRESSION_LZMA )
            if (GetOemCompressionModeMasked(procParam->mode) == kDiagSubLzmaCompression)
            {
               /* Initialize decompression variables */
               lzmaCmprParam.dataOutBuffer = procParam->dataOutBuffer;
               lzmaCmprParam.dataOutMaxLength = procParam->dataOutMaxLength;
               lzmaCmprParam.wdTriggerFct = procParam->wdTriggerFct;

               finalizeLzma = kFblFailed;

#     if defined( FBL_ENABLE_ENCRYPTION_MODE )
               if (GetOemEncryptionMode(procParam->mode))
               {
                  /* Check if the function was called with no new data and the encryption has been finalized */
                  if ((decFinalizeState != kFblOk) && (lastCallByLibMem == kFblOk))
                  {
                     finalizeLzma = kFblOk;
                  }
               }
               else
#     endif /* FBL_ENABLE_ENCRYPTION_MODE */
               {
                  /* Check if the function was called with no new data */
                  if (lastCallByLibMem == kFblOk)
                  {
                     finalizeLzma = kFblOk;
                  }
               }

               /* Finalize decompression in case no new input data is provided */
               if (finalizeLzma == kFblOk)
               {
                  result = CmprLzmaDeinit(&lzmaCmprParam);
               }
               else
               {
                  /* Check if there is new data for decompression */
                  if (lzmaCmprParam.dataLength > 0u)
                  {
                     result = CmprLzmaDecompress(&lzmaCmprParam);
                  }
                  else
                  {
                     /* No decompression this time. Report no processed bytes to FblLib_Mem */
                     result = kFblOk;
                     lzmaCmprParam.dataOutLength = 0u;
                  }
               }
            }
#   endif /* FBL_APPL_ENABLE_DECOMPRESSION_LZMA */
            if (result == kFblOk)
            {
#    if defined( FBL_ENABLE_ENCRYPTION_MODE )
               if (GetOemEncryptionMode(procParam->mode))
               {
                  vuint16 index = 0u;
#     if defined( FBL_APPL_ENABLE_DECOMPRESSION_LZMA )
                  if (GetOemCompressionModeMasked(procParam->mode) == kDiagSubLzmaCompression)
                  {
                     /* Update buffer usage */
                     decTmpOutUsed -= lzmaCmprParam.dataLength;
                     decTmpOutFree += lzmaCmprParam.dataLength;

                     /* Copy unprocessed temporary data to front */
                     for (index = 0u; index < decTmpOutUsed; index++)
                     {
                        decTmpOutBuffer[index] = decTmpOutBuffer[lzmaCmprParam.dataLength + index];
                     }
                  }
#     endif /* FBL_APPL_ENABLE_DECOMPRESSION_LZMA */
               }
               else
#    endif /* FBL_ENABLE_ENCRYPTION_MODE */
               {
#   if defined( FBL_APPL_ENABLE_DECOMPRESSION_LZMA )
                  if (GetOemCompressionModeMasked(procParam->mode) == kDiagSubLzmaCompression)
                  {
                     /* Processed input length */
                     procParam->dataLength = lzmaCmprParam.dataLength;
                  }
#   endif /* FBL_APPL_ENABLE_DECOMPRESSION_LZMA */
               }
#   if defined( FBL_APPL_ENABLE_DECOMPRESSION_LZMA )
               if (GetOemCompressionModeMasked(procParam->mode) == kDiagSubLzmaCompression)
               {
                  /* Resulting output length */
                  procParam->dataOutLength = lzmaCmprParam.dataOutLength;
               }
#   endif /* FBL_APPL_ENABLE_DECOMPRESSION_LZMA */
            }
         }
      }
#  endif /* FBL_ENABLE_COMPRESSION_MODE */
# endif /* FBL_APPL_ENABLE_DECOMPRESSION_ */
   }

   return result;
   /* PRQA L:TAG_FblKbApiOem_DataProc */
} /* PRQA S 6010, 6030, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STMIF */

/***********************************************************************************************************************
 *  ApplFblDeinitDataProcessing
 **********************************************************************************************************************/
/*! \brief         Deinitialize data processing function.
 *  \pre           Data processing has to be initialized by call of ApplFblInitDataProcessing
 *  \param[in,out] procParam Processing parameter data structure
 *  \return        kFblOk/kFblFailed
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_FblKbApi_3673 */
tFblResult ApplFblDeinitDataProcessing( tProcParam * procParam )
{
   /* PRQA S 2985, 2991, 2995, 2996 TAG_FblKbApiOem_DataProc */ /* MD_FblKbApiOem_2985_2991_2995_2996 */
   tFblResult result;
# if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   (void)procParam;
# endif
   result = kFblOk;

   /* FblLibMem makes sure that data has been processed completely */
#  if defined( FBL_ENABLE_ENCRYPTION_MODE )
   if (GetOemEncryptionMode(procParam->mode))
   {
      if (SecM_DeinitDecryption(V_NULL) != SECM_OK)
      {
         result = kFblFailed;
      }
   }

#   if defined( FBL_APPL_ENABLE_DECOMPRESSION_LZMA ) 
#    if defined( FBL_ENABLE_COMPRESSION_MODE )
   /* Reset buffer usage */
   decTmpOutUsed = 0;
#    endif /* FBL_ENABLE_COMPRESSION_MODE */
#   endif /* FBL_APPL_ENABLE_DECOMPRESSION_ */
#  endif /* FBL_ENABLE_ENCRYPTION_MODE */

   return result;
   /* PRQA L:TAG_FblKbApiOem_DataProc */
}
#endif /* FBL_ENABLE_DATA_PROCESSING */

#if defined( FBL_MEM_ENABLE_STREAM_OUTPUT )
/***********************************************************************************************************************
 *  ApplFblInitStreamOutput
 **********************************************************************************************************************/
/*! \brief         This function is called to initialize the application specific stream output function.
 *  \param[in,out] streamParam Processing parameter data structure
 *  \return        kFblOk/kFblFailed
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_FblKbApi_3673 */
tFblResult ApplFblInitStreamOutput( V_MEMRAM1 tFblMemStreamProcessing V_MEMRAM2 V_MEMRAM3 * streamParam )
{
   tFblResult result;

   /* Initialize variables */
   result = kFblFailed;


   return result;
}

/***********************************************************************************************************************
 *  ApplFblStreamOutput
 **********************************************************************************************************************/
/*! \brief         Stream output function.
 *  \pre           Stream output has to be initialized by call of ApplFblInitStreamOutput
 *  \param[in,out] streamParam Processing parameter data structure
 *  \return        kFblOk/kFblFailed
 **********************************************************************************************************************/
tFblResult ApplFblStreamOutput( V_MEMRAM1 tFblMemStreamProcessing V_MEMRAM2 V_MEMRAM3 * streamParam )
{
   tFblResult result;

   /* Initialize variables */
   result = kFblFailed;

   return result;
}

/***********************************************************************************************************************
 *  ApplFblFinalizeStreamOutput
 **********************************************************************************************************************/
/*! \brief         Finalize stream output function.
 *  \pre           Stream output has to be initialized by call of ApplFblInitStreamOutput
 *  \param[in,out] streamParam Processing parameter data structure
 *  \return        kFblOk/kFblFailed
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_FblKbApi_3673 */
tFblResult ApplFblFinalizeStreamOutput( V_MEMRAM1 tFblMemStreamProcessing V_MEMRAM2 V_MEMRAM3 * streamParam )
{
   tFblResult result;

   result = kFblFailed;

   return result;
}

/***********************************************************************************************************************
 *  ApplFblDeinitStreamOutput
 **********************************************************************************************************************/
/*! \brief         Deinitialize stream output function.
 *  \pre           Stream output has to be initialized by call of ApplFblInitStreamOutput
 *  \param[in,out] streamParam Processing parameter data structure
 *  \return        kFblOk/kFblFailed
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_FblKbApi_3673 */
tFblResult ApplFblDeinitStreamOutput( V_MEMRAM1 tFblMemStreamProcessing V_MEMRAM2 V_MEMRAM3 * streamParam )
{
   tFblResult result;

   result = kFblFailed;

   return result;
}
#endif /* FBL_MEM_ENABLE_STREAM_OUTPUT */

#if defined( FBL_ENABLE_APPL_TASK ) || \
    defined( FBL_ENABLE_APPL_TIMER_TASK )
/***********************************************************************************************************************
 *  ApplFblTask
 **********************************************************************************************************************/
/*! \brief       1ms user task.
 *  \details     This function is called every millisecond if the Bootloader is in idle state. It is not called during
 *               flash operations.
 **********************************************************************************************************************/
void ApplFblTask( void )
{
   static V_MEMRAM1 vuint16 V_MEMRAM2 flashlight;
   static Can_PduType testMessagePdu;
   static uint8 myMsg[8] = { 0x11u, 0x22u, 0x33u, 0x44u, 0x55u, 0x66u, 0x77u, 0x88u };

   flashlight++;
   if (flashlight >= 500u)
   {
      flashlight = 0u;
      /* Set CAN Message */
      testMessagePdu.id = 0x123u;
      testMessagePdu.length = sizeof(myMsg);
      testMessagePdu.sdu = (uint8*) myMsg;
      testMessagePdu.swPduHandle = 0u;

      Can_Write(0u, &testMessagePdu);
   }
}
#endif /* FBL_ENABLE_APPL_TASK || FBL_ENABLE_APPL_TIMER_TASK */

#if defined( FBL_ENABLE_APPL_TASK ) ||\
    defined( FBL_ENABLE_APPL_STATE_TASK )
/***********************************************************************************************************************
 *  ApplFblStateTask
 **********************************************************************************************************************/
/*! \brief       Background user task.
 *  \details     This function is polled if the Bootloader is in idle state. It is not called during flash operations.
 **********************************************************************************************************************/
void ApplFblStateTask( void )
{
}
#endif /* FBL_ENABLE_APPL_TASK || FBL_ENABLE_APPL_STATE_TASK */

#if defined( FBL_ENABLE_ASSERTION )
/***********************************************************************************************************************
 *  ApplFblFatalError
 **********************************************************************************************************************/
/*! \brief       If the bootloader assertions are enabled, this function will be called in case an invalid bootloader
 *               state is encountered.
 *  \param[in]   errorCode Code number of the encountered assertion
 *  \param[in]   module Name of the affected module (Only if extended info is enabled)
 *  \param[in]   line Line number where the assertion occurred (Only if extended info is enabled)
 **********************************************************************************************************************/
void ApplFblFatalError( FBL_DECL_ASSERT_EXTENDED_INFO(vuint8 errorCode) )
{
#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   (void)errorCode;  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
#endif

   /* TODO_CUSTOMER: This feature should be activated in development only. Please make sure this
            function isn't called in production code and assertions are disabled in GENy
            (set "Project State" to "Production (default)" or "Production (reduced tests)".
   */
   while (1)
   {
      ;
   }
}
#endif

#if (DET_ENABLED == STD_ON)
# define FBLAP_RAMCODE_START_SEC_CODE
# include "MemMap.h"   /* PRQA S 5087 */ /* MD_MSR_MemMap */
/***********************************************************************************************************************
 *  ApplFbl_DetEntryHandler
 **********************************************************************************************************************/
/*! \brief       Called by DET module to check if a DET error is intended bootloader behavior or not.
 *  \param[in]   ModuleId Code number of the encountered assertion
 *  \param[in]   InstanceId Name of the affected module (Only if extended info is enabled)
 *  \param[in]   ApiId Line number where the assertion occurred (Only if extended info is enabled)
 *  \param[in]   ErrorId Line number where the assertion occurred (Only if extended info is enabled)
 *  \return      Report if error should be handed over to DET or not (E_OK or FALSE depending on interface)
 **********************************************************************************************************************/
# if ( ((DET_AR_RELEASE_MAJOR_VERSION << 8u) | DET_AR_RELEASE_MINOR_VERSION ) >= 0x0403u )
FUNC(Std_ReturnType, DET_CODE) ApplFbl_DetEntryHandler( uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId )
# else
FUNC(boolean, DET_APPL_CODE) ApplFbl_DetEntryHandler( uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId )
# endif /* ( ((DET_AR_RELEASE_MAJOR_VERSION << 8u) | DET_AR_RELEASE_MINOR_VERSION ) >= 0x0403u ) */
{
# if ( ((DET_AR_RELEASE_MAJOR_VERSION << 8u) | DET_AR_RELEASE_MINOR_VERSION ) >= 0x0403u )
   Std_ReturnType result = E_OK;
# else
   boolean result = FALSE;
# endif /* ( ((DET_AR_RELEASE_MAJOR_VERSION << 8u) | DET_AR_RELEASE_MINOR_VERSION ) >= 0x0403u ) */

# if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* Parameters not used: avoid compiler warning */ /* PRQA S 3112 2 */ /* MD_MSR_DummyStmt */
   (void)InstanceId;
   (void)ApiId;
# endif

   switch (ModuleId)
   {
#  if defined( CANTP_MODULE_ID )
      case CANTP_MODULE_ID:
      {
         switch (ErrorId)
         {
            /* CAN TP errors which can be triggered from outside shouldn't trigger a DET. */
            case CANTP_E_PARAM_CONFIG:
            case CANTP_E_INVALID_RX_BUFFER:
            case CANTP_E_INVALID_RX_LENGTH:
            case CANTP_E_INVALID_TATYPE:
            case CANTP_E_INVALID_FRAME_TYPE:
#   if ( ((CANTP_SW_MAJOR_VERSION << 8u) | CANTP_SW_MINOR_VERSION ) <= 0x0700u )
            case CANTP_E_RX_TIMEOUT_AR:
            case CANTP_E_RX_TIMEOUT_BR:
            case CANTP_E_RX_TIMEOUT_CR:
            case CANTP_E_RX_INVALID_SN:
            case CANTP_E_TX_TIMEOUT_AS:
            case CANTP_E_TX_TIMEOUT_BS:
            case CANTP_E_TX_TIMEOUT_CS:
            case CANTP_E_TX_FC_OVFL:
#   endif /* ( ((CANTP_SW_MAJOR_VERSION << 8u) | CANTP_SW_MINOR_VERSION ) <= 0x0700u ) */
            case CANTP_E_RX_WFTMAX:
            case CANTP_E_RX_RESTART:
            case CANTP_E_TX_INVALID_FS:
            case CANTP_E_TX_RES_STMIN:
            case CANTP_E_TX_TRANSMIT_ERROR:
            case CANTP_E_NO_ERROR:
            {
#   if ( ((DET_AR_RELEASE_MAJOR_VERSION << 8u) | DET_AR_RELEASE_MINOR_VERSION ) >= 0x0403u )
               result = E_NOT_OK;
#   else
               result = TRUE;
#   endif /* ( ((DET_AR_RELEASE_MAJOR_VERSION << 8u) | DET_AR_RELEASE_MINOR_VERSION ) >= 0x0403u ) */
               break;
            }
            default:
            {
               /* Keep error */
               break;
            }
         }
         break;
      }
#  endif /* CANTP_MODULE_ID */
#  if defined( FBLCW_CANDRV_MODULE_ID )
      case FBLCW_CANDRV_MODULE_ID:
      {
         switch (ErrorId)
         {
            case FBLCW_CANDRV_E_DATALOST:
            {
#   if ( ((DET_AR_RELEASE_MAJOR_VERSION << 8u) | DET_AR_RELEASE_MINOR_VERSION ) >= 0x0403u )
               result = E_NOT_OK;
#   else
               result = TRUE;
#   endif /* ( ((DET_AR_RELEASE_MAJOR_VERSION << 8u) | DET_AR_RELEASE_MINOR_VERSION ) >= 0x0403u ) */
               break;
            }
            default:
            {
               /* Keep error */
               break;
            }
         }
         break;
      }
#  endif /* FBLCW_CANDRV_MODULE_ID */
      default:
      {
         /* Unknown module. Keep error. */
         break;
      }
   }

   return result;
}
# define FBLAP_RAMCODE_STOP_SEC_CODE
# include "MemMap.h"   /* PRQA S 5087 */ /* MD_MSR_MemMap */
#endif

#if defined( FBL_ENABLE_MULTIPLE_NODES ) || \
    defined( FBL_ENABLE_CAN_CONFIGURATION) || \
    defined( FBL_CW_ENABLE_MULTIPLE_NODES )
/***********************************************************************************************************************
 *  ApplFblCanParamInit
 **********************************************************************************************************************/
/*! \brief       Overwrite default CAN parameters
 *  \details     This function is called before CAN controller initialization so that default initialization values
 *               can be overridden according to the boot mode.
 *               If this function is empty, the default/reset settings are used to initialize the CAN controller.
 *  \pre         fblCanIdTable has to be initialized with default/reset
 **********************************************************************************************************************/
void ApplFblCanParamInit( void )
{
   vuint8 currentEcu = 1;

   /* This is only an example:      */
   /* currentEcu = GetCurrentEcu(); */

   if (FblMainGetStartFromAppl())
   {
      /* At this position, it is possible to read CAN init parameters from
       * EEPROM, which have been programmed by the ECU application before
       * the FBL was started. */
   }
   switch (currentEcu)
   {
      case 0:
      {
         fblEcuHandle = FBL_ECU_HDLE_Demo_0_CAN11;
         break;
      }
      case 1:
      {
         fblEcuHandle = FBL_ECU_HDLE_Demo_1_CAN29;
         break;
      }
   }
}
#endif

/***********************************************************************************************************************
 *  ApplFblCanBusOff
 **********************************************************************************************************************/
/*! \brief       This call-back function is called if the CAN controller enters bus-off state.
 **********************************************************************************************************************/
void ApplFblCanBusOff( void )
{
   /* Bus off detected, issue ECU reset */
   ApplFblReset();
}


#if defined( FBL_ENABLE_SLEEPMODE )
/***********************************************************************************************************************
 *  ApplFblBusSleep
 **********************************************************************************************************************/
/*! \brief       Indicates transition to bus silence.
 *  \details     By calling this function the FBL indicates the application
 *               that the bootloader can go to sleep (bus silence, no diagnostic requests).
 **********************************************************************************************************************/
void ApplFblBusSleep( void )
{


# if defined( FBL_WATCHDOG_ON )
   /* Wait for watchdog to be triggered */
   while (FblLookForWatchdog() != FBL_WD_TRIGGERED)
   {
      ;
   }
# endif /* FBL_WATCHDOG_ON */

   /* TODO_CUSTOMER: Shutdown of CAN and ECU */
   {
      /* Put transceiver in sleepmode, power down */
      ApplTrcvrSleepMode(); /* PRQA S 2987 */ /* MD_FblKbApiOem_2987_EmptyFunction */

      /* Wait for power down, check for wakeup request */
      /* TODO_CUSTOMER: Wait for power down, check for wakeup request */
      while(1u)
      {
         ;
      }
   }
   /* Wakeup request received, generate reset */
   ApplFblReset(); /* PRQA S 2880 */ /* MD_MSR_Unreachable */
}
#endif /* FBL_ENABLE_SLEEPMODE */









/***********************************************************************************************************************
 *  ApplFblGetVerificationData
 **********************************************************************************************************************/
/*! \brief         Extract verification data (e.g. checksum, signature) from downloaded data
 *  \details       This function reads the verification data from the downloaded data. Please note that
 *                 there are some restrictions regarding this extraction:
 *                 - The number of segments mustn't be changed
 *                 - The segment which includes the verification data has to be bigger than the verification data
 *  \param[in,out] verificationParam Pointer to SecM_VerifyParamType
 *  \param[in,out] verificationData Pointer to a checksum buffer, size is CRC + SIG length
 *  \param[in]     verificationDataLength Length of verification data
 *  \return        kFblOk/kFblFailed
 **********************************************************************************************************************/
/* PRQA S 3673, 6010, 6030 1 */ /* MD_FblKbApi_3673, MD_MSR_STPTH, MD_MSR_STCYC */
tFblResult ApplFblGetVerificationData(V_MEMRAM1 SecM_VerifyParamType V_MEMRAM2 V_MEMRAM3 * verificationParam,
                                      V_MEMRAM1 vuint8 V_MEMRAM2 V_MEMRAM3 * verificationData,
                                      vuintx verificationDataLength)
{
   vuintx lastSegment;
   tFblResult result;
   tFblAddress verifyAddress;

   /* Initialize variables */
   result = kFblFailed;

#if defined( FBL_VERIFICATION_SEGMENT_INDEX )
   /* Get verification data from designated segment */
   lastSegment = FBL_VERIFICATION_SEGMENT_INDEX - 1u;
#else
   /* Assume checksum is appended to last downloaded segment */
   lastSegment = (vuintx)verificationParam->segmentList.nrOfSegments - 1u;
#endif

   if (verificationParam->segmentList.segmentInfo[lastSegment].length > verificationDataLength)
   {
      /* Reduce length to extract checksum */
      verificationParam->segmentList.segmentInfo[lastSegment].length -= verificationDataLength;

      /* Get verification data address */
      verifyAddress = verificationParam->segmentList.segmentInfo[lastSegment].targetAddress +
                      verificationParam->segmentList.segmentInfo[lastSegment].length;

      /* Get verification data from flash */
      if (verificationParam->readMemory(verifyAddress, verificationData, verificationDataLength) == verificationDataLength)
      {
         result = kFblOk;
      }
   }

   return result;
}

/* Justification for module-specific MISRA deviations:

   MD_FblKbApiFrame_0306:
      Reason:     Address conversion between integer values and pointers is required to allow for hardware independent
                  configuration and address range checks.
      Risk:       The size of integer required to hold the result of a pointer cast is implementation defined.
      Prevention: The size of the respective integer data type which holds the address value is adapted on a hardware
                  specific basis.

   MD_FblKbApiFrame_0314_0316_CertKey
      Reason:     SecModHis component stores pointers to key as void but later resolves them to the actual type depending on
                  the used configuration.
      Risk:       Type mismatch.
      Prevention: Make sure that same types as in SecModHis are used for key definition before casting them to void or
                  back to the original type. Inspect types manually.

   MD_FblKbApiFrame_2992_2996:
      Reason:     The values for this check are given by dummy implementations which are to be adapted. Dummy implementation
                  may return static values which seemingly makes the check always evaluate the same
      Risk:       No identifiable risk.
      Prevention: No prevention required.

   MD_FblKbApiFrame_3415:
      Reason:     If condition relies on lazy evaluation, function with possible side effects only to be executed if
                  prior checks are successful.
      Risk:       No identifiable risk.
      Prevention: No prevention required.

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


*/

/***********************************************************************************************************************
 *  END OF FILE: FBL_AP.C
 **********************************************************************************************************************/
