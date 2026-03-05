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
/** \file  File:  BrsMain_Cfg.h
 *      Project:  Vector Basic Runtime System
 *       Module:  BrsMain
 *
 *  \brief Description:  Vector Basic Runtime System config header for BrsMain user optimizations.
 *
 *  \attention Please note:
 *    The demo and example programs only show special aspects of the software. With regard to the fact
 *    that these programs are meant for demonstration purposes only, Vector Informatik liability shall be
 *    expressly excluded in cases of ordinary negligence, to the extent admissible by law or statute.
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to BrsMain.h.
 *********************************************************************************************************************/

#ifndef _BRSMAIN_CFG_H_
#define _BRSMAIN_CFG_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  MODULE VERSION
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  CONFIGURATION CHECK
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL TYPE DEFINITIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#if !defined (BRSMAIN_MEMINIT_FUNC_PREFIX)
# if defined (BRS_COMP_LLVMHIGHTEC)
  /* LlvmHighTec compiler is automatically inlining the memory init helper functions (Brs_MemoryZeroInit(), Brs_MemoryInit()).
   *  This is causing the section .brsApplicationEntry to increase a lot for this specific compiler.
   *  To prevent this, we add the attribute noinline to the function definitions
   */
  #define BRSMAIN_MEMINIT_FUNC_PREFIX __attribute__((noinline))

# else
  /* If no specific function prefix is defined, make it an empty definition */
  #define BRSMAIN_MEMINIT_FUNC_PREFIX
# endif
#endif

/**********************************************************************************************************************
 *  GLOBAL VARIABLES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

#endif /*_BRSMAIN_CFG_H_*/
