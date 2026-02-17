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
 *  06.01.01   2019-10-02  visrcn  ESCAN00103874    No changes
 *  07.00.00   2020-04-27  visrie  FBL-1412         Added callbacks for RC clear RFS data, new SecureBoot interface
 *  07.01.00   2020-05-07  visrie  FBL-1414         Added support for One-Step-Updater
 *  07.01.01   2020-06-16  vistmo  ESCAN00106608    No changes
 *  07.01.02   2020-07-13  visjdn  ESCAN00103848    No changes
 *  07.02.00   2021-07-22  vistbe  FBL-3440         Added support for UNECE
 *  07.03.00   2022-06-29  vishor  FBL-5273         Update to specification set 2.11
 *  07.04.00   2023-06-20  vismix  FBL-4317         Add support for OTA
 *  07.05.00   2023-08-29  vismix  FBL-7246         Reuse flash driver after one-step bootloader updater
 *  07.05.01   2023-10-25  visrie  ESCAN00115720    No changes
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

#ifndef FBL_APNV_H
#define FBL_APNV_H

/***********************************************************************************************************************
 *  VERSION
 **********************************************************************************************************************/

/* ##V_CFG_MANAGEMENT ##CQProject : FblKbApi_FrameNv_Uds1 CQComponent : Implementation */
#define FBLKBAPI_FRAMENV_UDS1_VERSION             0x0705u
#define FBLKBAPI_FRAMENV_UDS1_RELEASE_VERSION     0x01u

/***********************************************************************************************************************
 *  DEFINES
 **********************************************************************************************************************/

/* ValidityFlags */
#define kEepValidateBlock                 0x01u
#define kEepInvalidateBlock               0x02u
/* ApplValidity */
#define kEepApplConsistent                0xD1u
#define kEepApplInconsistent              0xFFu
/* SecAccessDelayFlags */
#define kEepSecAccessDelayActive          0xA7u
#define kEepSecAccessDelayInactive        0xFFu

/* -- Flash access macros -- */
/* PRQA S 3453 8 */ /* MD_MSR_19.7 */
#define ApplFblReadPromSwVersion(descriptor, buffer) \
   FblReadProm((descriptor).blockStartAddress, (buffer), kApplInfoSizeSwVersion)
#define ApplFblReadPromSwPartNumber(descriptor, buffer) \
   FblReadProm((descriptor).blockStartAddress+kApplInfoOffsetSwPartNumber, (buffer), kApplInfoSizeSwPartNumber)
#define ApplFblReadPromSwSupplierInformation(descriptor, buffer) \
   FblReadProm((descriptor).blockStartAddress+kApplInfoOffsetSwSupplierInformation, (buffer), kApplInfoSizeSwSupplierInformation)

#if defined( FBL_ENABLE_SEC_ACCESS_DELAY )
/* Security access delay flag macros */ /* PRQA S 3453 6 */ /* MD_MSR_19.7 */
# define ApplFblGetSecAccessDelayFlag() \
   (ApplFblRWSecurityAccessDelayFlag(kEepReadData, 0u) != kEepSecAccessDelayInactive)
# define ApplFblSetSecAccessDelayFlag() \
   ApplFblRWSecurityAccessDelayFlag(kEepWriteData, kEepSecAccessDelayActive)
# define ApplFblClrSecAccessDelayFlag() \
   ApplFblRWSecurityAccessDelayFlag(kEepWriteData, kEepSecAccessDelayInactive)
#endif /* FBL_ENABLE_SEC_ACCESS_DELAY */

#if defined( FBL_ENABLE_RESPONSE_AFTER_RESET )
/* Reset response flag access macros */  /* PRQA S 3453 2 */ /* MD_MSR_19.7 */
# define ApplFblReadResetResponseFlag(buffer)      ApplFblNvReadResetResponseFlag(buffer)
# define ApplFblWriteResetResponseFlag(buffer)     ApplFblNvWriteResetResponseFlag(buffer)
#endif /* FBL_ENABLE_RESPONSE_AFTER_RESET */


#if !defined( ApplFblUpdateBlockMac )
# define ApplFblUpdateBlockMac(block, segList)     (kFblOk)
#endif

/***********************************************************************************************************************
*  TYPEDEFS
**********************************************************************************************************************/

/* Position type definitions for different WrapNv-APIs */
#if defined( WRAPNV_USECASE_FEE ) || \
    defined( WRAPNV_USECASE_EA )  || \
    defined( WRAPNV_USECASE_NVM )
typedef uint16 WRAPNV_PositionType;
#else
typedef IO_PositionType WRAPNV_PositionType;
#endif

/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

tFblProgStatus ApplFblExtProgRequest( void );
tApplStatus ApplFblIsValidApp( void );
tFblResult ApplFblValidateBlock( tBlockDescriptor blockDescriptor );
tFblResult ApplFblInvalidateBlock( tBlockDescriptor blockDescriptor );
tFblResult ApplFblStoreFingerprint( vuint8 * buffer );
tFblResult ApplFblIncProgCounts( tBlockDescriptor blockDescriptor );
tFblResult ApplFblGetProgCounts( tBlockDescriptor blockDescriptor, V_MEMRAM1 vuint16 V_MEMRAM2 V_MEMRAM3 * progCounts);
tFblResult ApplFblIncProgAttempts( tBlockDescriptor blockDescriptor );
tFblResult ApplFblGetProgAttempts( tBlockDescriptor blockDescriptor, V_MEMRAM1 vuint16 V_MEMRAM2 V_MEMRAM3 * progAttempts );
tFblLbtMaxProgAttempts ApplFblGetPromMaxProgAttempts(tFblLbtBlockNr blockNr);
#if defined( FBL_ENABLE_SEC_ACCESS_DELAY )
tFblResult ApplFblWriteSecAccessInvalidCount( V_MEMRAM1 vuint8 V_MEMRAM2 V_MEMRAM3 * invalidCount );
tFblResult ApplFblReadSecAccessInvalidCount( V_MEMRAM1 vuint8 V_MEMRAM2 V_MEMRAM3 * invalidCount );
#endif
#if defined( FBL_ENABLE_SEC_ACCESS_DELAY )
vuint8 ApplFblRWSecurityAccessDelayFlag( vuint8 mode, vuint8 value );
#endif
void ApplFblErrorNotification( tFblErrorType errorType, tFblErrorCode errorCode );
tFblResult ApplFblAdjustLbtBlockData(tBlockDescriptor * blockDescriptor);
#if defined( SEC_DISABLE_CRC_TOTAL )
#else
tFblResult ApplFblWriteCRCTotal( V_MEMRAM1 tBlockDescriptor V_MEMRAM2 V_MEMRAM3 * blockDescriptor, vuint32 crcStart, vuint32 crcLength, vuint32 crcValue );
#endif /* SEC_DISABLE_CRC_TOTAL */

#if defined( FBL_APPL_ENABLE_STARTUP_DEPENDENCY_CHECK )
#else
tFblResult ApplFblValidateApp( void );
tFblResult ApplFblInvalidateApp( void );
#endif /* FBL_APPL_ENABLE_STARTUP_DEPENDENCY_CHECK */


# if defined( FBL_CW_ENABLE_MULTIPLE_CONNECTIONS )
tFblResult ApplFblWriteDcmDslRxTesterSourceAddr(vuint8* buffer);
tFblResult ApplFblReadDcmDslRxTesterSourceAddr(vuint8* buffer);
# endif

#if defined( FBL_MEM_ENABLE_STREAM_OUTPUT )
tFblResult ApplFblErasePatternArea(const V_MEMRAM1 tBlockDescriptor V_MEMRAM2 V_MEMRAM3 * logicalBlockDescriptor);
#endif /* FBL_MEM_ENABLE_STREAM_OUTPUT */

#if defined( FBL_ENABLE_PRESENCE_PATTERN )
# define ApplFblChkModulePresence(bd)        FblNvPatternGet((bd), kFblNvPatternId_BlockValidity)
# define ApplFblSetModulePresence(bd)        FblNvPatternSet((bd), kFblNvPatternId_BlockValidity)
# define ApplFblClrModulePresence(bd)        FblNvPatternClr((bd), kFblNvPatternId_BlockValidity)
# define ApplFblChkApplPresence(bd)          FblNvPatternGet((bd), kFblNvPatternId_ApplValidity)
# define ApplFblSetApplPresence(bd)          FblNvPatternSet((bd), kFblNvPatternId_ApplValidity)
# define ApplFblClrApplPresence(bd)          FblNvPatternClr((bd), kFblNvPatternId_ApplValidity)
#endif /* FBL_ENABLE_PRESENCE_PATTERN */

#endif /* FBL_APNV_H */

/***********************************************************************************************************************
 *  END OF FILE: FBL_APNV.H
 **********************************************************************************************************************/
