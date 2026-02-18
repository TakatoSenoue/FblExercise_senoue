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
 *              File: .\vBrsCfg.h
 *   Generation Time: 2026-02-17 18:20:13
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

#ifndef _VBRSCFG_H_
#define _VBRSCFG_H_

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#if !defined (BRS_INCLUDED_BY_ASM_FILE)
# include "Std_Types.h"
#endif

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
#define BASIC_RUNTIME_SYSTEM_TYPE_MSR4

#define BRS_GENERATED_HW_CONFIG_VERSION 404U

/*******************************************************************************
 Standard BRS configuration
*******************************************************************************/
/*******************************************************************************
 Generic TestSuite Support
 *******************************************************************************/
/* Enable support of the Generic TestSuite connection.
   Via the define BRS_ENABLE_TESTSUITE_SUPPORT, the Generic TestSuite concept
   headerfile BrsTestsuite.h will be included and the Generic Testsuite init
   function BrsTestsuiteInit() will be called within BrsMain.c. */
/* Testsuite support is disabled (#define BRS_ENABLE_TESTSUITE_SUPPORT) */

/* LED support is disabled (#define BRS_ENABLE_SUPPORT_LEDS) */

/* Toggle custom pin support is disabled (#define BRS_ENABLE_SUPPORT_TOGGLE_CUSTOM_PIN) */

/* Toggle watchdog pin support is disabled (#define BRS_ENABLE_SUPPORT_TOGGLE_WD_PIN) */

/* Use the vLinkGenVariant reference for current executable. */
#define vLinkGenVariant_DemoFbl

/* Not the first execution instance of BRS within the system.
   (#define BRS_FIRST_EXECUTION_INSTANCE) */

/* Not a hypervisor guest execution instance of BRS within the system.
   (#define BRS_HYPERVISOR_GUEST_EXECUTION_INSTANCE) */

/*******************************************************************************
 Additional BRS support features
*******************************************************************************/
/* Enable support of SafeContext OS (used for OS partitioning UseCase). */
/* SafeContext support is disabled (#define BRS_ENABLE_SAFECTXSUPPORT) */

/* Enable support of MultiCore OS. */
/* MultiCore OS support is disabled (#define BRS_ENABLE_OS_MULTICORESUPPORT) */

/* Switches to enable support of FlashBootLoader and to define the FBL Type. */
#define BRS_ENABLE_FBL_SUPPORT
/* Definition of the FBL Execution Instance. */
#define BRS_FBL_INSTANCE_FBL
/* Configure, if the FBL stack should be started inside main() via a call
   of EcuM_Init() or a call of FblMain().
   This parameter only has an effect, if Execution Instance is "FBL",
   "FBL_Updater", "BM" or "BM_FBL".
   FBL without EcuM_Init() is the oldstyle FBL integration, started with
   a direct call of FblMain().
   FBL with EcuM_Init() means, module initialization is done in EcuM_Init()
   (real EcuM or EcuM Stub), but the cyclic handling is done in FBL. */
#define BRS_FBL_WITH_ECUMINIT
/* Configure, if the additional ExceptionTable in RAM should be initialized.
   This will cause a call of BrsHw_ExceptionTable_Init() in main(), which
   will program the vector table base address to Brs_ExcVectRam. The
   depending SectionGroup needs to be configured with Init Policy COPY_TO_RAM
   in vLinkGen as well.
   This allows proper exception handling during erase/re-program of flash. */
#define BRS_FBL_EXCEPTIONTABLE_IN_RAM

/* Switch to enable support of Hardware Security Module (HSM). */
/* HSM support is disabled (#define BRS_ENABLE_HSM_SUPPORT) */

/* Switch to enable support of Hardware Security Module (HSM) Updater. */
/* HSM Updater support is disabled (#define BRS_ENABLE_HSM_UPDATER_SUPPORT) */

/* Switch to enable support of OS UseCase "Interrupt Only". */
/* OS UseCase "Interrupt Only" is disabled (#define BRS_ENABLE_OS_INTERRUPT_ONLY) */

/* Switch to enable Hypervisor support. */
/* Hypervisor support is disabled (#define BRS_ENABLE_HYPERVISOR_SUPPORT) */

/*******************************************************************************
 BRS hardware configuration constants
*******************************************************************************/
/* Frequency of the board specific external oscillator. */
/* Main Oscillator Clock (MHz) */
#define BRS_OSC_CLK 16

/* Frequency, used for PLL calculation (normally used as CPU core clock). */
/* Timebase Clock (MHz) */
#define BRS_TIMEBASE_CLOCK 160

/* Frequency of the controller peripherals, at least for the default timer, used by the OS.
   This frequency value is used to calculate the proper value of the TicksPerBase value inside
   the OS configuration.
   If the frequencies for communication peripherals differ from this peripheral clock,
   they could be configured within the depending communictaion channel configuration
   (e.g. vBRSHwConfig/vBRSDriverHandlingCAN/vBRSDriverHandlingCAN_Clock). */
/* Peripheral Clock (MHz) */
#define BRS_PERIPH_CLOCK 40

/* Frequency, used for PLL calculation of CAN driver peripheral clock. */
/* CAN Clock (MHz) */
#define BRS_CAN_CLOCK 40

/*******************************************************************************
 BRS software modules
*******************************************************************************/
/* Enable the handling of Ports configuration inside BrsHw. */
#define BRS_ENABLE_PORT
/* Enable the handling of Watchdog configuration inside BrsHw. */
#define BRS_ENABLE_WATCHDOG
/* Prefer the initialization of PLL and Watchdog, previous to memory
   initialization.
   This will cause the depending init calls, previous to init stage One,
   inside the callout BrsMain_MemoryInit_StageOne_Hook() of
   BrsMain_Callout_Stubs.c. */
#define BRS_ENABLE_PREFER_PLL_WATCHDOG_INIT

/*******************************************************************************
 BRS communication interface configuration
*******************************************************************************/
/* This switch enables the handling of driver specific settings of
  - PLL and clock settings
  - Port Pin settings
  - On some platforms additional register settings, e.g. inside
    BrsHwPreInitPowerOn() or BrsHw_EnableHwAccess()
*/
#define BRS_ENABLE_CAN_SUPPORT

/* Can Classic detected. */
#define BRS_ENABLE_CAN_CLASSIC_SUPPORT

/* Enable the configuration of CAN communication channel 0. */
#define BRS_ENABLE_CAN_CHANNEL_0

/*******************************************************************************
 Tested Derivative: Renesas RH850 F1KM_S4 Family R7F701649
*******************************************************************************/
#define BRS_DERIVATIVE_RH850_1649

/*******************************************************************************
 CPU Core
 possible values are:
 BRS_CPU_CORE_ARC_EM22FS: DesignWare ARC EM22FS
 BRS_CPU_CORE_ARC_EM4: DesignWare ARC EM4
 BRS_CPU_CORE_ARC_EM6: DesignWare ARC EM6
 BRS_CPU_CORE_CORTEX_M0: Arm Cortex M0
 BRS_CPU_CORE_CORTEX_M0PLUS: Arm Cortex M0+
 BRS_CPU_CORE_CORTEX_M3: Arm Cortex M3
 BRS_CPU_CORE_CORTEX_M33: Arm Cortex M33
 BRS_CPU_CORE_CORTEX_M4: Arm Cortex M4
 BRS_CPU_CORE_CORTEX_M4F: Arm Cortex M4F
 BRS_CPU_CORE_CORTEX_M7: Arm Cortex M7
 BRS_CPU_CORE_CORTEX_R4: Arm Cortex R4
 BRS_CPU_CORE_CORTEX_R4F: Arm Cortex R4F
 BRS_CPU_CORE_CORTEX_R5: ARM Cortex R5
 BRS_CPU_CORE_CORTEX_R52: Arm Cortex R52
 BRS_CPU_CORE_CORTEX_R5F: Arm Cortex R5F
 BRS_CPU_CORE_CORTEX_R7: ARM Cortex R7
 BRS_CPU_CORE_E200Z0: NXP/ST PowerPC RISC Core e200z0
 BRS_CPU_CORE_E200Z210: NXP/ST PowerPC RISC Core e200z210
 BRS_CPU_CORE_E200Z215: NXP/ST PowerPC RISC Core e200z215
 BRS_CPU_CORE_E200Z225: NXP/ST PowerPC RISC Core e200z225
 BRS_CPU_CORE_E200Z410: NXP/ST PowerPC RISC Core e200z410
 BRS_CPU_CORE_E200Z420: NXP/ST PowerPC RISC Core e200z420
 BRS_CPU_CORE_E200Z425: NXP/ST PowerPC RISC Core e200z425
 BRS_CPU_CORE_E200Z710: NXP/ST PowerPC RISC Core e200z710
 BRS_CPU_CORE_E200Z720: NXP/ST PowerPC RISC Core e200z720
 BRS_CPU_CORE_E200Z726: NXP/ST PowerPC RISC Core e200z726
 BRS_CPU_CORE_E200Z759: NXP/ST PowerPC RISC Core e200z759
 BRS_CPU_CORE_G3K: Renesas G3K
 BRS_CPU_CORE_G3KH: Renesas G3KH
 BRS_CPU_CORE_G3M: Renesas G3M
 BRS_CPU_CORE_G4KH: Renesas G4KH
 BRS_CPU_CORE_G4MH: Renesas G4MH
 BRS_CPU_CORE_OTHER: Generic value for cores with no specific value
 BRS_CPU_CORE_RISCV32: RiscV RV32I
 BRS_CPU_CORE_TC161: Infineon TriCore Aurix Core
 BRS_CPU_CORE_TC162: Infineon TriCore AurixPlus Core
 BRS_CPU_CORE_TC18: Infineon TriCore Aurix 3G (TC4xx)
*******************************************************************************/
#define BRS_CPU_CORE_G3KH

/*******************************************************************************
 CPU Max Frequency (MHz)
*******************************************************************************/
/* Configure the maximum frequency of this derivative.
   This value is used to validate the vBRS PLL configuration. */
#define BRS_CPU_MAX_FREQUENCY 240

/*******************************************************************************
 CPU Core Amount (number of cores)
*******************************************************************************/
/* Configure the amount of cores, available on this derivative. */
#define BRS_CPU_CORE_AMOUNT 1

/*******************************************************************************
 Evaluation Board: Toggle Port 8 Pin 1
*******************************************************************************/
/* Define, used in SourceCode, for this specific Evaluation Board.
   Most times, this is used for board specific pin settings. */
#define BRS_EVA_BOARD_F1X_176PIN_EVB

/*******************************************************************************
 Derivative Group
*******************************************************************************/
/* This parameter allows to group the implementation for several derivatives. */
#define BRS_DERIVATIVE_GROUP_F1KM_S4

/*******************************************************************************
 Clock Group
*******************************************************************************/
/* This parameter allows to group the implementation for several derivatives. */
#define BRS_CLOCK_GROUP_A2

/*******************************************************************************
 Pll Group
*******************************************************************************/
/* This parameter allows to group the implementation for several derivatives. */
#define BRS_PLL_GROUP_A4

/*******************************************************************************
 Port Group
*******************************************************************************/
/* This parameter allows to group the implementation for several derivatives. */
#define BRS_PORT_GROUP_A

/*******************************************************************************
 Protection Group
*******************************************************************************/
/* This parameter allows to group the implementation for several derivatives. */
#define BRS_PROTECTION_GROUP_A

/*******************************************************************************
 Reset Group
*******************************************************************************/
/* This parameter allows to group the implementation for several derivatives. */
#define BRS_RESET_GROUP_A

/*******************************************************************************
 Init Patterns
*******************************************************************************/
/* Switch to enable 64-Bit mode for memory init pattern. 
  64-bit mode is disabled, all init patterns will be interpreted as 32-bit integers
   (#define BRS_ENABLE_64BIT_INIT_PATTERN) */

/* Switch to disable the memory init globally in Brs_ApplicationEntry().
   (#define BRS_DISABLE_MEMORY_INIT_GLOBALLY) */

/* Configure the init pattern for the Brs_MemoryZeroInit() call within
   Brs_ApplicationEntry().
   This value is for the blocks, configured with "Init Policy" = ZERO_INIT and
   a "Init Stage" from ZERO up to THREE within the vLinkGen configuration.
   The pattern must be 32-bit aligned. Default value is 0x0. */
#define BRS_INIT_PATTERN_BLOCKS (0x0UL)

/* Configure the init pattern for the Brs_MemoryZeroInit() call within
   Brs_ApplicationEntry().
   This value is for the blocks, configured with "Init Policy" = ZERO_INIT and
   the "Init Stage" HARD_RESET_ONLY within the vLinkGen configuration.
   The pattern must be 32-bit aligned. Default value is 0x0. */
#define BRS_INIT_PATTERN_HARDRESET_BLOCKS (0x0UL)

/* Configure the init pattern for the Brs_MemoryZeroInit() call within
   Brs_ApplicationEntry().
   This value is for the groups, configured with "Init Policy" = ZERO_INIT and
   a "Init Stage" from ZERO up to THREE within the vLinkGen configuration.
   The pattern must be 32-bit aligned. Default value is 0x0. */
#define BRS_INIT_PATTERN_AREAS (0x0UL)

/* Configure the init pattern for the Brs_MemoryZeroInit() call within
   Brs_ApplicationEntry().
   This value is for the groups, configured with "Init Policy" = ZERO_INIT and
   the "Init Stage" HARD_RESET_ONLY within the vLinkGen configuration.
   The pattern must be 32-bit aligned. Default value is 0x0. */
#define BRS_INIT_PATTERN_HARDRESET_AREAS (0x0UL)

/*******************************************************************************
 DrvCan Handling
*******************************************************************************/
/* These are macros to also support DrvCan modules with infixing
   (e.g. Can_30_Mcan).
   They are used by the UserDefined ExclusiveArea handling for CAN channels
   in BrsMain.c.
   The implementation is according to CanDriver ApplicationNote AN-ISC-8-1149 */
#define BRS_DRVCAN_HEADER_FILENAME "Can.h"
#define BRS_DRVCAN_EXCLUSIVE_AREA_INFIX(a, b) void SchM_##a##_Can_CAN_##b(void)
#define BRS_DRVCAN_ControllerInterrupts_INFIX(a) Can_##a##ControllerInterrupts

#endif /*_VBRSCFG_H_*/

/* The following lines are needed for the UserDefined ExclusiveArea handling
   for CAN channels , according to AN-ISC-8-1149, implemented in BrsMain.c.
   To support drivers with infix and there name specific MemMap sections,
   this will forward the correct MemMap defines to the MemMap.h file. */

#ifdef CAN_START_SEC_CODE
#include "MemMap.h"
#endif

#ifdef CAN_STOP_SEC_CODE
#include "MemMap.h"
#endif

#ifdef CAN_START_SEC_VAR_NOINIT_8BIT
#include "MemMap.h"
#endif

#ifdef CAN_STOP_SEC_VAR_NOINIT_8BIT
#include "MemMap.h"
#endif

