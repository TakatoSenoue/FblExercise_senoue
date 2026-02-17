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
/** \file  File:  BrsHwIntTb.c
 *      Project:  Vector Basic Runtime System
 *       Module:  BrsHw for platform Renesas RH850
 *     Template:  This file is reviewed according to Brs_Template@Implementation[1.03.11]
 *
 *  \brief Description:  This file consists of the core exception table for Startup and a 2nd one to be copied into RAM
 *                       for FBL projects.
 *
 *  \attention Please note:
 *    The demo and example programs only show special aspects of the software. With regard to the fact
 *    that these programs are meant for demonstration purposes only, Vector Informatik liability shall be
 *    expressly excluded in cases of ordinary negligence, to the extent admissible by law or statute.
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to BrsHw.h.
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

#define BRSHWINTTB_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "BrsHw.h"

/**********************************************************************************************************************
 *  CONFIGURATION CHECK
 *********************************************************************************************************************/
#if defined (BRS_COMP_GHS)      

#else
  #error "Unknown compiler specified!"
#endif

#if defined (BRS_FIRST_EXECUTION_INSTANCE)
/* This code is only needed for the first instance/executable in the system */

/********************************************************************************************
 *                                                                                          *
 *                 Startup Core Exception Handler                                           *
 *                                                                                          *
 ********************************************************************************************/
#define BRS_START_SEC_STARTUP_CODE
#include "Brs_MemMap.h"
BRS_ISR_KEYWORD void BrsHw_CoreExceptionHandler(void)
{
#if defined (BRSHW_BRSHW_COREEXCEPTIONHANDLER_CALLOUT)
  BrsTestsuite_BrsHw_CoreExceptionHandler();
#endif

  volatile uint8 Brs_Continue;
  Brs_Continue = 0;

  while (Brs_Continue == 0)
  {
    /* Set BrsMain_Continue to 1 to continue here.
     * If the debugger is not able to show the stack properly, this mechanism can be used to find the
     * source of the exception. */
  }
}
#define BRS_STOP_SEC_STARTUP_CODE
#include "Brs_MemMap.h"

extern void brsStartupEntry(void);
extern void _STACK_C0_LIMIT(void);

# if defined (BRS_COMP_GHS) 
/********************************************************************************************
 *                                                                                          *
 *                 Startup Core Exception Table                                             *
 *                                                                                          *
 ********************************************************************************************/
___asm(.extern brsStartupEntry)

#define BRS_START_SEC_EXCVECT_CODE
#define BRS_MEMMAP_INLINE_ASSEMBLER_USED
#include "Brs_MemMap.h"
___asm(;/* interrupt vectors */)
___asm(;/* beginning of the Startup Core interrupt vector table */)

___asm(.globl Vector_0x00)
___asm(Vector_0x00:)
    BRS_ISR_BASE_ENTRY(brsStartupEntry)
    BRS_ISR_ALIGNMENT

BRS_ALIGN16()
___asm(.globl Vector_0x10)
___asm(Vector_0x10:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0x20)
___asm(Vector_0x20:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0x30)
___asm(Vector_0x30:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0x40)
___asm(Vector_0x40:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0x50)
___asm(Vector_0x50:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0x60)
___asm(Vector_0x60:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0x70)
___asm(Vector_0x70:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0x80)
___asm(Vector_0x80:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0x90)
___asm(Vector_0x90:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0xA0)
___asm(Vector_0xA0:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0xB0)
___asm(Vector_0xB0:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0xC0)
___asm(Vector_0xC0:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0xD0)
___asm(Vector_0xD0:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0xE0)
___asm(Vector_0xE0:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0xF0)
___asm(Vector_0xF0:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0x100)
___asm(Vector_0x100:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0x110)
___asm(Vector_0x110:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0x120)
___asm(Vector_0x120:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0x130)
___asm(Vector_0x130:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0x140)
___asm(Vector_0x140:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0x150)
___asm(Vector_0x150:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0x160)
___asm(Vector_0x160:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0x170)
___asm(Vector_0x170:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0x180)
___asm(Vector_0x180:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0x190)
___asm(Vector_0x190:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0x1A0)
___asm(Vector_0x1A0:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0x1B0)
___asm(Vector_0x1B0:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0x1C0)
___asm(Vector_0x1C0:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0x1D0)
___asm(Vector_0x1D0:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0x1E0)
___asm(Vector_0x1E0:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

BRS_ALIGN16()
___asm(.globl Vector_0x1F0)
___asm(Vector_0x1F0:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler))

#define BRS_STOP_SEC_EXCVECT_CODE
#define BRS_MEMMAP_INLINE_ASSEMBLER_USED
#include "Brs_MemMap.h"
# endif /*BRS_COMP_GHS||BRS_COMP_DIABDATA*/

#endif /*BRS_FIRST_EXECUTION_INSTANCE*/

#if defined (BRS_ENABLE_FBL_SUPPORT) && defined (BRS_FBL_EXCEPTIONTABLE_IN_RAM)
/********************************************************************************************
 *                                                                                          *
 *                 Core Exception Handler in RAM                                            *
 *                                                                                          *
 ********************************************************************************************/
#define BRS_START_SEC_RAM_CODE
#include "Brs_MemMap.h"
BRS_ISR_KEYWORD void BrsHw_CoreExceptionHandler_Ram(void)
{
#if defined (BRSHW_BRSHW_COREEXCEPTIONHANDLER_RAM_CALLOUT)
  BrsTestsuite_BrsHw_CoreExceptionHandler_Ram();
#endif

  volatile uint8 Brs_Continue;
  Brs_Continue = 0;

  while (Brs_Continue == 0)
  {
    /* Set Brs_Continue to 1 to continue here.
     * If the debugger is not able to show the stack properly, this mechanism can be used to find the
     * source of the exception. */
  }
}
#define BRS_STOP_SEC_RAM_CODE
#include "Brs_MemMap.h"

# if defined (BRS_COMP_GHS) 
/********************************************************************************************
 *                                                                                          *
 *                 Core Exception Table in RAM                                              *
 *                                                                                          *
 ********************************************************************************************/
#  if defined (BRS_FIRST_EXECUTION_INSTANCE)
 ___asm(.extern brsStartupEntry)
#  else
  #error "If this executable is not first execution instance, reset vector must be manually set in RAM exception table to entry address!"
/* Replace brsStartupEntry in the RAM exception table with, e.g., 0x20, as this linker symbol will not exist in this case. Then, comment out the error message above.
   Adapt the entry point in the Makefile and the STARTUP_LABELs in DaVinci as well. */
#  endif

#define BRS_START_SEC_EXCVECTRAM_CODE
#define BRS_MEMMAP_INLINE_ASSEMBLER_USED
#include "Brs_MemMap.h"
___asm(;/* interrupt vectors */)
___asm(;/* beginning of the core interrupt vector table in RAM */)

___asm(.globl Vector_RAM_0x00)
___asm(Vector_RAM_0x00:)
    BRS_ISR_BASE_ENTRY(brsStartupEntry)
    BRS_ISR_ALIGNMENT

BRS_ALIGN16()
___asm(.globl Vector_RAM_RAM_0x10)
___asm(Vector_RAM_0x10:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0x20)
___asm(Vector_RAM_0x20:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0x30)
___asm(Vector_RAM_0x30:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0x40)
___asm(Vector_RAM_0x40:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0x50)
___asm(Vector_RAM_0x50:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0x60)
___asm(Vector_RAM_0x60:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0x70)
___asm(Vector_RAM_0x70:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0x80)
___asm(Vector_RAM_0x80:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0x90)
___asm(Vector_RAM_0x90:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0xA0)
___asm(Vector_RAM_0xA0:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0xB0)
___asm(Vector_RAM_0xB0:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0xC0)
___asm(Vector_RAM_0xC0:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0xD0)
___asm(Vector_RAM_0xD0:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0xE0)
___asm(Vector_RAM_0xE0:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0xF0)
___asm(Vector_RAM_0xF0:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0x100)
___asm(Vector_RAM_0x100:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0x110)
___asm(Vector_RAM_0x110:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0x120)
___asm(Vector_RAM_0x120:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0x130)
___asm(Vector_RAM_0x130:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0x140)
___asm(Vector_RAM_0x140:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0x150)
___asm(Vector_RAM_0x150:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0x160)
___asm(Vector_RAM_0x160:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0x170)
___asm(Vector_RAM_0x170:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0x180)
___asm(Vector_RAM_0x180:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0x190)
___asm(Vector_RAM_0x190:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0x1A0)
___asm(Vector_RAM_0x1A0:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0x1B0)
___asm(Vector_RAM_0x1B0:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0x1C0)
___asm(Vector_RAM_0x1C0:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0x1D0)
___asm(Vector_RAM_0x1D0:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0x1E0)
___asm(Vector_RAM_0x1E0:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

BRS_ALIGN16()
___asm(.globl Vector_RAM_0x1F0)
___asm(Vector_RAM_0x1F0:)
    BRS_BRANCH(BRS_ISR_DEFINE(BrsHw_CoreExceptionHandler_Ram))

#define BRS_STOP_SEC_EXCVECTRAM_CODE
#define BRS_MEMMAP_INLINE_ASSEMBLER_USED
#include "Brs_MemMap.h"
# endif /*BRS_COMP_GHS||BRS_COMP_DIABDATA*/

#endif /*BRS_ENABLE_FBL_SUPPORT&&BRS_FBL_EXCEPTIONTABLE_IN_RAM*/
