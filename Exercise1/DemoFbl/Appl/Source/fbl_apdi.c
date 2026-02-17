/* Kernbauer Version: 1.12 Konfiguration: FBL Erzeugungsgangnummer: 1 */

/***********************************************************************************************************************
 *  FILE DESCRIPTION
 *  ------------------------------------------------------------------------------------------------------------------*/
/** \file
 *  \brief         Application dependent diagnostic routines
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
 *  Copyright (c) 2020 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 */
/**********************************************************************************************************************/

/***********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  --------------------------------------------------------------------------------------------------------------------
 *  Marcel Viole                  MVi           Vector Informatik GmbH
 *  Achim Strobelt                Ach           Vector Informatik GmbH
 *  Joern Herwig                  JHg           Vector Informatik GmbH
 *  Dan Jiga                      JDn           Vector Informatik GmbH
 *  --------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Version    Date        Author  Change Id        Description
 *  --------------------------------------------------------------------------------------------------------------------
 *  04.00.00   2015-09-15  MVi     ESCAN00085256    Rework for SWCP filtering
 *  04.01.00   2016-06-07  Ach     ESCAN00090337    Execute MISRA checks
 *  04.02.00   2017-09-15  Ach     ESCAN00096638    Support callout function ApplDiagUserRoutine
 *  04.03.00   2017-11-15  JHg     ESCAN00097422    Use SysService_FdsCert_Vag for certificate handling (VAG)
 *  04.03.01   2020-06-02  JDn     ESCAN00106532    No changes
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

#define FBL_APDI_SOURCE

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/

#include "fbl_inc.h"


/***********************************************************************************************************************
 *  VERSION
 **********************************************************************************************************************/

#if ( FBLKBAPI_FRAMEDIAG_UDS1_VERSION != 0x0403u ) || \
    ( FBLKBAPI_FRAMEDIAG_UDS1_RELEASE_VERSION != 0x01u )
# error "Error in FBL_APDI.C: Source and header file are inconsistent!"
#endif

#if ( FBLKBAPI_FRAMEDIAG_UDS1_VERSION != _FBLKBAPI_FRAMEDIAG_OEM_VERSION )
# error "Error in fbl_apdi.c: Source and v_ver.h are inconsistent!"
#endif
#if ( FBLKBAPI_FRAMEDIAG_UDS1_RELEASE_VERSION != _FBLKBAPI_FRAMEDIAG_OEM_RELEASE_VERSION )
# error "Error in fbl_apdi.c: Source and v_ver.h are inconsistent!"
#endif

/***********************************************************************************************************************
 *  DEFINES
 **********************************************************************************************************************/

/* Compatibility define */
#if !defined( kDiagRslReadDataByIdentifier )
# define kDiagRslReadDataByIdentifier kDiagRslWriteDataByIdentifier
#endif


#if !defined( GetSecurityUnlock )
# define GetSecurityUnlock() FblDiagGetSecurityUnlock()
#endif

/***********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

#if defined( FBL_ENABLE_USERSERVICE )
/***********************************************************************************************************************
 *  ApplDiagUserService
 **********************************************************************************************************************/
/*! \brief         Call-back function for user diagnostic services. pbDiagData points to subfunction.
 *  \details       This function is called when a diagnostic service has been received that is not managed by the FBL
 *                 itself -> can be managed by user.
 *  \param[in,out] pbDiagData Pointer to diag service data (after SID!)
 *  \param[in]     diagReqDataLen Service data length (without SID!)
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_FblKbApi_3673 */
void ApplDiagUserService( vuint8 * pbDiagData, tTpDataType diagReqDataLen )
{
#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* Parameters not used: avoid compiler warning */ /* PRQA S 3112 2 */ /* MD_MSR_DummyStmt */
   (void)pbDiagData;
   (void)diagReqDataLen;
#endif /* V_ENABLE_USE_DUMMY_STATEMENT */

   switch (diagServiceCurrent)
   {
      default:
      {
         DiagNRCServiceNotSupported();
         break;
      }
   }  /* PRQA S 3315 */ /* MD_FblKbApiOem_3315 */
}
#endif /* FBL_ENABLE_USERSERVICE */

#if defined( FBL_ENABLE_USERSUBFUNCTION )
/***********************************************************************************************************************
 *  ApplDiagUserSubFunction
 **********************************************************************************************************************/
/*! \brief         Call-back function for user diagnostic services. pbDiagData points to subfunction.
 *  \details       This function is called when the bootloader manages the diagnostic service, but the sub-parameter
 *                 is unknown -> subparameter of the service can be managed by user.
 *  \param[in,out] pbDiagData Pointer to diag service data (after SID!)
 *  \param[in]     diagReqDataLen Service data length (without SID!!)
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_FblKbApi_3673 */
void ApplDiagUserSubFunction( vuint8 * pbDiagData, tTpDataType diagReqDataLen )
{
#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* Parameters not used: avoid compiler warning */ /* PRQA S 3112 2 */ /* MD_MSR_DummyStmt */
   (void)pbDiagData;
   (void)diagReqDataLen;
#endif

   /* If you want to support different sub functions, add appropriate code */
   switch (diagServiceCurrent)
   {
      default:
      {
         DiagNRCSubFunctionNotSupported();
         break;
      }
   }  /* PRQA S 3315 */ /* MD_FblKbApiOem_3315 */
}
#endif /* FBL_ENABLE_USERSUBFUNCTION */

#if defined( FBL_ENABLE_USERROUTINE )
/***********************************************************************************************************************
 *  ApplDiagUserRoutine
 **********************************************************************************************************************/
/*! \brief         Call-back function for user diagnostic routines. pbDiagData points to subfunction.
 *  \details       This function is called when a routine control service is received with an unknown RID
 *                 -> the routine can be managed by the user.
 *  \param[in,out] pbDiagData Pointer to diag service data (after SID!)
 *  \param[in]     diagReqDataLen Service data length (without SID!)
 **********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_FblKbApi_3673 */
void ApplDiagUserRoutine( vuint8 * pbDiagData, tTpDataType diagReqDataLen )
{
#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   /* Parameters not used: avoid compiler warning */ /* PRQA S 3112 2 */ /* MD_MSR_DummyStmt */
   (void)pbDiagData;
   (void)diagReqDataLen;
#endif
   /* TODO_CUSTOMER: Implement user specific RID handlers here. */

   /* Unsupported routine control id: */
   DiagNRCRequestOutOfRange();
}
#endif /* FBL_ENABLE_USERROUTINE */

/***********************************************************************************************************************
 *  ApplFblReadDataByIdentifier
 **********************************************************************************************************************/
/*! \brief         ReadDataByIdentifier service function.
 *  \param[in,out] pbDiagData Pointer to diag service data (after SID!)
 *  \param[in]     diagReqDataLen Service data length (without SID!)
 **********************************************************************************************************************/
/* PRQA S 2889, 6010, 6030, 6050, 6080 1 */ /* MD_FblKbApi_2889, MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */
void ApplFblReadDataByIdentifier( vuint8 * pbDiagData, tTpDataType diagReqDataLen )
{
   typedef struct {
      vuint16   did;
      vuint16   maxSize;
   } tDid;

   static V_MEMROM1 tDid V_MEMROM2 didTable[] =
   {
      /* Bootloader Version */
      { 0xF123u, 3u }
   };

   vuint16 diagRespDataLen;


   vuint16 didIdx;
   vuint16 outIdx;
   vuint16 outIdxAdd;
   vuint16 currentDid;
   vuint16 didNo;
   vuint8  didBuffer[(FBL_MAX_DID_COUNT << 1)];
   vuint16 i, j;
   vuint8* diagData;


   /* Check diagnostic request length */
   if (   (diagReqDataLen < kDiagRqlReadDataByIdentifier)
       || ((diagReqDataLen % 2u) != 0u)
      )
   {
      DiagNRCIncorrectMessageLengthOrInvalidFormat();
      return;
   }

   /* If necessary this check could be used to
    * ensure a prior security access. It could
    * also be used for certain data identifiers. */
   /*
   if (!GetSecurityUnlock())
   {
      DiagNRCSecurityAccessDenied();
      return;
   }
   */

   didNo = (diagReqDataLen / 2u);

   if (didNo > FBL_MAX_DID_COUNT)
   {

      DiagNRCRequestOutOfRange();
      return;
   }

   for (i = 0u; i < diagReqDataLen; i++)
   {
      didBuffer[i] = pbDiagData[i];
   }


   outIdx = 0u;
   didIdx = 0u;
   for (i = 0u; i < didNo; i++)
   {
      currentDid =  ((vuint16)didBuffer[didIdx]) << 8;
      currentDid |= (vuint16)didBuffer[didIdx + 1u];

      diagData = &pbDiagData[outIdx];

      diagData[0] = didBuffer[didIdx];
      diagData[1] = didBuffer[didIdx + 1u];

      didIdx += 2u;

      outIdxAdd = 0u;
      for (j = 0u; j < (sizeof(didTable)/sizeof(tDid)); j++)
      {
         if (didTable[j].did == currentDid)
         {
            outIdxAdd = didTable[j].maxSize + kDiagRslReadDataByIdentifier;
            break;
         }
      }

      if (outIdxAdd != 0u)
      {
         /* Check if response still fits into diag buffer */
         if ((outIdx + outIdxAdd) > ((vuint16)FBL_DIAG_BUFFER_LENGTH - 1u))
         {
            DiagNRCRequestOutOfRange();
            return;
         }

         switch (currentDid)
         {
            /* Bootloader Version */
            case 0xF123u:
            {
               /* Version of FBL */
               diagData[2] = (vuint8)(((vuint16)FBL_VERSION >> 8u) & 0xFFu);
               diagData[3] = (vuint8)(FBL_VERSION & 0xFFu);
               diagData[4] = (vuint8)(FBL_RELEASE_VERSION);

               break;
            }
            default: /* PRQA S 2016 */ /* MD_MSR_EmptyClause */
            {
               break;
            }
         }

         outIdx += outIdxAdd;
      }
   }

   if (outIdx == 0u)
   {
      DiagNRCRequestOutOfRange();
   }

   diagRespDataLen = outIdx;

   /* Transmit response message:
    * If a negative response has to be transmitted, the length parameter is
    * ignored. In case of a positive response, the length parameter does not
    * include the service id. */
   DiagProcessingDone(diagRespDataLen);
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/***********************************************************************************************************************
 *  ApplDiagWriteDataByIdentifier
 **********************************************************************************************************************/
/*! \brief         WriteDataByIdentifier service function.
 *  \param[in,out] pbDiagData Pointer to diag service data (after SID!)
 *  \param[in]     diagReqDataLen Service data length (without SID!)
 *  \return        Success of operation
 **********************************************************************************************************************/
/* PRQA S 3673, 6030, 6080 1 */ /* MD_FblKbApi_3673, MD_MSR_STCYC, MD_MSR_STMIF */
vuint8 ApplFblWriteDataByIdentifier( vuint8 * pbDiagData, tTpDataType diagReqDataLen )
{
   /* Two-byte routine identifier */
   vuint16 diagFmtDataId;
   vuint8 result;

#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   (void)diagReqDataLen;   /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
#endif

   /* Read two-byte routineControlId (minimum length already checked) */
   diagFmtDataId =  (vuint16)pbDiagData[0] << 8;
   diagFmtDataId |= (vuint16)pbDiagData[1];  /* PRQA S 3199 */ /* MD_FblKbApiOem_3199 */

   switch (diagFmtDataId)
   {
      /* Write tester serial number and programming date */
      case (kDiagWriteFingerprint):
      {
         if (!GetDiagProgrammingSession())
         {
            /* Not supported in non-programming session */
            DiagNRCRequestOutOfRange();
            result = kFblFailed;
         }
         /* Check request length */
         else if (DiagDataLength != kDiagRqlWriteDataByIdentifierFingerPrint)
         {
            DiagNRCIncorrectMessageLengthOrInvalidFormat();
            result = kFblFailed;
         }
         /* Check security access state */
         else if (!GetSecurityUnlock())
         {
            DiagNRCSecurityAccessDenied();
            result = kFblFailed;
         }
         else
         {
            if (ApplFblStoreFingerprint(&pbDiagData[kDiagFmtDataIdSize]) == kFblOk)
            {
               /* Special result if fingerprint is written correctly */
               result = kDiagReturnValidationOk;
            }
            else
            {
               /* Fingerprint wasn't stored correctly */
               DiagNRCConditionsNotCorrect();
               result = kFblFailed;
            }
         }
         break;
      }

      default:
      {
         DiagNRCRequestOutOfRange();
         result = kFblFailed;
         break;
      }
   }  /* PRQA S 3315 */ /* MD_FblKbApiOem_3315 */

   return result;
} /* PRQA S 6030, 6080 */ /* MD_MSR_STCYC, MD_MSR_STMIF */

#if defined( FBL_ENABLE_DEBUG_STATUS )
/***********************************************************************************************************************
 *  ApplFblInitErrStatus
 **********************************************************************************************************************/
/*! \brief       Initialize error status information.
 **********************************************************************************************************************/
void ApplFblInitErrStatus( void )
{
   errStatFlashDrvVersion[0u] = 0u;
   errStatFlashDrvVersion[1u] = 0u;
   errStatFlashDrvVersion[2u] = 0u;
   errStatFlashDrvErrorCode = 0u;
   errStatErrorCode = 0u;
   errStatFblStates = 0u;
   errStatLastServiceId = 0u;
   errStatDescriptor.blockNr = 0;
   errStatDescriptor.blockStartAddress = 0;
}
#endif

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


*/

/***********************************************************************************************************************
 *  END OF FILE: FBL_APDI.C
 **********************************************************************************************************************/
