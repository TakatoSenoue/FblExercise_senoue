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
 *              File: ..\Include\SchM_CanIf.h
 *   Generation Time: 2026-02-12 11:28:15
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
 * Please note:
 *    The demo and example programs only show special aspects of the software. With regard to the fact
 *    that these programs are meant for demonstration purposes only, Vector Informatik liability shall be
 *    expressly excluded in cases of ordinary negligence, to the extent admissible by law or statute.
 *********************************************************************************************************************/

#ifndef SCHM_CANIF_H
# define SCHM_CANIF_H

# include "Os.h"

# ifdef __cplusplus
extern "C" {
# endif  /* __cplusplus */

# include "Std_Types.h"

# define CANIF_START_SEC_CODE
# include "CanIf_MemMap.h"

FUNC(void, CANIF_CODE) CanIf_Virtual(void);

# define CANIF_STOP_SEC_CODE
# include "CanIf_MemMap.h"

# ifdef __cplusplus
} /* extern "C" */
# endif  /* __cplusplus */

/* already implemented in BrsMain.c (see also CanDriver ApplicationNote AN-ISC-8-1149)
# define SchM_Enter_CanIf_CANIF_EXCLUSIVE_AREA_0() SuspendAllInterrupts()
*/
void SchM_Enter_CanIf_CANIF_EXCLUSIVE_AREA_0(void);

/* already implemented in BrsMain.c (see also CanDriver ApplicationNote AN-ISC-8-1149)
# define SchM_Exit_CanIf_CANIF_EXCLUSIVE_AREA_0() ResumeAllInterrupts()
*/
void SchM_Exit_CanIf_CANIF_EXCLUSIVE_AREA_0(void);


# define SchM_Enter_CanIf_CANIF_EXCLUSIVE_AREA_1() SuspendAllInterrupts()
# define SchM_Exit_CanIf_CANIF_EXCLUSIVE_AREA_1() ResumeAllInterrupts()

# define SchM_Enter_CanIf_CANIF_EXCLUSIVE_AREA_2() SuspendAllInterrupts()
# define SchM_Exit_CanIf_CANIF_EXCLUSIVE_AREA_2() ResumeAllInterrupts()

# define SchM_Enter_CanIf_CANIF_EXCLUSIVE_AREA_3() SuspendAllInterrupts()
# define SchM_Exit_CanIf_CANIF_EXCLUSIVE_AREA_3() ResumeAllInterrupts()

# define SchM_Enter_CanIf_CANIF_EXCLUSIVE_AREA_4() SuspendAllInterrupts()
# define SchM_Exit_CanIf_CANIF_EXCLUSIVE_AREA_4() ResumeAllInterrupts()

# define SchM_Enter_CanIf_CANIF_EXCLUSIVE_AREA_5() SuspendAllInterrupts()
# define SchM_Exit_CanIf_CANIF_EXCLUSIVE_AREA_5() ResumeAllInterrupts()

# define SchM_Enter_CanIf_CANIF_EXCLUSIVE_AREA_6() SuspendAllInterrupts()
# define SchM_Exit_CanIf_CANIF_EXCLUSIVE_AREA_6() ResumeAllInterrupts()

# define SchM_Enter_CanIf_CANIF_EXCLUSIVE_AREA_7() SuspendAllInterrupts()
# define SchM_Exit_CanIf_CANIF_EXCLUSIVE_AREA_7() ResumeAllInterrupts()

#endif /* SCHM_CANIF_H */
