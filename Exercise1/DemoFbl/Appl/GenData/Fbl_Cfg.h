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
 *            Module: Fbl
 *           Program: FBL Vector SLP3 (FBL_Vector_SLP3)
 *          Customer: Vector Japan Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F7016493AFP-C
 *    License Scope : The usage is restricted to CBD1900263_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Fbl_Cfg.h
 *   Generation Time: 2026-02-17 14:09:26
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


#if !defined(__FBL_CFG_H__)
#define __FBL_CFG_H__

/* Global Constant Macros ********************************************************************************************/
#ifndef FBL_USE_DUMMY_STATEMENT
#define FBL_USE_DUMMY_STATEMENT STD_ON /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef FBL_DUMMY_STATEMENT
#define FBL_DUMMY_STATEMENT(v) (v)=(v) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef FBL_DUMMY_STATEMENT_CONST
#define FBL_DUMMY_STATEMENT_CONST(v) (void)(v) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef FBL_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define FBL_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef FBL_ATOMIC_VARIABLE_ACCESS
#define FBL_ATOMIC_VARIABLE_ACCESS 8u /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef FBL_PROCESSOR_RH850_1649
#define FBL_PROCESSOR_RH850_1649
#endif
#ifndef FBL_COMP_GREENHILLS
#define FBL_COMP_GREENHILLS
#endif
#ifndef FBL_GEN_GENERATOR_MSR
#define FBL_GEN_GENERATOR_MSR
#endif
#ifndef FBL_CPUTYPE_BITORDER_LSB2MSB
#define FBL_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/vSet/vSetPlatform/vSetBitOrder */
#endif
#ifndef FBL_CONFIGURATION_VARIANT_PRECOMPILE
#define FBL_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef FBL_CONFIGURATION_VARIANT_LINKTIME
#define FBL_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef FBL_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define FBL_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef FBL_CONFIGURATION_VARIANT
#define FBL_CONFIGURATION_VARIANT FBL_CONFIGURATION_VARIANT_LINKTIME
#endif
#ifndef FBL_POSTBUILD_VARIANT_SUPPORT
#define FBL_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif

/* FblOem__base ******************************************************************************************************/
#define FBL_ENABLE_STAY_IN_BOOT 
#define FBL_USE_OWN_MEMCPY 
#define FBL_WATCHDOG_ON 
#define FBL_WATCHDOG_TIME                        (1u / FBL_REPEAT_CALL_CYCLE) 
#define FBL_HEADER_ADDRESS                       0x00010000u 
#define FBL_ENABLE_APPL_TIMER_TASK 
#define FBL_ENABLE_APPL_TASK 
#define FBL_ENABLE_APPL_STATE_TASK 
#define SWM_DATA_MAX_NOAR                        8u 
#define FBL_DIAG_BUFFER_LENGTH                   4095u 
#define FBL_DIAG_TIME_P2MAX                      (10u / FBL_REPEAT_CALL_CYCLE) 
#define FBL_DIAG_TIME_P3MAX                      (5000u / FBL_REPEAT_CALL_CYCLE) 
#define FBL_DISABLE_SLEEPMODE 
#define FBL_SLEEP_TIME                           300000u 
#define FBL_DISABLE_GAP_FILL 
#define kFillChar                                0xFFu 
#define FBL_DISABLE_GATEWAY_SUPPORT 
#define FBL_ENABLE_PRESENCE_PATTERN 
#define FBL_ENABLE_FBL_START 
#define FBL_DISABLE_COMMON_DATA 
#define FBL_ENABLE_RESPONSE_AFTER_RESET 
#define FBL_DISABLE_USERSUBFUNCTION 
#define FBL_DISABLE_USERSERVICE 
#define FBL_DISABLE_USERROUTINE 
#define FBL_DIAG_TIME_S3EXT                      (0u / FBL_REPEAT_CALL_CYCLE) 
#define FBL_DIAG_TIME_S3PRG                      (0u / FBL_REPEAT_CALL_CYCLE) 
#define FBL_DISABLE_HARDWARE_SWAP 
#define FBL_DISABLE_XCP 
#define FBL_DIAG_ENABLE_FLASHDRV_DOWNLOAD 
#define FBL_DIAG_DISABLE_FLASHDRV_ROM 
#define FBL_ENABLE_DATA_PROCESSING 
#define FBL_ENABLE_ENCRYPTION_MODE 
#define FBL_ENABLE_COMPRESSION_MODE 
#define FBL_INTEGRATION                          2u 
#define FBL_PRODUCTION                           1u 
#define FBL_PROJECT_STATE                        FBL_INTEGRATION 
#define FBL_ENABLE_SYSTEM_CHECK 
#define FBL_ENABLE_DEBUG_STATUS 
#define FBL_ENABLE_ASSERTION 
#define FBL_MEM_PROC_BUFFER_SIZE                 256u 
#define FBL_MEM_DISABLE_VERIFY_INPUT 
#define FBL_MEM_DISABLE_VERIFY_PROCESSED 
#define FBL_MEM_DISABLE_VERIFY_PIPELINED 
#define FBL_MEM_ENABLE_VERIFY_OUTPUT 
#define FBL_MEM_VERIFY_SEGMENTATION              256u 
#define FBL_DISABLE_ADAPTIVE_DATA_TRANSFER_RCRRP 
#define FBL_DISABLE_PIPELINED_PROGRAMMING 
#define FBL_DISABLE_SUSPEND_PROGRAMMING 
#define FBL_MEM_WRITE_SEGMENTATION               256u 
#define FBL_ENABLE_UNALIGNED_DATA_TRANSFER 
#define FBL_BLOCK_START_ADDRESS                  0x00010000u 
#define FBL_BLOCK_LENGTH                         262144u 
#define FBL_DISABLE_OTA 
#define FBL_DISABLE_ONE_STEP_UPDATER 
#define FBL_DIAG_DISABLE_EMBEDDED_VERIFY_DATA 
#define FBL_DIAG_DELAY_FINAL_RESPONSE            0u 
#define FBL_NO_FLASH_DRV_RESTORE 

/* FblHal ************************************************************************************************************/
#include "FblHal_Cfg.h"
/* FblOem_Vector *****************************************************************************************************/
#define FBL_ENABLE_SEC_ACCESS_DELAY 
#define FBL_SEC_ACCESS_DELAY_TIME                                                10000 
#define FBL_DIAG_COMMUNICATION_CONTROL_TYPE                                      kDiagSubEnableRxAndDisableTx 
#define FBL_DIAG_ENABLE_CONTROLDTC_OPTIONRECORD 
#define FBL_DIAG_ENABLE_CHECK_PROGRAMMING_PRECONDITIONS 
#define FBL_APPL_DISABLE_STARTUP_DEPENDENCY_CHECK 
#define FBL_DIAG_ENABLE_PROCESS_DATA_STORAGE 
#define FBL_DIAG_DOWNLOAD_TARGET_INACTIVE_PARTITION                              0x00u 
#define FBL_DIAG_DOWNLOAD_TARGET_ACTIVE_PARTITION                                0x01u 
#define FBL_DIAG_DOWNLOAD_TARGET                                                 FBL_DIAG_DOWNLOAD_TARGET_ACTIVE_PARTITION 
#define FBL_DIAG_DISABLE_BACKUP_BEFORE_ERASE 
#define FBL_DIAG_DISABLE_ACTIVATE_SOFTWARE_DURING_CHECK_PROGRAMMING_DEPENDENCIES 


/* User Section ******************************************************************************************************/

#endif /* __FBL_CFG_H__ */

