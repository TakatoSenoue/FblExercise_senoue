/* Kernbauer Version: 1.12 Konfiguration: FBL Erzeugungsgangnummer: 1 */

/***********************************************************************************************************************
 *  FILE DESCRIPTION
 *  ------------------------------------------------------------------------------------------------------------------*/
/** \file
 *  \brief         Diagnostic services supported in boot mode
 *                 Declaration of functions, variables, and constants
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
 *  05.01.00   2018-09-19  visach  ESCAN00100791    Support Rueckflashschutz
 *  05.02.00   2019-06-26  vistbe  ESCAN00103512    Added support for stream output
 *  05.03.00   2021-04-01  vishor  FBL-2523         Support of the new FblMio
 *  05.04.00   2021-11-10  visjdn  FBL-3077         Support of embedded checksum/signature
 *  05.05.00   2022-06-29  vishor  FBL-5273         Update to specification set 2.11
 *  05.06.00   2024-10-15  virjjn  FBL-9413         Support Download to inactive partition
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  --------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Version    Date        Author  Change Id        Description
 *  --------------------------------------------------------------------------------------------------------------------
 *  02.00.00   2018-09-14  visrie  ESCAN00100739    Added support for FblLib_NvPattern
 *                                                  Removed unused code
 *                         viscb   ESCAN00101418    Callout function for memory condition check
 *                         visach  ESCAN00101686    No changes
 *  02.01.00   2019-02-26  visrie  ESCAN00102257    Added additional callout functions
 *  02.01.01   2019-09-23  visrie  FBL-452          No changes
 *  02.02.00   2019-12-05  visrie  FBL-458          Added FblMio callout functions
 *  02.03.00   2020-05-07  visrie  FBL-1414         Added callout functions for One-Step-Updater
 *  02.03.01   2020-06-02  visjdn  ESCAN00106533    No changes
 *  02.03.02   2020-09-14  visrcn  FBL-2257         No changes
 *  02.03.03   2020-11-23  visrcn  FBL-2564         No changes
 *  02.03.04   2021-03-19  visjdn  FBL-2916         No changes
 *  02.04.00   2021-05-25  vishor  FBL-3165         MISRA corrections and justifications
 *  02.05.00   2021-06-15  visrie  FBL-3591         No changes
 *  02.06.00   2021-07-15  visjdn  FBL-3381         Re-mapping of EcuM_SetWakeupEvent
 *  02.07.00   2021-07-23  visrie  FBL-3822         No changes
 *  02.08.00   2021-09-14  visjdn  FBL-2859         No changes
 *  02.09.00   2021-10-12  vistmo  FBL-3901         Add authentication callbacks
 *  02.10.00   2021-10-15  visrie  FBL-3945         Remove content of ApplFblStartApplication
 *  02.10.01   2021-11-12  vishor  ESCAN00110133    Compiler error: Unknown symbols
 *                                                   ApplFblSave/RestoreStatusSector/Dynamic
 *  02.10.02   2022-06-27  visrie  FBL-4694         No changes
 *  02.10.03   2022-10-20  visjns  FBL-5452         No changes
 *  02.11.00   2022-12-22  vistbe  FBL-5691         No changes
 *  02.11.01   2023-04-25  visjns  ESCAN00113808    No changes
 *  02.11.02   2023-08-07  visjns  FBL-7132         No changes
 *  02.12.00   2023-08-16  vismix  FBL-7050         Add API ApplFblIsDynamicProgSessionResponseInApplication
                                   ESCAN00114431    No changes
 *  02.13.00   2023-08-29  vismix  FBL-7246         Reuse flash driver after one-step bootloader updater
 *  02.13.01   2023-11-17  visrie  ESCAN00115700    No changes
 *  02.14.00   2024-04-26  visrie  FBL-2325         No changes
 *  02.14.01   2024-10-07  virjjn  ESCAN00118185    No changes
 *  02.14.02   2025-01-20  virchl  ESCAN00119180    No changes
 *  02.14.03   2025-03-05  virjjn  ESCAN00119536    Compiler error: Functions ApplFblTrcv* may not be defined
 *  02.14.04   2025-03-21  vismix  ESCAN00119674    No changes
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  REVISION HISTORY (KbFbl_apOem.h)
 *  --------------------------------------------------------------------------------------------------------------------
 *  Version    Date        Author  Change Id        Description
 *  --------------------------------------------------------------------------------------------------------------------
 *  06.00.00   2019-03-08  visrie  ESCAN00102262    No changes
 *                                 ESCAN00102274    No changes
 *                         visach  ESCAN00102407    No changes
 *  06.00.01   2019-03-11  visrie  ESCAN00102428    No changes
 *                         visach  ESCAN00102447    No changes
 *  06.00.02   2019-04-25  vistbe  ESCAN00102870    No changes
 *  06.01.00   2019-05-16  visach  ESCAN00103160    No changes
 *  06.02.00   2019-06-16  vistbe  ESCAN00103514    Added support for stream output
 *  06.02.01   2019-09-23  visrie  FBL-452          No changes
 *  06.02.02   2019-09-27  visrcn  ESCAN00102945    No changes
 *  07.00.00   2020-04-27  visrie  FBL-1412         No changes
 *  07.01.00   2020-05-07  visrie  FBL-1414         No changes
 *  07.01.01   2020-06-23  visjdn  ESCAN00105424    No changes
 *                                 ESCAN00103341    No changes
 *                                 ESCAN00106311    No changes
 *  07.01.02   2020-08-05  visjdn  ESCAN00106957    No changes
 *  07.01.03   2020-10-16  visrcn  ESCAN00107250    No changes
 *                                 ESCAN00107269    No changes
 *  07.01.04   2021-01-13  vistmo  ESCAN00107087    No changes
 *  07.01.05   2021-02-15  vishor  ESCAN00107905    No changes
 *  07.02.00   2021-04-01  vishor  FBL-2523         No changes
 *  07.02.01   2021-07-21  visrie  ESCAN00108794    No changes
 *                                 ESCAN00108042    No changes
 *                                 ESCAN00109818    No changes
 *  07.03.00   2021-11-10  visjdn  FBL-3077         No changes
 *  07.03.01   2022-02-01  vistmo  ESCAN00110600    No changes
 *  07.04.00   2022-06-29  vishor  FBL-5273         Update to specification set 2.11
 *                                 ESCAN00112207    No changes
 *  07.04.01   2022-09-28  visjns  ESCAN00112665    No changes
 *                                 ESCAN00112667    No changes
 *  07.05.00   2023-06-20  vismix  FBL-4317         No changes
 *  07.06.00   2023-08-14  vishor  FBL-7410         No changes
 *                                 ESCAN00115357    No changes
 *                                 ESCAN00115423    Invalid DFIs are accepted
 *                                 ESCAN00115383    Partially valid DFI is accepted and invalid part is treated as no
 *                                                   compression/encryption
 *  07.07.00   2023-08-29  vismix  FBL-7246         No changes
 *                                 ESCAN00113252    No changes
 *  07.08.00   2023-08-31  visjns  FBL-7269         No changes
 *  07.08.01   2024-05-02  visrie  ESCAN00116835    No changes
 *  07.09.00   2024-06-27  visesm  ESCAN00117245    No changes
 *  07.09.01   2025-04-03  vishor  ESCAN00119603    No changes
 *                                 ESCAN00119372    No changes
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  --------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY (KbFbl_apHW.h, Brs)
 *  --------------------------------------------------------------------------------------------------------------------
 *  Version    Date        Author  Change Id        Description
 *  --------------------------------------------------------------------------------------------------------------------
 *  01.00.00   2018-02-26  viscsz                   Initial version
 *  01.00.01   2018-03-08  viscsz  ESCAN00102984    No changes
 *  01.00.02   2019-04-16  viscsz  ESCAN00102985    No changes
 *  02.00.00   2020-04-08  visrie  FBL-1016         No changes
 *  02.01.00   2020-07-13  visjdn  ESCAN00106756    No changes
 *  02.01.01   2022-10-20  visjns  ESCAN00112300    No changes
 *  02.02.00   2022-12-13  visjdn  FBL-6267         No changes
 *  02.02.01   2023-01-09  vishor  ESCAN00113543    No changes
 *  02.03.00   2023-08-18  vismix  FBL-6196         No changes
 **********************************************************************************************************************/

#ifndef FBL_AP_H
#define FBL_AP_H

/***********************************************************************************************************************
 *  VERSION
 **********************************************************************************************************************/

/* ##V_CFG_MANAGEMENT ##CQProject : FblKbApi CQComponent : Implementation */
#define FBLKBAPI_VERSION                           0x0214u
#define FBLKBAPI_RELEASE_VERSION                   0x04u

/* ##V_CFG_MANAGEMENT ##CQProject : FblKbApi_Brs CQComponent : Implementation */
#define FBLKBAPI_BRS_VERSION          0x0203u
#define FBLKBAPI_BRS_RELEASE_VERSION  0x00u

/* ##V_CFG_MANAGEMENT ##CQProject : FblKbApi_Uds1 CQComponent : Implementation */
#define FBLKBAPI_UDS1_VERSION                    0x0709u
#define FBLKBAPI_UDS1_RELEASE_VERSION            0x01u

/* ##V_CFG_MANAGEMENT ##CQProject : FblKbApi_Frame_UDS1 CQComponent : Implementation */
#define FBLKBAPI_FRAME_UDS1_VERSION               0x0506u
#define FBLKBAPI_FRAME_UDS1_RELEASE_VERSION       0x00u

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  DEFINES
 **********************************************************************************************************************/

#define FBL_MAX_DID_COUNT   8u

#if defined( FBL_ENABLE_DATA_PROCESSING )
#  if defined( FBL_MEM_ENABLE_STREAM_OUTPUT)
/* For Vector SLP3, default compression maps to value == 1 (bit 0) and stream mode maps to value == 2 (bit 1).
 * Both can be supported simultaneously on the same data, therefore mask out bit 1 for the compression support check.
 * Upper nibble can be 0 in mask because for individual compression/encryption checks only one nibble is relevant */
#   define GetOemCompressionMask             (FblInvert8Bit(kDiagSubDefaultDelta) & 0x0Fu)
#  else /* FBL_MEM_ENABLE_STREAM_OUTPUT */
/* If stream mode is not supported, do not mask bit 1 */
#   define GetOemCompressionMask             0x0Fu
#  endif /* FBL_MEM_ENABLE_STREAM_OUTPUT */

/* Mask for encryption */
# define GetOemEncryptionMask                0x0Fu

/* Calculate mask for check of complete DFI */
# define GetOemDfiMask                       ((GetOemCompressionMask << 4u) | GetOemEncryptionMask)

# define GetOemCompressionModeMasked(m)      (FblDiagGetCompressionMode(m) & GetOemCompressionMask)
# if defined( FBL_ENABLE_COMPRESSION_MODE )
#   define GetOemCompressionMode(m)          (GetOemCompressionModeMasked(m) == kDiagSubDefaultCompression)
# else /* FBL_ENABLE_COMPRESSION_MODE */
#  define GetOemCompressionMode(m)           (0 != 0)
# endif /* FBL_ENABLE_COMPRESSION_MODE */

# define GetOemEncryptionModeMasked(m)       (FblDiagGetEncryptionMode(m) & GetOemEncryptionMask)
# if defined( FBL_ENABLE_ENCRYPTION_MODE )
#  define GetOemEncryptionMode(m)            (GetOemEncryptionModeMasked(m) == kDiagSubDefaultEncryption)
# else /* FBL_ENABLE_ENCRYPTION_MODE */
#  define GetOemEncryptionMode(m)            (0 != 0)
# endif /* FBL_ENABLE_ENCRYPTION_MODE */

/* Logic: One part of the DFI must match the masked value and the other must be set to 0 (no compression/encryption) OR
 * both parts of the DFI must match the masked value. Both masked parts being 0 is not allowed to evaluate as
 * data processing being required */
# define GetOemProcessingModeSupported(m)    (((GetOemCompressionMode(m) || (GetOemCompressionModeMasked(m) == kDiagSubNoCompression)) && \
                                             (GetOemEncryptionMode(m) || (GetOemEncryptionModeMasked(m) == kDiagSubNoEncryption))) && \
                                             (((m) & GetOemDfiMask) != kDiagSubNoDataProcessing))
#endif /* FBL_ENABLE_DATA_PROCESSING */

# if defined( FBL_MEM_ENABLE_STREAM_OUTPUT)
/* For Vector SLP3, default compression maps to value == 1 (bit 0) and delta compression maps to value == 2 (bit 1).
 * Both can be supported simultaneously on the same data, therefore mask out bit 0 for the stream mode support check.
 * Upper nibble can be 0 in mask because for individual compression/encryption checks only one nibble is relevant */
#  define GetOemStreamMask                   (FblInvert8Bit(kDiagSubDefaultCompression) & 0x0Fu)
#   define GetOemStreamModeSupported(m)      ((FblDiagGetCompressionMode(m) & GetOemStreamMask) == kDiagSubDefaultDelta)
# endif /* FBL_MEM_ENABLE_STREAM_OUTPUT */

/***********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/

#if defined( FBL_ENABLE_MULTIPLE_NODES ) || \
    defined( FBL_CW_ENABLE_MULTIPLE_NODES )
V_MEMRAM0 extern V_MEMRAM1 vuint8 V_MEMRAM2 fblEcuHandle;
#endif

/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

void ApplFblInit( void );
void ApplFblStartup( vuint8 initposition );
tFblResult ApplFblCheckProgConditions( void );
tFblResult ApplFblCheckConditions( vuint8 * pbDiagData, tTpDataType diagReqDataLen );
vuint8 ApplFblCheckProgDependencies( void );
void ApplTrcvrNormalMode( void );
void ApplTrcvrSleepMode( void );
void ApplFblSetVfp( void );
void ApplFblResetVfp( void );
void ApplFblReset( void );
#define FBLAP_RAMCODE_START_SEC_CODE_EXPORT
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
vuint8 ApplFblSecuritySeedInit( void );
#define FBLAP_RAMCODE_STOP_SEC_CODE_EXPORT
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
vuint8 ApplFblSecuritySeed( void );
vuint8 ApplFblSecurityKey( void );
vuint8 ApplFblSecurityInit( void );
#if defined( FBL_ENABLE_DATA_PROCESSING )
tFblResult ApplFblInitDataProcessing( tProcParam * procParam );
tFblResult ApplFblDataProcessing( tProcParam * procParam );
tFblResult ApplFblDeinitDataProcessing( tProcParam * procParam );
#endif /* FBL_ENABLE_DATA_PROCESSING */
#if defined( FBL_MEM_ENABLE_STREAM_OUTPUT )
tFblResult ApplFblInitStreamOutput( V_MEMRAM1 tFblMemStreamProcessing V_MEMRAM2 V_MEMRAM3 * streamParam );
tFblResult ApplFblStreamOutput( V_MEMRAM1 tFblMemStreamProcessing V_MEMRAM2 V_MEMRAM3 * streamParam );
tFblResult ApplFblFinalizeStreamOutput( V_MEMRAM1 tFblMemStreamProcessing V_MEMRAM2 V_MEMRAM3 * streamParam );
tFblResult ApplFblDeinitStreamOutput( V_MEMRAM1 tFblMemStreamProcessing V_MEMRAM2 V_MEMRAM3 * streamParam );
#endif /* FBL_MEM_ENABLE_STREAM_OUTPUT */
#if defined( FBL_ENABLE_APPL_TASK ) || \
    defined( FBL_ENABLE_APPL_TIMER_TASK )
#if defined( FBL_ENABLE_APPL_TASK ) || \
    defined( FBL_ENABLE_APPL_TIMER_TASK )
void ApplFblTask( void );
#endif /* FBL_ENABLE_APPL_TASK || FBL_ENABLE_APPL_TIMER_TASK */
#endif /* FBL_ENABLE_APPL_TASK || FBL_ENABLE_APPL_TIMER_TASK */
#if defined( FBL_ENABLE_APPL_TASK ) ||\
    defined( FBL_ENABLE_APPL_STATE_TASK )
#if defined( FBL_ENABLE_APPL_TASK ) ||\
    defined( FBL_ENABLE_APPL_STATE_TASK )
void ApplFblStateTask( void );
#endif /* FBL_ENABLE_APPL_TASK || FBL_ENABLE_APPL_STATE_TASK */
#endif /* FBL_ENABLE_APPL_TASK || FBL_ENABLE_APPL_STATE_TASK */

#if defined( FBL_ENABLE_ASSERTION )
void ApplFblFatalError( FBL_DECL_ASSERT_EXTENDED_INFO(vuint8 errorCode) );
#endif

void ApplFblCanBusOff( void );


#if defined( FBL_ENABLE_MULTIPLE_NODES ) || \
    defined( FBL_ENABLE_CAN_CONFIGURATION) || \
    defined( FBL_CW_ENABLE_MULTIPLE_NODES )
void ApplFblCanParamInit( void );
#endif


#if defined( FBL_ENABLE_SLEEPMODE )
void ApplFblBusSleep( void );
#endif /* FBL_ENABLE_SLEEPMODE */



/* Additional functions depending on hardware platform requirements */

tFblResult ApplFblGetVerificationData(V_MEMRAM1 SecM_VerifyParamType V_MEMRAM2 V_MEMRAM3 * verificationParam,
                                      V_MEMRAM1 vuint8 V_MEMRAM2 V_MEMRAM3 * verificationData,
                                      vuintx verificationDataLength);




#if defined( FBL_MIO_ENABLE_HOOKS )
void ApplFblPreMemDriver( vuint8 device, vuint8 function );
#endif /* FBL_MIO_ENABLE_HOOKS */

#if defined( FBL_MIO_ENABLE_HOOKS )
void ApplFblPostMemDriver( vuint8 device, vuint8 function );
#endif /* FBL_MIO_ENABLE_HOOKS */

#endif /* FBL_AP_H */

/***********************************************************************************************************************
 *  END OF FILE: FBL_AP.H
 **********************************************************************************************************************/
