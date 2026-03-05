/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2022 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/** \file  File:  BrsHwStartup.c
 *      Project:  Vector Basic Runtime System
 *       Module:  BrsHw for platform Renesas RH850
 *     Template:  This file is reviewed according to Brs_Template@Implementation[1.03.05]
 *
 *  \brief Description:  This file contains the assembler part of the BRS StartUpCode.
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

#define BRSHWSTARTUP_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "BrsHw.h"

#if defined (BRS_FIRST_EXECUTION_INSTANCE)
/* This code is only needed for the first instance/executable in the system */

#include "vLinkGen_Lcfg.h"

/**********************************************************************************************************************
 *  CONFIGURATION CHECK
 *********************************************************************************************************************/
#if defined (BRS_COMP_GHS) 

#else
  #error "Unknown compiler specified!"
#endif

#if (VLINKGEN_CFG_MAJOR_VERSION != 2u)
  #error "This StartUpCode is dependent to the vLinkGen version! vLinkGen major version does not fit!"
#else
# if (VLINKGEN_CFG_MINOR_VERSION < 5u)
  #error "This StartUpCode is dependent to the vLinkGen version! Your vLinkGen minor version is too old!"
# endif
#endif

/* =========================================================================== */
/*                                                                             */
/* Description: Definition of external functions                               */
/*                                                                             */
/* =========================================================================== */

/* =========================================================================== */
/*                                                                             */
/* Description: Entry point for all cores                                      */
/*                                                                             */
/* =========================================================================== */
BRS_SECTION_CODE(brsStartup)
 BRS_GLOBAL(brsStartupEntry)
BRS_LABEL(brsStartupEntry)
 BRS_GLOBAL(_brsStartupEntry)
BRS_LABEL(_brsStartupEntry)

#if defined (BRS_DERIVATIVE_GROUP_E1L)
  /* Keep PCU core in an endless loop. */
  BRS_READ_COREID(r11)
  BRS_LABEL(PCUWaitLabel)
  BRS_BRANCH_NOT_EQUAL(BRSHW_INIT_CORE_ID, r11, PCUWaitLabel)
#endif

#if (BRS_CPU_CORE_AMOUNT>1)
  /* This is a multicore derivative != U2A */
  /* If the current core is the INIT core, branch to the the next step */
  BRS_READ_COREID(r11)
  BRS_BRANCH_EQUAL(BRSHW_INIT_CORE_ID,r11,brsPreAsmStartupHook)

  /* Loop all other cores */
# if defined (BRS_CPU_CORE_G4MH)
  __as1(mov BRSHW_U2A_CORE_START_PATTERN, r6)
  __as1(mov _BrsHw_U2A_CoreStart, r7)
# else
  __as1(mov BRSHW_CORE_START_PATTERN, r6)
  __as1(mov BRSHW_CORE_SYNC_REG, r7)
# endif
  BRS_LABEL(coreWaitLoop)
  __as1(ld.w  0[r7],r8)/* Load sync register */
  __as1(cmp   r6, r8) /* If sync pattern is not present, loop again */
  ___asm(bne  coreWaitLoop)
#endif /*BRS_CPU_CORE_AMOUNT>1*/

 BRS_BRANCH(brsPreAsmStartupHook)

/* =========================================================================== */
/*                                                                             */
/* Description: Optional hook for platform specific tasks                      */
/*                                                                             */
/* =========================================================================== */
 BRS_GLOBAL(brsPreAsmStartupHook)
BRS_LABEL(brsPreAsmStartupHook)
/* Nothing to do here */

 BRS_BRANCH(coreRegisterInit)

/* =========================================================================== */
/*                                                                             */
/* Description: Initialize core ID independent core registers                  */
/*                                                                             */
/* =========================================================================== */
 BRS_GLOBAL(coreRegisterInit)
BRS_LABEL(coreRegisterInit)
/* For RH850, we don't have to distinguish between Core Types (yet) */
/* General Purpose Registers */
__as1(mov r0, r1)
__as1(mov r0, r2)
__as1(mov r0, r3)
__as1(mov r0, r4)
__as1(mov r0, r5)
__as1(mov r0, r6)
__as1(mov r0, r7)
__as1(mov r0, r8)
__as1(mov r0, r9)
__as1(mov r0, r10)
__as1(mov r0, r11)
__as1(mov r0, r12)
__as1(mov r0, r13)
__as1(mov r0, r14)
__as1(mov r0, r15)
__as1(mov r0, r16)
__as1(mov r0, r17)
__as1(mov r0, r18)
__as1(mov r0, r19)
__as1(mov r0, r20)
__as1(mov r0, r21)
__as1(mov r0, r22)
__as1(mov r0, r23)
__as1(mov r0, r24)
__as1(mov r0, r25)
__as1(mov r0, r26)
__as1(mov r0, r27)
__as1(mov r0, r28)
__as1(mov r0, r29)
__as1(mov r0, r30)
__as1(mov r0, r31)

/* Basic System Registers */
__as2(ldsr r0, 0, 0)  /* EIPC */
__as2(ldsr r0, 2, 0)  /* FEPC */
__as2(ldsr r0, 16, 0) /* CTPC */
__as2(ldsr r0, 20, 0) /* CTBP */
__as2(ldsr r0, 28, 0) /* EIWR */
__as2(ldsr r0, 29, 0) /* FEWR */
__as2(ldsr r0, 3, 1)  /* EBASE */
__as2(ldsr r0, 4, 1)  /* INTBP */
__as2(ldsr r0, 11, 1) /* SCCFG */
__as2(ldsr r0, 12, 1) /* SCBP */
__as2(ldsr r0, 6, 2)  /* MEA */
__as2(ldsr r0, 7, 2)  /* ASID */
__as2(ldsr r0, 8, 2)  /* MEI */

#if defined (BRS_FPU_USED)
  /* FPU Function Registers */
  __as1(stsr PSW, r1) /* Enable access to FPU co processor */
  __as1(mov  0x10000, r2)
  __as1(or   r2, r1)
  __as1(ldsr r1, PSW)
  __as2(ldsr r6, 6, 0)  /* FPSR - Initial value after reset FPSR.FS=1 */
  __as2(ldsr r0, 7, 0)  /* FPEPC */
  __as2(ldsr r0, 8, 0)  /* FPST */
  __as2(ldsr r0, 9, 0)  /* FPCC */
  __as2(ldsr r0, 10, 0) /* FPCFG */
  __as2(ldsr r0, 11, 0) /* FPEC */
#endif

/* MPU Function registers */
__as2(ldsr r0, 8, 5)    /* MCA */
__as2(ldsr r0, 9, 5)    /* MCS */
__as2(ldsr r0, 11, 5)   /* MCR */
__as2(ldsr r0, 0, 6)    /* MPLA0 */
__as2(ldsr r0, 1, 6)    /* MPUA0 */
__as2(ldsr r0, 2, 6)    /* MPAT0 */
__as2(ldsr r0, 4, 6)    /* MPLA1 */
__as2(ldsr r0, 5, 6)    /* MPUA1 */
__as2(ldsr r0, 6, 6)    /* MPAT1 */
__as2(ldsr r0, 8, 6)    /* MPLA2 */
__as2(ldsr r0, 9, 6)    /* MPUA2 */
__as2(ldsr r0, 10, 6)   /* MPAT2 */
__as2(ldsr r0, 12, 6)   /* MPLA3 */
__as2(ldsr r0, 13, 6)   /* MPUA3 */
__as2(ldsr r0, 14, 6)   /* MPAT3 */
__as2(ldsr r0, 16, 6)   /* MPLA4 */
__as2(ldsr r0, 17, 6)   /* MPUA4 */
__as2(ldsr r0, 18, 6)   /* MPAT4 */
__as2(ldsr r0, 20, 6)   /* MPLA5 */
__as2(ldsr r0, 21, 6)   /* MPUA5 */
__as2(ldsr r0, 22, 6)   /* MPAT5 */
__as2(ldsr r0, 24, 6)   /* MPLA6 */
__as2(ldsr r0, 25, 6)   /* MPUA6 */
__as2(ldsr r0, 26, 6)   /* MPAT6 */
__as2(ldsr r0, 28, 6)   /* MPLA7 */
__as2(ldsr r0, 29, 6)   /* MPUA7 */
__as2(ldsr r0, 30, 6)   /* MPAT7 */
__as2(ldsr r0, 0, 7)    /* MPLA8 */
__as2(ldsr r0, 1, 7)    /* MPUA8 */
__as2(ldsr r0, 2, 7)    /* MPAT8 */
__as2(ldsr r0, 4, 7)    /* MPLA9 */
__as2(ldsr r0, 5, 7)    /* MPUA9 */
__as2(ldsr r0, 6, 7)    /* MPAT9 */
__as2(ldsr r0, 8, 7)    /* MPLA10 */
__as2(ldsr r0, 9, 7)    /* MPUA10 */
__as2(ldsr r0, 10, 7)   /* MPAT10 */
__as2(ldsr r0, 12, 7)   /* MPLA11 */
__as2(ldsr r0, 13, 7)   /* MPUA11 */
__as2(ldsr r0, 14, 7)   /* MPAT11 */

/* Initialization of the global pointer */
__as1(mov   __gp, gp)

/* Initialization of the text pointer */
__as1(mov   __tp, tp)

/* Core Type dependent part */
#if defined (BRS_CPU_CORE_G3M) || defined (BRS_CPU_CORE_G3MH)
  /* Hardware Thread Function Registers */
  __as2(ldsr r0, 10, 1) /* TCSEL */

  /* Virtualization Support Function Registers */
  __as2(ldsr r0, 13, 1) /* HVCCFG */
  __as2(ldsr r0, 14, 1) /* HVCBP */
  __as2(ldsr r0, 15, 1) /* VCSEL */

  /* Cache Operation Function Registers */
  __as2(ldsr r0, 16, 4) /* ICTAGL */
  __as2(ldsr r0, 17, 4) /* ICTAGH */
  __as2(ldsr r0, 18, 4) /* ICDATL */
  __as2(ldsr r0, 19, 4) /* ICDATH */
  __as2(ldsr r0, 28, 4) /* ICERR */
#endif /*BRS_CPU_CORE_G3M||BRS_CPU_CORE_G3MH*/

 BRS_BRANCH(coreRegisterInit2)

/* =========================================================================== */
/*                                                                             */
/* Description: Initialize all core ID dependent core registers                */
/*                                                                             */
/* =========================================================================== */
 BRS_GLOBAL(coreRegisterInit2)
BRS_LABEL(coreRegisterInit2)

/* Program the brs default vector table base addresses to handle exceptions during startup */
__as1(mov _Brs_ExcVect_START ,r6) /* r6 = address of _Brs_ExcVect_START */
__as2(ldsr  r6, 3, 1)             /* Move _Brs_ExcVect_START to EIBP register */

___asm(di)                  /* Disable interrupts */
__as1(stsr  PSW, r6)
__as2(ori   0x8000, r6, r6) /* Set PSW.EBV bit to 1. */
__as1(ldsr r6, PSW)

 BRS_BRANCH(brsStartupZeroInitLoop)

/* =========================================================================== */
/*                                                                             */
/* Description: Initialize memory blocks and areas with zero                   */
/*                                                                             */
/* =========================================================================== */
 BRS_GLOBAL(brsStartupZeroInitLoop)
BRS_LABEL(brsStartupZeroInitLoop)

/* read ID of actual running Core into Register 16 */
BRS_READ_COREID(r16)

/* Initialize memory sections with zeros */
#if defined (VLINKGEN_CFG_NUM_ZERO_INIT_EARLY_BLOCKS)
# if (VLINKGEN_CFG_NUM_ZERO_INIT_EARLY_BLOCKS>1uL)
  __as1(mov    _vLinkGen_ZeroInit_Early_Blocks, r11)
BRS_LABEL(_startup_block_zero_init_start)
  __as1(mov    r11, r12)
  __as2(addi   16, r11, r11)
  __as1(ld.w   0[r12], r13)               /* get start address */
  __as1(ld.w   4[r12], r14)               /* get end address */
  __as1(ld.w   8[r12], r15)               /* get core ID */
  __as1(cmp    r13, r14)                  /* check end of table */
  ___asm(be     _startup_block_zero_init_end)

  __as1(cmp    r15, r16)                  /* compare core ID */
  ___asm(bne    _startup_block_zero_init_start)
BRS_LABEL(_startup_block_zero_init_loop_start)
  __as1(st.w   r0, 0[r13])
  __as2(addi   4, r13, r13)
  __as1(cmp    r13, r14)                  /* compare to end address */
  ___asm(bh     _startup_block_zero_init_loop_start)
  ___asm(jr     _startup_block_zero_init_start)
BRS_LABEL(_startup_block_zero_init_end)
# endif /*VLINKGEN_CFG_NUM_ZERO_INIT_EARLY_BLOCKS>1uL*/

#else
  #error "Mandatory define VLINKGEN_CFG_NUM_ZERO_INIT_EARLY_BLOCKS missing within vLinkGen configuration!"
#endif /*VLINKGEN_CFG_NUM_ZERO_INIT_EARLY_BLOCKS*/

#if defined (VLINKGEN_CFG_NUM_ZERO_INIT_EARLY_GROUPS)
# if (VLINKGEN_CFG_NUM_ZERO_INIT_EARLY_GROUPS>1uL)
  __as1(mov    _vLinkGen_ZeroInit_Early_Groups, r11)
BRS_LABEL(_startup_area_zero_init_start)
  __as1(mov    r11, r12)
  __as2(addi   16, r11, r11)
  __as1(ld.w   0[r12], r13)               /* get start address */
  __as1(ld.w   4[r12], r14)               /* get end address */
  __as1(ld.w   8[r12], r15)               /* get core ID */
  __as1(cmp    r13, r14)                  /* check end of table */
  ___asm(be     _startup_area_zero_init_end)

  __as1(cmp    r15, r16)                  /* compare core ID */
  ___asm(bne    _startup_area_zero_init_start)
BRS_LABEL(_startup_area_zero_init_loop_start)
  __as1(st.w   r0, 0[r13])
  __as2(addi   4, r13, r13)
  __as1(cmp    r13, r14)                  /* compare to end address */
  ___asm(bh     _startup_area_zero_init_loop_start)
  ___asm(jr     _startup_area_zero_init_start)
BRS_LABEL(_startup_area_zero_init_end)
# endif /*VLINKGEN_CFG_NUM_ZERO_INIT_EARLY_GROUPS>1uL*/

#else
  #error "Mandatory define VLINKGEN_CFG_NUM_ZERO_INIT_EARLY_GROUPS missing within vLinkGen configuration!"
#endif /*VLINKGEN_CFG_NUM_ZERO_INIT_EARLY_GROUPS*/

/* Jump to routine to search for valid startup stack pointer of actual running core */
 BRS_BRANCH(brsStartupStackSearch)

/* =========================================================================== */
/*                                                                             */
/* Description: Search for valid startup stack pointer of actual running core  */
/*              (vBRS is genearing the core specific configuration into the    */
/*               struct BrsMain_CoreConfig in vBrs_Lcfg.c)                     */
/*                                                                             */
/* =========================================================================== */
 BRS_GLOBAL(brsStartupStackSearch)
BRS_LABEL(brsStartupStackSearch)

/* Loop over all entries of BrsMain_CoreConfig and search for the stackpointer, valid for the actual running core.*/
/* r16 holds the coreID of the actual running Core */
/* We need to get the correct entry of BrsMain_CoreConfig for the actual coreID */
  __as1(mov  _BrsMain_CoreConfig_Size, r11)
  BRS_LABEL(core_config_size_init)
  __as1(ld.w   0[r11], r12)  /* r12 = BrsMain_CoreConfig_Size */

  __as1(mov  _BrsMain_CoreConfig, r11)
 BRS_GLOBAL(core_config_init_start)
  BRS_LABEL(core_config_init_start)

  __as1(MOV  0, r10)  /* Use r10 as count register in the loop. Initialize with zero. */
 BRS_GLOBAL(brs_coreconfig_loop)
  BRS_LABEL(brs_coreconfig_loop)

  __as1(ld.w  4[r11], r13)  /* r13 = BrsMain_CoreConfig->PhysicalCoreId */
  /* Check if core id (r16) matches to physical core id of BrsMain_CoreConfig entry (r13). */
  BRS_BRANCH_EQUAL(r13, r16, stackPointerInit)

  /* Increase count register by one. */
  __as2(addi   1, r10, r10)

  /* Set r11 to point to next entry of BrsMain_CoreConfig. */
  __as2(addi   28, r11, r11)

  /* Check if end of BrsMain_CoreConfig has been reached. */
  BRS_BRANCH_NOT_EQUAL(r10, r12, brs_coreconfig_loop)

  /* Branch to BrsMainExceptionStartup if there are no more entries in the array. */
  BRS_BRANCH(_BrsMainExceptionStartup)

/* =========================================================================== */
/*                                                                             */
/* Description: Initialize all core registers of actual running core with      */
/*              specific init values                                           */
/*                                                                             */
/* =========================================================================== */
 BRS_GLOBAL(stackPointerInit)
BRS_LABEL(stackPointerInit)

/* Initialization of the stack pointer */
  __as1(ld.w  8[r11], r14)  /* r14 = BrsMain_CoreConfig->StartupStackEndLabel */
  __as1(mov r14, sp)  /* sp = BrsMain_CoreConfig->StartupStackEndLabel */

 BRS_BRANCH(coreRegisterInit3)

/* =========================================================================== */
/*                                                                             */
/* Description: Initialize additional core registers                           */
/*                                                                             */
/* =========================================================================== */
 BRS_GLOBAL(coreRegisterInit3)
BRS_LABEL(coreRegisterInit3)

/* =========================================================================== */
/*                                                                             */
/* Description: Jump to Brs_PreMainStartup() (BrsMainStartup.c)                */
/*                                                                             */
/* =========================================================================== */
 BRS_EXTERN_BRANCH(_Brs_PreMainStartup)

/* =========================================================================== */
/*                                                                             */
/* Description: Jump to BrsMainExceptionStartup() in case of an unexpected     */
/*              return from PreMain/main                                       */
/*                                                                             */
/* =========================================================================== */
 BRS_EXTERN_BRANCH(_BrsMainExceptionStartup)

/* =========================================================================== */
/* Minimal reset vector at entry address (e. g. 0x0)                           */
/* =========================================================================== */
__as1(.section ".bcode0", "ax")
BRS_ALIGN16()
BRS_BRANCH(brsStartupEntry)
___asm(nop)
___asm(nop)
___asm(nop)
BRS_ALIGN16()
 BRS_BRANCH(_BrsMainExceptionStartup)
___asm(nop)
___asm(nop)
___asm(nop)

#if (BRS_CPU_CORE_AMOUNT>1)
/* =========================================================================== */
/* Minimal reset vector at entry address (e. g. 0x0)                           */
/* =========================================================================== */
__as1(.section ".bcode1", "ax")
BRS_ALIGN16()
BRS_BRANCH(brsStartupEntry)
___asm(nop)
___asm(nop)
___asm(nop)
BRS_ALIGN16()
 BRS_BRANCH(_BrsMainExceptionStartup)
___asm(nop)
___asm(nop)
___asm(nop)
#endif /*BRS_CPU_CORE_AMOUNT>1*/

#if (BRS_CPU_CORE_AMOUNT>2)
/* =========================================================================== */
/* Minimal reset vector at entry address (e. g. 0x0)                           */
/* =========================================================================== */
__as1(.section ".bcode2", "ax")
BRS_ALIGN16()
BRS_BRANCH(brsStartupEntry)
___asm(nop)
___asm(nop)
___asm(nop)
BRS_ALIGN16()
 BRS_BRANCH(_BrsMainExceptionStartup)
___asm(nop)
___asm(nop)
___asm(nop)
#endif /*BRS_CPU_CORE_AMOUNT>2*/

#if (BRS_CPU_CORE_AMOUNT>3)
/* =========================================================================== */
/* Minimal reset vector at entry address (e. g. 0x0)                           */
/* =========================================================================== */
__as1(.section ".bcode3", "ax")
BRS_ALIGN16()
BRS_BRANCH(brsStartupEntry)
___asm(nop)
___asm(nop)
___asm(nop)
BRS_ALIGN16()
 BRS_BRANCH(_BrsMainExceptionStartup)
___asm(nop)
___asm(nop)
___asm(nop)
#endif /*BRS_CPU_CORE_AMOUNT>3*/

#if (BRS_CPU_CORE_AMOUNT>4)
/* =========================================================================== */
/* Minimal reset vector at entry address (e. g. 0x0)                           */
/* =========================================================================== */
__as1(.section ".bcode4", "ax")
BRS_ALIGN16()
BRS_BRANCH(brsStartupEntry)
___asm(nop)
___asm(nop)
___asm(nop)
BRS_ALIGN16()
 BRS_BRANCH(_BrsMainExceptionStartup)
___asm(nop)
___asm(nop)
___asm(nop)
#endif /*BRS_CPU_CORE_AMOUNT>4*/

#if (BRS_CPU_CORE_AMOUNT>5)
/* =========================================================================== */
/* Minimal reset vector at entry address (e. g. 0x0)                           */
/* =========================================================================== */
__as1(.section ".bcode5", "ax")
BRS_ALIGN16()
BRS_BRANCH(brsStartupEntry)
___asm(nop)
___asm(nop)
___asm(nop)
BRS_ALIGN16()
 BRS_BRANCH(_BrsMainExceptionStartup)
___asm(nop)
___asm(nop)
___asm(nop)
#endif /*BRS_CPU_CORE_AMOUNT>5*/

#endif /*BRS_FIRST_EXECUTION_INSTANCE*/
