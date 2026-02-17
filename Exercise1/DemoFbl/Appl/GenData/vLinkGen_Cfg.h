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
 *            Module: vLinkGen
 *           Program: FBL Vector SLP3 (FBL_Vector_SLP3)
 *          Customer: Vector Japan Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F7016493AFP-C
 *    License Scope : The usage is restricted to CBD1900263_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: vLinkGen_Cfg.h
 *   Generation Time: 2026-02-16 19:31:47
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
 *  EXAMPLE CODE ONLY
 *  -------------------------------------------------------------------------------------------------------------------
 *  This Example Code is only intended for illustrating an example of a possible BSW integration and BSW configuration.
 *  The Example Code has not passed any quality control measures and may be incomplete. The Example Code is neither
 *  intended nor qualified for use in series production. The Example Code as well as any of its modifications and/or
 *  implementations must be tested with diligent care and must comply with all quality requirements which are necessary
 *  according to the state of the art before their use.
 *********************************************************************************************************************/

#ifndef VLINKGEN_CFG_H
# define VLINKGEN_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

# include "vBrsCfg.h"

/**********************************************************************************************************************
 *  VARIANT CHECK
 *********************************************************************************************************************/

/* Check that one of the configured variants is defined in the current build process. */
#if (  !defined (vLinkGenVariant_DemoFbl) \
    && !defined (vLinkGenVariant_DemoAppl) \
    && !defined (vLinkGenVariant_DemoUpd) \
    && !defined (vLinkGenVariant_FlashDrv) \
    && !defined (DemoBm) \
    && !defined (vLinkGenVariant_FirstExecInst) )
# error "If variants are configured, one of them must always be defined in the build environment (e.g. via compiler option)."
#endif

/**********************************************************************************************************************
 *  USER CONFIG FILE
 *********************************************************************************************************************/

/* User Config File Start */

/* User Config File End */


/**********************************************************************************************************************
 *  USER CONFIG HEADER FILE
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/*! Configuration major version identification. */
# define VLINKGEN_CFG_MAJOR_VERSION                   2u
/*! Configuration minor version identification. */
# define VLINKGEN_CFG_MINOR_VERSION                   19u

/* 64bit support is disabled (#define VLINKGEN_CFG_64BIT_MODE_ENABLED) */

/* Number of entries for different initialization tables */
# define VLINKGEN_CFG_NUM_ZERO_INIT_EARLY_BLOCKS      3u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_ONE_BLOCKS        1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_HARD_RESET_BLOCKS 4u 

#ifdef DemoBm
/* Number of entries for different initialization tables of variant: DemoBm */
# define VLINKGEN_CFG_NUM_ZERO_INIT_EARLY_GROUPS      1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_ZERO_GROUPS       1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_ONE_GROUPS        4u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_TWO_GROUPS        1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_THREE_GROUPS      1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_HARD_RESET_GROUPS 3u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_POWER_ON_GROUPS   1u 
# define VLINKGEN_CFG_NUM_INIT_ZERO_GROUPS            1u 
# define VLINKGEN_CFG_NUM_INIT_ONE_GROUPS             7u 
# define VLINKGEN_CFG_NUM_INIT_TWO_GROUPS             1u 
# define VLINKGEN_CFG_NUM_INIT_THREE_GROUPS           1u 
# define VLINKGEN_CFG_NUM_INIT_HARD_RESET_GROUPS      1u 
# define VLINKGEN_CFG_NUM_INIT_POWER_ON_GROUPS        1u 
#endif /* DemoBm */

#ifdef vLinkGenVariant_DemoAppl
/* Number of entries for different initialization tables of variant: vLinkGenVariant_DemoAppl */
# define VLINKGEN_CFG_NUM_ZERO_INIT_EARLY_GROUPS      1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_ZERO_GROUPS       1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_ONE_GROUPS        6u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_TWO_GROUPS        1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_THREE_GROUPS      1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_HARD_RESET_GROUPS 1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_POWER_ON_GROUPS   3u 
# define VLINKGEN_CFG_NUM_INIT_ZERO_GROUPS            1u 
# define VLINKGEN_CFG_NUM_INIT_ONE_GROUPS             9u 
# define VLINKGEN_CFG_NUM_INIT_TWO_GROUPS             1u 
# define VLINKGEN_CFG_NUM_INIT_THREE_GROUPS           1u 
# define VLINKGEN_CFG_NUM_INIT_HARD_RESET_GROUPS      1u 
# define VLINKGEN_CFG_NUM_INIT_POWER_ON_GROUPS        3u 
#endif /* vLinkGenVariant_DemoAppl */

#ifdef vLinkGenVariant_DemoFbl
/* Number of entries for different initialization tables of variant: vLinkGenVariant_DemoFbl */
# define VLINKGEN_CFG_NUM_ZERO_INIT_EARLY_GROUPS      1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_ZERO_GROUPS       1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_ONE_GROUPS        6u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_TWO_GROUPS        1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_THREE_GROUPS      1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_HARD_RESET_GROUPS 2u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_POWER_ON_GROUPS   3u 
# define VLINKGEN_CFG_NUM_INIT_ZERO_GROUPS            1u 
# define VLINKGEN_CFG_NUM_INIT_ONE_GROUPS             9u 
# define VLINKGEN_CFG_NUM_INIT_TWO_GROUPS             1u 
# define VLINKGEN_CFG_NUM_INIT_THREE_GROUPS           1u 
# define VLINKGEN_CFG_NUM_INIT_HARD_RESET_GROUPS      1u 
# define VLINKGEN_CFG_NUM_INIT_POWER_ON_GROUPS        3u 
#endif /* vLinkGenVariant_DemoFbl */

#ifdef vLinkGenVariant_DemoUpd
/* Number of entries for different initialization tables of variant: vLinkGenVariant_DemoUpd */
# define VLINKGEN_CFG_NUM_ZERO_INIT_EARLY_GROUPS      1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_ZERO_GROUPS       1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_ONE_GROUPS        6u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_TWO_GROUPS        1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_THREE_GROUPS      1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_HARD_RESET_GROUPS 3u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_POWER_ON_GROUPS   3u 
# define VLINKGEN_CFG_NUM_INIT_ZERO_GROUPS            1u 
# define VLINKGEN_CFG_NUM_INIT_ONE_GROUPS             9u 
# define VLINKGEN_CFG_NUM_INIT_TWO_GROUPS             1u 
# define VLINKGEN_CFG_NUM_INIT_THREE_GROUPS           1u 
# define VLINKGEN_CFG_NUM_INIT_HARD_RESET_GROUPS      1u 
# define VLINKGEN_CFG_NUM_INIT_POWER_ON_GROUPS        3u 
#endif /* vLinkGenVariant_DemoUpd */

#ifdef vLinkGenVariant_FirstExecInst
/* Number of entries for different initialization tables of variant: vLinkGenVariant_FirstExecInst */
# define VLINKGEN_CFG_NUM_ZERO_INIT_EARLY_GROUPS      1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_ZERO_GROUPS       1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_ONE_GROUPS        1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_TWO_GROUPS        1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_THREE_GROUPS      1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_HARD_RESET_GROUPS 1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_POWER_ON_GROUPS   1u 
# define VLINKGEN_CFG_NUM_INIT_ZERO_GROUPS            1u 
# define VLINKGEN_CFG_NUM_INIT_ONE_GROUPS             1u 
# define VLINKGEN_CFG_NUM_INIT_TWO_GROUPS             1u 
# define VLINKGEN_CFG_NUM_INIT_THREE_GROUPS           1u 
# define VLINKGEN_CFG_NUM_INIT_HARD_RESET_GROUPS      1u 
# define VLINKGEN_CFG_NUM_INIT_POWER_ON_GROUPS        1u 
#endif /* vLinkGenVariant_FirstExecInst */

#ifdef vLinkGenVariant_FlashDrv
/* Number of entries for different initialization tables of variant: vLinkGenVariant_FlashDrv */
# define VLINKGEN_CFG_NUM_ZERO_INIT_EARLY_GROUPS      1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_ZERO_GROUPS       1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_ONE_GROUPS        1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_TWO_GROUPS        1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_THREE_GROUPS      1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_HARD_RESET_GROUPS 1u 
# define VLINKGEN_CFG_NUM_ZERO_INIT_POWER_ON_GROUPS   1u 
# define VLINKGEN_CFG_NUM_INIT_ZERO_GROUPS            1u 
# define VLINKGEN_CFG_NUM_INIT_ONE_GROUPS             1u 
# define VLINKGEN_CFG_NUM_INIT_TWO_GROUPS             1u 
# define VLINKGEN_CFG_NUM_INIT_THREE_GROUPS           1u 
# define VLINKGEN_CFG_NUM_INIT_HARD_RESET_GROUPS      1u 
# define VLINKGEN_CFG_NUM_INIT_POWER_ON_GROUPS        1u 
#endif /* vLinkGenVariant_FlashDrv */

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

#endif /* VLINKGEN_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: vLinkGen_Cfg.h
 *********************************************************************************************************************/
