/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2025 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/** \file  File:  BrsHw.h
 *      Project:  Vector Basic Runtime System
 *       Module:  BrsHw for platform Renesas RH850
 *
 *  \brief Description:  This is the hardware specific header file for Vector Basic Runtime System (BRS).
 *
 *  \attention Please note:
 *    The demo and example programs only show special aspects of the software. With regard to the fact
 *    that these programs are meant for demonstration purposes only, Vector Informatik liability shall be
 *    expressly excluded in cases of ordinary negligence, to the extent admissible by law or statute.
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  01.00.00  2020-05-26  visbwa                New branch for vBaseEnv 2.0, based on zBrs_Rh850 BrsHw.c 3.11.05
 *                        virrlu                Review according to Brs_Template@Implementation[1.00.00]
 *  01.00.01  2020-07-20  virrlu                Add BOOTCTRL register initialization, fix PE guard setting for F1H
 *            2020-07-23  visbwa                Review; added reset of BrsHw_U2A_CoreStart in BrsHwSoftwareResetECU()
 *  01.01.00  2020-08-04  visbwa                Experimental support for FBL UseCase Legacy w/o OS
 *  01.01.01  2020-09-23  vismaa                Review against Brs_Template@Implementation[1.01.01]
 *  01.01.02  2020-12-03  virrlu                BrsHw_GetCoreAsm adapted for Diab compiler.
 *  01.02.00  2021-04-01  virrlu                Support for E2X derivatives.
 *  01.02.01  2021-05-07  virrlu                Support for E2X eval board.
 *  01.02.02  2021-05-18  virrlu                Add function BrsHw_AsmMemoryZeroInitLoop.
 *  01.02.03  2021-06-15  vishci                Added BRS_PLL_GROUP_A5
 *  01.02.04  2021-07-06  visto                 Added BRSHW_PORT_ALT_8 to BrsHw_Ports.h
 *  01.02.05  2021-08-19  visjhr HALBE-2163     Remove BRS_EVA_BOARD_VENxxxx defines from BrsHw_Ports.h
 *  02.00.00  2022-02-11  visrgm                Update to Brs_Template 1.03.02, Added BrsHw_ExceptionTable_Init()
 *            2022-02-14  visbwa                Review to Brs_Template 1.03.03, moved F1H BrsHw_InitPEGuard() implementation into new
 *                                              BrsHwEarlyInitPowerOn() and removed the call from StartupCode, same for E1FCC
 *  02.00.01  2022-06-30  xchen                 Fix Renesas Linker error for _RESET_CORE0
 *  02.00.02  2022-07-19  virrlu                Fixed incorrect clock divider base addresses for clock group A1.
 *            2022-08-04  vishci                changed derivative group BRS_DERIVATIVE_GROUP_U2A to BRS_DERIVATIVE_GROUP_U2A16
 *  02.00.06  2022-08-10  visbwa                Update to Brs_Template 1.03.05; UsageType=external in ALM (DemoComponents concept)
 *  02.00.07  2022-08-11  visto                 remove wrong closing comment from #warning statement
 *  02.00.08  2022-09-22  vismaa                Added support for U2B (RH850_2Z2D)
 *  02.00.09  2022-09-23  vismaa                Fix for BRS_COMP_DIABDATA (SWCP issue)
 *  02.00.10  2022-10-17  visjhr                Added missing endif
 *  02.00.11  2022-10-18  visjhr                Removed endif
 *  02.00.12  2022-10-19  visbwa                Smooth cosmetics in BrsHwPllInitPowerOn() for BRS_PLL_GROUP_Ax
 *  02.00.13  2022-10-25  visjhr HALBE-5685     CAN clock enabling, CAN wakeup filter handling for BRS_PLL_GROUP_E /
 *                                              BRS_PORT_GROUP_E
 *  02.00.14  2022-12-02  vismaa                Fix for D1x family in BrsHwPllInitPowerOn 8BRS_CLOCK_GROUP_A1,BRS_PLL_GROUP_A5)
 *  02.00.15  2023-03-09  vismaa HALBE-6792     Added BrsHwApplicationInit for GHS only
 *  02.00.16  2023-03-13  vissgj HALBE-8997     Add U2A6 derivatives (BRS_DERIVATIVE_GROUP_U2A6)
 *            2023-03-31  visbwa                Added support for 8MHz Osc within BRS_PLL_GROUP_A3
 *  02.00.17  2023-04-03  visbwa                Added port config for CAN1, CAN2, LIN1 and LIN2 for EVA_BOARD_U2A_516PIN
 *  02.01.00  2023-05-04  vissgj ESCAN00114551  Replace in BrsHwIntTb.c in sections .brsExcVect and .brsExcVectRam
 *                                              all exception addresses with jump to exception addresses. Update to Brs_Template
 *                                              1.03.08, use Brs_MemMap.h.
 *  02.01.01  2023-05-11  vissgj                Fix asm macros BRSHW_WRITE_TO_EBASE and BRSHW_WRITE_TOINTBP for GHS
 *  02.01.02  2023-06-23  virrlu ESCAN00111463  Linker Error because of undefined symbol __Brs_ExcVectRam_START
 *                                              with FBL and Renesas compiler
 *  02.01.03  2023-06-26  virrlu                Add missing symbols needed for Renesas compiler.
 *  02.01.04  2022-06-27  xchen                 Fix Renesas Linker error for _stackbottom_STACK_C0.
 *  02.01.05  2023-07-10  vimmoi ESCAN00115062  Fix ESCAN00115062 for Stack Pointer Initialization in MultiCore Setup
 *  02.02.00  2023-07-24  vissgj HALBE-9319     Added E2M derivatives 2002 and 2005, integrated BRS_DERIVATIVE_GROUP_E2M,
 *                                              introduced BRS_RESET_GROUP_F for E2x derivatives, provided 2nd CPU frequency for
 *                                              BRS_PLL_GROUP_G, confirmed port settings for E2x.
 *            2023-07-24  vismaa TAR-28902      Added missing enabling for ETH clock for U2A
 *  02.02.01  2023-08-22  visrgm ESCAN00115455  Correction for ESCAN00115455
 *  02.02.02  2024-02-21  vissgj                Added missing unlock for software reset for BRS_RESET_GROUP_E and BRS_RESET_GROUP_F,
 *                                              updated to Brs_Template 1.03.10
 *  02.03.00  2024-05-02  kal    BASEENV-7093   Added new PORT_GROUP_G for fixing CAN and LIN ports for the C1M-AZ subfamily
 *            2024-05-06  kal    BASEENV-8305   Implemented the handling of ETHERNET PHY according to Brs_Template 1.03.08
 *            2024-05-07  kal    BASEENV-10199  Moved Standby controller configuration from BrsHwPllInitPowerOn to BrsHwPreInitPowerOn
 *            2024-05-16  kal    BASEENV-11649  Added new RESET_GROUP_D for fixing RAM initialization in P1x-C family
 *            2024-05-17  kal    BASEENV-6426   Added an exception for already initialized clock controllers (conflict with HSM)
 *  03.00.00  2024-06-10  kal                   Removed unnecessary _GROUP_s and sections after x2x split; renumbered PLL_GROUP (F->E),
 *                                              and PORT_GROUP (G->E); U2x and E2x moved to BRS_RH850_x2x
 *  03.00.01  2024-08-30  mna    BASEENV-12400  Update Brs_Template, add Ethernet Reset Pin
 *  03.00.02  2024-09-04  kal    TAR-60238      Removed exception for already initialized main oscillator (from BASEENV-6426)
 *                                              Fixed a small error in ETH0_RESET
 *  03.00.03  2024-10-29  kal    BASEENV-12733  Changed init flow in BrsHwInitPortOutput()
 *  03.00.04  2025-02-06  kal                   Renesas fix for MemMap[2.02.00]
 *  03.00.05  2025-03-04  kal    BASEENV-13195  Added compiler error for non-first execution instance and exception table in RAM combination
 *  03.00.06  2025-03-31  kal    BASEENV-13290  Added initialization of global and text pointer for Diab, Renesas and IAR compiler
 *********************************************************************************************************************/

#ifndef _BRSHW_H_
#define _BRSHW_H_

/**********************************************************************************************************************
 *  MODULE VERSION
 *********************************************************************************************************************/
/*
 * Description: This is the BrsHw main and bug fix version. The version numbers are BCD coded.
 *              E.g. a main version of 1.23 is coded with 0x0123, a bug fix version of 9 is coded 0x09.
 */

/* This is the BrsHw template main and bug fix version, the platform BrsHw is reviewed to */
#define BRSHW_SOURCECODE_TEMPLATE_VERSION        0x0103u
#define BRSHW_SOURCECODE_TEMPLATE_BUGFIX_VERSION 0x11u

/* This is the BrsHw main and bug fix version */
#define BRSHW_VERSION        0x0300u
#define BRSHW_BUGFIX_VERSION 0x06u

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
/*
 * Description: The BrsCfg header is used to configure different types of
 *              tests and system setups. Therefore it must be included first
 *              in each BRS and test module.
 *              This file is part of the BRS.
 */
#include "vBrsCfg.h"

#if defined (BRS_ENABLE_PORT)
  #include "BrsHw_Ports.h"
#endif

#include "BrsMain.h"

/**********************************************************************************************************************
 *  CONFIGURATION CHECK
 *********************************************************************************************************************/
/* The following parameters are necessary for this platform, to be generated by BRS-Cfg5-Generator into BrsCfg.h */
#if !defined (BRS_OSC_CLK)
  #error "BRS CHECK: The parameter BRS_OSC_CLK is missing! Please check your BRS Cfg5 configuration."
#endif

#if !defined (BRS_TIMEBASE_CLOCK)
  #error "BRS CHECK: The parameter BRS_TIMEBASE_CLOCK is missing! Please check your BRS Cfg5 configuration."
#endif

#if !defined (BRS_PERIPH_CLOCK)
  #error "BRS CHECK: The parameter BRS_PERIPH_CLOCK is missing! Please check your BRS Cfg5 configuration."
#endif

#if !defined (BRS_CPU_MAX_FREQUENCY)
  #error "BRS CHECK: The parameter BRS_CPU_MAX_FREQUENCY is missing! Please check your BRS Cfg5 configuration."
#endif

#if !(defined (BRS_CPU_CORE_G3M) || defined (BRS_CPU_CORE_G3MH) || defined (BRS_CPU_CORE_G3KH) || defined (BRS_CPU_CORE_G3K) || defined (BRS_CPU_CORE_G4MH))
  #error "BRS CHECK: The parameter BRS_CPU_CORE_x is missing or not supported! Please check your BRS Cfg5 configuration."
#endif

#if !defined (BRS_CPU_CORE_AMOUNT)
  #error "BRS CHECK: The parameter BRS_CPU_CORE_AMOUNT is missing! Please check your BRS Cfg5 configuration."
#endif

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
/*
 * Description: Macro for access to IO addresses
 */
#define BRSHW_IOS(type, address) (*((volatile type *)(address)))

/*
 * Description: This corresponds to the return value of BRS_READ_COREID and BrsHw_GetCore().
 *              BRSHW_INIT_CORE_ID is used e.g. in main@BrsMain to detect the valid core for HW initialization (boot core)
 */
#define BRSHW_DERIVATIVE_CORE0_ID  0x00
#define BRSHW_DERIVATIVE_CORE1_ID  0x01
#define BRSHW_DERIVATIVE_CORE2_ID  0x02
#define BRSHW_DERIVATIVE_CORE3_ID  0x03

#define BRSHW_INIT_CORE_ID BRSHW_DERIVATIVE_CORE0_ID

/* DERIVATIVE DEPENDENT STATIC */
#define BRSHW_G0MEV_BASE             0xFFFEEC00
#define BRSHW_CORE_START_PATTERN     0x0FEE0BEE
#define BRSHW_CORE_SYNC_REG          BRSHW_G0MEV_BASE

/* Definition of BRS_READ_COREID(c) is part of Compiler abstraction */

/*
 * Description: Configure here the platform/compiler specific macros, that are used in vBRS generated vBrs_Lcfg.c
 *              to define the core specific values of BrsMain_CoreConfig (labels for StartupStack, CoreExceptionTable,
 *              InterruptVectorTable)
 */
#define BRSHW_DEFINE_STARTUP_STACK(x)  _STACK_C##x##_LIMIT

#define BRSHW_DEFINE_EXCVEC(x)         _OS_EXCVEC_CORE##x##_CODE_START
#define BRSHW_DEFINE_INTVEC(x)         _OS_INTVEC_CORE##x##_CODE_START

/* Special value, needed for SingleCore UseCase w/o OS (e.g. FBL). vBRS will generate "BRSHW_DEFINE_STARTUP_STACK(BRSHW_INIT_CORE_ID)"
    for this. Configure here the valid value for the StartupStack pointer label of the boot core */
#define _STACK_CBRSHW_INIT_CORE_ID_LIMIT _STACK_C0_LIMIT

/**********************************************************************************************************************
 * Compiler abstraction
 *********************************************************************************************************************/
#if defined (BRS_COMP_GHS)
  #define ___asm(c)               __asm_(c)
  #define __asm_(c)               asm(" " #c);
  #define __as1(c, d)             __as1_(c, d)
  #define __as1_(c, d)            asm(" " #c " , " #d);
  #define __as2(c, d, e)          __as2_(c, d, e)
  #define __as2_(c, d, e)         asm(" " #c " , " #d " , " #e);
  #define BRS_ISR_BASE_ENTRY(x)   ___asm(jr x)
  #define BRS_ISR_ALIGNMENT       ___asm(nop)___asm(nop)___asm(nop)___asm(nop)___asm(nop)___asm(nop)
  #define BRS_ALIGN16()           asm(" .align 16");
  #define BRS_ISR_ENTRY(x)        ___asm(.word x)
  #define BRS_ISR_KEYWORD         __interrupt
  #define BRS_ISR_DEFINE(x)       _##x

  #define BRS_SECTION_CODE(c)     asm(" .section ." #c "," "ax" );
  #define BRS_GLOBAL(c)           asm(" .globl " #c);
  #define BRS_LABEL(c)            asm(#c ":");

  /* Unconditional branch to c */
  #define BRS_BRANCH(c)           ___asm(jr32 c)

  /* Branch to external function */
  #define BRS_EXTERN_BRANCH(c)    ___asm(jr32 c)

  /* Branch to e if c and d are equal */
  #define BRS_BRANCH_EQUAL(c,d,e) __as1(cmp   c, d) \
                                  ___asm(be   e)

  /* Branch to e if c and d are NOT equal */
  #define BRS_BRANCH_NOT_EQUAL(c,d,e)  __as1(cmp   c, d) \
                                       ___asm(bne   e)

/* Reads core id value (PEID) from HTCFG0 to register c. */
/* Register d is only a working register and can be reused afterwards */
# if defined (BRS_CPU_CORE_G4MH)
  #define BRS_READ_COREID(c)  __as2(stsr  0, c, 2)
# else
  #define BRS_READ_COREID(c)  __as2(stsr  0, c, 2) \
                              __as1(shr   17, c)
# endif

/* Reads architecture identifier value from PID to register c. */
/* Register d is only a working register and can be reused afterwards */
  #define BRS_READ_CORETYPE(c,d)  __as2(stsr  6, c, 1) \
                                  __as1(shr   24, c)   \
                                  __as1(mov   0xff, d) \
                                  __as1(and   d, c)

/* Compiler abstraction of assembler directive to write the exception vector base address into the EBASE core register */
__asm void BRSHW_WRITE_TO_EBASE(Brs_AddressOfConstType value)
{
%reg value
  ldsr  value, 3, 1
%con value
  mov   value, r11
  ldsr  r11, 3, 1
%mem value
  ld.w  value, r11
  ldsr  r11, 3, 1
%error
}

/* Compiler abstraction of assembler directive to write the interrupt vector table base address into the INTBP core register */
__asm void BRSHW_WRITE_TO_INTBP(Brs_AddressOfConstType value)
{
%reg value
  ldsr  value, 4, 1
%con value
  mov   value, r11
  ldsr  r11, 4, 1
%mem value
  ld.w  value, r11
  ldsr  r11, 4, 1
%error
}

#endif /*BRS_COMP_x*/

/**********************************************************************************************************************
 *  BrsHW configuration
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL VARIABLES
 *********************************************************************************************************************/
/*
 * Description: These constants are used to propagate the Versions over module boundaries.
 *              The version numbers are BCD coded. E.g. a sub version of 23 is coded with 0x23,
 *              a bug fix version of 9 is coded 0x09.
 */
extern uint8 const kBrsHwMainVersion;
extern uint8 const kBrsHwSubVersion;
extern uint8 const kBrsHwBugfixVersion;

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/*****************************************************************************/
/* @brief      This function can be used to initialize memory regions by e.g.
 *             usage of platform specific assembly code.
 *             It is called from BrsMainStartup, within the loop of Brs_MemoryZeroInit()
 *             (ifBRSHW_ASM_MEMORY_ZERO_INIT_LOOP_AVAILABLE is set in BrsHw.h).
 *             Implementation should be done in this header by usage of inline assembly code.
 * @pre        -
 * @param[in]  memPtr is the start address of the memory region to be initialized
 * @param[in]  memAddrEnd is the end address of the memory region to be initialized
 * @param[in]  InitPattern describes the pattern, to be used for the memory initialization
 * @param[out] -
 * @return     -
 * @context    Function is called from Brs_MemoryZeroInit@BrsMainStartup
 *****************************************************************************/
#define BRSHW_ASM_MEMORY_ZERO_INIT_LOOP_AVAILABLE

#if defined (BRS_COMP_GHS)
asm void BrsHw_AsmMemoryZeroInitLoop(uint32 memPtr, uint32 memAddrEnd, uint32 InitPattern)
{
% reg memPtr, memAddrEnd, InitPattern; lab BrsHw_MemoryZeroInitLoopStart, BrsHw_MemoryZeroInitLoopEnd
  mov InitPattern, r10                /* Move init pattern to r10 -> used to initialize the memory regions. */
  mov InitPattern, r11                /* Move init pattern to r11 -> used to initialize the memory regions. */

  /* Start of Init Loop */
BrsHw_MemoryZeroInitLoopStart:
  cmp memPtr, memAddrEnd              /* Compare memory pointer with end address. */
  be BrsHw_MemoryZeroInitLoopEnd      /* Jump to end if equal. */
  bl BrsHw_MemoryZeroInitLoopEnd      /* Jump to end if greater. */

  st.dw r10, 0x0[memPtr]              /* Write init pattern to memory region stored in memPtr. */
  addi  8, memPtr, memPtr             /* Increase memPtr by 8 (size of one double word). */
  jr    BrsHw_MemoryZeroInitLoopStart

BrsHw_MemoryZeroInitLoopEnd:
}

#endif /*BRS_COMP_x*/

#if defined (BRS_FIRST_EXECUTION_INSTANCE)
#define BRS_START_SEC_STARTUP_CODE
#include "Brs_MemMap.h"
/*****************************************************************************/
/* @brief      This function can be used to initialize controller specific
 *             stuff that should be handled by the first execution instance,
 *             even before the memory initialization took place (e.g.
 *             everything that is necessary to access the memory or to handle
 *             exceptions). This function is called at the beginning of
 *             BrsMainStartup(), immediately after the stackpointer was
 *             initialized in StartupCode
 *             (if BRSHW_EARLYINIT_AVAILABLE is set in BrsHw.h).
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from Brs_PreMainStartup() at power on
 *             initialization
 *****************************************************************************/
#define BRSHW_EARLYINIT_AVAILABLE
void BrsHwEarlyInitPowerOn(void);
#define BRS_STOP_SEC_STARTUP_CODE
#include "Brs_MemMap.h"
#endif /*BRS_FIRST_EXECUTION_INSTANCE*/

/*****************************************************************************/
/* @brief      This function can be used to initialize controller specific
 *             stuff that should be handled by every execution instance,
 *             even before the memory initialization took place (e.g.
 *             everything that needs to be re-programmed to fit with the memory
 *             layout of the actual execution instance). This function is
 *             called at the beginning of Brs_ApplicationEntry(), immediately
 *             after it was called from Brs_PreMainStartup() or another
 *             execution instance (if BRSHW_APPLICATIONINIT_AVAILABLE is set
 *             in BrsHw.h).
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from Brs_ApplicationEntry() at power on
 *             initialization
 *****************************************************************************/
#define BRSHW_APPLICATIONINIT_AVAILABLE
void BrsHwApplicationInit(void);

/*****************************************************************************/
/* @brief      This function can be used to initialize controller specific
 *             stuff that is not related to one of the other InitPowerOn
 *             functions (e.g. code that is always mandatory, also if MCAL
 *             and/or OS is used). This function is called from BrsMain
 *             immediately after BrsHwDisableInterruptAtPowerOn() during
 *             initialization (if BRSHW_PREINIT_AVAILABLE is set in BrsHw.h) or
 *             from the BrsMain_MemoryInit_StageHardReset_Hook() during
 *             initialization (if BRS_ENABLE_PREFER_PLL_WATCHDOG_INIT is set).
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from BrsMainInit() at power on initialization
 *****************************************************************************/
#define BRSHW_PREINIT_AVAILABLE
void BrsHwPreInitPowerOn(void);

#if defined (BRS_ENABLE_WATCHDOG)
/*****************************************************************************/
/* @brief      This function must be used to initialize the Watchdog.
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from BrsMainInit() at power on initialization
 *****************************************************************************/
void BrsHwWatchdogInitPowerOn(void);
#endif /*BRS_ENABLE_WATCHDOG*/

#if defined (BRS_ENABLE_PLLCLOCKS)
/*****************************************************************************/
/* @brief      This function must be used to initialize the PLL.
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from BrsMainInit() at power on initialization
 *****************************************************************************/
void BrsHwPllInitPowerOn(void);
#endif /*BRS_ENABLE_PLLCLOCKS*/

#if defined (BRS_ENABLE_PORT)
/*****************************************************************************/
/* @brief      This function configures a port pin as input pin.
 * @pre        Port pin configurations available within BrsHw_Ports.h and
 *             no DrvPort used for port pin initialization.
 * @param[in]  p - brsHw_Port_PortType, to be initialized.
 * @param[out] -
 * @return     -
 * @context    Function is called from BrsHwPortInitPowerOn() and
 *             provided to external modules (e.g. driver testsuits).
 *****************************************************************************/
void BrsHwInitPortInput(brsHw_Port_PortType);

/*****************************************************************************/
/* @brief      This function configures a port pin as output pin.
 * @pre        Port pin configurations available within BrsHw_Ports.h and
 *             no DrvPort used for port pin initialization.
 * @param[in]  p - brsHw_Port_PortType, to be initialized.
 * @param[out] -
 * @return     -
 * @context    Function is called from BrsHwPortInitPowerOn() and
 *             provided to external modules (e.g. driver testsuits).
 *****************************************************************************/
void BrsHwInitPortOutput(brsHw_Port_PortType);

/*****************************************************************************/
/* @brief      This function configures a port pin as input and output pin.
 * @pre        Port pin configurations available within BrsHw_Ports.h and
 *             no DrvPort used for port pin initialization.
 * @param[in]  p - brsHw_Port_PortType, to be initialized.
 * @param[out] -
 * @return     -
 * @context    Function is called from BrsHwPortInitPowerOn() and
 *             provided to external modules (e.g. driver testsuits).
 *****************************************************************************/
void BrsHwInitPortInputOutput(brsHw_Port_PortType);

# if defined (BRS_ENABLE_FBL_SUPPORT)
  #define BRS_START_SEC_RAM_CODE
  #include "Brs_MemMap.h"
# endif
/*****************************************************************************/
/* @brief      This function sets the output level of a port pin.
 * @pre        Port pin configurations available within BrsHw_Ports.h,
 *             no DrvPort used for port pin initialization and
 *             transferred port pin has to be initialized as output pin with
 *             GPIO functionality.
 * @param[in]  p     - brsHw_Port_PortType, to be set,
 *             Level - level, port pin has to be set to
 *                     (BRSHW_PORT_LOGIC_LOW or BRSHW_PORT_LOGIC_HIGH).
 * @param[out] -
 * @return     -
 * @context    Function is called from BrsHwPortInitPowerOn() and
 *             provided to external modules (e.g. BrsMainTogglePin()).
 *****************************************************************************/
void BrsHwPort_SetLevel(brsHw_Port_PortType, uint8);

/*****************************************************************************/
/* @brief      This function reads the input level of a port pin.
 * @pre        Port pin configurations available within BrsHw_Ports.h,
 *             no DrvPort used for port pin initialization and
 *             transferred port pin has to be initialized as input pin with
 *             GPIO functionality.
 * @param[in]  p - brsHw_Port_PortType, to be read.
 * @param[out] -
 * @return     Level, read from port pin
 *             (BRSHW_PORT_LOGIC_LOW or BRSHW_PORT_LOGIC_HIGH).
 * @context    Function is provided to external modules.
 *****************************************************************************/
uint8 BrsHwPort_GetLevel(brsHw_Port_PortType);
# if defined (BRS_ENABLE_FBL_SUPPORT)
  #define BRS_STOP_SEC_RAM_CODE
  #include "Brs_MemMap.h"
# endif

/*****************************************************************************/
/* @brief      This function must be used to initialize the used ports.
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from BrsMainInit() at power on initialization
 *****************************************************************************/
void BrsHwPortInitPowerOn(void);
#endif /*BRS_ENABLE_PORT*/

/*****************************************************************************/
/* @brief      Disable the global system interrupt.
 * @pre        Must be the first function call in main@BrsMain
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from main@BrsMain at power on initialization
 *****************************************************************************/
void BrsHwDisableInterruptAtPowerOn(void);

/*****************************************************************************/
/* @brief      Program the vector table base addresses
 * @pre        -
 * @param[in]  ExcVecLabel - address of the core exception table
 *             IntVecLabel - address of the interrupt vector table
 *             Use BRS_DEFINE_ADDRESS_UNUSED for unused values
 * @param[out] -
 * @return     -
 * @context    Function is called from main@BrsMain at power on initialization
 *****************************************************************************/
void BrsHw_ExceptionTable_Init(Brs_AddressOfConstType, Brs_AddressOfConstType);

/*****************************************************************************/
/* @brief      Restart ECU (issue a software reset or jump to startup code)
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from e.g. ECU state handling
 *****************************************************************************/
void BrsHwSoftwareResetECU(void);

#if defined (BRS_FIRST_EXECUTION_INSTANCE)
/* This code is only needed for the first instance/executable in the system */
#define BRS_START_SEC_STARTUP_CODE
#include "Brs_MemMap.h"
/*****************************************************************************/
/* @brief      Get reset reason
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     Reset reason
 * @context    Function is called from BrsMainStartup to determine if reset
 *             was triggered through software call (BrsHwSoftwareResetECU()).
 *             The result is stored by BrsMainStartup in the global variable
 *             brsMain_ResetReason. It should only be called once, during
 *             startup. The old API name BrsHwGetResetReason() is remapped
 *             to BrsMainGetResetReason.
 *****************************************************************************/
brsMain_ResetReasonType BrsHwGetResetReasonStartup(void);
#define BRS_STOP_SEC_STARTUP_CODE
#include "Brs_MemMap.h"

/* Wrapper from old BrsHwGetResetReason() function to new
 * BrsMainGetResetReason(). This is to prevent multiple selection of reset
 * reason registers, as this is not supported on all platforms.
 */
#define BrsHwGetResetReason() BrsMainGetResetReason()
#endif /*BRS_FIRST_EXECUTION_INSTANCE*/

/*****************************************************************************/
/* @brief      This API is used for the BRS time measurement support to get a
 *             default time value for all measurements with this platform to
 *             be able to compare time measurements on different dates based
 *             on this time result.
 * @pre        Should be called with interrupts global disabled
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from e.g. component testsuits for calibration
 *****************************************************************************/
void BrsHwTime100NOP(void);

#if defined (BRS_ENABLE_SAFECTXSUPPORT)
/*****************************************************************************/
/* @brief      This API is used to enable hardware access in untrusted mode
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function must be called after all depending peripheral modules
 *             are supplied by proper clocks AND before the OS is started.
 *****************************************************************************/
void BrsHw_EnableHwAccess(void);
#endif /*BRS_ENABLE_SAFECTXSUPPORT*/

/*****************************************************************************/
/* @brief      This API is used to read the core ID of the actual running core
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     Core ID of the actual running core
 * @context    Function is e.g. called from main@BrsMain, to only call HW-init
 *             code once, on the boot core.
 *             In MultiCore setups, additional BRSHW_INIT_CORE_ID must be
 *             declared inside BrsHw.h, to configure the proper core ID value
 *             of that boot core.
 *****************************************************************************/
uint32 BrsHw_GetCore(void);

/*****************************************************************************/
/* @brief      This API is used to enable an interrupt source in the core
 *             interrupt controller.
 * @pre        -
 * @param[in]  Source to be enabled.
 * @param[in]  Priority level to be set.
 * @param[out] -
 * @return     -
 * @context    Function is called from HlpTest and other test environments.
 *****************************************************************************/
void BrsHw_EnableInterrupt(uint32, uint8);

/*****************************************************************************/
/* @brief      This API is used to disable an interrupt source in the core
 *             interrupt controller.
 * @pre        -
 * @param[in]  Source to be disabled.
 * @param[out] -
 * @return     -
 * @context    Function is called from HlpTest and other test environments.
 *****************************************************************************/
void BrsHw_DisableInterrupt(uint32);

/*****************************************************************************/
/* @brief      This API is used to trigger the given software interrupt source.
 * @pre        -
 * @param[in]  Source to be triggered.
 *             Some derivatives only support few software triggerable sources,
 *             check for their validity.
 * @param[out] -
 * @return     -
 * @context    Function is called from HlpTest and other test environments.
 *****************************************************************************/
void BrsHw_TriggerSoftwareInterrupt(uint32);

#if defined (BRS_ENABLE_OS_MULTICORESUPPORT)
/*****************************************************************************/
/* @brief      This API is used as sync barrier. It is used to unlock cores
 *             that are locked in the Startup code. The implementation is only
 *             needed on platforms, where all cores are started automatically
 *             after a power-on reset. All additional cores are looped, until
 *             the boot core reaches this function.
 * @pre        -
 * @param[in]  uint32 coreId
 * @param[out] -
 * @return     -
 * @context    Function is called from BrsMainStartup on the boot core.
 *****************************************************************************/
void BrsHw_UnlockCores(uint32);
#endif /*BRS_ENABLE_OS_MULTICORESUPPORT*/

#if defined (BRS_ENABLE_FBL_SUPPORT)
#define BRSHW_VOLTAGE_FOR_FLASH_PROGRAMMING_AVAILABLE
/*****************************************************************************/
/* @brief      This function has to be used to enable self-programming.
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from FBL if
 *             BRSHW_VOLTAGE_FOR_FLASH_PROGRAMMING_AVAILABLE is set
 *****************************************************************************/
void BrsHwSetVfp(void);

/*****************************************************************************/
/* @brief      This function has to be used to disable self-programming.
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from FBL if
 *             BRSHW_VOLTAGE_FOR_FLASH_PROGRAMMING_AVAILABLE is set
 *****************************************************************************/
void BrsHwResetVfp(void);
#endif /*BRS_ENABLE_FBL_SUPPORT*/

#endif /*_BRSHW_H_*/
