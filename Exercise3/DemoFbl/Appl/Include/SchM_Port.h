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
 *              File: ..\Include\SchM_Port.h
 *   Generation Time: 2026-03-04 09:35:53
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

#ifndef SCHM_PORT_H
# define SCHM_PORT_H

# include "Os.h"

# ifdef __cplusplus
extern "C" {
# endif  /* __cplusplus */

# include "Std_Types.h"

# define PORT_START_SEC_CODE
# include "MemMap.h"

FUNC(void, PORT_CODE) Port_Virtual(void);

# define PORT_STOP_SEC_CODE
# include "MemMap.h"

# ifdef __cplusplus
} /* extern "C" */
# endif  /* __cplusplus */

# define SchM_Enter_Port_PORT_INIT_PROTECTION() SuspendAllInterrupts()
# define SchM_Exit_Port_PORT_INIT_PROTECTION() ResumeAllInterrupts()

# define SchM_Enter_Port_PORT_SET_PIN_DIR_PROTECTION() SuspendAllInterrupts()
# define SchM_Exit_Port_PORT_SET_PIN_DIR_PROTECTION() ResumeAllInterrupts()

# define SchM_Enter_Port_PORT_SET_PIN_MODE_PROTECTION() SuspendAllInterrupts()
# define SchM_Exit_Port_PORT_SET_PIN_MODE_PROTECTION() ResumeAllInterrupts()

# define SchM_Enter_Port_PORT_SET_TO_DIO_ALT_PROTECTION() SuspendAllInterrupts()
# define SchM_Exit_Port_PORT_SET_TO_DIO_ALT_PROTECTION() ResumeAllInterrupts()

# define SchM_Enter_Port_PORT_INIT_CONFIG_PROTECTION() SuspendAllInterrupts()
# define SchM_Exit_Port_PORT_INIT_CONFIG_PROTECTION() ResumeAllInterrupts()

# define SchM_Enter_Port_PORT_REFRESH_PORT_INTERNAL_PROTECTION() SuspendAllInterrupts()
# define SchM_Exit_Port_PORT_REFRESH_PORT_INTERNAL_PROTECTION() ResumeAllInterrupts()

# define SchM_Enter_Port_PORT_FILTER_CONFIG_PROTECTION() SuspendAllInterrupts()
# define SchM_Exit_Port_PORT_FILTER_CONFIG_PROTECTION() ResumeAllInterrupts()

# define SchM_Enter_Port_PORT_SET_PIN_DEFAULT_MODE_PROTECTION() SuspendAllInterrupts()
# define SchM_Exit_Port_PORT_SET_PIN_DEFAULT_MODE_PROTECTION() ResumeAllInterrupts()

# define SchM_Enter_Port_PORT_SET_PIN_DEFAULT_DIR_PROTECTION() SuspendAllInterrupts()
# define SchM_Exit_Port_PORT_SET_PIN_DEFAULT_DIR_PROTECTION() ResumeAllInterrupts()

# define SchM_Enter_Port_PORT_CHECK_HW_CONSISTENCY_PROTECTION() SuspendAllInterrupts()
# define SchM_Exit_Port_PORT_CHECK_HW_CONSISTENCY_PROTECTION() ResumeAllInterrupts()

# define SchM_Enter_Port_PORT_REGISTER_PROTECTION() SuspendAllInterrupts()
# define SchM_Exit_Port_PORT_REGISTER_PROTECTION() ResumeAllInterrupts()

#endif /* SCHM_PORT_H */
