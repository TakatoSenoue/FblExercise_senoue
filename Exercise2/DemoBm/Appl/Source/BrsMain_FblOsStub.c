/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2023 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/** \file  File:  BrsMain_FblOsStub.c
 *      Project:  Vector Basic Runtime System
 *       Module:  BrsMain
 *
 *  \brief Description:  FBL OS stub for usage of MSR4 modules, referencing several OS APIs
 *
 *  \attention Please note:
 *    The demo and example programs only show special aspects of the software. With regard to the fact
 *    that these programs are meant for demonstration purposes only, Vector Informatik liability shall be
 *    expressly excluded in cases of ordinary negligence, to the extent admissible by law or statute.
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  EXAMPLE CODE ONLY
 *  -------------------------------------------------------------------------------------------------------------------
 *  This Example Code is only intended for illustrating an example of a possible BSW integration and BSW configuration.
 *  The Example Code has not passed any quality control measures and may be incomplete. The Example Code is neither
 *  intended nor qualified for use in series production. The Example Code as well as any of its modifications and/or
 *  implementations must be tested with diligent care and must comply with all quality requirements which are necessary
 *  according to the state of the art before their use.
 *********************************************************************************************************************/

#define _BRSMAIN_FBLOSSTUB_C_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Os.h"
#include "BrsHw.h"

/**********************************************************************************************************************
 *  CONFIGURATION CHECK
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  DEFINITION + MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL VARIABLES
 *********************************************************************************************************************/
static volatile TickType currentCounterValue;

/**********************************************************************************************************************
 *  GLOBAL CONST VARIABLES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL VARIABLES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL CONST VARIABLES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  PROTOTYPES OF GLOBAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  PROTOTYPES OF LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  FUNCTION DEFINITIONS
 *********************************************************************************************************************/
StatusType GetCounterValue(CounterType CounterID, TickRefType Value)
{
  while(1)
  {
    /* This part is not yet implemented. If you are stuck here, please implement these functions to provide the
     * respective functionality to the caller.
     * This can be done e.g. by using a free running timer or FblLookForWatchdog logic */
  }

#if 0 /* SAMPLE */
  currentCounterValue = 0;
  *Value = 0;
  return (StatusType) E_OK;
#endif
}

StatusType GetElapsedValue(CounterType CounterID, TickRefType Value, TickRefType ElapsedValue)
{
  while(1)
  {
    /* This part is not yet implemented. If you are stuck here, please implement these functions to provide the
     * respective functionality to the caller.
     * This can be done e.g. by using a free running timer or FblLookForWatchdog logic */
  }

#if 0 /*SAMPLE */
  /* Check the OS_*_SystemTimer() macros in Os.h, they may need adaptions as well */
  if (FBL_TM_TRIGGERED == (FblLookForWatchdog() & FBL_TM_TRIGGERED))
  {
    currentCounterValue += OS_TICKS2US_SystemTimer(1);
  }

  *ElapsedValue = currentCounterValue;

  return (StatusType) E_OK;
#endif
}

#define BRS_START_SEC_RAM_CODE
#include "Brs_MemMap.h"
void Appl_30_CoreCanInterruptDisable(uint8 Controller)
{
  /* As FBL is running in polling mode anyway, the controller specific
   * interrupt disable/enable functionality is not needed at all */
  DisableAllInterrupts()
}

void Appl_30_CoreCanInterruptRestore(uint8 Controller)
{
  /* As FBL is running in polling mode anyway, the controller specific
   * interrupt disable/enable functionality is not needed at all */
  EnableAllInterrupts()
}
#define BRS_STOP_SEC_RAM_CODE
#include "Brs_MemMap.h"
