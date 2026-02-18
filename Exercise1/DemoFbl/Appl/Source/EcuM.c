/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: vBRS
 *           Program: FBL Vector SLP3 (FBL_Vector_SLP3)
 *          Customer: Vector Japan Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F7016493AFP-C
 *    License Scope : The usage is restricted to CBD1900263_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: .\EcuM.c
 *   Generation Time: 2026-02-17 14:09:27
 *           Project: DemoFbl - Version 1.0
 *          Delivery: CBD1900263_D01
 *      Tool Version: DaVinci Configurator Classic (beta) 5.31.24
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! This version of DaVinci Configurator Classic and/or the related Basic Software Package is BETA software.               !
 ! BETA Software is basically operable, but not sufficiently tested, verified and/or qualified for use in series      !
 ! production and/or in vehicles operating on public or non-public roads.                                             !
 ! In particular, without limitation, BETA Software may cause unpredictable ECU behavior, may not provide all         !
 ! functions necessary for use in series production and/or may not comply with quality requirements which are         !
 ! necessary according to the state of the art. BETA Software must not be used in series production.                  !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/

/**********************************************************************************************************************
*  EXAMPLE CODE ONLY
*  -------------------------------------------------------------------------------------------------------------------
*  This Example Code is only intended for illustrating an example of a possible BSW integration and BSW configuration.
*  The Example Code has not passed any quality control measures and may be incomplete. The Example Code is neither
*  intended nor qualified for use in series production. The Example Code as well as any of its modifications and/or
*  implementations must be tested with diligent care and must comply with all quality requirements which are necessary
*  according to the state of the art before their use.
*********************************************************************************************************************/

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "EcuM.h"


#include "CanIf.h"
#include "CanTp.h"
#include "Can.h"
#include "CryIf.h"
#include "Crypto_30_LibCv.h"
#include "Csm.h"
#include "fbl_inc.h"
#include "Det.h"
#include "PduR.h"
#include "Sec.h"
#include "WrapNv.h"

/**********************************************************************************************************************
  PROTOTYPES OF EXTERN FUNCTIONS
**********************************************************************************************************************/
extern void FblMain(void);
 
/**********************************************************************************************************************
  PROTOTYPES OF LOCAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  FUNCTION DEFINITIONS
**********************************************************************************************************************/
void EcuM_Init(void)
{
  /* Module: CanIf / InitPhase: INIT_MEMORY */
  CanIf_InitMemory();
  /* Module: CanTp / InitPhase: INIT_MEMORY */
  CanTp_InitMemory();
  /* Module: Can / InitPhase: INIT_MEMORY */
  Can_InitMemory();
  /* Module: CryIf / InitPhase: INIT_MEMORY */
  CryIf_InitMemory();
  /* Module: Crypto / InitPhase: INIT_MEMORY */
  Crypto_30_LibCv_InitMemory();
  /* Module: Csm / InitPhase: INIT_MEMORY */
  Csm_InitMemory();
  /* Module: Dcm / InitPhase: INIT_MEMORY */
  FblCw_InitMemory();
  /* Module: Det / InitPhase: INIT_MEMORY */
  Det_InitMemory();
  /* Module: PduR / InitPhase: INIT_MEMORY */
  PduR_InitMemory();
  /* Module: Det / InitPhase: INIT_ZERO */
  Det_Init(Det_Config_Ptr);
  /* Module: CanTp / InitPhase: INIT_ONE */
  CanTp_PreInit(CanTp_Config_Ptr);
  /* Module: Det / InitPhase: INIT_ONE */
  Det_Start();
  /* Module: PduR / InitPhase: INIT_ONE */
  PduR_PreInit(PduR_Config_Ptr);

  FblMain();
}

void EcuM_StartupTwo(void)
{
  /* Module: Can / InitPhase: INIT_TWO_DRV */
  Can_Init(Can_Config_Ptr);
  /* Module: Crypto / InitPhase: INIT_TWO_DRV */
  Crypto_30_LibCv_Init();
  /* Module: CanIf / InitPhase: INIT_TWO_IF */
  CanIf_Init(CanIf_Config_Ptr);
  /* Module: CryIf / InitPhase: INIT_TWO_IF */
  CryIf_Init();
  /* Module: PduR / InitPhase: INIT_TWO_COM */
  PduR_Init(PduR_Config_Ptr);
  /* Module: CanTp / InitPhase: INIT_TWO_TP */
  CanTp_Init(CanTp_Config_Ptr);
  /* Module: Csm / InitPhase: INIT_TWO_SYS */
  Csm_Init();
  /* Module: Smh / InitPhase: INIT_TWO_SYS */
  SecM_Init();
  /* Module: WrapNv / InitPhase: INIT_TWO_POST_NVMREADALL */
  WrapNv_Init();
  /* Module: Dcm / InitPhase: INIT_THREE */
  FblCw_Init(FblCw_Config_Ptr);
}

void EcuM_Shutdown(void)
{
}

void EcuM_BswErrorHook(uint16 moduleId, uint8 errorId)
{
#if defined (ECUM_STUB_BSWERRORHOOK_CALLOUT)
  BrsTestsuite_EcuM_BswErrorHook_Callout(moduleId, errorId);
#endif
}

void EcuM_CheckWakeup(EcuM_WakeupSourceType wakeupSource)
{
#if defined (ECUM_STUB_CHECKWAKEUP_CALLOUT)
  BrsTestsuite_EcuM_CheckWakeup_Callout(wakeupSource);
#endif
}

void EcuM_GeneratorCompatibilityError(uint16 moduleId, uint8 instanceId)
{
#if defined (ECUM_STUB_GENERATORCOMPATIBILITYERROR_CALLOUT)
  BrsTestsuite_EcuM_GeneratorCompatibilityError_Callout(moduleId, instanceId);
#endif
}

void EcuM_SetWakeupEvent(EcuM_WakeupSourceType wakeupSource)
{
#if defined (ECUM_STUB_SETWAKEUPEVENT_CALLOUT)
  BrsTestsuite_EcuM_SetWakeupEvent_Callout(wakeupSource);
#endif
}

void EcuM_ValidationWakeupEvent(EcuM_WakeupSourceType wakeupSource)
{
#if defined (ECUM_STUB_VALIDATIONWAKEUPEVENT_CALLOUT)
  BrsTestsuite_EcuM_ValidationWakeupEvent_Callout(wakeupSource);
#endif
}

