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
 *              File: vLinkGen_Lcfg.c
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

#define VLINKGEN_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

#include "vLinkGen_Lcfg.h"

#pragma ghs nowarning 32

/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/* Memory region blocks to be initialized with zeros in stage Early */
const vLinkGen_MemArea vLinkGen_ZeroInit_Early_Blocks[VLINKGEN_CFG_NUM_ZERO_INIT_EARLY_BLOCKS] =
{
  { /*  Variables_Shared  */ 
     /*  .Start  */ (uint32)0xFEBFBBF0u, 
     /*  .End  */ (uint32)0xFEBFBC00u, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  StartupStack_Shared  */ 
     /*  .Start  */ (uint32)0xFEBFBC00u, 
     /*  .End  */ (uint32)0xFEBFC000u, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Memory region blocks to be initialized with zeros in stage One */
const vLinkGen_MemArea vLinkGen_ZeroInit_One_Blocks[VLINKGEN_CFG_NUM_ZERO_INIT_ONE_BLOCKS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Memory region blocks to be initialized with zeros in stage HardReset */
const vLinkGen_MemArea vLinkGen_ZeroInit_HardReset_Blocks[VLINKGEN_CFG_NUM_ZERO_INIT_HARD_RESET_BLOCKS] =
{
  { /*  LOCAL_RAM_CPU0  */ 
     /*  .Start  */ (uint32)0xFEBC0000u, 
     /*  .End  */ (uint32)0xFEBFBAF0u, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  FlashDrvArea  */ 
     /*  .Start  */ (uint32)0xFEBFC000u, 
     /*  .End  */ (uint32)0xFEBFF000u, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  GLOBAL_RAM_A  */ 
     /*  .Start  */ (uint32)0xFEEE8000u, 
     /*  .End  */ (uint32)0xFEF00000u, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

#ifdef vLinkGenVariant_DemoFbl
/* Section groups to be initialized with zeros in stage Early of variant: vLinkGenVariant_DemoFbl */
const vLinkGen_MemArea vLinkGen_ZeroInit_Early_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_EARLY_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage Zero of variant: vLinkGenVariant_DemoFbl */
const vLinkGen_MemArea vLinkGen_ZeroInit_Zero_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_ZERO_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage One of variant: vLinkGenVariant_DemoFbl */
const vLinkGen_MemArea vLinkGen_ZeroInit_One_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_ONE_GROUPS] =
{
  { /*  MSR_PBCFG_VAR_CLEARED  */ 
     /*  .Start  */ (uint32)_MSR_PBCFG_VAR_CLEARED_START, 
     /*  .End  */ (uint32)_MSR_PBCFG_VAR_CLEARED_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  MSR_VAR_CLEARED  */ 
     /*  .Start  */ (uint32)_MSR_VAR_CLEARED_START, 
     /*  .End  */ (uint32)_MSR_VAR_CLEARED_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  bss  */ 
     /*  .Start  */ (uint32)_bss_START, 
     /*  .End  */ (uint32)_bss_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  sbss  */ 
     /*  .Start  */ (uint32)_sbss_START, 
     /*  .End  */ (uint32)_sbss_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  zbss  */ 
     /*  .Start  */ (uint32)_zbss_START, 
     /*  .End  */ (uint32)_zbss_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage Two of variant: vLinkGenVariant_DemoFbl */
const vLinkGen_MemArea vLinkGen_ZeroInit_Two_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_TWO_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage Three of variant: vLinkGenVariant_DemoFbl */
const vLinkGen_MemArea vLinkGen_ZeroInit_Three_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_THREE_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage HardReset of variant: vLinkGenVariant_DemoFbl */
const vLinkGen_MemArea vLinkGen_ZeroInit_HardReset_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_HARD_RESET_GROUPS] =
{
  { /*  MagicFlagSection  */ 
     /*  .Start  */ (uint32)_MagicFlagSection_START, 
     /*  .End  */ (uint32)_MagicFlagSection_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage PowerOn of variant: vLinkGenVariant_DemoFbl */
const vLinkGen_MemArea vLinkGen_ZeroInit_PowerOn_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_POWER_ON_GROUPS] =
{
  { /*  MSR_VAR_POWER_ON_CLEARED  */ 
     /*  .Start  */ (uint32)_MSR_VAR_POWER_ON_CLEARED_START, 
     /*  .End  */ (uint32)_MSR_VAR_POWER_ON_CLEARED_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  MSR_VAR_SAVED_ZONE_POWER_ON_CLEARED  */ 
     /*  .Start  */ (uint32)_MSR_VAR_SAVED_ZONE_POWER_ON_CLEARED_START, 
     /*  .End  */ (uint32)_MSR_VAR_SAVED_ZONE_POWER_ON_CLEARED_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage Zero of variant: vLinkGenVariant_DemoFbl */
const vLinkGen_RamMemArea vLinkGen_Init_Zero_Groups[VLINKGEN_CFG_NUM_INIT_ZERO_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage One of variant: vLinkGenVariant_DemoFbl */
const vLinkGen_RamMemArea vLinkGen_Init_One_Groups[VLINKGEN_CFG_NUM_INIT_ONE_GROUPS] =
{
  { /*  RamConstSection  */ 
     /*  .Start  */ (uint32)_RamConstSection_START, 
     /*  .End  */ (uint32)_RamConstSection_LIMIT, 
     /*  .Romstart  */ (uint32)_RamConstSection_ROM_START, 
     /*  .Romend  */ (uint32)_RamConstSection_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  MSR_PBCFG_VAR_INIT  */ 
     /*  .Start  */ (uint32)_MSR_PBCFG_VAR_INIT_START, 
     /*  .End  */ (uint32)_MSR_PBCFG_VAR_INIT_LIMIT, 
     /*  .Romstart  */ (uint32)_MSR_PBCFG_VAR_INIT_ROM_START, 
     /*  .Romend  */ (uint32)_MSR_PBCFG_VAR_INIT_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  MSR_VAR_INIT  */ 
     /*  .Start  */ (uint32)_MSR_VAR_INIT_START, 
     /*  .End  */ (uint32)_MSR_VAR_INIT_LIMIT, 
     /*  .Romstart  */ (uint32)_MSR_VAR_INIT_ROM_START, 
     /*  .Romend  */ (uint32)_MSR_VAR_INIT_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  RamCodeSection  */ 
     /*  .Start  */ (uint32)_RamCodeSection_START, 
     /*  .End  */ (uint32)_RamCodeSection_LIMIT, 
     /*  .Romstart  */ (uint32)_RamCodeSection_ROM_START, 
     /*  .Romend  */ (uint32)_RamCodeSection_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  Brs_ExcVectRam  */ 
     /*  .Start  */ (uint32)_Brs_ExcVectRam_START, 
     /*  .End  */ (uint32)_Brs_ExcVectRam_LIMIT, 
     /*  .Romstart  */ (uint32)_Brs_ExcVectRam_ROM_START, 
     /*  .Romend  */ (uint32)_Brs_ExcVectRam_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  data  */ 
     /*  .Start  */ (uint32)_data_START, 
     /*  .End  */ (uint32)_data_LIMIT, 
     /*  .Romstart  */ (uint32)_data_ROM_START, 
     /*  .Romend  */ (uint32)_data_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  sdata  */ 
     /*  .Start  */ (uint32)_sdata_START, 
     /*  .End  */ (uint32)_sdata_LIMIT, 
     /*  .Romstart  */ (uint32)_sdata_ROM_START, 
     /*  .Romend  */ (uint32)_sdata_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  zdata  */ 
     /*  .Start  */ (uint32)_zdata_START, 
     /*  .End  */ (uint32)_zdata_LIMIT, 
     /*  .Romstart  */ (uint32)_zdata_ROM_START, 
     /*  .Romend  */ (uint32)_zdata_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage Two of variant: vLinkGenVariant_DemoFbl */
const vLinkGen_RamMemArea vLinkGen_Init_Two_Groups[VLINKGEN_CFG_NUM_INIT_TWO_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage Three of variant: vLinkGenVariant_DemoFbl */
const vLinkGen_RamMemArea vLinkGen_Init_Three_Groups[VLINKGEN_CFG_NUM_INIT_THREE_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage HardReset of variant: vLinkGenVariant_DemoFbl */
const vLinkGen_RamMemArea vLinkGen_Init_HardReset_Groups[VLINKGEN_CFG_NUM_INIT_HARD_RESET_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage PowerOn of variant: vLinkGenVariant_DemoFbl */
const vLinkGen_RamMemArea vLinkGen_Init_PowerOn_Groups[VLINKGEN_CFG_NUM_INIT_POWER_ON_GROUPS] =
{
  { /*  MSR_VAR_POWER_ON_INIT  */ 
     /*  .Start  */ (uint32)_MSR_VAR_POWER_ON_INIT_START, 
     /*  .End  */ (uint32)_MSR_VAR_POWER_ON_INIT_LIMIT, 
     /*  .Romstart  */ (uint32)_MSR_VAR_POWER_ON_INIT_ROM_START, 
     /*  .Romend  */ (uint32)_MSR_VAR_POWER_ON_INIT_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  MSR_VAR_SAVED_ZONE_POWER_ON_INIT  */ 
     /*  .Start  */ (uint32)_MSR_VAR_SAVED_ZONE_POWER_ON_INIT_START, 
     /*  .End  */ (uint32)_MSR_VAR_SAVED_ZONE_POWER_ON_INIT_LIMIT, 
     /*  .Romstart  */ (uint32)_MSR_VAR_SAVED_ZONE_POWER_ON_INIT_ROM_START, 
     /*  .Romend  */ (uint32)_MSR_VAR_SAVED_ZONE_POWER_ON_INIT_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};
#endif /* vLinkGenVariant_DemoFbl */

#ifdef vLinkGenVariant_DemoAppl
/* Section groups to be initialized with zeros in stage Early of variant: vLinkGenVariant_DemoAppl */
const vLinkGen_MemArea vLinkGen_ZeroInit_Early_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_EARLY_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage Zero of variant: vLinkGenVariant_DemoAppl */
const vLinkGen_MemArea vLinkGen_ZeroInit_Zero_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_ZERO_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage One of variant: vLinkGenVariant_DemoAppl */
const vLinkGen_MemArea vLinkGen_ZeroInit_One_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_ONE_GROUPS] =
{
  { /*  MSR_PBCFG_VAR_CLEARED  */ 
     /*  .Start  */ (uint32)_MSR_PBCFG_VAR_CLEARED_START, 
     /*  .End  */ (uint32)_MSR_PBCFG_VAR_CLEARED_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  MSR_VAR_CLEARED  */ 
     /*  .Start  */ (uint32)_MSR_VAR_CLEARED_START, 
     /*  .End  */ (uint32)_MSR_VAR_CLEARED_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  bss  */ 
     /*  .Start  */ (uint32)_bss_START, 
     /*  .End  */ (uint32)_bss_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  sbss  */ 
     /*  .Start  */ (uint32)_sbss_START, 
     /*  .End  */ (uint32)_sbss_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  zbss  */ 
     /*  .Start  */ (uint32)_zbss_START, 
     /*  .End  */ (uint32)_zbss_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage Two of variant: vLinkGenVariant_DemoAppl */
const vLinkGen_MemArea vLinkGen_ZeroInit_Two_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_TWO_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage Three of variant: vLinkGenVariant_DemoAppl */
const vLinkGen_MemArea vLinkGen_ZeroInit_Three_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_THREE_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage HardReset of variant: vLinkGenVariant_DemoAppl */
const vLinkGen_MemArea vLinkGen_ZeroInit_HardReset_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_HARD_RESET_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage PowerOn of variant: vLinkGenVariant_DemoAppl */
const vLinkGen_MemArea vLinkGen_ZeroInit_PowerOn_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_POWER_ON_GROUPS] =
{
  { /*  MSR_VAR_POWER_ON_CLEARED  */ 
     /*  .Start  */ (uint32)_MSR_VAR_POWER_ON_CLEARED_START, 
     /*  .End  */ (uint32)_MSR_VAR_POWER_ON_CLEARED_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  MSR_VAR_SAVED_ZONE_POWER_ON_CLEARED  */ 
     /*  .Start  */ (uint32)_MSR_VAR_SAVED_ZONE_POWER_ON_CLEARED_START, 
     /*  .End  */ (uint32)_MSR_VAR_SAVED_ZONE_POWER_ON_CLEARED_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage Zero of variant: vLinkGenVariant_DemoAppl */
const vLinkGen_RamMemArea vLinkGen_Init_Zero_Groups[VLINKGEN_CFG_NUM_INIT_ZERO_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage One of variant: vLinkGenVariant_DemoAppl */
const vLinkGen_RamMemArea vLinkGen_Init_One_Groups[VLINKGEN_CFG_NUM_INIT_ONE_GROUPS] =
{
  { /*  RamConstSection  */ 
     /*  .Start  */ (uint32)_RamConstSection_START, 
     /*  .End  */ (uint32)_RamConstSection_LIMIT, 
     /*  .Romstart  */ (uint32)_RamConstSection_ROM_START, 
     /*  .Romend  */ (uint32)_RamConstSection_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  MSR_PBCFG_VAR_INIT  */ 
     /*  .Start  */ (uint32)_MSR_PBCFG_VAR_INIT_START, 
     /*  .End  */ (uint32)_MSR_PBCFG_VAR_INIT_LIMIT, 
     /*  .Romstart  */ (uint32)_MSR_PBCFG_VAR_INIT_ROM_START, 
     /*  .Romend  */ (uint32)_MSR_PBCFG_VAR_INIT_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  MSR_VAR_INIT  */ 
     /*  .Start  */ (uint32)_MSR_VAR_INIT_START, 
     /*  .End  */ (uint32)_MSR_VAR_INIT_LIMIT, 
     /*  .Romstart  */ (uint32)_MSR_VAR_INIT_ROM_START, 
     /*  .Romend  */ (uint32)_MSR_VAR_INIT_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  RamCodeSection  */ 
     /*  .Start  */ (uint32)_RamCodeSection_START, 
     /*  .End  */ (uint32)_RamCodeSection_LIMIT, 
     /*  .Romstart  */ (uint32)_RamCodeSection_ROM_START, 
     /*  .Romend  */ (uint32)_RamCodeSection_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  Brs_ExcVectRam  */ 
     /*  .Start  */ (uint32)_Brs_ExcVectRam_START, 
     /*  .End  */ (uint32)_Brs_ExcVectRam_LIMIT, 
     /*  .Romstart  */ (uint32)_Brs_ExcVectRam_ROM_START, 
     /*  .Romend  */ (uint32)_Brs_ExcVectRam_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  data  */ 
     /*  .Start  */ (uint32)_data_START, 
     /*  .End  */ (uint32)_data_LIMIT, 
     /*  .Romstart  */ (uint32)_data_ROM_START, 
     /*  .Romend  */ (uint32)_data_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  sdata  */ 
     /*  .Start  */ (uint32)_sdata_START, 
     /*  .End  */ (uint32)_sdata_LIMIT, 
     /*  .Romstart  */ (uint32)_sdata_ROM_START, 
     /*  .Romend  */ (uint32)_sdata_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  zdata  */ 
     /*  .Start  */ (uint32)_zdata_START, 
     /*  .End  */ (uint32)_zdata_LIMIT, 
     /*  .Romstart  */ (uint32)_zdata_ROM_START, 
     /*  .Romend  */ (uint32)_zdata_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage Two of variant: vLinkGenVariant_DemoAppl */
const vLinkGen_RamMemArea vLinkGen_Init_Two_Groups[VLINKGEN_CFG_NUM_INIT_TWO_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage Three of variant: vLinkGenVariant_DemoAppl */
const vLinkGen_RamMemArea vLinkGen_Init_Three_Groups[VLINKGEN_CFG_NUM_INIT_THREE_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage HardReset of variant: vLinkGenVariant_DemoAppl */
const vLinkGen_RamMemArea vLinkGen_Init_HardReset_Groups[VLINKGEN_CFG_NUM_INIT_HARD_RESET_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage PowerOn of variant: vLinkGenVariant_DemoAppl */
const vLinkGen_RamMemArea vLinkGen_Init_PowerOn_Groups[VLINKGEN_CFG_NUM_INIT_POWER_ON_GROUPS] =
{
  { /*  MSR_VAR_POWER_ON_INIT  */ 
     /*  .Start  */ (uint32)_MSR_VAR_POWER_ON_INIT_START, 
     /*  .End  */ (uint32)_MSR_VAR_POWER_ON_INIT_LIMIT, 
     /*  .Romstart  */ (uint32)_MSR_VAR_POWER_ON_INIT_ROM_START, 
     /*  .Romend  */ (uint32)_MSR_VAR_POWER_ON_INIT_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  MSR_VAR_SAVED_ZONE_POWER_ON_INIT  */ 
     /*  .Start  */ (uint32)_MSR_VAR_SAVED_ZONE_POWER_ON_INIT_START, 
     /*  .End  */ (uint32)_MSR_VAR_SAVED_ZONE_POWER_ON_INIT_LIMIT, 
     /*  .Romstart  */ (uint32)_MSR_VAR_SAVED_ZONE_POWER_ON_INIT_ROM_START, 
     /*  .Romend  */ (uint32)_MSR_VAR_SAVED_ZONE_POWER_ON_INIT_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};
#endif /* vLinkGenVariant_DemoAppl */

#ifdef vLinkGenVariant_DemoUpd
/* Section groups to be initialized with zeros in stage Early of variant: vLinkGenVariant_DemoUpd */
const vLinkGen_MemArea vLinkGen_ZeroInit_Early_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_EARLY_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage Zero of variant: vLinkGenVariant_DemoUpd */
const vLinkGen_MemArea vLinkGen_ZeroInit_Zero_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_ZERO_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage One of variant: vLinkGenVariant_DemoUpd */
const vLinkGen_MemArea vLinkGen_ZeroInit_One_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_ONE_GROUPS] =
{
  { /*  MSR_PBCFG_VAR_CLEARED  */ 
     /*  .Start  */ (uint32)_MSR_PBCFG_VAR_CLEARED_START, 
     /*  .End  */ (uint32)_MSR_PBCFG_VAR_CLEARED_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  MSR_VAR_CLEARED  */ 
     /*  .Start  */ (uint32)_MSR_VAR_CLEARED_START, 
     /*  .End  */ (uint32)_MSR_VAR_CLEARED_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  bss  */ 
     /*  .Start  */ (uint32)_bss_START, 
     /*  .End  */ (uint32)_bss_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  sbss  */ 
     /*  .Start  */ (uint32)_sbss_START, 
     /*  .End  */ (uint32)_sbss_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  zbss  */ 
     /*  .Start  */ (uint32)_zbss_START, 
     /*  .End  */ (uint32)_zbss_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage Two of variant: vLinkGenVariant_DemoUpd */
const vLinkGen_MemArea vLinkGen_ZeroInit_Two_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_TWO_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage Three of variant: vLinkGenVariant_DemoUpd */
const vLinkGen_MemArea vLinkGen_ZeroInit_Three_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_THREE_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage HardReset of variant: vLinkGenVariant_DemoUpd */
const vLinkGen_MemArea vLinkGen_ZeroInit_HardReset_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_HARD_RESET_GROUPS] =
{
  { /*  EepDummySection  */ 
     /*  .Start  */ (uint32)_EepDummySection_START, 
     /*  .End  */ (uint32)_EepDummySection_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  MagicFlagSection  */ 
     /*  .Start  */ (uint32)_MagicFlagSection_START, 
     /*  .End  */ (uint32)_MagicFlagSection_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage PowerOn of variant: vLinkGenVariant_DemoUpd */
const vLinkGen_MemArea vLinkGen_ZeroInit_PowerOn_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_POWER_ON_GROUPS] =
{
  { /*  MSR_VAR_POWER_ON_CLEARED  */ 
     /*  .Start  */ (uint32)_MSR_VAR_POWER_ON_CLEARED_START, 
     /*  .End  */ (uint32)_MSR_VAR_POWER_ON_CLEARED_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  MSR_VAR_SAVED_ZONE_POWER_ON_CLEARED  */ 
     /*  .Start  */ (uint32)_MSR_VAR_SAVED_ZONE_POWER_ON_CLEARED_START, 
     /*  .End  */ (uint32)_MSR_VAR_SAVED_ZONE_POWER_ON_CLEARED_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage Zero of variant: vLinkGenVariant_DemoUpd */
const vLinkGen_RamMemArea vLinkGen_Init_Zero_Groups[VLINKGEN_CFG_NUM_INIT_ZERO_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage One of variant: vLinkGenVariant_DemoUpd */
const vLinkGen_RamMemArea vLinkGen_Init_One_Groups[VLINKGEN_CFG_NUM_INIT_ONE_GROUPS] =
{
  { /*  RamConstSection  */ 
     /*  .Start  */ (uint32)_RamConstSection_START, 
     /*  .End  */ (uint32)_RamConstSection_LIMIT, 
     /*  .Romstart  */ (uint32)_RamConstSection_ROM_START, 
     /*  .Romend  */ (uint32)_RamConstSection_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  MSR_PBCFG_VAR_INIT  */ 
     /*  .Start  */ (uint32)_MSR_PBCFG_VAR_INIT_START, 
     /*  .End  */ (uint32)_MSR_PBCFG_VAR_INIT_LIMIT, 
     /*  .Romstart  */ (uint32)_MSR_PBCFG_VAR_INIT_ROM_START, 
     /*  .Romend  */ (uint32)_MSR_PBCFG_VAR_INIT_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  MSR_VAR_INIT  */ 
     /*  .Start  */ (uint32)_MSR_VAR_INIT_START, 
     /*  .End  */ (uint32)_MSR_VAR_INIT_LIMIT, 
     /*  .Romstart  */ (uint32)_MSR_VAR_INIT_ROM_START, 
     /*  .Romend  */ (uint32)_MSR_VAR_INIT_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  RamCodeSection  */ 
     /*  .Start  */ (uint32)_RamCodeSection_START, 
     /*  .End  */ (uint32)_RamCodeSection_LIMIT, 
     /*  .Romstart  */ (uint32)_RamCodeSection_ROM_START, 
     /*  .Romend  */ (uint32)_RamCodeSection_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  Brs_ExcVectRam  */ 
     /*  .Start  */ (uint32)_Brs_ExcVectRam_START, 
     /*  .End  */ (uint32)_Brs_ExcVectRam_LIMIT, 
     /*  .Romstart  */ (uint32)_Brs_ExcVectRam_ROM_START, 
     /*  .Romend  */ (uint32)_Brs_ExcVectRam_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  data  */ 
     /*  .Start  */ (uint32)_data_START, 
     /*  .End  */ (uint32)_data_LIMIT, 
     /*  .Romstart  */ (uint32)_data_ROM_START, 
     /*  .Romend  */ (uint32)_data_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  sdata  */ 
     /*  .Start  */ (uint32)_sdata_START, 
     /*  .End  */ (uint32)_sdata_LIMIT, 
     /*  .Romstart  */ (uint32)_sdata_ROM_START, 
     /*  .Romend  */ (uint32)_sdata_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  zdata  */ 
     /*  .Start  */ (uint32)_zdata_START, 
     /*  .End  */ (uint32)_zdata_LIMIT, 
     /*  .Romstart  */ (uint32)_zdata_ROM_START, 
     /*  .Romend  */ (uint32)_zdata_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage Two of variant: vLinkGenVariant_DemoUpd */
const vLinkGen_RamMemArea vLinkGen_Init_Two_Groups[VLINKGEN_CFG_NUM_INIT_TWO_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage Three of variant: vLinkGenVariant_DemoUpd */
const vLinkGen_RamMemArea vLinkGen_Init_Three_Groups[VLINKGEN_CFG_NUM_INIT_THREE_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage HardReset of variant: vLinkGenVariant_DemoUpd */
const vLinkGen_RamMemArea vLinkGen_Init_HardReset_Groups[VLINKGEN_CFG_NUM_INIT_HARD_RESET_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage PowerOn of variant: vLinkGenVariant_DemoUpd */
const vLinkGen_RamMemArea vLinkGen_Init_PowerOn_Groups[VLINKGEN_CFG_NUM_INIT_POWER_ON_GROUPS] =
{
  { /*  MSR_VAR_POWER_ON_INIT  */ 
     /*  .Start  */ (uint32)_MSR_VAR_POWER_ON_INIT_START, 
     /*  .End  */ (uint32)_MSR_VAR_POWER_ON_INIT_LIMIT, 
     /*  .Romstart  */ (uint32)_MSR_VAR_POWER_ON_INIT_ROM_START, 
     /*  .Romend  */ (uint32)_MSR_VAR_POWER_ON_INIT_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  MSR_VAR_SAVED_ZONE_POWER_ON_INIT  */ 
     /*  .Start  */ (uint32)_MSR_VAR_SAVED_ZONE_POWER_ON_INIT_START, 
     /*  .End  */ (uint32)_MSR_VAR_SAVED_ZONE_POWER_ON_INIT_LIMIT, 
     /*  .Romstart  */ (uint32)_MSR_VAR_SAVED_ZONE_POWER_ON_INIT_ROM_START, 
     /*  .Romend  */ (uint32)_MSR_VAR_SAVED_ZONE_POWER_ON_INIT_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};
#endif /* vLinkGenVariant_DemoUpd */

#ifdef vLinkGenVariant_FlashDrv
/* Section groups to be initialized with zeros in stage Early of variant: vLinkGenVariant_FlashDrv */
const vLinkGen_MemArea vLinkGen_ZeroInit_Early_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_EARLY_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage Zero of variant: vLinkGenVariant_FlashDrv */
const vLinkGen_MemArea vLinkGen_ZeroInit_Zero_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_ZERO_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage One of variant: vLinkGenVariant_FlashDrv */
const vLinkGen_MemArea vLinkGen_ZeroInit_One_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_ONE_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage Two of variant: vLinkGenVariant_FlashDrv */
const vLinkGen_MemArea vLinkGen_ZeroInit_Two_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_TWO_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage Three of variant: vLinkGenVariant_FlashDrv */
const vLinkGen_MemArea vLinkGen_ZeroInit_Three_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_THREE_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage HardReset of variant: vLinkGenVariant_FlashDrv */
const vLinkGen_MemArea vLinkGen_ZeroInit_HardReset_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_HARD_RESET_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage PowerOn of variant: vLinkGenVariant_FlashDrv */
const vLinkGen_MemArea vLinkGen_ZeroInit_PowerOn_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_POWER_ON_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage Zero of variant: vLinkGenVariant_FlashDrv */
const vLinkGen_RamMemArea vLinkGen_Init_Zero_Groups[VLINKGEN_CFG_NUM_INIT_ZERO_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage One of variant: vLinkGenVariant_FlashDrv */
const vLinkGen_RamMemArea vLinkGen_Init_One_Groups[VLINKGEN_CFG_NUM_INIT_ONE_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage Two of variant: vLinkGenVariant_FlashDrv */
const vLinkGen_RamMemArea vLinkGen_Init_Two_Groups[VLINKGEN_CFG_NUM_INIT_TWO_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage Three of variant: vLinkGenVariant_FlashDrv */
const vLinkGen_RamMemArea vLinkGen_Init_Three_Groups[VLINKGEN_CFG_NUM_INIT_THREE_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage HardReset of variant: vLinkGenVariant_FlashDrv */
const vLinkGen_RamMemArea vLinkGen_Init_HardReset_Groups[VLINKGEN_CFG_NUM_INIT_HARD_RESET_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage PowerOn of variant: vLinkGenVariant_FlashDrv */
const vLinkGen_RamMemArea vLinkGen_Init_PowerOn_Groups[VLINKGEN_CFG_NUM_INIT_POWER_ON_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};
#endif /* vLinkGenVariant_FlashDrv */

#ifdef DemoBm
/* Section groups to be initialized with zeros in stage Early of variant: DemoBm */
const vLinkGen_MemArea vLinkGen_ZeroInit_Early_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_EARLY_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage Zero of variant: DemoBm */
const vLinkGen_MemArea vLinkGen_ZeroInit_Zero_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_ZERO_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage One of variant: DemoBm */
const vLinkGen_MemArea vLinkGen_ZeroInit_One_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_ONE_GROUPS] =
{
  { /*  bss  */ 
     /*  .Start  */ (uint32)_bss_START, 
     /*  .End  */ (uint32)_bss_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  sbss  */ 
     /*  .Start  */ (uint32)_sbss_START, 
     /*  .End  */ (uint32)_sbss_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  zbss  */ 
     /*  .Start  */ (uint32)_zbss_START, 
     /*  .End  */ (uint32)_zbss_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage Two of variant: DemoBm */
const vLinkGen_MemArea vLinkGen_ZeroInit_Two_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_TWO_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage Three of variant: DemoBm */
const vLinkGen_MemArea vLinkGen_ZeroInit_Three_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_THREE_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage HardReset of variant: DemoBm */
const vLinkGen_MemArea vLinkGen_ZeroInit_HardReset_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_HARD_RESET_GROUPS] =
{
  { /*  EepDummySection  */ 
     /*  .Start  */ (uint32)_EepDummySection_START, 
     /*  .End  */ (uint32)_EepDummySection_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  MagicFlagSection  */ 
     /*  .Start  */ (uint32)_MagicFlagSection_START, 
     /*  .End  */ (uint32)_MagicFlagSection_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage PowerOn of variant: DemoBm */
const vLinkGen_MemArea vLinkGen_ZeroInit_PowerOn_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_POWER_ON_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage Zero of variant: DemoBm */
const vLinkGen_RamMemArea vLinkGen_Init_Zero_Groups[VLINKGEN_CFG_NUM_INIT_ZERO_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage One of variant: DemoBm */
const vLinkGen_RamMemArea vLinkGen_Init_One_Groups[VLINKGEN_CFG_NUM_INIT_ONE_GROUPS] =
{
  { /*  RamConstSection  */ 
     /*  .Start  */ (uint32)_RamConstSection_START, 
     /*  .End  */ (uint32)_RamConstSection_LIMIT, 
     /*  .Romstart  */ (uint32)_RamConstSection_ROM_START, 
     /*  .Romend  */ (uint32)_RamConstSection_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  RamCodeSection  */ 
     /*  .Start  */ (uint32)_RamCodeSection_START, 
     /*  .End  */ (uint32)_RamCodeSection_LIMIT, 
     /*  .Romstart  */ (uint32)_RamCodeSection_ROM_START, 
     /*  .Romend  */ (uint32)_RamCodeSection_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  Brs_ExcVectRam  */ 
     /*  .Start  */ (uint32)_Brs_ExcVectRam_START, 
     /*  .End  */ (uint32)_Brs_ExcVectRam_LIMIT, 
     /*  .Romstart  */ (uint32)_Brs_ExcVectRam_ROM_START, 
     /*  .Romend  */ (uint32)_Brs_ExcVectRam_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  data  */ 
     /*  .Start  */ (uint32)_data_START, 
     /*  .End  */ (uint32)_data_LIMIT, 
     /*  .Romstart  */ (uint32)_data_ROM_START, 
     /*  .Romend  */ (uint32)_data_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  sdata  */ 
     /*  .Start  */ (uint32)_sdata_START, 
     /*  .End  */ (uint32)_sdata_LIMIT, 
     /*  .Romstart  */ (uint32)_sdata_ROM_START, 
     /*  .Romend  */ (uint32)_sdata_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  { /*  zdata  */ 
     /*  .Start  */ (uint32)_zdata_START, 
     /*  .End  */ (uint32)_zdata_LIMIT, 
     /*  .Romstart  */ (uint32)_zdata_ROM_START, 
     /*  .Romend  */ (uint32)_zdata_ROM_LIMIT, 
     /*  .Core  */ 0u, 
     /*  .Alignment  */ 4u
  }, 
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage Two of variant: DemoBm */
const vLinkGen_RamMemArea vLinkGen_Init_Two_Groups[VLINKGEN_CFG_NUM_INIT_TWO_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage Three of variant: DemoBm */
const vLinkGen_RamMemArea vLinkGen_Init_Three_Groups[VLINKGEN_CFG_NUM_INIT_THREE_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage HardReset of variant: DemoBm */
const vLinkGen_RamMemArea vLinkGen_Init_HardReset_Groups[VLINKGEN_CFG_NUM_INIT_HARD_RESET_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage PowerOn of variant: DemoBm */
const vLinkGen_RamMemArea vLinkGen_Init_PowerOn_Groups[VLINKGEN_CFG_NUM_INIT_POWER_ON_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};
#endif /* DemoBm */

#ifdef vLinkGenVariant_FirstExecInst
/* Section groups to be initialized with zeros in stage Early of variant: vLinkGenVariant_FirstExecInst */
const vLinkGen_MemArea vLinkGen_ZeroInit_Early_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_EARLY_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage Zero of variant: vLinkGenVariant_FirstExecInst */
const vLinkGen_MemArea vLinkGen_ZeroInit_Zero_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_ZERO_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage One of variant: vLinkGenVariant_FirstExecInst */
const vLinkGen_MemArea vLinkGen_ZeroInit_One_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_ONE_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage Two of variant: vLinkGenVariant_FirstExecInst */
const vLinkGen_MemArea vLinkGen_ZeroInit_Two_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_TWO_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage Three of variant: vLinkGenVariant_FirstExecInst */
const vLinkGen_MemArea vLinkGen_ZeroInit_Three_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_THREE_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage HardReset of variant: vLinkGenVariant_FirstExecInst */
const vLinkGen_MemArea vLinkGen_ZeroInit_HardReset_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_HARD_RESET_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with zeros in stage PowerOn of variant: vLinkGenVariant_FirstExecInst */
const vLinkGen_MemArea vLinkGen_ZeroInit_PowerOn_Groups[VLINKGEN_CFG_NUM_ZERO_INIT_POWER_ON_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage Zero of variant: vLinkGenVariant_FirstExecInst */
const vLinkGen_RamMemArea vLinkGen_Init_Zero_Groups[VLINKGEN_CFG_NUM_INIT_ZERO_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage One of variant: vLinkGenVariant_FirstExecInst */
const vLinkGen_RamMemArea vLinkGen_Init_One_Groups[VLINKGEN_CFG_NUM_INIT_ONE_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage Two of variant: vLinkGenVariant_FirstExecInst */
const vLinkGen_RamMemArea vLinkGen_Init_Two_Groups[VLINKGEN_CFG_NUM_INIT_TWO_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage Three of variant: vLinkGenVariant_FirstExecInst */
const vLinkGen_RamMemArea vLinkGen_Init_Three_Groups[VLINKGEN_CFG_NUM_INIT_THREE_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage HardReset of variant: vLinkGenVariant_FirstExecInst */
const vLinkGen_RamMemArea vLinkGen_Init_HardReset_Groups[VLINKGEN_CFG_NUM_INIT_HARD_RESET_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};

/* Section groups to be initialized with concrete data in stage PowerOn of variant: vLinkGenVariant_FirstExecInst */
const vLinkGen_RamMemArea vLinkGen_Init_PowerOn_Groups[VLINKGEN_CFG_NUM_INIT_POWER_ON_GROUPS] =
{
  {
    0u, 
    0u, 
    0u, 
    0u, 
    0u, 
    0u
  }
};
#endif /* vLinkGenVariant_FirstExecInst */

/* Memory region blocks to be initialized with zeros in stage Early */
const vLinkGen_MemAreaSet vLinkGen_ZeroInit_Early_BlocksSet =
{
  VLINKGEN_CFG_NUM_ZERO_INIT_EARLY_BLOCKS, 
  vLinkGen_ZeroInit_Early_Blocks
};

/* Memory region blocks to be initialized with zeros in stage One */
const vLinkGen_MemAreaSet vLinkGen_ZeroInit_One_BlocksSet =
{
  VLINKGEN_CFG_NUM_ZERO_INIT_ONE_BLOCKS, 
  vLinkGen_ZeroInit_One_Blocks
};

/* Memory region blocks to be initialized with zeros in stage HardReset */
const vLinkGen_MemAreaSet vLinkGen_ZeroInit_HardReset_BlocksSet =
{
  VLINKGEN_CFG_NUM_ZERO_INIT_HARD_RESET_BLOCKS, 
  vLinkGen_ZeroInit_HardReset_Blocks
};

/* Section groups to be initialized with zeros in stage Early */
const vLinkGen_MemAreaSet vLinkGen_ZeroInit_Early_GroupsSet =
{
  VLINKGEN_CFG_NUM_ZERO_INIT_EARLY_GROUPS, 
  vLinkGen_ZeroInit_Early_Groups
};

/* Section groups to be initialized with zeros in stage Zero */
const vLinkGen_MemAreaSet vLinkGen_ZeroInit_Zero_GroupsSet =
{
  VLINKGEN_CFG_NUM_ZERO_INIT_ZERO_GROUPS, 
  vLinkGen_ZeroInit_Zero_Groups
};

/* Section groups to be initialized with zeros in stage One */
const vLinkGen_MemAreaSet vLinkGen_ZeroInit_One_GroupsSet =
{
  VLINKGEN_CFG_NUM_ZERO_INIT_ONE_GROUPS, 
  vLinkGen_ZeroInit_One_Groups
};

/* Section groups to be initialized with zeros in stage Two */
const vLinkGen_MemAreaSet vLinkGen_ZeroInit_Two_GroupsSet =
{
  VLINKGEN_CFG_NUM_ZERO_INIT_TWO_GROUPS, 
  vLinkGen_ZeroInit_Two_Groups
};

/* Section groups to be initialized with zeros in stage Three */
const vLinkGen_MemAreaSet vLinkGen_ZeroInit_Three_GroupsSet =
{
  VLINKGEN_CFG_NUM_ZERO_INIT_THREE_GROUPS, 
  vLinkGen_ZeroInit_Three_Groups
};

/* Section groups to be initialized with zeros in stage HardReset */
const vLinkGen_MemAreaSet vLinkGen_ZeroInit_HardReset_GroupsSet =
{
  VLINKGEN_CFG_NUM_ZERO_INIT_HARD_RESET_GROUPS, 
  vLinkGen_ZeroInit_HardReset_Groups
};

/* Section groups to be initialized with zeros in stage PowerOn */
const vLinkGen_MemAreaSet vLinkGen_ZeroInit_PowerOn_GroupsSet =
{
  VLINKGEN_CFG_NUM_ZERO_INIT_POWER_ON_GROUPS, 
  vLinkGen_ZeroInit_PowerOn_Groups
};

/* Section groups to be initialized with concrete data in stage Zero */
const vLinkGen_RamMemAreaSet vLinkGen_Init_Zero_GroupsSet =
{
  VLINKGEN_CFG_NUM_INIT_ZERO_GROUPS, 
  vLinkGen_Init_Zero_Groups
};

/* Section groups to be initialized with concrete data in stage One */
const vLinkGen_RamMemAreaSet vLinkGen_Init_One_GroupsSet =
{
  VLINKGEN_CFG_NUM_INIT_ONE_GROUPS, 
  vLinkGen_Init_One_Groups
};

/* Section groups to be initialized with concrete data in stage Two */
const vLinkGen_RamMemAreaSet vLinkGen_Init_Two_GroupsSet =
{
  VLINKGEN_CFG_NUM_INIT_TWO_GROUPS, 
  vLinkGen_Init_Two_Groups
};

/* Section groups to be initialized with concrete data in stage Three */
const vLinkGen_RamMemAreaSet vLinkGen_Init_Three_GroupsSet =
{
  VLINKGEN_CFG_NUM_INIT_THREE_GROUPS, 
  vLinkGen_Init_Three_Groups
};

/* Section groups to be initialized with concrete data in stage HardReset */
const vLinkGen_RamMemAreaSet vLinkGen_Init_HardReset_GroupsSet =
{
  VLINKGEN_CFG_NUM_INIT_HARD_RESET_GROUPS, 
  vLinkGen_Init_HardReset_Groups
};

/* Section groups to be initialized with concrete data in stage PowerOn */
const vLinkGen_RamMemAreaSet vLinkGen_Init_PowerOn_GroupsSet =
{
  VLINKGEN_CFG_NUM_INIT_POWER_ON_GROUPS, 
  vLinkGen_Init_PowerOn_Groups
};

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  END OF FILE: vLinkGen_Lcfg.c
 *********************************************************************************************************************/
