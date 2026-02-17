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
 *            Module: FblHal
 *           Program: FBL Vector SLP3 (FBL_Vector_SLP3)
 *          Customer: Vector Japan Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F7016493AFP-C
 *    License Scope : The usage is restricted to CBD1900263_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: FblHal_Cfg.h
 *   Generation Time: 2026-02-10 09:18:58
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


#if !defined(__FBL_HAL_H__)
#define __FBL_HAL_H__

/* FblHal__base ******************************************************************************************************/
#define FBL_FLASH_ENABLE_ECC_SAFE_READ 
#define FLASH_SIZE                     12288 
#define FBL_TIMER_RELOAD_VALUE         39999 
#define FBL_TIMER_PRESCALER_VALUE      0 

/* Derivative Specific Defines */
#define V_COMP_GHS
#define V_COMP_GHS_RH850
#define C_COMP_GHS_RH850_RSCAN
#define C_PROCESSOR_F1KM
#define V_CPU_RH850
#define C_CPUTYPE_32BIT
#define V_SUPPRESS_EXTENDED_VERSION_CHECK
#define VGEN_ENABLE_CANFBL
#define V_ENABLE_CAN_ASR_ABSTRACTION
#define V_PROCESSOR_F1KM

/* FblHal_Rh850 ******************************************************************************************************/
#define FBL_SYSTEM_FREQUENCY 160 



#endif /* __FBL_HAL_H__ */

