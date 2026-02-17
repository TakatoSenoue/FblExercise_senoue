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
 *            Module: FblCw
 *           Program: FBL Vector SLP3 (FBL_Vector_SLP3)
 *          Customer: Vector Japan Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F7016493AFP-C
 *    License Scope : The usage is restricted to CBD1900263_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: FblCw_Cfg.c
 *   Generation Time: 2026-02-10 09:18:59
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


#define FBLCW_CFG_SOURCE
/**********************************************************************************************************************
 * MISRA JUSTIFICATION
 *********************************************************************************************************************/
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0779 EOF */ /* MD_CSL_0779 */

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "FblCw_Cfg.h"
#include "FblCw_Inc.h"
#include "fbl_inc.h"

/**********************************************************************************************************************
  LOCAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA
**********************************************************************************************************************/

/* milliseconds counter for timer task */
V_MEMRAM0 static V_MEMRAM1 vuint8 V_MEMRAM2 fblCw_cycleCounter1ms;

V_MEMRAM0 static V_MEMRAM1 vuint32 V_MEMRAM2 cwRxIndCycleTimer; /* PRQA S 3218 */ /* MD_FblCw_3218 */

/**********************************************************************************************************************
  GLOBAL DATA
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/

#define FBLCW_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
  FblCw_InitCounters
**********************************************************************************************************************/
void FblCw_InitCounters(void)
{
  fblCw_cycleCounter1ms = 0u;
  cwRxIndCycleTimer = 0u;
}

/**********************************************************************************************************************
  FblCwInternalMainFunctionTimerTask
**********************************************************************************************************************/
/* PRQA S 6010, 6050 1 */ /* MD_MSR_STPTH, MD_MSR_STCAL */
void FblCwInternalMainFunctionTimerTask(void)
{

#if (FBLCW_BUSNMRXINDDATA == STD_ON)
  /* Special functionality to trigger dummy NM messages for passive channels */
  if (!GetDiagDefaultSession())
  {
    vuint32 j = 0u;
    FblCw_BusNmRxIndDataIterType idx2;
    vuint8 pduBuff[FblCw_GetSizeOfPduBuff()];
    PduInfoType pduInfo = {0u};

    for(j = 0u; j < FblCw_GetSizeOfPduBuff(); j++)
    {
      pduBuff[j] = 0u;
    }

    cwRxIndCycleTimer++;
    if (cwRxIndCycleTimer >= FblCw_GetBusNmRxIndCycleMs())
    {
      cwRxIndCycleTimer = 0u;
      pduInfo.SduDataPtr = pduBuff;

      for(idx2 = 0u; idx2 < FblCw_GetSizeOfBusNmRxIndData(); idx2++)
      {
        pduInfo.SduLength = FblCw_GetSduLengthOfBusNmRxIndData(idx2);
        /* Trigger RX notification for all passive channels */
        FblCw_GetBusNmRxIndFctPtrOfBusNmRxIndData(idx2)(FblCw_GetPduInfoOfBusNmRxIndData(idx2), &pduInfo);
      }
    }
  }
#endif /* FBLCW_BUSNMRXINDDATA == STD_ON */

  /* Increment 1ms counter */
  fblCw_cycleCounter1ms++;


  /* Call all main functions configured with period of 5ms */
  if ((fblCw_cycleCounter1ms % 5u) == 0u)
  {
    CanTp_MainFunction();

  }


#if ( FBLCW_EXISTS_CDD_BUSTYPEOFDCMDSLCONNECTIONINFO == STD_ON )
  /* Complex device driver timer task(s) */
  FBL_CW_CDD_TIMER_TASK();
#endif

  /* Reset counter if least common multiple value has been reached */
  if ((fblCw_cycleCounter1ms % 5u) == 0u)
  {
    fblCw_cycleCounter1ms = 0u;
  }
}


#define FBLCW_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
  END OF FILE: FblCw_Cfg.c
**********************************************************************************************************************/

