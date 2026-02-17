/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/** \file
 *  \brief        Event-driven hierarchical finite state machine (configuration)
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \par Copyright
 *  \verbatim
 *  Copyright (c) 2023 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 */
/*********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id          Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  01.00.00  2012-10-30  visjhg  -                  First implementation
 *  01.00.01  2012-12-10  visjhg  -                  No changes
 *  01.01.00  2013-12-11  visjhg  ESCAN00071901      Renamed package to FblLib_Fsm
 *                        visase  -                  Performed MISRA checks
 *  01.01.01  2019-01-24  visrie  ESCAN00101864      No changes
 *  01.02.00  2023-12-15  vistbe  FBL-7986           Perform MISRA analysis
 *********************************************************************************************************************/

#ifndef FBL_FSM_CFG_H
#define FBL_FSM_CFG_H

/**********************************************************************************************************************
 *  DEFINES
 *********************************************************************************************************************/

/* FSM configuration *************************************************************************************************/

/** Maximum hierarchy depth (state nesting) */
#define FBL_FSM_MAX_HIERARCHY_DEPTH    8u

/* Debug configuration ***********************************************************************************************/

/** Debugging switch for FSM */
/* #define FBL_FSM_ENABLE_DEBUGGING */
#define FBL_FSM_DISABLE_DEBUGGING

#if defined( FBL_FSM_ENABLE_DEBUGGING )
# include <stdio.h>
#endif

#if defined( FBL_FSM_ENABLE_DEBUGGING )
/* Debug print macros */
# define FBL_FSM_DEBUG_PRINT1(instance, currentState, pendingState)  (void)printf("Fsm%d: St %d -> %d\n", instance, currentState, pendingState)
# define FBL_FSM_DEBUG_PRINT2(instance, event, state)                (void)printf("Fsm%d: Ev %d/St %d\n", instance, event, state)
# define FBL_FSM_DEBUG_PRINT3(instance, guard)                       (void)printf("Fsm%d: Gu %d\n", instance, guard)
# define FBL_FSM_DEBUG_ERROR_PRINT(instance)                         (void)printf("Fsm%d: ERROR at %s:%d\n", instance, __FUNCTION__, __LINE__)
#else /* FBL_FSM_DISABLE_DEBUGGING */
# define FBL_FSM_DEBUG_PRINT1(instance, currentState, pendingState)
# define FBL_FSM_DEBUG_PRINT2(instance, event, state)
# define FBL_FSM_DEBUG_PRINT3(instance, guard)
# define FBL_FSM_DEBUG_ERROR_PRINT(instance)
#endif /* FBL_FSM_DISABLE_DEBUGGING */

#endif /* FBL_FSM_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: FBL_FSM_CFG.H
 *********************************************************************************************************************/
