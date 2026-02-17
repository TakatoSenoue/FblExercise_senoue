/* Kernbauer Version: 1.12 Konfiguration: FBL Erzeugungsgangnummer: 1 */

/***********************************************************************************************************************
 *  FILE DESCRIPTION
 *  ------------------------------------------------------------------------------------------------------------------*/
/** \file
 *  \brief         Application dependent watchdog routines
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
 *  Copyright (c) 2025 by Vector Informatik GmbH.                                                  All rights reserved.
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
 *  03.00.00   2004-07-09  viswm                    First implementation
 *  03.01.00   2004-09-22  viswm                    Minor changes
 *  03.02.00   2005-01-21  visrr                    Changed version defines due to naming
 *                                                  conventions
 *  03.03.00   2005-04-20  viswm   ESCAN00012125    Support copying of the
 *                                                  watchdog function by the startup code
 *  03.04.00   2007-01-17  visjhg  ESCAN00017120    Added token for additional functions
 *                         visls   ESCAN00014726    FBL_COPY_CODE_TO_RAM_ON_STARTUP
 *                         visamn                   Added new watchdog functions
 *  03.05.00   2007-01-22  viswm                    Added V_VER.H version cross check
 *  03.06.00   2007-03-29  vismfr  ESCAN00020057    Add tokens for local data,
 *                                                  prototypes, etc.
 *  03.07.00   2008-03-07  vishp                    No changes
 *  03.08.00   2009-11-11  visawh  ESCAN00039075    Added Kb-includes for own apwd-defines
 *  03.09.00   2012-03-30  visqps  ESCAN00058043    No changes
 *  03.10.00   2012-12-06  visach  ESCAN00062912    Adapted comments to use Doxygen
 *  03.10.01   2018-02-02  visawh  ESCAN00098254    Sbc use case: include "CanTrcv_30_Sbc.h"
 *  03.11.00   2025-02-06  vislau  FBL-4366         Perform Misra 2012 Migration
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

#define FBL_APWD_SOURCE

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

#if ( FBLKBAPI_FRAMEWD_VERSION != 0x0311u ) || \
    ( FBLKBAPI_FRAMEWD_RELEASE_VERSION != 0x00u )
# error "Error in FBL_APWD.C: Source and header file are inconsistent!"
#endif

#if ( FBLKBAPI_FRAMEWD_VERSION != _FBLKBAPI_FRAMEWD_VERSION ) || \
    ( FBLKBAPI_FRAMEWD_RELEASE_VERSION != _FBLKBAPI_FRAMEWD_RELEASE_VERSION )
# error "Error in FBL_APWD.C: Source and V_VER.H are inconsistent!"
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


/***********************************************************************************************************************
 *  LOCAL DATA
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  EXTERNAL DATA
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  PROTOTYPES
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *   GLOBAL FUNCTIONS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  ApplFblWDInit
 **********************************************************************************************************************/
/*! \brief       Initialize watchdog.
 *  \details     WDTimer has to be initialized here.
 **********************************************************************************************************************/
void ApplFblWDInit( void )
{
#if defined( FBL_WATCHDOG_ON )
   WDTimer = (tWdTime)FBL_WATCHDOG_TIME;
#endif /* FBL_WATCHDOG_ON */

}

/***********************************************************************************************************************
 *  ApplFblWDLong
 **********************************************************************************************************************/
/*! \brief       Synchronize window watchdog for application.
 *  \details     This function is called just before application start.
 **********************************************************************************************************************/
void ApplFblWDLong( void )
{
}

/***********************************************************************************************************************
 *  ApplFblWDShort
 **********************************************************************************************************************/
/*! \brief       Synchronize window watchdog for bootloader.
 *  \details     This function is called right after start of the bootloader from the application.
 **********************************************************************************************************************/
void ApplFblWDShort( void )
{
}

# define WDTRIGGER_START_SEC_CODE
# include "MemMap.h"   /* PRQA S 5087 */ /* MD_MSR_MemMap */
/***********************************************************************************************************************
 *  ApplFblWDTrigger
 **********************************************************************************************************************/
/*! \brief       Cyclic function to handle the actual watchdog trigger.
 *  \details     This function is called by FblLookForWatchdog() and contains the actual watchdog trigger
 *               code. Depending on the configuration, please note the following points:
 *               - If the function is copied by FblCopyWatchdog(), it has to be relocatable and normally
 *                 no function calls out of this function are allowed.
 *               - If the function is placed to RAM by the linker, it has to be present before the first call.
 *                 If any function calls are done, the called functions have to be placed in RAM as well.
 *  \pre         This function has to be executed from RAM.
 **********************************************************************************************************************/
void V_CALLBACK_NEAR ApplFblWDTrigger( void )
{
#if defined( FBL_ENABLE_VECTOR_HW )
   /* Toggle pin for Wdg refresh rate measurement */
# if defined( BRS_ENABLE_SUPPORT_TOGGLE_WD_PIN )
#  if defined( BRSMAIN_VERSION ) && ( BRSMAIN_VERSION >= 0x0200u)
   BrsMainTogglePin(BRSMAIN_TOGGLEPIN_WD);
#  else
   BrsHwTogglePin(BRSHW_TOGGLEPIN_WD);
#  endif /* BRSMAIN_VERSION */
# endif /* BRS_ENABLE_SUPPORT_TOGGLE_WD_PIN */
#endif
}
# define WDTRIGGER_STOP_SEC_CODE
# include "MemMap.h"   /* PRQA S 5087 */ /* MD_MSR_MemMap */

/* Additional watchdog functions **********************************************/


/***********************************************************************************************************************
 *  END OF FILE: FBL_APWD.C
 **********************************************************************************************************************/

