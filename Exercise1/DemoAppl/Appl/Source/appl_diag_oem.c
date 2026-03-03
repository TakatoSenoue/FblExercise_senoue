/***********************************************************************************************************************
 *  FILE DESCRIPTION
 *  ------------------------------------------------------------------------------------------------------------------*/
/** \file
 *  \brief         Diagnostic services supported in boot mode
 *                 Declaration of functions, variables, and constants
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
 *  09.00.00   2020-06-18  visjdn  FBL-1819         Update to FblBm_Main version 5.00.00
 *  09.00.01   2021-03-04  vistmo  ESCAN00108085    Logical block can be verified with signature/checksum of other block
 *                                 FBL-2935         Added/adapted MemMap sections
 *  09.00.02   2021-05-11  vistbe  ESCAN00107662    No changes
 *                                 FBL-3334         Update to MISRA 2012
 *  09.01.00   2021-11-10  visjdn  FBL-3077         Support of embedded checksum/signature
 *  09.02.00   2022-05-02  vishor  FBL-5067         Support of processed and input verification
 *  09.02.01   2022-08-25  vismix  ESCAN00112573    No changes
 *  09.03.00   2023-02-03  vishor  FBL-6350         Update to latest MISRA test plan
 *  09.04.00   2023-06-20  vismix  FBL-4315         Add support for OTA
 *                                 ESCAN00103916    No changes
 *  09.05.00   2024-10-10  virjjn  FBL-9413         Support Download to inactive partition
 *  09.06.00   2024-10-25  vismix  FBL-9398         Allow session transition from programming to programming
 *  09.06.01   2024-11-26  virjjn  ESCAN00118619    Erase Routine fails when the active partition is invalid
 *                                 ESCAN00118604    Check Programming Dependency Routine Fails with response code 01
 *                                 ESCAN00118814    RoutineControl-CheckProgrammingDependencies fails with NRC
 *                                                   Conditions Not Correct (0x22)
 *                                 ESCAN00118862    No changes
 *  09.06.02   2025-01-09  virjjn  ESCAN00119012    Incorrect NRC may be received
 **********************************************************************************************************************/

#define FBL_DIAG_OEM_SOURCE

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/

/* Common Bootloader includes */
#include "fbl_inc.h"
/* Core Diagnostic interface and global symbols */
#include "fbl_diag_core.h"

/***********************************************************************************************************************
 *  VERSION
 **********************************************************************************************************************/

/* Diagnostic OEM module version check */
#if ((FBLDIAG_14229_UDS2_VERSION != 0x0906u) || \
     (FBLDIAG_14229_UDS2_RELEASE_VERSION != 0x02u))
# error "Error in fbl_diag_oem.c: Source and header file are inconsistent!"
#endif
#if(( FBLDIAG_14229_UDS2_VERSION != _FBLDIAG_OEM_VERSION ) || \
    ( FBLDIAG_14229_UDS2_RELEASE_VERSION != _FBLDIAG_OEM_RELEASE_VERSION ))
# error "Error in fbl_diag_oem.c: Source and v_ver.h are inconsistent!"
#endif

/***********************************************************************************************************************
 *  TYPE DEFINITIONS
 **********************************************************************************************************************/

#if defined( FBL_DIAG_ENABLE_FLASHDRV_ROM )
/** Structure to initialize flash drivers from ROM */
typedef struct
{
   V_MEMROM1 vuint8 V_MEMROM2 V_MEMROM3 * sourceBuffer;  /**< Flash driver image source buffer */
   V_MEMRAM1 vuint8 V_MEMRAM2 V_MEMRAM3 * destBuffer;    /**< Flash driver destination buffer */
   vuint32 copySize;                                     /**< Size of data to be copied */
   vuint8 decryptValue;                                  /**< Value to decrypt XOR-encrypted driver */
} tFlashDriverInitData;
#endif /* FBL_DIAG_ENABLE_FLASHDRV_ROM */

/***********************************************************************************************************************
 *  DEFINES
 **********************************************************************************************************************/

#if defined( FBL_DIAG_FLASH_CODE_BASE_ADDR )
/* Allow to override the flashCode base address for certain platforms.
 * Example: For word-addressed platforms the download address of the flash driver is going to be virtual, i.e. twice
 *          the physical address. For those platforms the base address can be overwritten in a user configuration file. */
#else
# define FBL_DIAG_FLASH_CODE_BASE_ADDR    ((tFblAddress)flashCode)
#endif

#if defined( FBL_ENABLE_UNALIGNED_DATA_TRANSFER )
   /* Report full diagnostic buffer size */
# define FBL_DIAG_RESPONSE_BUFFER_SIZE FBL_DIAG_BUFFER_LENGTH
#else
   /* Calculate buffer size so that a multiple of the diagnostic bufffer size + 2 is reported */
# define FBL_DIAG_RESPONSE_BUFFER_SIZE ((((FBL_DIAG_SEGMENT_SIZE - 1u) ^ 0xFFFFFFFFu) & (FBL_DIAG_BUFFER_LENGTH - 2u)) + 2u)
#endif /* FBL_ENABLE_UNALIGNED_DATA_TRANSFER */

#if( FBL_DIAG_RESPONSE_BUFFER_SIZE >= 0x1000000u )
# define FBL_DIAG_RESPONSE_BUFFER_LFI 4u
#elif( FBL_DIAG_RESPONSE_BUFFER_SIZE >= 0x10000u )
# define FBL_DIAG_RESPONSE_BUFFER_LFI 3u
#else
# define FBL_DIAG_RESPONSE_BUFFER_LFI 2u
#endif

/* Overwrite the supported session and security level for the routines if not defined explicitly by the user */
#if defined( FBL_DIAG_ENABLE_ROUTINE_BACKUP )
# if !defined( kFblDiagRoutineBackupSessionMask )
#  define kFblDiagRoutineBackupSessionMask   (kFblDiagOptionSessionProgramming | kFblDiagOptionSecuredService)
# endif
#endif /* FBL_DIAG_ENABLE_ROUTINE_BACKUP */
#if defined( FBL_DIAG_ENABLE_ROUTINE_ACTIVATE_SOFTWARE )
# if !defined( kFblDiagRoutineActivateSoftwareSessionMask )
#  define kFblDiagRoutineActivateSoftwareSessionMask   (kFblDiagOptionSessionProgramming | kFblDiagOptionSecuredService)
# endif
#endif /* FBL_DIAG_ENABLE_ROUTINE_ACTIVATE_SOFTWARE */
#if defined( FBL_DIAG_ENABLE_ROUTINE_ROLLBACK )
# if !defined( kFblDiagRoutineRollbackSessionMask )
#  define kFblDiagRoutineRollbackSessionMask   (kFblDiagOptionSessionProgramming | kFblDiagOptionSecuredService)
# endif
#endif /* FBL_DIAG_ENABLE_ROUTINE_ROLLBACK */

/***********************************************************************************************************************
 *  State handling
 **********************************************************************************************************************/
/* Download sequence states */
#define FblDiagSetSecurityKeyAllowed()        SetFblDiagState( kFblDiagStateSecurityKeyAllowed )
#define FblDiagClrSecurityKeyAllowed()        ClrFblDiagState( kFblDiagStateSecurityKeyAllowed )
#define FblDiagSetSecurityUnlock()            SetFblDiagState( kFblDiagStateSecurityUnlock )
#define FblDiagClrSecurityUnlock()            ClrFblDiagState( kFblDiagStateSecurityUnlock )
#define FblDiagSetFingerprintValid()          SetFblDiagState( kFblDiagStateFingerprintValid )
#define FblDiagClrFingerprintValid()          ClrFblDiagState( kFblDiagStateFingerprintValid )
#define FblDiagSetEraseSucceeded()            SetFblDiagState( kFblDiagStateEraseSucceeded )
#define FblDiagClrEraseSucceeded()            ClrFblDiagState( kFblDiagStateEraseSucceeded )
#define FblDiagSetTransferDataAllowed()       SetFblDiagState( kFblDiagStateTransferDataAllowed )
#define FblDiagClrTransferDataAllowed()       ClrFblDiagState( kFblDiagStateTransferDataAllowed )
#define FblDiagSetTransferDataSucceeded()     SetFblDiagState( kFblDiagStateTransferDataSucceeded )
#define FblDiagClrTransferDataSucceeded()     ClrFblDiagState( kFblDiagStateTransferDataSucceeded )
#define FblDiagSetChecksumAllowed()           SetFblDiagState( kFblDiagStateChecksumAllowed )
#define FblDiagClrChecksumAllowed()           ClrFblDiagState( kFblDiagStateChecksumAllowed )
#define FblDiagSetFlashDriverPresent()        SetFblDiagState( kFblDiagStateFlashDriverPresent )
#define FblDiagClrFlashDriverPresent()        ClrFblDiagState( kFblDiagStateFlashDriverPresent )
#define FblDiagSetInternalFlashDriverUsed()   SetFblDiagState( kFblDiagStateInternalFlashDriverUsed )
#define FblDiagClrInternalFlashDriverUsed()   ClrFblDiagState( kFblDiagStateInternalFlashDriverUsed )

/***********************************************************************************************************************
 *  Local constants
 **********************************************************************************************************************/
#define kDiagInitSequenceNum                          ((vuint8) 0x01u)
#if defined( FBL_DIAG_ENABLE_BACKUP_BEFORE_ERASE )
# define kDiagEraseMemoryBackupBeforeEraseDone        ((vuint8) 0x01u)
# define kDiagEraseMemoryBackupBeforeEraseNotDone     ((vuint8) 0x02u)
#endif /* FBL_DIAG_ENABLE_BACKUP_BEFORE_ERASE */

#if defined( FBL_DIAG_ENABLE_FLASHDRV_ROM )
# if !defined( FLASH_DRIVER_INIT_DATA )
/** Initialization data for default flash driver. If additional drivers should be initialized, please overwrite macro. */
#  define FLASH_DRIVER_INIT_DATA {{flashDrvBlk0, flashCode, FLASHDRV_BLOCK0_LENGTH, FLASHDRV_DECRYPTVALUE}}
# endif
#endif /* FBL_DIAG_ENABLE_FLASHDRV_ROM */

/***********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

#define FBLDIAG_START_SEC_CODE
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_MemMap */

/* Diagnostic service help functions */
static void FblDiagSessionControlParamInit(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen);
static vuint8 FblDiagDownloadCheck(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen);

/* Erase help functions */
static tFblResult FblDiagEraseBlock( V_MEMRAM1 tBlockDescriptor V_MEMRAM2 V_MEMRAM3 *pBlockDescriptor );
static tFblResult FblDiagCheckErasePreconditions(V_MEMRAM1 vuint8 V_MEMRAM2 V_MEMRAM3 * pbDiagData,
                                                 V_MEMRAM1 tFblAddress V_MEMRAM2 V_MEMRAM3 * pEraseAddress,
                                                 V_MEMRAM1 tFblLength V_MEMRAM2 V_MEMRAM3 * pEraseLength);
static tFblResult FblDiagCheckProgAttemptCounter(V_MEMRAM1 tBlockDescriptor V_MEMRAM2 V_MEMRAM3 *pBlockDescriptor);
static tFblResult FblDiagPrepareFlashDriver( void );

#if defined( FBL_DIAG_ENABLE_ROUTINE_BACKUP ) ||  defined( FBL_DIAG_ENABLE_ROUTINE_ACTIVATE_SOFTWARE ) || defined( FBL_DIAG_ENABLE_ROUTINE_ROLLBACK )
/* OTA Download config routine help functions */
static tFblResult FblDiagPartitionHandlingPreconditions(void);
static tFblResult FblDiagPartitionHandlingPostconditions(void);
#endif /* FBL_DIAG_ENABLE_ROUTINE_BACKUP || FBL_DIAG_ENABLE_ROUTINE_ACTIVATE_SOFTWARE || FBL_DIAG_ENABLE_ROUTINE_ROLLBACK */
#if defined( FBL_DIAG_ENABLE_ROUTINE_BACKUP ) ||  defined( FBL_DIAG_ENABLE_ROUTINE_ACTIVATE_SOFTWARE ) || \
     defined( FBL_DIAG_ENABLE_ROUTINE_ROLLBACK ) || defined( FBL_DIAG_ENABLE_BACKUP_BEFORE_ERASE ) || \
     ( FBL_DIAG_DOWNLOAD_TARGET == FBL_DIAG_DOWNLOAD_TARGET_INACTIVE_PARTITION )
static tFblResult FblDiagCheckPartitionValidity(vOtaM_PartitionRoleType partIdByRole);
#endif /* FBL_DIAG_ENABLE_ROUTINE_BACKUP || FBL_DIAG_ENABLE_ROUTINE_ACTIVATE_SOFTWARE ||
           FBL_DIAG_ENABLE_ROUTINE_ROLLBACK ||FBL_DIAG_ENABLE_BACKUP_BEFORE_ERASE ||
           FBL_DIAG_DOWNLOAD_TARGET == FBL_DIAG_DOWNLOAD_TARGET_INACTIVE_PARTITION */
/* Request download help functions */
static tFblResult FblDiagCheckRequestDownloadPreconditions(V_MEMRAM1 vuint8 V_MEMRAM2 V_MEMRAM3 * pbDiagData,
                                                           V_MEMRAM1 tFblMemSegmentInfo V_MEMRAM2 V_MEMRAM3 * pSegmentInfo);
#if defined( FBL_DIAG_ENABLE_FLASHDRV_DOWNLOAD )
static tFblResult FblDiagCheckForFlashDriverDownload(V_MEMRAM1 tFblMemSegmentInfo V_MEMRAM2 V_MEMRAM3 * pSegmentInfo);
static tFblResult FblDiagCheckFlashDriverDownload(V_MEMRAM1 tFblMemSegmentInfo V_MEMRAM2 V_MEMRAM3 * pSegmentInfo);
#endif /* FBL_DIAG_ENABLE_FLASHDRV_DOWNLOAD */
static tFblResult FblDiagCheckFlashMemoryDownload(V_MEMRAM1 tFblMemSegmentInfo V_MEMRAM2 V_MEMRAM3 * pSegmentInfo);
static tFblResult FblDiagPrepareFirstDownloadSegment(V_MEMRAM1 tFblMemBlockInfo V_MEMRAM2 V_MEMRAM3 * pBlockInfo,
                                                     V_MEMRAM1 tFblMemSegmentInfo V_MEMRAM2 V_MEMRAM3 * pSegmentInfo,
                                                     vuint8 tempBlockNr);
#if defined( FBL_MEM_ENABLE_STREAM_OUTPUT )
static tFblResult FblDiagInitDeltaDownload(V_MEMRAM1 tFblMemSegmentInfo V_MEMRAM2 V_MEMRAM3 * pSegmentInfo);
#endif /* FBL_MEM_ENABLE_STREAM_OUTPUT */

/* NRC handler functions */
static tFblResult FblDiagProcessSubfunctionNrc(vuint32 serviceErrorMask);
static tFblResult FblDiagProcessServiceNrc(vuint32 serviceErrorMask);
static tFblResult FblDiagProcessRoutineNrc(vuint32 serviceErrorMask);

/* Session handling */
static tFblResult FblDiagDefaultSessionMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen);
static tFblResult FblDiagExtendedSessionMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen);
static tFblResult FblDiagProgrammingSessionMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen);
static tFblResult FblDiagTesterPresentMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen);

/* Reset */
static tFblResult FblDiagEcuResetMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen);

/* DID handling */
static tFblResult FblDiagDataByIdLengthCheck(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen);
static tFblResult FblDiagReadDataByIdMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen);
static tFblResult FblDiagWriteDataByIdMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen);

/* Security access */
static tFblResult FblDiagSecAccessSeedMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen);
static tFblResult FblDiagSecAccessKeyMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen);

/* Communication control / DTC handling */
static tFblResult FblDiagCommCtrlMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen);
static tFblResult FblDiagControlDTCMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen);

/* Routine control */
static tFblResult FblDiagRCStartCsumMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen);
#if defined( FBL_DIAG_ENABLE_CHECK_PROGRAMMING_PRECONDITIONS )
static tFblResult FblDiagRCStartCheckProgPreCondMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen);
#endif /* FBL_DIAG_ENABLE_CHECK_PROGRAMMING_PRECONDITIONS */
#if defined( FBL_ENABLE_STAY_IN_BOOT )
static tFblResult FblDiagRCStartForceBootModeMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen);
#endif /* FBL_ENABLE_STAY_IN_BOOT */
static tFblResult FblDiagRCStartEraseLengthCheck(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen);
static tFblResult FblDiagRCStartEraseMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen);
static tFblResult FblDiagRCStartCheckProgDepMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen);
#if defined( FBL_DIAG_ENABLE_ROUTINE_BACKUP )
static tFblResult FblDiagRCStartBackupMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen);
#endif /* FBL_DIAG_ENABLE_ROUTINE_BACKUP */
#if defined( FBL_DIAG_ENABLE_ROUTINE_ACTIVATE_SOFTWARE )
static tFblResult FblDiagRCStartActivateSoftwareMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen);
#endif /* FBL_DIAG_ENABLE_ROUTINE_ACTIVATE_SOFTWARE */
#if defined( FBL_DIAG_ENABLE_ROUTINE_ROLLBACK )
static tFblResult FblDiagRCStartRollbackMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen);
#endif /* FBL_DIAG_ENABLE_ROUTINE_ROLLBACK */

/* Data transfer */
static tFblResult FblDiagRequestDownloadLengthCheck(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen);
static tFblResult FblDiagRequestDownloadMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen);
static tFblResult FblDiagTransferDataLengthCheck(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen);
static tFblResult FblDiagTransferDataMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen);
static tFblResult FblDiagReqTransferExitMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen);

/* Service pre-handler functions */
static tFblResult FblDiagDefaultPreHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen);

#define FBLDIAG_STOP_SEC_CODE
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_MemMap */

/***********************************************************************************************************************
 *  LOCAL CONSTANTS
 **********************************************************************************************************************/

#define FBLDIAG_START_SEC_CONST
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_MemMap */

#if defined( FBL_DIAG_ENABLE_FLASHDRV_ROM )
/** List of flash driver source and destination buffers to be initialized. */ /* PRQA S 3218 1 */ /* MD_FblDiag_3218 */
V_MEMROM0 static V_MEMROM1 tFlashDriverInitData V_MEMROM2 kFlashDriverInitData[] = FLASH_DRIVER_INIT_DATA;
#endif /* FBL_DIAG_ENABLE_FLASHDRV_ROM */

#define FBLDIAG_STOP_SEC_CONST
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_MemMap */

/***********************************************************************************************************************
 *  LOCAL DATA
 **********************************************************************************************************************/

#define FBLDIAG_START_SEC_VAR
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_MemMap */

/** Current block sequence counter */
V_MEMRAM0 static V_MEMRAM1 vuint8               V_MEMRAM2      currentSequenceCnt;
#if defined( FBL_ENABLE_SEC_ACCESS_DELAY )
/** Invalid key counter */
V_MEMRAM0 static V_MEMRAM1 vuint8               V_MEMRAM2      secSendKeyInvalid;   /* PRQA S 3218 */ /* MD_FblDiag_3218 */
#endif

/* Segment handling variables */
/** Verification information to be transmitted to security module */
V_MEMRAM0 static V_MEMRAM1 SecM_VerifyParamType       V_MEMRAM2 verifyParam;
/** Download segment information. Used for gap fill and data verification. */
V_MEMRAM0 static V_MEMRAM1 FL_SegmentInfoType         V_MEMRAM2 downloadSegments[SWM_DATA_MAX_NOAR];  /* PRQA S 3218 */ /* MD_FblDiag_3218 */
#if defined( FBL_MEM_ENABLE_VERIFY_INPUT )
/** Verification information to be transmitted to security module - input verification */
V_MEMRAM0 static V_MEMRAM1 SecM_SignatureParamType    V_MEMRAM2 inputSigParam; /* PRQA S 3218 */ /* MD_FblDiag_3218 */
/** Length of already verified data */
V_MEMRAM0 static V_MEMRAM1 vuint32                    V_MEMRAM2 inputSigDataLength;  /* PRQA S 3218 */ /* MD_FblDiag_3218 */
#endif /* FBL_MEM_ENABLE_VERIFY_INPUT */
#if defined( FBL_MEM_ENABLE_VERIFY_PROCESSED )
/** Verification information to be transmitted to security module - processed verification */
V_MEMRAM0 static V_MEMRAM1 SecM_SignatureParamType    V_MEMRAM2 procSigParam; /* PRQA S 3218 */ /* MD_FblDiag_3218 */
/** Length of already verified data */
V_MEMRAM0 static V_MEMRAM1 vuint32                    V_MEMRAM2 procSigDataLength;  /* PRQA S 3218 */ /* MD_FblDiag_3218 */
#endif /* FBL_MEM_ENABLE_VERIFY_PROCESSED */
#if defined( FBL_MEM_ENABLE_VERIFY_PIPELINED )
/** Verification information to be transmitted to security module - pipelined verification */
V_MEMRAM0 static V_MEMRAM1 SecM_SignatureParamType    V_MEMRAM2 pipeSigParam; /* PRQA S 3218 */ /* MD_FblDiag_3218 */
/** Length of already verified data */
V_MEMRAM0 static V_MEMRAM1 vuint32                    V_MEMRAM2 pipeSigDataLength;  /* PRQA S 3218 */ /* MD_FblDiag_3218 */
#endif /* FBL_MEM_ENABLE_VERIFY_PIPELINED */

/* Download handling variables */
/** Transfer block information */
V_MEMRAM0 static V_MEMRAM1 tBlockDescriptor     V_MEMRAM2      downloadBlockDescriptor;
/** Number of remaining transfer bytes */
V_MEMRAM0 static V_MEMRAM1 tFblLength           V_MEMRAM2      transferRemainder;
/** Block sequence counter */
V_MEMRAM0 static V_MEMRAM1 vuint8               V_MEMRAM2      expectedSequenceCnt;

#if defined( FBL_DIAG_ENABLE_BACKUP_BEFORE_ERASE )
V_MEMRAM0 static V_MEMRAM1 vuint8               V_MEMRAM2      checkBackupBeforeErase;
#endif /* FBL_DIAG_ENABLE_BACKUP_BEFORE_ERASE */
#define FBLDIAG_STOP_SEC_VAR
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_MemMap */

/***********************************************************************************************************************
 *  Diagnostic handler function call table
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  Subfunction table configuration
 **********************************************************************************************************************/

#define FBLDIAG_START_SEC_CONST
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_MemMap */

/** Sub-function defintion for Default Session (01) */
V_MEMROM0 static V_MEMROM1 vuint8 V_MEMROM2 kFblDiagSubtableDsc_DefaultSession[] = { kDiagSubDefaultSession };
/** Sub-function defintion for Programming Session (02) */
V_MEMROM0 static V_MEMROM1 vuint8 V_MEMROM2 kFblDiagSubtableDsc_ProgSession[] = { kDiagSubProgrammingSession };
/** Sub-function defintion for Extended Session (03) */
V_MEMROM0 static V_MEMROM1 vuint8 V_MEMROM2 kFblDiagSubtableDsc_ExtendedSession[] = { kDiagSubExtendedDiagSession };

/** Sub-function definition for Diagnostic Session Control service (10) */
V_MEMROM0 static V_MEMROM1 tFblDiagServiceSubTable V_MEMROM2 kFblDiagSubtableSessionControl[] =
{
   /* Default Session (01) */
   {
      kFblDiagSubtableDsc_DefaultSession,
      (kFblDiagOptionSessionDefault | kFblDiagOptionSessionExtended | kFblDiagOptionSessionProgramming | kFblDiagOptionFunctionalRequest),
      kDiagRqlDiagnosticSessionControl,
      (tFblDiagLengthCheck)0u,
      &FblDiagDefaultSessionMainHandler
   },
   /* Programming Session (02) */
   {
      kFblDiagSubtableDsc_ProgSession,
      (kFblDiagOptionSessionExtended | kFblDiagOptionSessionProgramming | kFblDiagOptionFunctionalRequest),
      kDiagRqlDiagnosticSessionControl,
      (tFblDiagLengthCheck)0u,
      &FblDiagProgrammingSessionMainHandler
   },
   /* Extended Session (03) */
   {
      kFblDiagSubtableDsc_ExtendedSession,
      (kFblDiagOptionSessionDefault | kFblDiagOptionSessionExtended | kFblDiagOptionFunctionalRequest),
      kDiagRqlDiagnosticSessionControl,
      (tFblDiagLengthCheck)0u,
      &FblDiagExtendedSessionMainHandler
   }
};

/** Sub-function definition for Hard Reset sub-function (01) */
V_MEMROM0 static V_MEMROM1 vuint8 V_MEMROM2 kFblDiagSubtableEcuReset_HardReset[] = { kDiagSubHardReset };

/** Sub-function definition for ECU Reset service (11) */
V_MEMROM0 static V_MEMROM1 tFblDiagServiceSubTable V_MEMROM2 kFblDiagSubtableEcuReset[] =
{
   /* Hard Reset (01) */
   {
      kFblDiagSubtableEcuReset_HardReset,
      (kFblDiagOptionSessionDefault | kFblDiagOptionSessionExtended | kFblDiagOptionSessionProgramming | kFblDiagOptionFunctionalRequest),
      kDiagRqlEcuReset,
      (tFblDiagLengthCheck)0u,
      &FblDiagEcuResetMainHandler
   }
};

/** Sub-function definition for Request Seed sub-function (configurable) */
V_MEMROM0 static V_MEMROM1 vuint8 V_MEMROM2 kFblDiagSubtableSecAccess_Seed[] = { kFblDiagSubRequestSeed };
/** Sub-function definition for Send Key sub-function (configurable) */
V_MEMROM0 static V_MEMROM1 vuint8 V_MEMROM2 kFblDiagSubtableSecAccess_Key[] = { kFblDiagSubSendKey };

/** Sub-function definition for Security Access service (27) */
V_MEMROM0 static V_MEMROM1 tFblDiagServiceSubTable V_MEMROM2 kFblDiagSubtableSecAccess[] =
{
   /* Request Seed (configurable) */
   {
      kFblDiagSubtableSecAccess_Seed,
      (kFblDiagOptionSessionProgramming),
      kDiagRqlSecurityAccessSeed,
      (tFblDiagLengthCheck)0u,
      &FblDiagSecAccessSeedMainHandler
   },
   /* Send Key (configurable) */
   {
      kFblDiagSubtableSecAccess_Key,
      (kFblDiagOptionSessionProgramming),
      kDiagRqlSecurityAccessKey,
      (tFblDiagLengthCheck)0u,
      &FblDiagSecAccessKeyMainHandler
   }
};

/** Sub-function definition for EnableRxAndEnableTx sub-function (00) */
V_MEMROM0 static V_MEMROM1 vuint8 V_MEMROM2 kFblDiagSubtableCommControl_EnRxEnTx[] = { kDiagSubEnableRxAndTx };
/** Sub-function definition for Disable sub-function (configurable) */
V_MEMROM0 static V_MEMROM1 vuint8 V_MEMROM2 kFblDiagSubtableCommControl_Disable[] = { FBL_DIAG_COMMUNICATION_CONTROL_TYPE };

/** Sub-function defintion for Communication Control service (28) */
V_MEMROM0 static V_MEMROM1 tFblDiagServiceSubTable V_MEMROM2 kFblDiagSubtableCommControl[] =
{
   /* Enable Rx and Tx (00) */
   {
      kFblDiagSubtableCommControl_EnRxEnTx,
      (kFblDiagOptionSessionExtended | kFblDiagOptionFunctionalRequest),
      kDiagRqlCommunicationControl,
      (tFblDiagLengthCheck)0u,
      &FblDiagCommCtrlMainHandler
   },
   /* Disable communication (configurable) */
   {
      kFblDiagSubtableCommControl_Disable,
      (kFblDiagOptionSessionExtended | kFblDiagOptionFunctionalRequest),
      kDiagRqlCommunicationControl,
      (tFblDiagLengthCheck)0u,
      &FblDiagCommCtrlMainHandler
   }
};

/** Sub-function / RID definition for checksum verification (010202) */
V_MEMROM0 static V_MEMROM1 vuint8 V_MEMROM2 kFblDiagSubtableRC_StartChecksum[] = { kDiagSubStartRoutine, kDiagRoutineIdChecksumHigh, kDiagRoutineIdChecksumLow };
#if defined( FBL_DIAG_ENABLE_CHECK_PROGRAMMING_PRECONDITIONS )
/** Sub-function / RID definition for programming pre-condition check (010203) */
V_MEMROM0 static V_MEMROM1 vuint8 V_MEMROM2 kFblDiagSubtableRC_StartProgPreCond[] = { kDiagSubStartRoutine, kDiagRoutineIdCheckProgPreCondHigh, kDiagRoutineIdCheckProgPreCondLow };
#endif /* FBL_DIAG_ENABLE_CHECK_PROGRAMMING_PRECONDITIONS */
#if defined( FBL_ENABLE_STAY_IN_BOOT )
/** Sub-function / RID definition for force boot mode request (01F518) */
V_MEMROM0 static V_MEMROM1 vuint8 V_MEMROM2 kFblDiagSubtableRC_StartForceBoot[] = { kDiagSubStartRoutine, kDiagRoutineIdStayInBootHigh, kDiagRoutineIdStayInBootLow };
#endif /* FBL_ENABLE_STAY_IN_BOOT */
/** Sub-function / RID definition for erase memory request (01FF00) */
V_MEMROM0 static V_MEMROM1 vuint8 V_MEMROM2 kFblDiagSubtableRC_StartErase[] = { kDiagSubStartRoutine, kDiagRoutineIdEraseMemoryHigh, kDiagRoutineIdEraseMemoryLow };
#if defined( FBL_DIAG_ENABLE_ROUTINE_BACKUP )
/** Sub-function / RID definition for backup (01XXXX) */
V_MEMROM0 static V_MEMROM1 vuint8 V_MEMROM2 kFblDiagSubtableRC_StartBackup[] = { kDiagSubStartRoutine, kDiagRoutineIdBackupHigh, kDiagRoutineIdBackupLow };
#endif /* FBL_DIAG_ENABLE_ROUTINE_BACKUP */
#if defined( FBL_DIAG_ENABLE_ROUTINE_ACTIVATE_SOFTWARE )
/** Sub-function / RID definition for activate software (01XXXX) */
V_MEMROM0 static V_MEMROM1 vuint8 V_MEMROM2 kFblDiagSubtableRC_StartActivateSoftware[] = { kDiagSubStartRoutine, kDiagRoutineIdActivateSoftwareHigh, kDiagRoutineIdActivateSoftwareLow };
#endif /* FBL_DIAG_ENABLE_ROUTINE_ACTIVATE_SOFTWARE */
#if defined( FBL_DIAG_ENABLE_ROUTINE_ROLLBACK )
/** Sub-function / RID definition for rollback (01XXXX) */
V_MEMROM0 static V_MEMROM1 vuint8 V_MEMROM2 kFblDiagSubtableRC_StartRollback[] = { kDiagSubStartRoutine, kDiagRoutineIdRollbackHigh, kDiagRoutineIdRollbackLow };
#endif /* FBL_DIAG_ENABLE_ROUTINE_ROLLBACK */
/** Sub-function / RID definition for check programming dependencies request (01FF01) */
V_MEMROM0 static V_MEMROM1 vuint8 V_MEMROM2 kFblDiagSubtableRC_StartCheckProgDep[] = { kDiagSubStartRoutine, kDiagRoutineIdCheckProgDepHigh, kDiagRoutineIdCheckProgDepLow };

/** Sub-function / RID defintion for Routine Control service (31) */
V_MEMROM0 static V_MEMROM1 tFblDiagServiceSubTable V_MEMROM2 kFblDiagSubtableRoutine[] =
{
   /* Checksum verification (010202) */
   {
      kFblDiagSubtableRC_StartChecksum,
      (kFblDiagOptionSessionProgramming | kFblDiagOptionSecuredService),
      kDiagRqlRoutineControlCheckRoutine,
      (tFblDiagLengthCheck)0u,
      &FblDiagRCStartCsumMainHandler
   },
#if defined( FBL_DIAG_ENABLE_CHECK_PROGRAMMING_PRECONDITIONS )
   /* Check programming pre-conditions (010203) */
   {
      kFblDiagSubtableRC_StartProgPreCond,
      (kFblDiagOptionSessionExtended | kFblDiagOptionFunctionalRequest),
      kDiagRqlRoutineControlProgPreCond,
      (tFblDiagLengthCheck)0u,
      &FblDiagRCStartCheckProgPreCondMainHandler
   },
#endif /* FBL_DIAG_ENABLE_CHECK_PROGRAMMING_PRECONDITIONS */
#if defined( FBL_ENABLE_STAY_IN_BOOT )
   /* Force boot mode request (01F518) */
   {
      kFblDiagSubtableRC_StartForceBoot,
      (kFblDiagOptionSessionDefault | kFblDiagOptionSessionExtended | kFblDiagOptionSessionProgramming),
      kDiagRqlRoutineControlForceBoot,
      (tFblDiagLengthCheck)0u,
      &FblDiagRCStartForceBootModeMainHandler
   },
#endif /* FBL_ENABLE_STAY_IN_BOOT */
   /* Erase memory request (01FF00) */
   {
      kFblDiagSubtableRC_StartErase,
      (kFblDiagOptionSessionProgramming | kFblDiagOptionSecuredService),
      kDiagRqlRoutineControlEraseRoutine,
      &FblDiagRCStartEraseLengthCheck,
      &FblDiagRCStartEraseMainHandler
   },
#if defined( FBL_DIAG_ENABLE_ROUTINE_BACKUP )
   /* Routine Backup (01XXXX) */
   {
      kFblDiagSubtableRC_StartBackup,
      kFblDiagRoutineBackupSessionMask,
      kDiagRqlRoutineControlBackup,
      (tFblDiagLengthCheck)0u,
      &FblDiagRCStartBackupMainHandler
   },
#endif /* FBL_DIAG_ENABLE_ROUTINE_BACKUP */
#if defined( FBL_DIAG_ENABLE_ROUTINE_ACTIVATE_SOFTWARE )
   /* Routine Activate Software (01XXXX) */
   {
      kFblDiagSubtableRC_StartActivateSoftware,
      kFblDiagRoutineActivateSoftwareSessionMask,
      kDiagRqlRoutineControlActivateSoftware,
      (tFblDiagLengthCheck)0u,
      &FblDiagRCStartActivateSoftwareMainHandler
   },
#endif /* FBL_DIAG_ENABLE_ROUTINE_ACTIVATE_SOFTWARE */
#if defined( FBL_DIAG_ENABLE_ROUTINE_ROLLBACK )
   /* Routine Rollback (01XXXX) */
   {
      kFblDiagSubtableRC_StartRollback,
      kFblDiagRoutineRollbackSessionMask,
      kDiagRqlRoutineControlRollback,
      (tFblDiagLengthCheck)0u,
      &FblDiagRCStartRollbackMainHandler
   },
#endif /* FBL_DIAG_ENABLE_ROUTINE_ROLLBACK */
   /* Check programming dependencies (01FF01) */
   {
      kFblDiagSubtableRC_StartCheckProgDep,
      (kFblDiagOptionSessionProgramming | kFblDiagOptionSecuredService),
      kDiagRqlRoutineControlCheckProgDep,
      (tFblDiagLengthCheck)0u,
      &FblDiagRCStartCheckProgDepMainHandler
   }
};

/** Sub-function definition for Zero sub-function (00) */
V_MEMROM0 static V_MEMROM1 vuint8 V_MEMROM2 kFblDiagSubtableTesterPresent_ZeroSubfunction[] = { kDiagSubTesterPresent };

/** Sub-function definition for Tester Present service (3E) */
V_MEMROM0 static V_MEMROM1 tFblDiagServiceSubTable V_MEMROM2 kFblDiagSubtableTesterPresent[] =
{
   /* Zero sub-function (00) */
   {
      kFblDiagSubtableTesterPresent_ZeroSubfunction,
      (kFblDiagOptionSessionDefault | kFblDiagOptionSessionExtended | kFblDiagOptionSessionProgramming | kFblDiagOptionFunctionalRequest),
      kDiagRqlTesterPresent,
      (tFblDiagLengthCheck)0u,
      &FblDiagTesterPresentMainHandler
   }
};

/** Sub-function definition for Control DTC - On sub-function (01) */
V_MEMROM0 static V_MEMROM1 vuint8 V_MEMROM2 kFblDiagSubtableControlDtc_OnSubfunction[] = { kDiagSubDtcOn };
/** Sub-function definition for Control DTC - Off sub-function (02) */
V_MEMROM0 static V_MEMROM1 vuint8 V_MEMROM2 kFblDiagSubtableControlDtc_OffSubfunction[] = { kDiagSubDtcOff };

/** Sub-function definition for Control DTC service (85) */
V_MEMROM0 static V_MEMROM1 tFblDiagServiceSubTable V_MEMROM2 kFblDiagSubtableControlDtc[] =
{
   /* On sub-function (01) */
   {
      kFblDiagSubtableControlDtc_OnSubfunction,
      (kFblDiagOptionSessionExtended | kFblDiagOptionFunctionalRequest),
      kDiagRqlControlDTCSetting,
      (tFblDiagLengthCheck)0u,
      &FblDiagControlDTCMainHandler
   },
   /* Off sub-function (02) */
   {
      kFblDiagSubtableControlDtc_OffSubfunction,
      (kFblDiagOptionSessionExtended | kFblDiagOptionFunctionalRequest),
      kDiagRqlControlDTCSetting,
      (tFblDiagLengthCheck)0u,
      &FblDiagControlDTCMainHandler
   }
};

/***********************************************************************************************************************
 *  Main service table configuration
 **********************************************************************************************************************/

/** Table of supported diagnostic servcies */
V_MEMROM0 V_MEMROM1 tFblDiagServiceTable V_MEMROM2 kFblDiagServiceTable[] =
{
   /* Diagnostic Session Control (10) */
   {
      kDiagSidDiagnosticSessionControl,
      (kFblDiagOptionSessionDefault | kFblDiagOptionSessionExtended | kFblDiagOptionSessionProgramming | kFblDiagOptionServiceIsSubfunction | kFblDiagOptionFunctionalRequest),
      kDiagRqlDiagnosticSessionControl,
      (tFblDiagLengthCheck)0u,
      ARRAY_SIZE(kFblDiagSubtableSessionControl),
      ARRAY_SIZE(kFblDiagSubtableDsc_DefaultSession),
      kFblDiagSubtableSessionControl,
      &FblDiagDefaultPreHandler,
      (tFblDiagMainHandler)0u,
      &FblDiagProcessSubfunctionNrc,
      &FblDiagDefaultPostHandler
   },
   /* ECU Reset (11) */
   {
      kDiagSidEcuReset,
      (kFblDiagOptionSessionDefault | kFblDiagOptionSessionExtended | kFblDiagOptionSessionProgramming | kFblDiagOptionServiceIsSubfunction | kFblDiagOptionFunctionalRequest),
      kDiagRqlEcuReset,
      (tFblDiagLengthCheck)0u,
      ARRAY_SIZE(kFblDiagSubtableEcuReset),
      ARRAY_SIZE(kFblDiagSubtableEcuReset_HardReset),
      kFblDiagSubtableEcuReset,
      &FblDiagDefaultPreHandler,
      (tFblDiagMainHandler)0u,
      &FblDiagProcessSubfunctionNrc,
      &FblDiagDefaultPostHandler
   },
   /* Read Data by Identifier (22) */
   {
      kDiagSidReadDataByIdentifier,
      (kFblDiagOptionSessionDefault | kFblDiagOptionSessionExtended | kFblDiagOptionSessionProgramming | kFblDiagOptionFunctionalRequest),
      kDiagRqlReadDataByIdentifier,
      &FblDiagDataByIdLengthCheck,
      0u,
      0u,
      (tFblDiagServiceSubTable*)V_NULL,
      &FblDiagDefaultPreHandler,
      &FblDiagReadDataByIdMainHandler,
      &FblDiagProcessServiceNrc,
      &FblDiagDefaultPostHandler
   },
   /* Security Access (27) */
   {
      kDiagSidSecurityAccess,
      (kFblDiagSecurityAccessSessionMask | kFblDiagOptionServiceIsSubfunction),
      kDiagRqlServiceWithSubfunction,
      (tFblDiagLengthCheck)0u,
      ARRAY_SIZE(kFblDiagSubtableSecAccess),
      ARRAY_SIZE(kFblDiagSubtableSecAccess_Seed),
      kFblDiagSubtableSecAccess,
      &FblDiagDefaultPreHandler,
      (tFblDiagMainHandler)0u,
      &FblDiagProcessSubfunctionNrc,
      &FblDiagDefaultPostHandler
   },
   /* Communication Control (28) */
   {
      kDiagSidCommunicationControl,
      (kFblDiagOptionSessionExtended | kFblDiagOptionServiceIsSubfunction | kFblDiagOptionFunctionalRequest),
      kDiagRqlServiceWithSubfunction,
      (tFblDiagLengthCheck)0u,
      ARRAY_SIZE(kFblDiagSubtableCommControl),
      ARRAY_SIZE(kFblDiagSubtableCommControl_EnRxEnTx),
      kFblDiagSubtableCommControl,
      &FblDiagDefaultPreHandler,
      (tFblDiagMainHandler)0u,
      &FblDiagProcessSubfunctionNrc,
      &FblDiagDefaultPostHandler
   },
   /* Write Data by Identifier (2E) */
   {
      kDiagSidWriteDataByIdentifier,
      (kFblDiagOptionSessionProgramming),
      kDiagRqlWriteDataByIdentifier,
      &FblDiagDataByIdLengthCheck,
      0u,
      0u,
      (tFblDiagServiceSubTable*)V_NULL,
      &FblDiagDefaultPreHandler,
      &FblDiagWriteDataByIdMainHandler,
      &FblDiagProcessServiceNrc,
      &FblDiagDefaultPostHandler
   },
   /* Routine Control (31) */
   {
      kDiagSidRoutineControl,
      (kFblDiagOptionSessionDefault | kFblDiagOptionSessionExtended | kFblDiagOptionSessionProgramming | kFblDiagOptionServiceIsSubfunction | kFblDiagOptionFunctionalRequest),
      kDiagRqlRoutineControl,
      (tFblDiagLengthCheck)0u,
      ARRAY_SIZE(kFblDiagSubtableRoutine),
      ARRAY_SIZE(kFblDiagSubtableRC_StartChecksum),
      kFblDiagSubtableRoutine,
      &FblDiagDefaultPreHandler,
      (tFblDiagMainHandler)0u,
      &FblDiagProcessRoutineNrc,
      &FblDiagDefaultPostHandler
   },
   /* Request Download (34) */
   {
      kDiagSidRequestDownload,
      (kFblDiagOptionSessionProgramming | kFblDiagOptionSecuredService),
      kDiagRqlRequestDownload,
      &FblDiagRequestDownloadLengthCheck,
      0u,
      0u,
      (tFblDiagServiceSubTable*)V_NULL,
      &FblDiagDefaultPreHandler,
      &FblDiagRequestDownloadMainHandler,
      &FblDiagProcessServiceNrc,
      &FblDiagDefaultPostHandler
   },
   /* Transfer Data (36) */
   {
      kDiagSidTransferData,
      (kFblDiagOptionSessionProgramming | kFblDiagOptionSecuredService),
      kDiagRqlTransferData,
      &FblDiagTransferDataLengthCheck,
      0u,
      0u,
      (tFblDiagServiceSubTable*)V_NULL,
      &FblDiagDefaultPreHandler,
      &FblDiagTransferDataMainHandler,
      &FblDiagProcessServiceNrc,
      &FblDiagDefaultPostHandler
   },
   /* Request Transfer Exit (37) */
   {
      kDiagSidRequestTransferExit,
      (kFblDiagOptionSessionProgramming | kFblDiagOptionSecuredService),
      kDiagRqlRequestTransferExit,
      (tFblDiagLengthCheck)0u,
      0u,
      0u,
      (tFblDiagServiceSubTable*)V_NULL,
      &FblDiagDefaultPreHandler,
      &FblDiagReqTransferExitMainHandler,
      &FblDiagProcessServiceNrc,
      &FblDiagDefaultPostHandler
   },
   /* Tester Present (3E) */
   {
      kDiagSidTesterPresent,
      (kFblDiagOptionSessionDefault | kFblDiagOptionSessionExtended | kFblDiagOptionSessionProgramming | kFblDiagOptionServiceIsSubfunction | kFblDiagOptionFunctionalRequest),
      kDiagRqlTesterPresent,
      (tFblDiagLengthCheck)0u,
      ARRAY_SIZE(kFblDiagSubtableTesterPresent),
      ARRAY_SIZE(kFblDiagSubtableTesterPresent_ZeroSubfunction),
      kFblDiagSubtableTesterPresent,
      &FblDiagDefaultPreHandler,
      (tFblDiagMainHandler)0u,
      &FblDiagProcessSubfunctionNrc,
      &FblDiagDefaultPostHandler
   },
   /* Control DTC (85) */
   {
      kDiagSidControlDTCSetting,
      (kFblDiagOptionSessionExtended | kFblDiagOptionFunctionalRequest | kFblDiagOptionServiceIsSubfunction),
      kDiagRqlServiceWithSubfunction,
      (tFblDiagLengthCheck)0u,
      ARRAY_SIZE(kFblDiagSubtableControlDtc),
      ARRAY_SIZE(kFblDiagSubtableControlDtc_OnSubfunction),
      kFblDiagSubtableControlDtc,
      &FblDiagDefaultPreHandler,
      (tFblDiagMainHandler)0u,
      &FblDiagProcessSubfunctionNrc,
      &FblDiagDefaultPostHandler
   }
};

/** Size of service table */
V_MEMROM0 V_MEMROM1 vuintx V_MEMROM2 kSizeOfServiceTable = ARRAY_SIZE(kFblDiagServiceTable);

#define FBLDIAG_STOP_SEC_CONST
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_MemMap */

/***********************************************************************************************************************
 *  Service support functions
 **********************************************************************************************************************/

#define FBLDIAG_START_SEC_CODE
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_MemMap */

/***********************************************************************************************************************
 *  FblDiagDownloadCheck
 **********************************************************************************************************************/
/*! \brief       Verify the downloaded data.
 *  \details     Uses the configured security module to verify if the download has been done correctly and
 *               the data is allowed to be downloaded. Also calculates CRC total if enabled.
 *  \pre         Logical block or flash driver has to be downloaded completely.
 *  \param[in]   pbDiagData Pointer to data in the diagBuffer (without SID).
 *  \param[in]   diagReqDataLen Length of data (without SID).
 *  \return      Verification result supplied by the security module.
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_MSR_Rule8.13 */
static vuint8 FblDiagDownloadCheck(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen)
{
   tFblMemBlockVerifyData verifyData;
   SecM_StatusType verifyErrorCode;
   vuint8 result;
   tFblMemRamData pVerificationData = V_NULL;
   vuintx checksumLength;
#if defined( FBL_DIAG_ENABLE_EMBEDDED_VERIFY_DATA )
   vuint8 checksumBuffer[kSecCRCLength + kSecSigLength];
# if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* Parameters not used: avoid compiler warning */ /* PRQA S 3112 2 */ /* MD_MSR_DummyStmt */
   (void)pbDiagData;
   (void)diagReqDataLen;
# endif
#endif /* FBL_DIAG_ENABLE_EMBEDDED_VERIFY_DATA */

#if !defined( FBL_DIAG_ENABLE_EMBEDDED_VERIFY_DATA )
   checksumLength = (vuintx)diagReqDataLen - 3u;
   pVerificationData = &pbDiagData[kDiagLocFmtRoutineStatus];
#else
   checksumLength = kSecCRCLength + kSecSigLength;

   if (ApplFblGetVerificationData((V_MEMRAM1 SecM_VerifyParamType V_MEMRAM2 V_MEMRAM3 *)&verifyParam,
      (V_MEMRAM1 vuint8 V_MEMRAM2 V_MEMRAM3 *)checksumBuffer,
      checksumLength) == kFblOk)
   {
      result = kDiagCheckVerificationOk;
      pVerificationData = checksumBuffer;
   }
   else
   {
      result = kDiagCheckVerificationFailed;
   }

   if (result == kDiagCheckVerificationOk)
#endif
   {
# if defined( FBL_MEM_ENABLE_VERIFY_INPUT )
      verifyData.verifyDataInput.length = (tFblLength)checksumLength;
      verifyData.verifyDataInput.data = pVerificationData;
# endif /* FBL_MEM_ENABLE_VERIFY_INPUT */
# if defined( FBL_MEM_ENABLE_VERIFY_PROCESSED )
      verifyData.verifyDataProcessed.length = (tFblLength)checksumLength;
      verifyData.verifyDataProcessed.data = pVerificationData;
# endif /* FBL_MEM_ENABLE_VERIFY_PROCESSED */
# if defined( FBL_MEM_ENABLE_VERIFY_PIPELINED )
      verifyData.verifyDataPipe.length = (tFblLength)checksumLength;
      verifyData.verifyDataPipe.data = pVerificationData;
# endif /* FBL_MEM_ENABLE_VERIFY_PIPELINED */

# if defined( FBL_MEM_ENABLE_VERIFY_OUTPUT )
      verifyData.verifyDataOutput.length = (tFblLength)checksumLength;
      verifyData.verifyDataOutput.data = pVerificationData;
# endif /* FBL_MEM_ENABLE_VERIFY_OUTPUT */
   }

   /* Call verification routine */
   if (FblMemBlockVerify(&verifyData, &verifyErrorCode) != kFblMemStatus_Ok)
   {
      result = kDiagCheckVerificationFailed;
   }
   else
   {
      result = kDiagCheckVerificationOk;
   }

   if (result == kDiagCheckVerificationOk)
   {
      if (FblDiagGetTransferTypeFlash())
      {
         (void)FblRealTimeSupport();
#if defined( SEC_ENABLE_CRC_TOTAL )
         (void)ApplFblWriteCRCTotal(&downloadBlockDescriptor,
                                    (vuint32)verifyParam.blockStartAddress,
                                    (vuint32)verifyParam.blockLength,
                                    (vuint32)verifyParam.crcTotal
                                   );
#endif /* SEC_ENABLE_CRC_TOTAL */

         /* Call validation function to inform application */
         if (ApplFblValidateBlock(downloadBlockDescriptor) != kFblOk)
         {
            result = kDiagCheckVerificationFailed;
         }
         else
         {
            result = ApplFblUpdateBlockMac(&downloadBlockDescriptor, &verifyParam.segmentList);
         }

         if (result == kFblOk)
         {
            /* Increment programming success counter */
            (void)ApplFblIncProgCounts(downloadBlockDescriptor);
         }

      }
#if defined( FBL_DIAG_ENABLE_FLASHDRV_DOWNLOAD )
      else /* Download of flash driver */
      {
         /* Send response pending for flash driver initialization */
         DiagExRCRResponsePending(kForceSendRpIfNotInProgress);

         /* Mark flash driver as present */
         FblDiagSetFlashDriverPresent();

         if (FblDiagPrepareFlashDriver() == kFblOk)
         {
            /* Expect download of application next */
            FblDiagSetTransferTypeFlash();
         }
         else
         {
            /* Flash driver initialization failed */
            result = kDiagCheckVerificationFailed;
         }
      }
#endif /* FBL_DIAG_ENABLE_FLASHDRV_DOWNLOAD */
   }

   return result;
}

/***********************************************************************************************************************
 *  FblDiagEraseBlock
 **********************************************************************************************************************/
/*! \brief       Erase selected block
 *  \details     Prepare data structure for FblLib_Mem and erase block
 *  \pre         Flash driver initialized, erase pre-conditions have been checked
 *  \param[in]   pBlockDescriptor Pointer to block descriptor structure
 *  \return      Erase result
 **********************************************************************************************************************/
static tFblResult FblDiagEraseBlock( V_MEMRAM1 tBlockDescriptor V_MEMRAM2 V_MEMRAM3 *pBlockDescriptor )
{
   tFblResult result;
   tFblMemBlockInfo blockInfo;

   /* Initialize download block descriptor continued */
   result = FblLbtGetBlockDescriptorByNr(pBlockDescriptor->blockNr, pBlockDescriptor);

   if (result == kFblOk)
   {
      /* Initialize block structure for FblLib_Mem */
      blockInfo.targetAddress = pBlockDescriptor->blockStartAddress;
      blockInfo.targetLength = pBlockDescriptor->blockLength;
      blockInfo.logicalAddress = pBlockDescriptor->blockStartAddress;
      blockInfo.logicalLength = pBlockDescriptor->blockLength;

      /* Start erase by FblLib_Mem */
      if (FblMemBlockEraseIndication(&blockInfo) == kFblMemStatus_Ok)
      {
         /* Erase succeeded */
         FblDiagSetEraseSucceeded();
         /* After erase, the first segment of a logical block will be downloaded */
         /* Adjust the size of the logical block according to presence pattern size. */
         (void)ApplFblAdjustLbtBlockData(pBlockDescriptor);

         /* Initialize segment counter */
         FblDiagSegmentInit();
      }
      else
      {
         /* Erase failed */
         result = kFblFailed;
      }
   }

   if (result != kFblOk)
   {
      /* Clear state */
      FblDiagClrEraseSucceeded();
   }

   return result;
}

/***********************************************************************************************************************
 *  FblDiagCheckErasePreconditions
 **********************************************************************************************************************/
/*! \brief         Verify that all erase preconditions are fulfilled
 *  \pre           Fingerprint is available, memory driver initialized.
 *  \param[in,out] pbDiagData Pointer to the data in the diagBuffer (without SID)
 *  \param[out]    pEraseAddress Start address of erase area
 *  \param[out]    pEraseLength Length of erase area
 *  \return        kFblOk: Preconditions fulfilled; kFblFailed: Preconditions not fulfilled
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_MSR_Rule8.13 */
static tFblResult FblDiagCheckErasePreconditions(V_MEMRAM1 vuint8 V_MEMRAM2 V_MEMRAM3 * pbDiagData,
                                                 V_MEMRAM1 tFblAddress V_MEMRAM2 V_MEMRAM3 * pEraseAddress,
                                                 V_MEMRAM1 tFblLength V_MEMRAM2 V_MEMRAM3 * pEraseLength)
{
   tFblResult result;

   vuint8 addrFormat;
   vuint8 lengthFormat;

   /* Initialize variables */
   *pEraseAddress = 0u;
   *pEraseLength = 0u;

   /* Get address and length format from request */
   addrFormat = (vuint8)(pbDiagData[kDiagLocFmtRoutineAlfi] & 0x0Fu);
   lengthFormat = (vuint8)((pbDiagData[kDiagLocFmtRoutineAlfi] & 0xF0u) >> 4u);

   /* Check address and length format */
   if ((addrFormat == 0u) || (lengthFormat == 0u) || (addrFormat > 4u) || (lengthFormat > 4u))
   {
      DiagNRCRequestOutOfRange();
      result = kFblFailed;
   }
   /* Check status flags */
   else if (!FblDiagGetFingerprintValid())
   {
      DiagNRCConditionsNotCorrect();
      result = kFblFailed;
   }
   else if (FblDiagPrepareFlashDriver() != kFblOk)
   {
      DiagNRCConditionsNotCorrect();
      result = kFblFailed;
   }
   else
   {
      /* Get memory address and length */
      *pEraseAddress = FblMemGetInteger(addrFormat, &pbDiagData[kDiagLocFmtStartAddress]);
      *pEraseLength = FblMemGetInteger(lengthFormat, &pbDiagData[kDiagLocFmtStartAddress + addrFormat]);

      result = kFblOk;
   }

   return result;
}

/***********************************************************************************************************************
 *  FblDiagPrepareFlashDriver
 **********************************************************************************************************************/
/*! \brief         Prepare flash driver for usage
 *  \return        Preparation result
 **********************************************************************************************************************/
/* PRQA S 6080 1 */ /* MD_MSR_STMIF */
static tFblResult FblDiagPrepareFlashDriver( void )
{
   tFblResult result;
   tFlashErrorCode flashErrorCode;
#if defined( FBL_DIAG_ENABLE_FLASHDRV_ROM )
   vuintx flashDriverIndex;
   vuint32 byteIndex;
   V_MEMROM1 tFlashDriverInitData V_MEMROM2 V_MEMROM3 * flashDriverInitData;
#endif /* FBL_DIAG_ENABLE_FLASHDRV_ROM */

   /* Initialize variable */
   result = kFblFailed;

   if (!FblDiagGetMemDriverInitialized())
   {
#if defined( FBL_DIAG_ENABLE_FLASHDRV_ROM )
      /* Use flash driver from image in case no driver has been downloaded */
      if (!FblDiagGetFlashDriverPresent())
      {
         /* Copy data of all configured flash drivers */
         for (flashDriverIndex = 0u; flashDriverIndex < ARRAY_SIZE(kFlashDriverInitData); flashDriverIndex++)
         {
            flashDriverInitData = &kFlashDriverInitData[flashDriverIndex];

            /* Check if target buffer is big enough for data */
            if (flashDriverInitData->copySize > (vuint32)FLASH_SIZE)
            {
               /* Data doesn't fit into buffer. Assumes that all buffers are configured to the same size
                * if more than one buffer is used.
               */
               FblErrStatSetError(FBL_ERR_FLASHCODE_EXCEEDS_MEMORY);
               break;
            }

            for (byteIndex = 0u; byteIndex < flashDriverInitData->copySize; byteIndex++)
            {
               flashDriverInitData->destBuffer[byteIndex] = (flashDriverInitData->decryptValue ^ flashDriverInitData->sourceBuffer[byteIndex]);
               if ((byteIndex & 0xFFu) == 0x00u)
               {
                  FblLookForWatchdogVoid();
               }
            }
         }

         /* Check if all flash drivers have been copied */
         if (flashDriverIndex == ARRAY_SIZE(kFlashDriverInitData))
         {
            FblDiagSetFlashDriverPresent();
         }
      }
#endif /* FBL_DIAG_ENABLE_FLASHDRV_ROM */

      if (FblDiagGetFlashDriverPresent())
      {
         /* Initialize version */
         FblErrStatSetFlashDrvVersion();  /* PRQA S 3109 */ /* MD_FblDiag_3109 */

         /* Turn on programming voltage (if necessary) */
         ApplFblSetVfp();

         /* Initialze memory drivers */
         FblCwSetOfflineMode();
         /* Check version and initialize flash driver */
         flashErrorCode = MemDriver_InitSync(V_NULL);
         FblCwSetOnlineMode();

         if (flashErrorCode == IO_E_OK)
         {
            FblDiagSetMemDriverInitialized();
            result = kFblOk;
         }
         else
         {
            FblErrStatSetError(FBL_ERR_FLASHCODE_INIT_FAILED);
            FblErrStatSetFlashDrvError(flashErrorCode);
         }
      }
   }
   else
   {
      /* Flash driver already initialized */
      result = kFblOk;
   }

   return result;
}

/***********************************************************************************************************************
 *  FblDiagCheckProgAttemptCounter
 **********************************************************************************************************************/
/*! \brief         Check if programming attempt counter allows another programming cycle
 *  \pre           Response pending processing has been started, block has been selected
 *  \param[in]     pBlockDescriptor Pointer to current download block descriptor
 *  \return        kFblOk: Programming allowed; kFblFailed: Programming not allowed
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_MSR_Rule8.13 */
static tFblResult FblDiagCheckProgAttemptCounter(V_MEMRAM1 tBlockDescriptor V_MEMRAM2 V_MEMRAM3 *pBlockDescriptor)
{
   tFblResult result;
   vuint16 progAttempts;

   /* Initialize variables */
   result = kFblOk;

   /* Initialize variables */
   if (ApplFblGetProgAttempts(*pBlockDescriptor, &progAttempts) != kFblOk)
   {
      /* Programming attempt counter couldn't be read. Use 0 as default value. */
      progAttempts = 0u;
   }

   /* Check if logical block does not restrict the number of programming attempts */
   if (ApplFblGetPromMaxProgAttempts(pBlockDescriptor->blockNr) != 0u)
   {
      /* Check logical block programming attempts */
      if (progAttempts >= ApplFblGetPromMaxProgAttempts(pBlockDescriptor->blockNr))
      {
         /* Logical block cannot be programmed anymore */
         FblErrStatSetError(FBL_ERR_FLASH_PROG_CONDITIONS);
         DiagNRCConditionsNotCorrect();
         result = kFblFailed;
      }
   }

   return result;
}

/***********************************************************************************************************************
 *  FblDiagCheckRequestDownloadPreconditions
 **********************************************************************************************************************/
/*! \brief         Verify that all request download preconditions are fulfilled
 *  \pre           Fingerprint is available
 *  \param[in,out] pbDiagData Pointer to the data in the diagBuffer (without SID)
 *  \param[out]    pSegmentInfo FblLib_Mem segment information for this download
 *  \return        kFblOk: Preconditions fulfilled; kFblFailed: Preconditions not fulfilled
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_MSR_Rule8.13 */
static tFblResult FblDiagCheckRequestDownloadPreconditions(V_MEMRAM1 vuint8 V_MEMRAM2 V_MEMRAM3 * pbDiagData,
                                                           V_MEMRAM1 tFblMemSegmentInfo V_MEMRAM2 V_MEMRAM3 * pSegmentInfo)
{
   tFblResult result;

   vuint8  lengthFormat;
   vuint8  addrFormat;

   /* Initialize variables */
   pSegmentInfo->logicalAddress = 0u;
   pSegmentInfo->logicalLength = 0u;
   pSegmentInfo->targetAddress = 0u;
   pSegmentInfo->targetLength = 0u;

   /* Get length and address format from message */
   lengthFormat = (vuint8)((pbDiagData[kDiagLocFmtFormatOffset] & 0xF0u) >> 4u);
   addrFormat = (vuint8) (pbDiagData[kDiagLocFmtFormatOffset] & 0x0Fu);
   /* Read compression and encryption method */
   pSegmentInfo->dataFormat = (tFblMemDfi)pbDiagData[kDiagLocFmtSubparam];

   /* Check address and length format */
   if ((addrFormat == 0u) || (lengthFormat == 0u) || (addrFormat > 4u) || (lengthFormat > 4u))
   {
      DiagNRCRequestOutOfRange();
      result = kFblFailed;
   }
   else if ((FblDiagGetTransferDataAllowed()) || (!FblDiagGetFingerprintValid()))
   {
      DiagNRCConditionsNotCorrect();
      result = kFblFailed;
   }
#if defined( FBL_ENABLE_DATA_PROCESSING )
# if defined( FBL_ENABLE_ENCRYPTION_MODE )
# else
   /* No encrypted data supported */
   else if (FblDiagGetEncryptionMode(pSegmentInfo->dataFormat) != kDiagSubNoEncryption)
   {
      DiagNRCRequestOutOfRange();
      result = kFblFailed;
   }
# endif /* FBL_ENABLE_ENCRYPTION_MODE */
# if defined( FBL_ENABLE_COMPRESSION_MODE )
# else
   /* No compressed data supported */
   else if ((FblDiagGetCompressionMode(pSegmentInfo->dataFormat) != kDiagSubNoCompression)
#  if defined( FBL_MEM_ENABLE_STREAM_OUTPUT )
      && (!GetOemStreamModeSupported(pSegmentInfo->dataFormat))
#  endif
      )
   {
      DiagNRCRequestOutOfRange();
      result = kFblFailed;
   }
# endif /* FBL_ENABLE_COMPRESSION_MODE */
#else
   else if ((pSegmentInfo->dataFormat != kDiagSubNoDataProcessing)
# if defined( FBL_MEM_ENABLE_STREAM_OUTPUT )
      && (!GetOemStreamModeSupported(pSegmentInfo->dataFormat))
# endif
      )
   {
      DiagNRCRequestOutOfRange();
      result = kFblFailed;
   }
#endif /* FBL_ENABLE_DATA_PROCESSING */
   else
   {
      /* Get memoryAddress */
      pSegmentInfo->logicalAddress = FblMemGetInteger(addrFormat, &(pbDiagData[kDiagLocFmtAddrOffset]));
      /* Get memorySize */
      pSegmentInfo->logicalLength = FblMemGetInteger(lengthFormat, &(pbDiagData[kDiagLocFmtAddrOffset + addrFormat]));

      result = kFblOk;
   }

   return result;
}

#if defined( FBL_DIAG_ENABLE_FLASHDRV_DOWNLOAD )
/***********************************************************************************************************************
 *  FblDiagCheckForFlashDriverDownload
 **********************************************************************************************************************/
/*! \brief         Check if a flash driver or application should be downloaded
 *  \pre           Download precondition check succeeded
 *  \param[in,out] pSegmentInfo FblLib_Mem segment information for this download
 *  \return        kFblOk/kFblFailed
 **********************************************************************************************************************/
static tFblResult FblDiagCheckForFlashDriverDownload(V_MEMRAM1 tFblMemSegmentInfo V_MEMRAM2 V_MEMRAM3 * pSegmentInfo)
{
   tFblResult result;

   /* Initialize variables */
   result = kFblOk;

# if defined( FLASHCODE_RELOCATABLE ) || \
     defined( FLASH_DRIVER_RELOCATABLE )
   /* For relocatable drivers: If erase succeeded state is set, assume a data download
      is performed. Otherwise, a driver download is assumed. This enables downloads to
      logical blocks starting with address 0x00 in combination with relocatable flash
      drivers.
   */
   if ((pSegmentInfo->logicalAddress == 0u) && (!FblDiagGetEraseSucceeded()))
# else
   if (pSegmentInfo->logicalAddress == FBL_DIAG_FLASH_CODE_BASE_ADDR) /* PRQA S 0306 */ /* MD_FblDiagOem_030x */
# endif /* FLASHCODE_RELOCATABLE || FLASH_DRIVER_RELOCATABLE */
   {
      /* Download of flash driver requested */
      FblDiagClrFlashDriverPresent();
      /* Deinit flash driver in case it is already initialized */
      if (FblDiagGetMemDriverInitialized())
      {
         DiagExRCRResponsePending(kForceSendRpIfNotInProgress);
         FblDiagClrMemDriverInitialized();
         (void)MemDriver_DeinitSync(V_NULL);
      }
      /* Download of flash driver requested */
      FblDiagClrTransferTypeFlash();
      pSegmentInfo->type = kFblMemType_RAM;

#if defined( FBL_MEM_ENABLE_STREAM_OUTPUT )
      if (GetOemStreamModeSupported(pSegmentInfo->dataFormat))
      {
         /* Delta download not supported for flash driver download */
         DiagNRCRequestOutOfRange();
         result = kFblFailed;
      }
#endif /* FBL_MEM_ENABLE_STREAM_OUTPUT */
   }
   else
   {
      /* Download of data requested */
      FblDiagSetTransferTypeFlash();

      /* Set target memory type for download */
      pSegmentInfo->type = kFblMemType_ROM;
   }

   return result;
}

/***********************************************************************************************************************
 *  FblDiagCheckFlashDriverDownload
 **********************************************************************************************************************/
/*! \brief         Check if the download request matches the flash driver buffer
 *  \param[in,out] pSegmentInfo FblLib_Mem segment information for this download
 *  \return        kFblOk/kFblFailed
 **********************************************************************************************************************/
static tFblResult FblDiagCheckFlashDriverDownload( V_MEMRAM1 tFblMemSegmentInfo V_MEMRAM2 V_MEMRAM3 * pSegmentInfo)
{
   tFblResult result;

   /* Initialize target address. This address is used to store the downloaded data */
#if defined( FLASHCODE_RELOCATABLE ) || \
    defined( FLASH_DRIVER_RELOCATABLE )
   pSegmentInfo->targetAddress = FBL_DIAG_FLASH_CODE_BASE_ADDR; /* PRQA S 0306 */ /* MD_FblDiagOem_030x */
#else
   pSegmentInfo->targetAddress = pSegmentInfo->logicalAddress;
#endif /* FLASHCODE_RELOCATABLE || FLASH_DRIVER_RELOCATABLE */

   /* Store download length */
   pSegmentInfo->targetLength = pSegmentInfo->logicalLength;

   /* Check if flash driver fits into flash driver buffer */ /* PRQA S 0306 1 */ /* MD_FblDiagOem_030x */
   if (FblLbtCheckRangeContained(pSegmentInfo->targetAddress, pSegmentInfo->targetLength, FBL_DIAG_FLASH_CODE_BASE_ADDR, FLASH_SIZE) == kFblOk)
   {
      /* Initialize segment counter */
      FblDiagSegmentInit();
      /* Copy data and address of first segment to initialize downloadHeader */
      (void)FblDiagSegmentNext();

      result = kFblOk;
   }
   else
   {
      FblErrStatSetError(FBL_ERR_FLASHCODE_EXCEEDS_MEMORY);
      DiagNRCRequestOutOfRange();

      result = kFblFailed;
   }

   /* Verification routine of first logical block used for flash driver */
   downloadBlockDescriptor.blockNr = 0u;

   return result;
}
#endif /* FBL_DIAG_ENABLE_FLASHDRV_DOWNLOAD */

/***********************************************************************************************************************
 *  FblDiagCheckFlashMemoryDownload
 **********************************************************************************************************************/
/*! \brief         Check if the download request matches the erased logical block
 *  \param[in,out] pSegmentInfo FblLib_Mem segment information for this download
 *  \return        kFblOk/kFblFailed
 **********************************************************************************************************************/
/* PRQA S 6010, 6030 1 */ /* MD_MSR_STPTH, MD_MSR_STCYC */
static tFblResult FblDiagCheckFlashMemoryDownload( V_MEMRAM1 tFblMemSegmentInfo V_MEMRAM2 V_MEMRAM3 * pSegmentInfo)
{
   FL_SegmentInfoType const * segment;

   tFblResult result;

   /* Initialize variables */
   result = kFblOk;

   /* Memory driver has to be available */
   if (!FblDiagGetMemDriverInitialized())
   {
#if defined( FBL_MEM_ENABLE_STREAM_OUTPUT )
      if (GetOemStreamModeSupported(pSegmentInfo->dataFormat))
      {
         if (FblDiagPrepareFlashDriver() != kFblOk)
         {
            DiagNRCConditionsNotCorrect();
            result = kFblFailed;
         }
      }
      else
#endif
      {
         DiagNRCUploadDownloadNotAccepted();
         result = kFblFailed;
      }
   }

   if (result == kFblOk)
   {
#if defined( FBL_MEM_ENABLE_STREAM_OUTPUT )
      if (GetOemStreamModeSupported(pSegmentInfo->dataFormat))
      {
         result = FblDiagInitDeltaDownload(pSegmentInfo);
      }
      else
#endif
      {
         /* Memory has to be erased in case of first segment in logical block */
         if ((segmentCount == 0u) && (!FblDiagGetEraseSucceeded()))
         {
            DiagNRCUploadDownloadNotAccepted();
            result = kFblFailed;
         }
         /* Verify addresses (address must be in the area described by downloadBlockDescriptor)
          * this check requires EraseRoutine, because this initializes downloadBlockDescriptor */
         else
         {
            if (  (FblLbtCheckRangeContained(pSegmentInfo->logicalAddress,
                                             pSegmentInfo->logicalLength,
                                             downloadBlockDescriptor.blockStartAddress,
                                             downloadBlockDescriptor.blockLength) != kFblOk)
               || (transferRemainder == 0u)
               )
            {
               FblErrStatSetError(FBL_ERR_LBT_ADDR_MISMATCH);
               DiagNRCRequestOutOfRange();
               result = kFblFailed;
            }
         }
      }
   }

   if (result == kFblOk)
   {
      if (FblDiagSegmentNext() == kSwmOutOfRange)
      {
         FblErrStatSetError(FBL_ERR_TOO_MANY_SEGMENTS_IN_MODULE);
         DiagNRCRequestOutOfRange();
         result = kFblFailed;
      }
      else
      {
         /* Store address/length information of RequestDownload for flash operation */
         pSegmentInfo->targetAddress = pSegmentInfo->logicalAddress;
         pSegmentInfo->targetLength = pSegmentInfo->logicalLength;

         /* Check if requested segment overlaps with previously downloaded data */
         if (segmentCount > 1u)
         {
            /* Download second segment */
            segment = &verifyParam.segmentList.segmentInfo[segmentCount - 2u];

            if (   (pSegmentInfo->targetAddress <= segment->transferredAddress)
                || ((pSegmentInfo->targetAddress - segment->transferredAddress) < segment->length)
               )
            {
               /* New segment is not in order or overlaps previous one */
               DiagNRCRequestOutOfRange();
               result = kFblFailed;
            }
         }
      }
   }

   return result;
}

#if defined( FBL_MEM_ENABLE_STREAM_OUTPUT )
/***********************************************************************************************************************
*  FblDiagInitDeltaDownload
**********************************************************************************************************************/
/*! \brief        Perform initialization steps only required for delta download
*  \param[in,out] pSegmentInfo FblLib_Mem segment information for this download
*  \return        kFblOk/kFblFailed
**********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_MSR_Rule8.13 */
static tFblResult FblDiagInitDeltaDownload(V_MEMRAM1 tFblMemSegmentInfo V_MEMRAM2 V_MEMRAM3 * pSegmentInfo)
{
   tFblResult result;

   /* Initialize variables */
   result = kFblOk;

   /* Initialize blockDescriptor - is done in Erase for a regular download */
   if (FblLbtGetBlockDescriptorByAddressLength(pSegmentInfo->logicalAddress, pSegmentInfo->logicalLength, &downloadBlockDescriptor) != kFblOk)
   {
      DiagNRCRequestOutOfRange();
      result = kFblFailed;
   }
   else
   {
      (void)ApplFblAdjustLbtBlockData(&downloadBlockDescriptor);

      if (ApplFblInvalidateBlock(downloadBlockDescriptor) != kFblOk)
      {
         DiagNRCConditionsNotCorrect();
         result = kFblFailed;
      }
      else
      {
         /* Explicitly erase mask/pattern area to allow re-write of pattern after delta download */
         if (ApplFblErasePatternArea(&downloadBlockDescriptor) != kFblOk)
         {
            /* NRC is set by user function */
            assertFblUser(DiagGetError() != kDiagErrorNone, kFblOemAssertNoNrcSet); /* PRQA S 2214 */ /* MD_FblDiag_2214 */
            result = kFblFailed;
         }
         else
         {
            FblDiagSegmentInit();
         }
      }
   }

   return result;

}
#endif /* FBL_MEM_ENABLE_STREAM_OUTPUT */
/***********************************************************************************************************************
 *  FblDiagPrepareFirstDownloadSegment
 **********************************************************************************************************************/
/*! \brief         Add block structure to FblLib_Mem data
 *  \param[out]    pBlockInfo Logical block information data provided to FblLib_Mem
 *  \param[in]     pSegmentInfo Segment information of requested download
 *  \param[in]     tempBlockNr Logical index of verification routine for this download
 *  \return        kFblOk/kFblFailed
 **********************************************************************************************************************/
/* PRQA S 3673 3 */ /* MD_MSR_Rule8.13 */
static tFblResult FblDiagPrepareFirstDownloadSegment(V_MEMRAM1 tFblMemBlockInfo V_MEMRAM2 V_MEMRAM3 * pBlockInfo,
                                                     V_MEMRAM1 tFblMemSegmentInfo V_MEMRAM2 V_MEMRAM3 * pSegmentInfo,
                                                     vuint8 tempBlockNr)
{
   tFblResult result;
   tFblDiagNrc libMemResult;
   tBlockDescriptor localBlockDescriptor;
#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
# if !defined( FBL_DIAG_ENABLE_FLASHDRV_DOWNLOAD )
   /* Parameters not used: avoid compiler warning */
   (void)pSegmentInfo;  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
# endif /* FBL_DIAG_ENABLE_FLASHDRV_DOWNLOAD */
#endif /* V_ENABLE_USE_DUMMY_STATEMENT */


   /* Initialize variables */
   result = FblLbtGetBlockDescriptorByNr(tempBlockNr, &localBlockDescriptor);

   /* Info: Flash driver uses verification routines of first logical block */
   if (result == kFblOk)
   {
#if defined( FBL_MEM_ENABLE_VERIFY_OUTPUT )
      pBlockInfo->verifyRoutineOutput.function = (tFblMemVerifyFctOutput)localBlockDescriptor.verifyOutput;       /* PRQA S 0313 */ /* MD_FblDiagOem_0313 */
      pBlockInfo->verifyRoutineOutput.param = (V_MEMRAM1 tFblMemVerifyParamOutput V_MEMRAM2 V_MEMRAM3 *)&verifyParam;
#endif /* FBL_MEM_ENABLE_VERIFY_OUTPUT */
#if defined( FBL_MEM_ENABLE_VERIFY_INPUT )
      /* Configure input verification */
      pBlockInfo->verifyRoutineInput.function = (tFblMemVerifyFctInput)localBlockDescriptor.verifyInput;          /* PRQA S 0313 */ /* MD_FblDiagOem_0313 */
      pBlockInfo->verifyRoutineInput.param = (V_MEMRAM1 tFblMemVerifyParamInput V_MEMRAM2 V_MEMRAM3 *)&inputSigParam;
      /* Force use of internal workspace */
      inputSigParam.currentHash.sigResultBuffer = (SecM_ResultBufferType)SEC_DEFAULT_WORKSPACE; /* PRQA S 0306 */ /* MD_FblDiagOem_030x */
      inputSigParam.currentHash.length = 0u;
      inputSigParam.currentDataLength = &inputSigDataLength;
#endif /* FBL_MEM_ENABLE_VERIFY_INPUT */
#if defined( FBL_MEM_ENABLE_VERIFY_PROCESSED )
      /* Configure processed verification */
      pBlockInfo->verifyRoutineProcessed.function = (tFblMemVerifyFctInput)localBlockDescriptor.verifyProcessed;  /* PRQA S 0313 */ /* MD_FblDiagOem_0313 */
      pBlockInfo->verifyRoutineProcessed.param = (V_MEMRAM1 tFblMemVerifyParamInput V_MEMRAM2 V_MEMRAM3 *)&procSigParam;
      /* Force use of internal workspace */
      procSigParam.currentHash.sigResultBuffer = (SecM_ResultBufferType)SEC_DEFAULT_WORKSPACE; /* PRQA S 0306 */ /* MD_FblDiagOem_030x */
      procSigParam.currentHash.length = 0u;
      procSigParam.currentDataLength = &procSigDataLength;
#endif /* FBL_MEM_ENABLE_VERIFY_PROCESSED */
#if defined( FBL_MEM_ENABLE_VERIFY_PIPELINED )
      /* Configure pipelined verification */
      pBlockInfo->verifyRoutinePipe.function = (tFblMemVerifyFctInput)localBlockDescriptor.verifyPipelined;       /* PRQA S 0313 */ /* MD_FblDiagOem_0313 */
      pBlockInfo->verifyRoutinePipe.param = (V_MEMRAM1 tFblMemVerifyParamInput V_MEMRAM2 V_MEMRAM3 *)&pipeSigParam;
      /* Force use of internal workspace */
      pipeSigParam.currentHash.sigResultBuffer = (SecM_ResultBufferType)SEC_DEFAULT_WORKSPACE; /* PRQA S 0306 */ /* MD_FblDiagOem_030x */
      pipeSigParam.currentHash.length = 0u;
      pipeSigParam.currentDataLength = &pipeSigDataLength;
#endif /* FBL_MEM_ENABLE_VERIFY_PIPELINED */
      pBlockInfo->segmentList = &verifyParam.segmentList;
      pBlockInfo->maxSegments = SWM_DATA_MAX_NOAR;
      verifyParam.segmentList.segmentInfo = downloadSegments;

      /* Prepare block data structure */
      if( FblDiagGetTransferTypeFlash())
      {
         pBlockInfo->targetAddress = downloadBlockDescriptor.blockStartAddress;
         pBlockInfo->targetLength = downloadBlockDescriptor.blockLength;
         pBlockInfo->logicalAddress = downloadBlockDescriptor.blockStartAddress;
         pBlockInfo->logicalLength = downloadBlockDescriptor.blockLength;

         pBlockInfo->readFct = (tFblMemVerifyReadFct)&FblReadProm;
      }
#if defined( FBL_DIAG_ENABLE_FLASHDRV_DOWNLOAD )
      else
      {
         pBlockInfo->targetAddress = pSegmentInfo->targetAddress;
         pBlockInfo->targetLength = pSegmentInfo->targetLength;
         pBlockInfo->logicalAddress = pSegmentInfo->logicalAddress;
         pBlockInfo->logicalLength = pSegmentInfo->logicalLength;

         pBlockInfo->readFct = (tFblMemVerifyReadFct)&FblReadRam;
      }
#endif /* FBL_DIAG_ENABLE_FLASHDRV_DOWNLOAD */

      /* Add block to FblLib_Mem state machine */
      libMemResult = FblMemRemapStatus(FblMemBlockStartIndication(pBlockInfo));
      /* Check if FblLib_Mem reported an error */
      if (libMemResult != kDiagErrorNone)
      {
         FblDiagSetError(libMemResult);
         result = kFblFailed;
      }
   }

   return result;
}

/***********************************************************************************************************************
 *  FblDiagSessionControlParamInit
 **********************************************************************************************************************/
/*! \brief         Initialization of session control request response.
 *  \param[in,out] pbDiagData Pointer to data in the diagBuffer (without SID).
 *  \param[in]     diagReqDataLen Data length (without SID).
 **********************************************************************************************************************/
static void FblDiagSessionControlParamInit(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen)
{
#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* Parameters not used: avoid compiler warning */
   (void)diagReqDataLen;   /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
#endif

   /* Reset internal states */
   FblDiagClrPreconditionsChecked();
   FblDiagClrSecurityKeyAllowed();
   FblDiagClrSecurityUnlock();
   FblDiagClrFingerprintValid();
   FblDiagClrEraseSucceeded();
   FblDiagClrTransferDataAllowed();
   FblDiagClrTransferDataSucceeded();
   FblDiagClrChecksumAllowed();

   /* Reset variables */
   transferRemainder = 0u;
   /* Initialize flash driver download handling */
   FblDiagClrTransferTypeFlash();

   /* Initialize segment counter */
   FblDiagSegmentInit();

   /* Initialize security module */
   (void)ApplFblSecurityInit();

   /* Prepare diagnostic response */
   pbDiagData[kDiagLocFmtSubparam + 1u] = (vuint8)((kDiagSessionTimingP2 >> 8u) & 0xFFu);
   pbDiagData[kDiagLocFmtSubparam + 2u] = (vuint8)(kDiagSessionTimingP2 & 0xFFu);
   pbDiagData[kDiagLocFmtSubparam + 3u] = (vuint8)((kDiagSessionTimingP2Star >> 8u) & 0xFFu);
   pbDiagData[kDiagLocFmtSubparam + 4u] = (vuint8)(kDiagSessionTimingP2Star & 0xFFu);
}

/***********************************************************************************************************************
 *  FblDiagOemInitPowerOn
 **********************************************************************************************************************/
/*! \brief       Initialize module variables
 **********************************************************************************************************************/
void FblDiagOemInitPowerOn(void)
{
   expectedSequenceCnt = 0;
#if defined( FBL_DIAG_ENABLE_BACKUP_BEFORE_ERASE )
   checkBackupBeforeErase = kDiagEraseMemoryBackupBeforeEraseNotDone;
#endif /* FBL_DIAG_ENABLE_BACKUP_BEFORE_ERASE */
}

#if defined ( FBL_DIAG_ENABLE_OEM_POSTINIT )
/***********************************************************************************************************************
 *  FblDiagOemPostInit
 **********************************************************************************************************************/
/*! \brief       Late initialization to set the target memory partition
 **********************************************************************************************************************/
void FblDiagOemPostInit(void)
{
   Std_ReturnType result = vOtaM_OpenPartition(vOtaM_Part_Role_Inactive);

   assertFblInternal((result == E_OK), kFblSysAssertParameterOutOfRange);
}
#endif /* FBL_DIAG_ENABLE_OEM_POSTINIT */

/***********************************************************************************************************************
 *  FblDiagProcessServiceNrc
 **********************************************************************************************************************/
/*! \brief       This routine maps service check errors to NRCs
 *  \details     The checks done against the service table can be mapped to NRCs here. This function can be
 *               used as default NRC handler for services without sub-table entry.
 *  \param[in]   serviceErrorMask Error bit mask of table check
 *  \return      kFblOk/kFblFailed
 **********************************************************************************************************************/
/* PRQA S 6080 1 */ /* MD_MSR_STMIF */
static tFblResult FblDiagProcessServiceNrc(vuint32 serviceErrorMask)
{
   tFblResult result;

   /* Initialize variables */
   result = kFblOk;

   /* Check if service should be supported functionally and drop support if not */
   if ((serviceErrorMask & kFblDiagServiceNoFuncSupport) != 0u)
   {
      DiagSetNoResponse();
   }
   else
   {
      /* Service supported in active session? */
      if ((serviceErrorMask & kFblDiagServiceSessionFailure) == kFblDiagServiceSessionFailure)
      {
         DiagNRCServiceNotSupportedInActiveSession();
      }
      /* Minimum length check on service level */
      else if ((serviceErrorMask & kFblDiagServiceMinLenFailure) == kFblDiagServiceMinLenFailure)
      {
         DiagNRCIncorrectMessageLengthOrInvalidFormat();
      }
      /* Check for security access */
      else if ((serviceErrorMask & kFblDiagServiceSecAccessFailure) == kFblDiagServiceSecAccessFailure)
      {
         DiagNRCSecurityAccessDenied();
      }
      /* Pending length checks */
      else if ((serviceErrorMask & kFblDiagServiceLenFailure) == kFblDiagServiceLenFailure)
      {
         DiagNRCIncorrectMessageLengthOrInvalidFormat();
      }
      else if ((serviceErrorMask & kFblDiagServicePrehandlerFailure) == kFblDiagServicePrehandlerFailure)
      {
         /* Set default NRC if no NRC has been set in callout function. */
         if (DiagGetError() == kDiagErrorNone)
         {
            DiagNRCConditionsNotCorrect();
         }
      }
      /* Remaining, uncovered errors */
      else
      {
         DiagNRCGeneralReject();
      }
   }

   return result;
}

/***********************************************************************************************************************
 *  FblDiagProcessSubfunctionNrc
 **********************************************************************************************************************/
/*! \brief       This routine maps service check errors to NRCs
 *  \details     The checks done against the service table can be mapped to NRCs here. This function can be
 *               used as default NRC handler for services with sub-functions.
 *  \param[in]   serviceErrorMask Error bit mask of table check
 *  \return      kFblOk/kFblFailed
 **********************************************************************************************************************/
/* PRQA S 6030, 6080 1 */ /* MD_MSR_STCYC, MD_MSR_STMIF */
static tFblResult FblDiagProcessSubfunctionNrc(vuint32 serviceErrorMask)
{
   tFblResult result;

   /* Initialize variables */
   result = kFblOk;

   /* Check if service should be supported functionally and drop support if not */
   if ((serviceErrorMask & (kFblDiagServiceNoFuncSupport | kFblDiagSubNoFuncSupport)) != 0u)
   {
      DiagSetNoResponse();
   }
   else
   {
      /* Service supported in active session? */
      if ((serviceErrorMask & kFblDiagServiceSessionFailure) == kFblDiagServiceSessionFailure)
      {
         DiagNRCServiceNotSupportedInActiveSession();
      }
      /* Minimum length check on service level */
      else if ((serviceErrorMask & kFblDiagServiceMinLenFailure) == kFblDiagServiceMinLenFailure)
      {
         DiagNRCIncorrectMessageLengthOrInvalidFormat();
      }
      /* Check if sub-function is supported */
      else if ((serviceErrorMask & kFblDiagSubfunctionNotFound) == kFblDiagSubfunctionNotFound)
      {
#if defined( FBL_ENABLE_USERSUBFUNCTION )
         /* Subfunction not found in check
          * Call user handler to manage its own subfunction */
         FblDiagSetRcrRpAllowed();
         ApplDiagUserSubFunction(&DiagBuffer[kDiagFmtSubparam], DiagDataLength);
#else
         DiagNRCSubFunctionNotSupported();
#endif /* FBL_ENABLE_USERSUBFUNCTION */
      }
      /* Check if sub-parameter is supported */
      else if ((serviceErrorMask & kFblDiagSubparamNotFound) == kFblDiagSubparamNotFound)
      {
         DiagNRCRequestOutOfRange();
      }
      /* Check for security access (service level and sub-function level) */
      else if ((serviceErrorMask & (kFblDiagServiceSecAccessFailure | kFblDiagSubfuncSecAccessFailure | kFblDiagSubparamSecAccessFailure)) != 0u)
      {
         DiagNRCSecurityAccessDenied();
      }
      /* Pending length checks */
      else if ((serviceErrorMask & (kFblDiagServiceLenFailure | kFblDiagSubMinLenFailure | kFblDiagSubLenFailure)) != 0u)
      {
         DiagNRCIncorrectMessageLengthOrInvalidFormat();
      }
      /* Subfunction session check */
      else if ((serviceErrorMask & (kFblDiagSubfuncSessionFailure | kFblDiagSubparamSessionFailure)) != 0u)
      {
         DiagNRCSubfunctionNotSupportedInActiveSession();
      }
      else if ((serviceErrorMask & kFblDiagServicePrehandlerFailure) == kFblDiagServicePrehandlerFailure)
      {
         /* Set default NRC if no NRC has been set in callout function. */
         if (DiagGetError() == kDiagErrorNone)
         {
            DiagNRCConditionsNotCorrect();
         }
      }
      /* Remaining, uncovered errors */
      else
      {
         DiagNRCGeneralReject();
      }
   }

   return result;
}

/***********************************************************************************************************************
 *  FblDiagProcessRoutineNrc
 **********************************************************************************************************************/
/*! \brief       This routine maps service check errors to NRCs
 *  \details     The checks done against the service table can be mapped to NRCs here. This function can
 *               be used as a NRC hanler for the routine control service.
 *  \param[in]   serviceErrorMask Error bit mask of table check
 *  \return      kFblOk/kFblFailed
 **********************************************************************************************************************/
/* PRQA S 6030, 6080 1 */ /* MD_MSR_STCYC, MD_MSR_STMIF */
static tFblResult FblDiagProcessRoutineNrc(vuint32 serviceErrorMask)
{
   tFblResult result;

   /* Initialize variables */
   result = kFblOk;

   /* Check if service should be supported functionally and drop support if not */
   if ((serviceErrorMask & (kFblDiagServiceNoFuncSupport | kFblDiagSubNoFuncSupport)) != 0u)
   {
      DiagSetNoResponse();
   }
   else
   {
      /* Service supported in active session? */
      if ((serviceErrorMask & kFblDiagServiceSessionFailure) == kFblDiagServiceSessionFailure)
      {
         DiagNRCServiceNotSupportedInActiveSession();
      }
      /* Check for security access (service level) */
      else if ((serviceErrorMask & kFblDiagServiceSecAccessFailure) == kFblDiagServiceSecAccessFailure)
      {
         DiagNRCSecurityAccessDenied();
      }
      /* Minimum length check on service level */
      else if ((serviceErrorMask & kFblDiagServiceMinLenFailure) == kFblDiagServiceMinLenFailure)
      {
         DiagNRCIncorrectMessageLengthOrInvalidFormat();
      }
      /* Check if sub-parameter is supported */
      else if ((serviceErrorMask & kFblDiagSubparamNotFound) == kFblDiagSubparamNotFound)
      {
#if defined( FBL_ENABLE_USERROUTINE )
         /* Subfunction not found in check
          * Call user handler to manage its own subfunction */
         FblDiagSetRcrRpAllowed();
         ApplDiagUserRoutine(&DiagBuffer[kDiagFmtSubparam], DiagDataLength);
#else
         DiagNRCRequestOutOfRange();
#endif /* FBL_ENABLE_USERSUBFUNCTION */
      }
      /* Check if sub-parameter is supported in active session */
      else if ((serviceErrorMask & kFblDiagSubparamSessionFailure) == kFblDiagSubparamSessionFailure)
      {
         DiagNRCRequestOutOfRange();
      }
      /* Check for security access sub-function level */
      else if ((serviceErrorMask & (kFblDiagSubfuncSecAccessFailure | kFblDiagSubparamSecAccessFailure)) != 0u)
      {
         DiagNRCSecurityAccessDenied();
      }
      /* Check if sub-function is supported */
      else if ((serviceErrorMask & kFblDiagSubfunctionNotFound) == kFblDiagSubfunctionNotFound)
      {
#if defined( FBL_ENABLE_USERSUBFUNCTION )
         /* Subfunction not found in check
          * Call user handler to manage its own subfunction */
         FblDiagSetRcrRpAllowed();
         ApplDiagUserSubFunction(&DiagBuffer[kDiagFmtSubparam], DiagDataLength);
#else
         DiagNRCSubFunctionNotSupported();
#endif /* FBL_ENABLE_USERSUBFUNCTION */
      }
      /* Pending length checks */
      else if ((serviceErrorMask & (kFblDiagServiceLenFailure | kFblDiagSubMinLenFailure | kFblDiagSubLenFailure)) != 0u)
      {
         DiagNRCIncorrectMessageLengthOrInvalidFormat();
      }
      else if ((serviceErrorMask & kFblDiagServicePrehandlerFailure) == kFblDiagServicePrehandlerFailure)
      {
         /* Set default NRC if no NRC has been set in callout function. */
         if (DiagGetError() == kDiagErrorNone)
         {
            DiagNRCConditionsNotCorrect();
         }
      }
      /* Remaining, uncovered errors */
      else
      {
         DiagNRCGeneralReject();
      }
   }

   return result;
}

/***********************************************************************************************************************
 *  Diagnostic main handler service functions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  FblDiagDefaultSessionMainHandler
 **********************************************************************************************************************/
/*! \brief         Default session request service handler.
 *  \param[in,out] pbDiagData Pointer to data in diagBuffer (without SID).
 *  \param[in]     diagReqDataLen Data length (without SID).
 *  \return        Result: Always kFblOk.
 **********************************************************************************************************************/
static tFblResult FblDiagDefaultSessionMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen)
{
#if defined( FBL_ENABLE_RESPONSE_AFTER_RESET )
   vuint8 responseFlag;
#endif /* FBL_ENABLE_REPONSE_AFTER_RESET */

   if (FblDiagGetProgrammingSession())
   {
      /* Request bootloader reset */
      FblDiagSetWaitEcuReset();   /* PRQA S 3109 */ /* MD_FblDiag_3109 */

#if defined( FBL_ENABLE_RESPONSE_AFTER_RESET )
      /* Send response pending before reset */
      DiagExRCRResponsePending(kForceSendResponsePending);

      /* Set flag for response after reset */
      responseFlag = RESET_RESPONSE_SDS_REQUIRED;
      (void)ApplFblWriteResetResponseFlag(&responseFlag);   /* PRQA S 3425 */ /* MD_FblDiag_3425 */
      /* Save target address */
      if (FblCwSaveResponseAddress() != kFblOk) /* PRQA S 2742 */ /* MD_FblDiagOem_2742 */
      {
         /* If clause is necessary here to process return value or macro. However,
          * there is currently no strategy to handle this error. */
      }
#else
      /* Prepare response and reset states */
      FblDiagSessionControlParamInit(pbDiagData, diagReqDataLen);
      /* Send response */
      DiagProcessingDone(kDiagRslDiagnosticSessionControl);
#endif /* FBL_ENABLE_RESPONSE_AFTER_RESET */
      FblDiagSetEcuResetFctFinished();
   }
   else
   {
      /* Change to default session without issuing a reset */
      FblDiagSetDefaultSession();   /* PRQA S 3109 */ /* MD_FblDiag_3109 */

      /* Prepare response and reset states */
      FblDiagSessionControlParamInit(pbDiagData, diagReqDataLen);
      /* Send response */
      DiagProcessingDone(kDiagRslDiagnosticSessionControl);
   }

   return kFblOk;
}

/***********************************************************************************************************************
 *  FblDiagExtendedSessionMainHandler
 **********************************************************************************************************************/
/*! \brief         Extended session request service handler.
 *  \param[in,out] pbDiagData Pointer to data in diagBuffer (without SID).
 *  \param[in]     diagReqDataLen Data length (without SID).
 *  \return        Result: Always kFblOk.
 **********************************************************************************************************************/
static tFblResult FblDiagExtendedSessionMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen)
{
   /* Change to extended session */
   FblDiagSetExtendedSession();  /* PRQA S 3109 */ /* MD_FblDiag_3109 */

   /* Prepare response and reset states */
   FblDiagSessionControlParamInit(pbDiagData, diagReqDataLen);
   /* Send response */
   DiagProcessingDone(kDiagRslDiagnosticSessionControl);

   return kFblOk;
}

/***********************************************************************************************************************
 *  FblDiagProgrammingSessionMainHandler
 **********************************************************************************************************************/
/*! \brief         Programming session request service handler.
 *  \param[in,out] pbDiagData Pointer to data in diagBuffer (without SID).
 *  \param[in]     diagReqDataLen Data length (without SID).
 *  \return        Result: kFblOk if reprogramming conditions are fulfilled, kFblFailed if not.
 **********************************************************************************************************************/
static tFblResult FblDiagProgrammingSessionMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen)
{
   tFblResult result;

   /* Check of programming preconditions done? */
#if defined( FBL_DIAG_ENABLE_CHECK_PROGRAMMING_PRECONDITIONS )
   if ((!FblDiagGetPreconditionsChecked()) && (!FblMainGetStartFromAppl()) && (!FblDiagGetProgrammingSession()))
#else
   if (ApplFblCheckProgConditions() != kFblOk)
#endif /* FBL_DIAG_ENABLE_CHECK_PROGRAMMING_PRECONDITIONS */
   {
      /* Check of programming preconditions failed */
      FblErrStatSetError(FBL_ERR_FLASH_PROG_CONDITIONS);
      DiagNRCConditionsNotCorrect();
      result = kFblFailed;
   }
   else
   {
# if defined( FBL_ENABLE_FBL_START )
# else
      vuint8 progReqFlag;
# endif /* FBL_ENABLE_FBL_START */

      /* Check of programming preconditions succeeded - switch to programming session */
      result = kFblOk;

      /* Modification to use Bootloader as an application. Jump from application back to bootloader */
      /* on programming session request, set EEPROM Flags and restart the ECU                       */

      /* Request for reset / FBL shutdown in the confirmation of RCR-RP message */
      FblDiagSetWaitEcuReset();

      /* Send response pending */
      DiagExRCRResponsePending(kForceSendResponsePending);

      /* Save tester address */
      (void)FblCwSaveResponseAddress();

# if defined( FBL_ENABLE_FBL_START )
      fblStartReset = kFblMainFblStartReset;
# else
      /* Set reprogramming flag */
      progReqFlag = kEepFblReprogram;
      (void)ApplFblNvWriteProgReqFlag(&progReqFlag);
# endif /* FBL_ENABLE_FBL_START */

      FblDiagSetEcuResetFctFinished();
   }

   return result;
}

/***********************************************************************************************************************
 *  FblDiagEcuResetMainHandler
 **********************************************************************************************************************/
/*! \brief         Function manages the EcuReset service request
 *  \param[in,out] pbDiagData Pointer to the data in the diagBuffer (without SID)
 *  \param[in]     diagReqDataLen Length of data (without SID)
 *  \return        Result: Always kFblOk.
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_MSR_Rule8.13 */
static tFblResult FblDiagEcuResetMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen)
{
#if defined( FBL_ENABLE_RESPONSE_AFTER_RESET )
   vuint8 responseFlag;
#endif /* FBL_ENABLE_REPONSE_AFTER_RESET */

#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* Parameters not used: avoid compiler warning */ /* PRQA S 3112 2 */ /* MD_MSR_DummyStmt */
   (void)diagReqDataLen;
   (void)pbDiagData;
#endif

   /* Request bootloader reset */
   FblDiagSetWaitEcuReset();   /* PRQA S 3109 */ /* MD_FblDiag_3109 */

#if defined( FBL_ENABLE_RESPONSE_AFTER_RESET )
   /* Send response pending before reset */
   DiagExRCRResponsePending(kForceSendResponsePending);

   /* Set flag for response after reset */
   responseFlag = RESET_RESPONSE_ECURESET_REQUIRED;
   (void)ApplFblWriteResetResponseFlag(&responseFlag);   /* PRQA S 3425 */ /* MD_FblDiag_3425 */
   /* Save target address */
   if (FblCwSaveResponseAddress() != kFblOk) /* PRQA S 2742 */ /* MD_FblDiagOem_2742 */
   {
      /* If clause is necessary here to process return value or macro. However,
       * there is currently no strategy to handle this error. */
   }
#else
   /* Send response */
   DiagProcessingDone(kDiagRslEcuReset);
#endif /* FBL_ENABLE_RESPONSE_AFTER_RESET */
   FblDiagSetEcuResetFctFinished();

   return kFblOk;
}

/***********************************************************************************************************************
 *  FblDiagSecAccessSeedMainHandler
 **********************************************************************************************************************/
/*! \brief         Request Seed request main handler.
 *  \param[in,out] pbDiagData Pointer to the data in the diagBuffer (without SID)
 *  \param[in]     diagReqDataLen Length of data (without SID)
 *  \return        kFblOk: service processed successfully (goto next state), kFblFailed: Service processing failed.
 **********************************************************************************************************************/
static tFblResult FblDiagSecAccessSeedMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen)
{
   tFblResult result;

#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* Parameters not used: avoid compiler warning */
   (void)diagReqDataLen;   /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
#endif

   /* Initialize variables */
   result = kFblOk;

#if defined( FBL_ENABLE_SEC_ACCESS_DELAY )
   /* Check if security level is locked (delay counter is active) */
   if (GetSecurityAccessDelay() > 0u)
   {
      DiagNRCRequiredTimeDelayNotExpired();
      result = kFblFailed;
   }
#endif /* FBL_ENABLE_SEC_ACCESS_DELAY */

   if (result == kFblOk)
   {
      /* Check if security level is already active */
      if (FblDiagGetSecurityUnlock())
      {
         vuintx i;

         /* ECU is already unlocked, send zero seed */
         for (i = 0; i < kSecSeedLength; i++)
         {
            pbDiagData[kDiagLocFmtSeedKeyStart + i] = 0x00u;
         }
      }
      else
      {
         /* Generate seed by application function */
         if (ApplFblSecuritySeed() == kFblOk)
         {
            /* Accept security key next */
            FblDiagSetSecurityKeyAllowed();
         }
         else
         {
            /* Error occurred during seed computation */
            FblErrStatSetError(FBL_ERR_SEED_GENERATION_FAILED);
            DiagNRCConditionsNotCorrect();
            result = kFblFailed;
         }
      }
   }

   /* Send positive response if seed was computed correctly */
   if (result == kFblOk)
   {
      DiagProcessingDone(kDiagRslSecurityAccessSeed);
   }

   return result;
}

/***********************************************************************************************************************
 *  FblDiagSecAccessKeyMainHandler
 **********************************************************************************************************************/
/*! \brief         Send Key request main handler.
 *  \param[in,out] pbDiagData Pointer to the data in the diagBuffer (without SID)
 *  \param[in]     diagReqDataLen Length of data (without SID)
 *  \return        kFblOk: service processed successfully (goto next state), kFblFailed: Service processing failed.
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_MSR_Rule8.13 */
static tFblResult FblDiagSecAccessKeyMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen)
{
   tFblResult result;

#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* Parameters not used: avoid compiler warning */ /* PRQA S 3112 2 */ /* MD_MSR_DummyStmt */
   (void)diagReqDataLen;
   (void)pbDiagData;
#endif

   /* Check preconditions for key processing */
   if (    (!FblDiagGetSecurityKeyAllowed())
#if defined( FBL_ENABLE_SEC_ACCESS_DELAY )
        || (GetSecurityAccessDelay() > 0u)
#endif /* FBL_EANBLE_SECURITY_ACCESS_DELAY */
      )
   {
      DiagNRCRequestSequenceError();
      result = kFblFailed;
   }
   else
   {
      /* Send response pending */
      DiagExRCRResponsePending(kForceSendResponsePending);

      /* No second key allowed for this seed */
      FblDiagClrSecurityKeyAllowed();

      /* Check security access key in application function */
      if (ApplFblSecurityKey() == kFblOk)
      {
         /* Security access successful */
         FblDiagSetSecurityUnlock();
         result = kFblOk;
#if defined( FBL_ENABLE_SEC_ACCESS_DELAY )
         /* Reset invalid counter */
         secSendKeyInvalid = 0u;
         /* Reset flags in non-volatile memory */
         (void)ApplFblClrSecAccessDelayFlag();
         (void)ApplFblWriteSecAccessInvalidCount(&secSendKeyInvalid);
#endif /* FBL_ENABLE_SEC_ACCESS_DELAY */
      }
      else
      {
         result = kFblFailed;
#if defined( FBL_ENABLE_SEC_ACCESS_DELAY )
         /* Read invalid access counter */
         if (ApplFblReadSecAccessInvalidCount(&secSendKeyInvalid) != kFblOk)
         {
            /* If read failed set default value */
            secSendKeyInvalid = (kSecMaxInvalidKeys - 1u);
         }

         secSendKeyInvalid++;

         if (secSendKeyInvalid >= kSecMaxInvalidKeys)
         {
            /* Too many invalid security attempts, enable security access delay */
            SetSecurityAccessDelay();
            (void)ApplFblSetSecAccessDelayFlag();

            DiagNRCExceedNumberOfAttempts();
         }
         else
         {
            /* Write counter to non-volatile memory */
            (void)ApplFblWriteSecAccessInvalidCount(&secSendKeyInvalid);

            DiagNRCInvalidKey();
         }
#else
         DiagNRCInvalidKey();
#endif /* FBL_ENABLE_SEC_ACCESS_DELAY */
      }
   }

   if (result == kFblOk)
   {
      DiagProcessingDone(kDiagRslSecurityAccessKey);
   }

   return result;
}

/***********************************************************************************************************************
 *  FblDiagCommCtrlMainHandler
 **********************************************************************************************************************/
/*! \brief         Communication Control request main handler.
 *  \param[in,out] pbDiagData Pointer to the data in the diagBuffer (without SID)
 *  \param[in]     diagReqDataLen Length of data (without SID)
 *  \return        kFblOk: service processed successfully (goto next state), kFblFailed: Service processing failed.
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_MSR_Rule8.13 */
static tFblResult FblDiagCommCtrlMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen)
{
   tFblResult result;

#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* Parameters not used: avoid compiler warning */
   (void)diagReqDataLen;   /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
#endif

   /* Check communication type (Bits 1-7 must be 0) */
   if (pbDiagData[kDiagLocFmtSubparam + 0x01u] != kDiagSubNormalCommunication)
   {
      DiagNRCRequestOutOfRange();
      result = kFblFailed;
   }
   else
   {
      /* Simply transmit a positive response message with subfunction parameter */
      DiagProcessingDone(kDiagRslCommunicationControl);
      result = kFblOk;
   }

   return result;
}

/***********************************************************************************************************************
 *  FblDiagDataByIdLengthCheck
 **********************************************************************************************************************/
/*! \brief         Read/WriteDataByIdentifier service dynamic length check.
 *  \param[in,out] pbDiagData Pointer to the data in the diagBuffer (without SID).
 *  \param[in]     diagReqDataLen Length of data (without SID).
 *  \return        kFblOk: Length check OK; kFblFailed: Length check failed
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_MSR_Rule8.13 */
static tFblResult FblDiagDataByIdLengthCheck(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen)
{
#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* Parameters not used: avoid compiler warning */ /* PRQA S 3112 2 */ /* MD_MSR_DummyStmt */
   (void)pbDiagData;
   (void)diagReqDataLen;
#endif

   /* Nothing to do here. Length check should be done in corresponding user callback function. */
   return kFblOk;
}

/***********************************************************************************************************************
 *  FblDiagWriteDataByIdMainHandler
 **********************************************************************************************************************/
/*! \brief         WriteDataByIdentifier service, handling of fingerprint and identification data.
 *  \pre           Request only accepted after successful security access procedure.
 *  \param[in,out] pbDiagData Pointer to the data in the diagBuffer (without SID).
 *  \param[in]     diagReqDataLen Length of data (without SID).
 *  \return        kFblOk: service processed successfully (goto next state), kFblFailed: Service processing failed.
 **********************************************************************************************************************/
static tFblResult FblDiagWriteDataByIdMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen)
{
   tFblResult result;

   /* Initialize variables */
   result = kFblOk;

   /* Callback function for WDBI */
   if (ApplFblWriteDataByIdentifier(pbDiagData, diagReqDataLen) == kDiagReturnValidationOk)
   {
      /* if fingerprint is completely written, set valid */
      FblDiagSetFingerprintValid();
   }

   if (DiagGetError() != kDiagErrorNone)
   {
      /* NRC already set - do nothing */
      result = kFblFailed;
   }
   else
   {
      /* Send positive response */
      DiagProcessingDone(kDiagRslWriteDataByIdentifier);
   }

   return result;
}

/***********************************************************************************************************************
 *  FblDiagRCStartCsumMainHandler
 **********************************************************************************************************************/
/*! \brief         Routine Control - Check Memory.
 *  \pre           Data to be checked has been downloaded to the corresponding memory.
 *  \param[in,out] pbDiagData Pointer to the data in the diagBuffer (without SID)
 *  \param[in]     diagReqDataLen Length of data (without SID)
 *  \return        kFblOk: service processed successfully (goto next state), kFblFailed: Service processing failed.
 **********************************************************************************************************************/
static tFblResult FblDiagRCStartCsumMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen)
{
   tFblDiagNrc serviceNrc;
   vuint8 checkResult;
   tFblResult result;

   /* Initialize variables */
   serviceNrc = kDiagErrorNone;
   checkResult = kDiagCheckVerificationFailed;

   /* Check state flags */
   if (    (!FblDiagGetFingerprintValid())
        || (!FblDiagGetTransferDataSucceeded())
        || (!FblDiagGetChecksumAllowed())
      )
   {
      serviceNrc = kDiagNrcConditionsNotCorrect;
   }

   if (serviceNrc == kDiagErrorNone)
   {

      /* Invoke LibMem block end indication */
      serviceNrc = FblMemRemapStatus(FblMemBlockEndIndication());
   }

   if (serviceNrc == kDiagErrorNone)
   {
      /* Watchdog and response pending handling */
      (void)FblRealTimeSupport();

      /* Do verification */
#if defined( FBL_MEM_ENABLE_VERIFY_OUTPUT )
      (void)SecM_InitVerification(V_NULL);
#endif /* FBL_MEM_ENABLE_VERIFY_OUTPUT */
      checkResult = FblDiagDownloadCheck(pbDiagData, diagReqDataLen);
#if defined( FBL_MEM_ENABLE_VERIFY_OUTPUT )
      (void)SecM_DeinitVerification(V_NULL);
#endif /* FBL_MEM_ENABLE_VERIFY_OUTPUT */
   }
   else
   {
      /* Prepare NRC possibly set before */
      FblDiagSetError(serviceNrc);
   }

   if (DiagGetError() != kDiagErrorNone)
   {
      /* NRC already set - do nothing */
      result = kFblFailed;
   }
   else
   {
      /* No NRC set - submit positive response */
      pbDiagData[kDiagLocFmtRoutineStatus] = checkResult;
      DiagProcessingDone(kDiagRslRoutineControlCheckRoutine);
      result = kFblOk;
   }

   return result;
}

/***********************************************************************************************************************
 *  FblDiagRCStartEraseLengthCheck
 **********************************************************************************************************************/
/*! \brief         Routine Control - Erase Memory length check
 *  \param[in,out] pbDiagData Pointer to the data in the diagBuffer (without SID)
 *  \param[in]     diagReqDataLen Length of data (without SID)
 *  \return        kFblOk: Length of erase request is OK; kFblFailed: Length check failed
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_MSR_Rule8.13 */
static tFblResult FblDiagRCStartEraseLengthCheck(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen)
{
   tFblResult result;

   vuint8 addrFormat;
   vuint8 lengthFormat;

   /* Get length and address format from message */
   lengthFormat = (vuint8)((pbDiagData[kDiagLocFmtRoutineAlfi] & 0xF0u ) >> 4u);
   addrFormat   = (vuint8)(pbDiagData[kDiagLocFmtRoutineAlfi] & 0x0Fu);

   /* Check length of request against calculated length */
   if( diagReqDataLen != ((tCwDataLengthType)kDiagRqlRoutineControlEraseRoutine + lengthFormat + addrFormat))
   {
      result = kFblFailed;
   }
   else
   {
      result = kFblOk;
   }

   return result;
}

/***********************************************************************************************************************
 *  FblDiagRCStartEraseMainHandler
 **********************************************************************************************************************/
/*! \brief         Routine Control - Erase Memory.
 *  \pre           Fingerprint is available, memory driver initialized.
 *  \param[in,out] pbDiagData Pointer to the data in the diagBuffer (without SID)
 *  \param[in]     diagReqDataLen Length of data (without SID)
 *  \return        kFblOk: service processed successfully (goto next state), kFblFailed: Service processing failed.
 **********************************************************************************************************************/
/* PRQA S 6010, 6030, 6050 1 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */
static tFblResult FblDiagRCStartEraseMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen)
{
   tFblAddress memoryAddress;
   tFblLength memorySize;
   tBlockDescriptor tempBlockDescriptor = {0};
   tFblResult result;

#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* Parameters not used: avoid compiler warning */
   (void)diagReqDataLen;   /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
#endif

   /* If an erase is triggered, clear checksum verification flag.
    * This protect against tentatives of UDS command injection.
    */
   FblDiagClrChecksumAllowed();
   /* Verify all erase preconditions are fulfilled */
   result = FblDiagCheckErasePreconditions(pbDiagData, &memoryAddress, &memorySize);

   if (result == kFblOk)
   {
      /* Check if address exists in logical block table */
      if (FblLbtGetBlockNrByAddressLength(memoryAddress, memorySize, &tempBlockDescriptor.blockNr) != kFblOk)
      {
         FblErrStatSetError(FBL_ERR_LBT_BLOCK_INDEX_EXCEEDED);
         DiagNRCRequestOutOfRange();
         result = kFblFailed;
      }
      else
      {
         /* Do some additional checks to verify if block can be erased */
         /* Initialize error status block number */
         FblErrStatSetBlockNr(tempBlockDescriptor.blockNr);
      }
   }

   if (result == kFblOk)
   {
      /* Send response pending in case of long NV accesses */
      DiagExRCRResponsePending(kForceSendResponsePending);

      result = FblDiagCheckProgAttemptCounter(&tempBlockDescriptor);
   }

#if defined( FBL_DIAG_ENABLE_BACKUP_BEFORE_ERASE )
   /* Backup from active to backup partition needs to be executed only once during the download sequence */
   if ((result == kFblOk) && (checkBackupBeforeErase != kDiagEraseMemoryBackupBeforeEraseDone))
   {
      if (FblDiagCheckPartitionValidity(vOtaM_Part_Role_Active) == kFblOk)
      {
         if (vOtaM_SyncPartitionByRole(vOtaM_Part_Role_Active, vOtaM_Part_Role_Backup) == E_OK)
         {
            checkBackupBeforeErase = kDiagEraseMemoryBackupBeforeEraseDone;
         }
      }
   }
#endif /* FBL_DIAG_ENABLE_BACKUP_BEFORE_ERASE */

   if (result == kFblOk)
   {
      (void)FblRealTimeSupport();

      /* Invalidate logical block to be erased */
      if (ApplFblInvalidateBlock(tempBlockDescriptor) != kFblOk)
      {
         /* Block could not be invalidated or programming attempt counter could not be stored */
         DiagNRCConditionsNotCorrect();
         result = kFblFailed;
      }
   }

   if (result == kFblOk)
   {
      /* Increase programming attempt counter */
      if (ApplFblIncProgAttempts(tempBlockDescriptor) != kFblOk)
      {
         DiagNRCConditionsNotCorrect();
         result = kFblFailed;
      }
   }

   if (result == kFblOk)
   {
      result = FblDiagEraseBlock(&tempBlockDescriptor);
      if (result == kFblOk)
      {
         /* Initialize downloadBlockDescriptor only after successful erase */
         downloadBlockDescriptor = tempBlockDescriptor;
         /* Prepare positive response */
         pbDiagData[kDiagLocFmtRoutineStatus] = kDiagEraseMemoryOk;
      }
      else
      {
         /* Prepare positive response with error code */
         pbDiagData[kDiagLocFmtRoutineStatus] = kDiagEraseMemoryFailed;
      }
   }

   /* Send positive response in case no NRC is set */
   if (DiagGetError() == kDiagErrorNone)
   {
      DiagProcessingDone(kDiagRslRoutineControlEraseRoutine);
   }

   return result;
}

#if defined( FBL_DIAG_ENABLE_CHECK_PROGRAMMING_PRECONDITIONS )
/***********************************************************************************************************************
 *  FblDiagRCStartCheckProgPreCondMainHandler
 **********************************************************************************************************************/
/*! \brief         Check Programming Preconditions service function
 *  \param[in,out] pbDiagData Pointer to the data in the diagBuffer (without SID)
 *  \param[in]     diagReqDataLen Length of data (without SID)
 *  \return        kFblOk: service processed successfully (goto next state), kFblFailed: Service processing failed.
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_MSR_Rule8.13 */
static tFblResult FblDiagRCStartCheckProgPreCondMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen)
{
# if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* Parameters not used: avoid compiler warning */ /* PRQA S 3112 2 */ /* MD_MSR_DummyStmt */
   (void)pbDiagData;
   (void)diagReqDataLen;
# endif

   /* Clear status variables */
   FblDiagClrFingerprintValid();

   /* Check for preconditions - response should be prepared in callback function */
   if (ApplFblCheckProgConditions() == kFblOk)
   {
      FblDiagSetPreconditionsChecked();
   }
   else
   {
      FblDiagClrPreconditionsChecked();
   }

   /* DiagProcessingDone is called from callback function */
   return kFblOk;
}
#endif /* FBL_DIAG_ENABLE_CHECK_PROGRAMMING_PRECONDITIONS */

#if defined( FBL_ENABLE_STAY_IN_BOOT )
/***********************************************************************************************************************
 *  FblDiagRCStartForceBootModeMainHandler
 **********************************************************************************************************************/
/*! \brief         Check for Force Boot Mode message
 *  \param[in,out] pbDiagData Pointer to the data in the diagBuffer (without SID)
 *  \param[in]     diagReqDataLen Length of data (without SID)
 *  \return        kFblOk: service processed successfully (goto next state), kFblFailed: Service processing failed.
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_MSR_Rule8.13 */
static tFblResult FblDiagRCStartForceBootModeMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen)
{
#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* Parameters not used: avoid compiler warning */ /* PRQA S 3112 2 */ /* MD_MSR_DummyStmt */
   (void)pbDiagData;
   (void)diagReqDataLen;
#endif

   /* Nothing to do here - just send positive response */
   DiagProcessingDone(kDiagRslRoutineControlStayInBoot);

   return kFblOk;
}
#endif /* FBL_EANBLE_STAY_IN_BOOT */

#if defined( FBL_DIAG_ENABLE_ROUTINE_BACKUP ) ||  defined( FBL_DIAG_ENABLE_ROUTINE_ACTIVATE_SOFTWARE ) || defined( FBL_DIAG_ENABLE_ROUTINE_ROLLBACK )
/***********************************************************************************************************************
 *  FblDiagPartitionHandlingPreconditions
 **********************************************************************************************************************/
/*! \brief         Verify preconditions before initiating any routine related to OTA download config.
 *  \return        kFblOk: precondition check done successfully, kFblFailed: precondition check failed.
 **********************************************************************************************************************/
static tFblResult FblDiagPartitionHandlingPreconditions(void)
{
   tFblResult result = kFblOk;

   if (!FblDiagGetMemDriverInitialized())
   {
# if defined( VOTAM_ENABLE_FLASHDRIVER_INIT )
      if (vOtaM_Appl_InitBuildInFlashDriver() == E_OK)
      {
         FblDiagSetInternalFlashDriverUsed();
      }
      else
# endif /* VOTAM_ENABLE_FLASHDRIVER_INIT */
      {
         DiagNRCConditionsNotCorrect();
         result = kFblFailed;
      }
   }

   return result;
}

/***********************************************************************************************************************
 *  FblDiagPartitionHandlingPostconditions
 **********************************************************************************************************************/
/*! \brief         Perform postconditions after completion of any routine related to OTA download config.
 *  \return        kFblOk: postconditions done successfully, Otherwise KFblFailed.
**********************************************************************************************************************/
static tFblResult FblDiagPartitionHandlingPostconditions(void)
{
# if defined( VOTAM_ENABLE_FLASHDRIVER_INIT )
   if (FblDiagGetInternalFlashDriverUsed())
   {
      (void) vOtaM_Appl_DeinitBuildInFlashDriver();
      FblDiagClrInternalFlashDriverUsed();
   }
# endif /* VOTAM_ENABLE_FLASHDRIVER_INIT */

   return kFblOk;
}
#endif /* FBL_DIAG_ENABLE_ROUTINE_BACKUP || FBL_DIAG_ENABLE_ROUTINE_ACTIVATE_SOFTWARE || FBL_DIAG_ENABLE_ROUTINE_ROLLBACK */

#if defined( FBL_DIAG_ENABLE_ROUTINE_BACKUP ) ||  defined( FBL_DIAG_ENABLE_ROUTINE_ACTIVATE_SOFTWARE ) || \
     defined( FBL_DIAG_ENABLE_ROUTINE_ROLLBACK ) || defined( FBL_DIAG_ENABLE_BACKUP_BEFORE_ERASE ) || \
     ( FBL_DIAG_DOWNLOAD_TARGET == FBL_DIAG_DOWNLOAD_TARGET_INACTIVE_PARTITION )
/***********************************************************************************************************************
 *  FblDiagCheckPartitionValidity
 **********************************************************************************************************************/
 /*! \brief         Check the validity of the requested partition by role
  *  \param[in]     partIdByRole Requested Partition Role
  *  \return        kFblOk: Partition is valid , kFblFailed: Partition is not valid.
  **********************************************************************************************************************/
static tFblResult FblDiagCheckPartitionValidity(vOtaM_PartitionRoleType partIdByRole)
{
   tFblResult result = kFblFailed;
   vOtaM_PartitionRoleType currentPartIdByRole;

   currentPartIdByRole = vOtaM_GetRoleOfOpenedPartition();

   if(currentPartIdByRole != partIdByRole)
   {
      if (vOtaM_OpenPartition(partIdByRole) == E_OK)
      {
         if (ApplFblIsValidApp() == kApplValid)
         {
            result = kFblOk;
         }

         if (vOtaM_OpenPartition(currentPartIdByRole) != E_OK)
         {
            result = kFblFailed;
         }

      }
   }
   else
   {
      if (ApplFblIsValidApp() == kApplValid)
      {
         result = kFblOk;
      }
   }

   return result;
}
#endif /* FBL_DIAG_ENABLE_ROUTINE_BACKUP || FBL_DIAG_ENABLE_ROUTINE_ACTIVATE_SOFTWARE ||
           FBL_DIAG_ENABLE_ROUTINE_ROLLBACK || FBL_DIAG_ENABLE_BACKUP_BEFORE_ERASE ||
           FBL_DIAG_DOWNLOAD_TARGET == FBL_DIAG_DOWNLOAD_TARGET_INACTIVE_PARTITION */

#if defined( FBL_DIAG_ENABLE_ROUTINE_BACKUP )
/***********************************************************************************************************************
 *  FblDiagRCStartBackupMainHandler
 **********************************************************************************************************************/
/*! \brief         Perform copy of data from active partition to backup partition before erase in case of
                    VOTAM_USECASE_EXTENDED
 *  \pre           Memory driver initialized, valid software to be available in the active partition
 *  \param[in,out] pbDiagData Pointer to the data in the diagBuffer (without SID)
 *  \param[in]     diagReqDataLen Length of data (without SID)
 *  \return        kFblOk: service processed successfully (goto next state), kFblFailed: Service processing failed.
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_MSR_Rule8.13 */
static tFblResult FblDiagRCStartBackupMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen)
{
   tFblResult result = kFblFailed;
   tFblResult checkBackupResult = kFblFailed;

# if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* Parameters not used: avoid compiler warning */
   (void)diagReqDataLen;   /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
# endif /* V_ENABLE_USE_DUMMY_STATEMENT */

   if (FblDiagPartitionHandlingPreconditions() == kFblOk)
   {
      /* Send response pending before starting sync partition */
      DiagExRCRResponsePending(kForceSendRpIfNotInProgress);

      if (FblDiagCheckPartitionValidity(vOtaM_Part_Role_Active) == kFblOk)
      {
         if (vOtaM_SyncPartitionByRole(vOtaM_Part_Role_Active, vOtaM_Part_Role_Backup) == E_OK)
         {
            checkBackupResult = kFblOk;
         }
      }

      if (checkBackupResult == kFblOk)
      {
         pbDiagData[kDiagLocFmtRoutineStatus] = kDiagBackupOk;
      }
      else
      {
         pbDiagData[kDiagLocFmtRoutineStatus] = kDiagBackupFailed;
      }

      DiagProcessingDone(kDiagRslRoutineControlBackup);
      result = kFblOk;
   }

   (void)FblDiagPartitionHandlingPostconditions();

   return result;
}
#endif /* FBL_DIAG_ENABLE_ROUTINE_BACKUP */

#if defined( FBL_DIAG_ENABLE_ROUTINE_ACTIVATE_SOFTWARE )
/***********************************************************************************************************************
 *  FblDiagRCStartActivateSoftwareMainHandler
 **********************************************************************************************************************/
/*! \brief         Perform copy of data from inactive partition to active partition in case of VOTAM_USECASE_EXTENDED
                    or swap the partitions in case of VOTAM_USECASE_BASIC
 *  \pre           Memory driver initialized, Software has to be downloaded already to the inactive parition
 *  \param[in,out] pbDiagData Pointer to the data in the diagBuffer (without SID)
 *  \param[in]     diagReqDataLen Length of data (without SID)
 *  \return        kFblOk: service processed successfully (goto next state), kFblFailed: Service processing failed.
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_MSR_Rule8.13 */
static tFblResult FblDiagRCStartActivateSoftwareMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen)
{
   tFblResult result = kFblFailed;
   tFblResult checkActivateSoftwareResult = kFblFailed;

# if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* Parameters not used: avoid compiler warning */
   (void)diagReqDataLen;   /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
# endif /* V_ENABLE_USE_DUMMY_STATEMENT */

   if (FblDiagPartitionHandlingPreconditions() == kFblOk)
   {
      /* Send response pending before starting swap partition */
      DiagExRCRResponsePending(kForceSendRpIfNotInProgress);

      if (FblDiagCheckPartitionValidity(vOtaM_Part_Role_Inactive) == kFblOk)
      {
         if (vOtaM_SwapPartition() == E_OK)
         {
            checkActivateSoftwareResult = kFblOk;
# if defined( FBL_DIAG_ENABLE_BACKUP_BEFORE_ERASE )
            checkBackupBeforeErase = kDiagEraseMemoryBackupBeforeEraseNotDone;
# endif /* FBL_DIAG_ENABLE_BACKUP_BEFORE_ERASE */
         }
      }

      if (checkActivateSoftwareResult == kFblOk)
      {
         pbDiagData[kDiagLocFmtRoutineStatus] = kDiagActivateSoftwareOk;
      }
      else
      {
         pbDiagData[kDiagLocFmtRoutineStatus] = kDiagActivateSoftwareFailed;
      }

      DiagProcessingDone(kDiagRslRoutineControlActivateSoftware);
      result = kFblOk;
   }

   (void)FblDiagPartitionHandlingPostconditions();

   return result;
}
#endif /* FBL_DIAG_ENABLE_ROUTINE_ACTIVATE_SOFTWARE */

#if defined( FBL_DIAG_ENABLE_ROUTINE_ROLLBACK )
/***********************************************************************************************************************
 *  FblDiagRCStartRollbackMainHandler
 **********************************************************************************************************************/
/*! \brief         Perform swap of partitions in case of VOTAM_USECASE_BASIC or copy data from backup partition to
                    active partition in case of VOTAM_USECASE_EXTENDED
 *  \pre           Memory driver initialized, valid software to be available either in the inactive partition in case
                    of VOTAM_USECASE_BASIC or in the backup partition in case of VOTAM_USECASE_EXTENDED
 *  \param[in,out] pbDiagData Pointer to the data in the diagBuffer (without SID)
 *  \param[in]     diagReqDataLen Length of data (without SID)
 *  \return        kFblOk: service processed successfully (goto next state), kFblFailed: Service processing failed.
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_MSR_Rule8.13 */
static tFblResult FblDiagRCStartRollbackMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen)
{
   tFblResult result = kFblFailed;
   tFblResult checkRollbackResult = kFblFailed;

# if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* Parameters not used: avoid compiler warning */
   (void)diagReqDataLen;   /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
# endif /* V_ENABLE_USE_DUMMY_STATEMENT */

   if (FblDiagPartitionHandlingPreconditions() == kFblOk)
   {
      /* Send response pending before starting sync or swap partition */
      DiagExRCRResponsePending(kForceSendRpIfNotInProgress);

# if defined( VOTAM_USECASE_EXTENDED )
      if (FblDiagCheckPartitionValidity(vOtaM_Part_Role_Backup) == kFblOk)
# else
      if (FblDiagCheckPartitionValidity(vOtaM_Part_Role_Inactive) == kFblOk)
# endif /* VOTAM_USECASE_EXTENDED */
      {
         if (ApplFblCheckDowngradeProtection() == kFblOk)
         {
# if defined( VOTAM_USECASE_EXTENDED )
            if (vOtaM_SyncPartitionByRole(vOtaM_Part_Role_Backup, vOtaM_Part_Role_Active) == E_OK)
# else
            if (vOtaM_SwapPartition() == E_OK)
# endif /* VOTAM_USECASE_EXTENDED */
            {
               checkRollbackResult = kFblOk;
            }
         }
      }

      if (checkRollbackResult == kFblOk)
      {
         pbDiagData[kDiagLocFmtRoutineStatus] = kDiagRollbackOk;
      }
      else
      {
         pbDiagData[kDiagLocFmtRoutineStatus] = kDiagRollbackFailed;
      }

      DiagProcessingDone(kDiagRslRoutineControlRollback);
      result = kFblOk;
   }

   (void)FblDiagPartitionHandlingPostconditions();

   return result;
}
#endif /* FBL_DIAG_ENABLE_ROUTINE_ROLLBACK */

/***********************************************************************************************************************
 *  FblDiagRCStartCheckProgDepMainHandler
 **********************************************************************************************************************/
/*! \brief         Check program dependencies
 *  \param[in,out] pbDiagData Pointer to the data in the diagBuffer (without SID)
 *  \param[in]     diagReqDataLen Length of data (without SID)
 *  \return        kFblOk: service processed successfully (goto next state), kFblFailed: Service processing failed.
 **********************************************************************************************************************/
static tFblResult FblDiagRCStartCheckProgDepMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen)
{
   tFblResult result = kFblOk;
   vuint8 resultChkProgDep = kDiagCheckCompatibilityOk;

#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* Parameters not used: avoid compiler warning */
   (void)diagReqDataLen;   /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
#endif

   if ((!FblDiagGetFingerprintValid()) || (!FblDiagGetMemDriverInitialized()))
   {
      result = kFblFailed;
   }
   else
   {
#if ( FBL_DIAG_DOWNLOAD_TARGET == FBL_DIAG_DOWNLOAD_TARGET_INACTIVE_PARTITION )
      /* Send response pending before starting sync partition */
      DiagExRCRResponsePending(kForceSendRpIfNotInProgress);

      if (FblDiagCheckPartitionValidity(vOtaM_Part_Role_Active) == kFblOk)
      {
         if (vOtaM_SyncPartitionByRoleExtended(vOtaM_Part_Role_Active, vOtaM_Part_Role_Inactive, (VOTAM_SYNCPARTITION_OPTION_NOVALIDATION |
            VOTAM_SYNCPARTITION_OPTION_IGNORESYNCCONFIG | VOTAM_SYNCPARTITION_OPTION_LATERREVISION)) != E_OK)
         {
            result = kFblFailed;
         }
      }
      if (result == kFblOk)
#endif /* FBL_DIAG_DOWNLOAD_TARGET == FBL_DIAG_DOWNLOAD_TARGET_INACTIVE_PARTITION */
      {
         /* Call function to check programming dependencies */
         resultChkProgDep = ApplFblCheckProgDependencies();

#if defined( FBL_DIAG_ENABLE_ACTIVATE_SOFTWARE_DURING_CHECK_PROGRAMMING_DEPENDENCIES )
         if (resultChkProgDep == kDiagCheckCompatibilityOk)
         {
            if (vOtaM_SwapPartition() != E_OK)
            {
               resultChkProgDep = kDiagCheckCompatibilityFailed;
            }
# if defined( FBL_DIAG_ENABLE_BACKUP_BEFORE_ERASE )
            else
            {
               checkBackupBeforeErase = kDiagEraseMemoryBackupBeforeEraseNotDone;
            }
# endif /* FBL_DIAG_ENABLE_BACKUP_BEFORE_ERASE */
         }
#endif /* FBL_DIAG_ENABLE_ACTIVATE_SOFTWARE_DURING_CHECK_PROGRAMMING_DEPENDENCIES */

         pbDiagData[kDiagLocFmtRoutineStatus] = resultChkProgDep;
         DiagProcessingDone(kDiagRslRoutineControlCheckRoutine);
      }
   }

   if (result != kFblOk)
   {
      DiagNRCConditionsNotCorrect();
   }

   return result;
}

/***********************************************************************************************************************
 *  FblDiagRequestDownloadLengthCheck
 **********************************************************************************************************************/
/*! \brief         Request download length check
 *  \param[in,out] pbDiagData Pointer to the data in the diagBuffer (without SID)
 *  \param[in]     diagReqDataLen Length of data (without SID)
 *  \return        kFblOk: Length of check request is OK; kFblFailed: Length check failed
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_MSR_Rule8.13 */
static tFblResult FblDiagRequestDownloadLengthCheck(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen)
{
   tFblResult result;

   vuint8 addrFormat;
   vuint8 lengthFormat;

   /* Get length and address format from message */
   lengthFormat = (vuint8)((pbDiagData[kDiagLocFmtFormatOffset] & 0xF0u) >> 4u);
   addrFormat   = (vuint8)(pbDiagData[kDiagLocFmtFormatOffset] & 0x0Fu);

   /* Check length of request against calculated length */
   if(diagReqDataLen != ((tCwDataLengthType)kDiagRqlRequestDownload + lengthFormat + addrFormat))
   {
      result = kFblFailed;
   }
   else
   {
      result = kFblOk;
   }

   return result;
}

/***********************************************************************************************************************
 *  FblDiagRequestDownloadMainHandler
 **********************************************************************************************************************/
/*! \brief         Request download service function
 *  \param[in,out] pbDiagData Pointer to the data in the diagBuffer (without SID)
 *  \param[in]     diagReqDataLen Length of data (without SID)
 *  \return        kFblOk: service processed successfully (goto next state), kFblFailed: Service processing failed.
 **********************************************************************************************************************/
/* PRQA S 6050 1 */ /* MD_MSR_STCAL */
static tFblResult FblDiagRequestDownloadMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen)
{
   tFblMemBlockInfo blockInfo;
   tFblMemSegmentInfo segmentInfoLocal;
   tFblResult result;
   tFblDiagNrc libMemResult;
   vuint8 * localPbDiagData;

#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* Parameters not used: avoid compiler warning */
   (void)diagReqDataLen;   /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
#endif

   /* Initialize variables */
   segmentInfoLocal.logicalAddress = 0u;
   segmentInfoLocal.logicalLength = 0u;
   localPbDiagData = pbDiagData;

   /* Verify all programming preconditions are fulfilled. Get address and length (logical) from request */
   result = FblDiagCheckRequestDownloadPreconditions(localPbDiagData, &segmentInfoLocal);

#if defined( FBL_DIAG_ENABLE_FLASHDRV_DOWNLOAD )
   /* Flash Driver download? */
   if (result == kFblOk)
   {
      result = FblDiagCheckForFlashDriverDownload(&segmentInfoLocal);
   }
#else
   FblDiagSetTransferTypeFlash();
   segmentInfoLocal.type = kFblMemType_ROM;
#endif /* FBL_DIAG_ENABLE_FLASHDRV_DOWNLOAD */

   if (result == kFblOk)
   {
      /* Get length from request */
      transferRemainder = segmentInfoLocal.logicalLength;

      /* Initialize error status address */
      FblErrStatSetAddress(segmentInfoLocal.logicalAddress);

      /* Init expected sequence counter for TransferData */
      expectedSequenceCnt = kDiagInitSequenceNum;
      /* Init current sequence counter for TransferData */
      currentSequenceCnt = kDiagInitSequenceNum;

      /* Prepare download of application or flash driver. Target addresses are valid after these calls */
#if defined( FBL_DIAG_ENABLE_FLASHDRV_DOWNLOAD )
      if (!FblDiagGetTransferTypeFlash())
      {
         result = FblDiagCheckFlashDriverDownload(&segmentInfoLocal);
      }
      else
#endif /* FBL_DIAG_ENABLE_FLASHDRV_DOWNLOAD */

      {
         result = FblDiagCheckFlashMemoryDownload(&segmentInfoLocal);
      }
   }

   /* First download segment */
   if ((result == kFblOk) && (segmentCount <= 1u))
   {
      /* The downloadBlockDescriptor.blockNr is initialized at different locations before:
         - In FblDiagCheckFlashDriverDownload for flash driver download
         - In FblDiagRCStartEraseMainHandler for normal flash download
         - In FblDiagInitDeltaDownload for delta download */
      result = FblDiagPrepareFirstDownloadSegment(&blockInfo, &segmentInfoLocal, downloadBlockDescriptor.blockNr);
      localPbDiagData = FblDiagMemGetActiveBuffer(); /* PRQA S 2982 */ /* MD_FblDiagOem_298x */

#if defined( FBL_DIAG_ENABLE_EMBEDDED_VERIFY_DATA )
      if (result == kFblOk)
      {
         /* Initialize read function for each new block */
         verifyParam.readMemory = blockInfo.readFct;
      }
#endif /* FBL_DIAG_ENABLE_EMBEDDED_VERIFY_DATA */
   }

   /* Add segment data to FblLib_Mem */
   if (result == kFblOk)
   {
#if ( defined( FBL_MEM_ENABLE_VERIFY_PIPELINED ) || defined( FBL_MEM_ENABLE_VERIFY_PROCESSED ) ) && \
      defined( FBL_DIAG_ENABLE_EMBEDDED_VERIFY_DATA )
      if (segmentCount == FBL_VERIFICATION_SEGMENT_INDEX)
      {
         /* Specific segment must contain signature/CRC of logical block if pipelined verification is used */
         segmentInfoLocal.logicalLength -= kSecCRCLength + kSecSigLength;
      }
#endif /* (FBL_MEM_ENABLE_VERIFY_PIPELINED || FBL_MEM_ENABLE_VERIFY_PROCESSED) && FBL_DIAG_ENABLE_EMBEDDED_VERIFY_DATA */
     /* Indicate start of new segment */
      libMemResult = FblMemRemapStatus(FblMemSegmentStartIndication(&segmentInfoLocal));
      localPbDiagData = FblDiagMemGetActiveBuffer();
      if (libMemResult == kDiagErrorNone)
      {
         /* Init expected sequence counter for TransferData */
         expectedSequenceCnt = kDiagInitSequenceNum;
         /* Init current sequence counter for TransferData */
         currentSequenceCnt = kDiagInitSequenceNum;

         /* Now allow reception of TransferData */
         FblDiagSetTransferDataAllowed();
         FblDiagClrTransferDataSucceeded();
         FblDiagClrChecksumAllowed();

         /* Prepare response */
         localPbDiagData[kDiagLocFmtSubparam] = (FBL_DIAG_RESPONSE_BUFFER_LFI << 4u);
         FblMemSetInteger(FBL_DIAG_RESPONSE_BUFFER_LFI, FBL_DIAG_RESPONSE_BUFFER_SIZE, &localPbDiagData[kDiagLocFmtSubparam + 1u]);

         DiagProcessingDone(kDiagRslRequestDownload + FBL_DIAG_RESPONSE_BUFFER_LFI);
      }
      else
      {
         /* Set NRC provided by FblLib_Mem */
         FblDiagSetError(libMemResult);
         result = kFblFailed;
      }
   }

   return result;
}  /* PRQA S 6050 */ /* MD_MSR_STCAL */

/***********************************************************************************************************************
 *  FblDiagTransferDataLengthCheck
 **********************************************************************************************************************/
/*! \brief         Transfer data length check
 *  \param[in,out] pbDiagData Pointer to the data in the diagBuffer (without SID)
 *  \param[in]     diagReqDataLen Length of data (without SID)
 *  \return        kFblOk: Length of transfer data service is OK; kFblFailed: Length check failed
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_MSR_Rule8.13 */
static tFblResult FblDiagTransferDataLengthCheck(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen)
{
   tFblResult result;

#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* Parameters not used: avoid compiler warning */
   (void)pbDiagData;       /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
#endif

   if ((diagReqDataLen <= ((tCwDataLengthType)kDiagRqlTransferData)) || (diagReqDataLen > (tCwDataLengthType)((tCwDataLengthType)FBL_DIAG_RESPONSE_BUFFER_SIZE - 1u)))
   {
      /* Requested transfer length is larger than indicated data length */
      FblDiagClrTransferDataAllowed();
      result = kFblFailed;
   }
   else
   {
      result = kFblOk;
   }

   return result;
}

/***********************************************************************************************************************
 *  FblDiagTransferDataMainHandler
 **********************************************************************************************************************/
/*! \brief         TransferData service function;
 *  \pre           TransferData must be enabled by RequestDownload service
 *  \param[in,out] pbDiagData Pointer to the data in the diagBuffer (without SID)
 *  \param[in]     diagReqDataLen Length of data (without SID)
 *  \return        kFblOk: service processed successfully (goto next state), kFblFailed: Service processing failed.
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_MSR_Rule8.13 */
static tFblResult FblDiagTransferDataMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen)
{
   tFblResult result;
   tFblDiagNrc libMemResult;
   tFblLength transferDataLength;
   vuint8 * localPbDiagData = pbDiagData; /* PRQA S 3678 */ /* MD_MSR_Rule8.13 */

   if (!FblDiagGetTransferDataAllowed())
   {
      DiagNRCRequestSequenceError();
      result = kFblFailed;
   }
   /* Check if the requested sequence number is expected */
   else if (localPbDiagData[kDiagLocFmtSubparam] != expectedSequenceCnt)
   {
      /* Check if sequence number corresponds to a retransmission of the last message */
      if (localPbDiagData[kDiagLocFmtSubparam] == currentSequenceCnt)
      {
         /* Repetition of last transferData request
          * Simply send a positive response without loading data to memory */
         DiagProcessingDone(kDiagRslTransferData);
         result = kFblOk;
      }
      else /* Sequence number is not for a retry */
      {
         /* Send a WrongSequenceError */
         DiagNRCWrongBlockSequenceCounter();
         result = kFblFailed;
      }
   }
   else
   {
      /* Length without sequence counter byte */
      transferDataLength = (tFblLength)diagReqDataLen - 1u;

      /* Indicate data to FblLib_Mem */
      FblDiagClrEraseSucceeded();
      libMemResult = FblMemRemapStatus(FblMemDataIndication(DiagBuffer, kDiagFmtDataOffset, transferDataLength));

      /* Caution: Depending on configuration, DiagBuffer pointer may change. */
      localPbDiagData = FblDiagMemGetActiveBuffer(); /* PRQA S 2983 */ /* MD_FblDiagOem_298x */
      if (libMemResult == kDiagErrorNone)
      {
         /* Memorize current counter */
         currentSequenceCnt = expectedSequenceCnt;
         /* Sequence counter value of next transferData request
          * Note: We do not rely on an implicit 8-bit caused overflow at 256, which does not happen on certain platforms */
         expectedSequenceCnt = ((expectedSequenceCnt + 1u) & 0xFFu);

         DiagProcessingDone(kDiagRslTransferData);
         result = kFblOk;
      }
      else
      {
         FblDiagSetError(libMemResult);
         FblDiagClrTransferDataAllowed();
         result = kFblFailed;
      }
   }

   return result;
}

/***********************************************************************************************************************
 *  FblDiagReqTransferExitMainHandler
 **********************************************************************************************************************/
/*! \brief         RequestTransferExit service function
 *  \param[in,out] pbDiagData Pointer to the data in the diagBuffer (without SID)
 *  \param[in]     diagReqDataLen Length of data (without SID)
 *  \return        kFblOk: service processed successfully (goto next state), kFblFailed: Service processing failed.
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_MSR_Rule8.13 */
static tFblResult FblDiagReqTransferExitMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen)
{
   tFblResult result;
   tFblDiagNrc libMemResult;
   tFblLength  totalProgramLength;  /* Total number of programmed bytes */

#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* Parameters not used: avoid compiler warning */ /* PRQA S 3112 2 */ /* MD_MSR_DummyStmt */
   (void)pbDiagData;
   (void)diagReqDataLen;
#endif

   /* Do sequence and parameter checks */
   if (!FblDiagGetTransferDataAllowed())
   {
      DiagNRCRequestSequenceError();
      result = kFblFailed;
   }
   else
   {
      FblDiagClrTransferDataAllowed();

      /* Finalize programming of current segment */
      libMemResult = FblMemRemapStatus((FblMemSegmentEndIndication(&totalProgramLength)));
      (void)FblDiagMemGetActiveBuffer();

      if (libMemResult == kDiagErrorNone)
      {
         /* RequestTransferExit was successful */
         FblDiagSetTransferDataSucceeded();
         FblDiagSetChecksumAllowed();
         DiagProcessingDone(kDiagRslRequestTransferExit);
         result =  kFblOk;
      }
      else
      {
         /* Set return value of FblLib_Mem as NRC */
         FblDiagSetError(libMemResult);
         result = kFblFailed;
      }
   }

   return result;
}

/***********************************************************************************************************************
 *  FblDiagTesterPresentMainHandler
 **********************************************************************************************************************/
/*! \brief         FblTesterPresent service function.
 *  \param[in,out] pbDiagData Pointer to the data in the diagBuffer (without SID)
 *  \param[in]     diagReqDataLen Length of data (without SID)
 *  \return        kFblOk: service processed successfully (goto next state), kFblFailed: Service processing failed.
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_MSR_Rule8.13 */
static tFblResult FblDiagTesterPresentMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen)
{
#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* Parameters not used: avoid compiler warning */ /* PRQA S 3112 2 */ /* MD_MSR_DummyStmt */
   (void)pbDiagData;
   (void)diagReqDataLen;
#endif

   DiagProcessingDone(kDiagRslTesterPresent);

   return kFblOk;
}

/***********************************************************************************************************************
 *  FblDiagControlDTCMainHandler
 **********************************************************************************************************************/
/*! \brief         ControlDTCSetting service function.
 *  \param[in,out] pbDiagData Pointer to the data in the diagBuffer (without SID)
 *  \param[in]     diagReqDataLen Length of data (without SID)
 *  \return        kFblOk: service processed successfully (goto next state), kFblFailed: Service processing failed.
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_MSR_Rule8.13 */
static tFblResult FblDiagControlDTCMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen)
{
   tFblResult result;

#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* Parameters not used: avoid compiler warning */
# if !defined( FBL_DIAG_ENABLE_CONTROLDTC_OPTIONRECORD )
   (void)pbDiagData;       /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
# endif
   (void)diagReqDataLen;   /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
#endif

#if defined( FBL_DIAG_ENABLE_CONTROLDTC_OPTIONRECORD )
   /* Check DTCSettingControlOptionRecord */
   if (   ( pbDiagData[kDiagLocFmtRoutineIdHigh] != 0xFFu) \
       || ( pbDiagData[kDiagLocFmtRoutineIdLow]  != 0xFFu) \
       || ( pbDiagData[kDiagLocFmtRoutineStatus] != 0xFFu)
      )
   {
      DiagNRCRequestOutOfRange();
      result = kFblFailed;
   }
   else
#endif /* FBL_DIAG_ENABLE_CONTROLDTC_OPTIONRECORD */
   {
      /* Simply transmit a positive response message with subfunction parameter */
      DiagProcessingDone(kDiagRslControlDTCSetting);

      result = kFblOk;
   }

   return result;
}

/***********************************************************************************************************************
 *  FblDiagReadDataByIdMainHandler
 **********************************************************************************************************************/
/*! \brief         ReadDataByIdentifier service function
 *  \param[in,out] pbDiagData Pointer to the data in the diagBuffer (without SID)
 *  \param[in]     diagReqDataLen Length of data (without SID)
 *  \return        kFblOk: service processed successfully (goto next state), kFblFailed: Service processing failed.
 *********************************************************************************************************************/
static tFblResult FblDiagReadDataByIdMainHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen)
{
   ApplFblReadDataByIdentifier(pbDiagData, diagReqDataLen);

   return kFblOk;
}

/***********************************************************************************************************************
 * Diagnostic pre handler service functions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  FblDiagDefaultPreHandler
 **********************************************************************************************************************/
/*! \brief         Pre-handler function to call ApplFblCheckConditions()
 *  \param[in,out] pbDiagData Pointer to the data in the diagBuffer (without SID)
 *  \param[in]     diagReqDataLen Length of data (without SID)
 *  \return        kFblOk: service processed successfully (goto next state), kFblFailed: Service processing failed.
 *********************************************************************************************************************/
static tFblResult FblDiagDefaultPreHandler(vuint8 *pbDiagData, tCwDataLengthType diagReqDataLen)
{
   return ApplFblCheckConditions(pbDiagData, diagReqDataLen);
}

#define FBLDIAG_STOP_SEC_CODE
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_MemMap */

/***********************************************************************************************************************
 * Diagnostic post handler service functions
 **********************************************************************************************************************/

/* Start section to execute code from RAM */
#define FBLDIAG_RAMCODE_START_SEC_CODE
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_MemMap */
/***********************************************************************************************************************
 *  FblDiagDefaultPostHandler
 **********************************************************************************************************************/
/*! \brief       Can be used to switch to next state AFTER successful transmission of the service, e.g. EcuReset.
 *  \param[in]   postParam Parameter indicating service response.
 **********************************************************************************************************************/
void FblDiagDefaultPostHandler( vuint8 postParam )
{
#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* Parameters not used: avoid compiler warning */
   (void)postParam;  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
#endif
   if(FblDiagGetDefaultSession())
   {
      FblCwResetResponseAddress();
   }
}
/* Stop section to execute code from RAM */
#define FBLDIAG_RAMCODE_STOP_SEC_CODE
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_MemMap */

/***********************************************************************************************************************
 *  MISRA DEVIATIONS
 **********************************************************************************************************************/

/* Justification for module-specific MISRA deviations:
   MD_FblDiagOem_030x:
      Reason:     Address conversion between preset value and function pointer is needed to detect if
                  the default function should be used or if a specific function is configured.
      Risk:       The size of integer required to hold the result of a pointer cast is implementation defined.
      Prevention: The size of the respective integer data type which holds the address value is adapted on a hardware
                  specific basis.

   MD_FblDiagOem_0313:
      Reason: Signature/checksum verification functions are stored as void pointers as actual type is not known at
       configuration time.
      Risk: Function signature not compatible with expected type.
      Prevention: Integrator has to take care the configured functions match with the expected signature.

   MD_FblDiagOem_2742:
      Reason:     Configuration related constant data.
      Risk:       Statements in the 'if' or 'else' block are not executed.
      Prevention: Code inspection and test of the different configurations in the component test.

   MD_FblDiagOem_298x:
      Reason: Value assignment is done but the value is modified again before use or not used. The assignment is done to keep
       DiagData and the local pointer pbDiagData consistent.
      Risk: Adds a unused assignment which could result in a compiler warning.
      Prevention: Ignore compiler warning if observed.

*/

