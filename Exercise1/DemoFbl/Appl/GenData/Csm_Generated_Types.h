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
 *            Module: Csm
 *           Program: FBL Vector SLP3 (FBL_Vector_SLP3)
 *          Customer: Vector Japan Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F7016493AFP-C
 *    License Scope : The usage is restricted to CBD1900263_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Csm_Generated_Types.h
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


#if !defined (CSM_GENERATED_TYPES_H)
# define CSM_GENERATED_TYPES_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
#define CSM_ASR_VERSION_4_03                                                                        0u
#define CSM_ASR_VERSION_4_04                                                                        1u
#define CSM_ASR_VERSION_R19_11                                                                      2u
#define CSM_ASR_VERSION_R20_11                                                                      3u
#define CSM_ASR_VERSION_R21_11                                                                      4u
#define CSM_ASR_VERSION_R21_11_A                                                                    5u
#define CSM_ASR_VERSION_R24_11                                                                      6u

#define CSM_JOB_TYPE_LAYOUT_ASR430_COMPATIBILITY                                                    STD_ON
#define CSM_JOB_TYPE_LAYOUT_VAR_MEMBERS                                                             STD_ON
#define CSM_JOB_TYPE_LAYOUT_INPUT64                                                                 STD_OFF
#define CSM_JOB_TYPE_LAYOUT_OUTPUT64_PTR                                                            STD_OFF
#define CSM_JOB_TYPE_LAYOUT_REDIRECTION_INFO_REF                                                    STD_OFF
#define CSM_JOB_TYPE_LAYOUT_JOB_INFO_PTR                                                            STD_ON
#define CSM_JOB_TYPE_LAYOUT_SECURE_COUNTER_ID                                                       STD_OFF
#define CSM_JOB_TYPE_LAYOUT_CALLBACK_UPDATE_NOTIFICATION                                            STD_OFF
#define CSM_JOB_TYPE_LAYOUT_RESULT_LENGTH                                                           STD_OFF
#define CSM_JOB_TYPE_LAYOUT_FIELD_ORDERING                                                          CSM_ASR_VERSION_R21_11


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
typedef uint8 Csm_JobCalloutStateType;


/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


#endif /* CSM_GENERATED_TYPES_H */

/**********************************************************************************************************************
 *  END OF FILE: Csm_Generated_Types.h
 *********************************************************************************************************************/

