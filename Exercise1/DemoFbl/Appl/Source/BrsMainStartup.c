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
/** \file  File:  BrsMainStartup.c
 *      Project:  Vector Basic Runtime System
 *       Module:  BrsMain
 *
 *  \brief Description:  Vector Basic Runtime System module source for startup routines.
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

/**********************************************************************************************************************
 *  EXAMPLE CODE ONLY
 *  -------------------------------------------------------------------------------------------------------------------
 *  This Example Code is only intended for illustrating an example of a possible BSW integration and BSW configuration.
 *  The Example Code has not passed any quality control measures and may be incomplete. The Example Code is neither
 *  intended nor qualified for use in series production. The Example Code as well as any of its modifications and/or
 *  implementations must be tested with diligent care and must comply with all quality requirements which are necessary
 *  according to the state of the art before their use.
 *********************************************************************************************************************/

#define _BRSMAINSTARTUP_C_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "BrsMain.h"

#include "vLinkGen_Lcfg.h"

/**********************************************************************************************************************
 *  VERSION CHECK
 *********************************************************************************************************************/
#if (BRSMAIN_VERSION != 0x0223u)
  #error "Header and source file are inconsistent!"
#endif
#if (BRSMAIN_BUGFIX_VERSION != 0x01u)
  #error "Different versions of bugfix in Header and Source used!"
#endif

/**********************************************************************************************************************
 *  CONFIGURATION CHECK
 *********************************************************************************************************************/
#if (!defined (BRS_INIT_PATTERN_BLOCKS))           || \
    (!defined (BRS_INIT_PATTERN_HARDRESET_BLOCKS)) || \
    (!defined (BRS_INIT_PATTERN_AREAS))            || \
    (!defined (BRS_INIT_PATTERN_HARDRESET_AREAS))
  #error "Your environment is missing the mandatory init pattern. They should be generated out of vBRS in Configurator5."
#endif

#if (VLINKGEN_CFG_MAJOR_VERSION != 2u)
  #error "This StartUpCode is dependent to the vLinkGen version! vLinkGen major version does not fit!"
#else
# if (VLINKGEN_CFG_MINOR_VERSION < 16u)
  #error "This StartUpCode is dependent to the vLinkGen version! Your vLinkGen minor version is too old!"
# endif
#endif

#if defined (BRS_ENABLE_OS_MULTICORESUPPORT)
  #error "This file was filtered for SingleCore UseCase, but MultiCore UseCase is configured!"
#endif

/* Starting with Brs_Template 01.03.13, BrsHw_UnlockCores() is only present if respective macro "BRSHW_CORES_AUTOSTART" is defined.
 * Older versions have BrsHw_UnlockCores() as unconditional callout.
 */
#if (BRSHW_SOURCECODE_TEMPLATE_VERSION < 0x0103) || ((BRSHW_SOURCECODE_TEMPLATE_VERSION == 0x0103) && (BRSHW_SOURCECODE_TEMPLATE_BUGFIX_VERSION < 0x13))
  #define BRSHW_CORES_AUTOSTART
#endif

/**********************************************************************************************************************
 *  DEFINITION + MACROS
 *********************************************************************************************************************/
#if defined (VLINKGEN_CFG_64BIT_MODE_ENABLED)
typedef uint64 BrsAddressType;
#else
typedef uint32 BrsAddressType;
#endif

#if defined (BRS_ENABLE_64BIT_INIT_PATTERN)
typedef uint64 BrsInitType;
#else
typedef uint32 BrsInitType;
#endif

/**********************************************************************************************************************
 *  GLOBAL VARIABLES
 *********************************************************************************************************************/
#define BRS_START_SEC_SHARED_VAR
#include "Brs_MemMap.h"
volatile brsMain_ResetReasonType brsMain_ResetReason;
#define BRS_STOP_SEC_SHARED_VAR
#include "Brs_MemMap.h"

/**********************************************************************************************************************
 *  GLOBAL CONST VARIABLES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL VARIABLES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL CONST VARIABLES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  PROTOTYPES OF GLOBAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  PROTOTYPES OF LOCAL FUNCTIONS
 *********************************************************************************************************************/
BRSMAIN_MEMINIT_FUNC_PREFIX void Brs_MemoryZeroInit(const vLinkGen_MemAreaSet *, BrsInitType, uint32);
#if !defined (BRS_DISABLE_MEMORY_INIT_GLOBALLY)
BRSMAIN_MEMINIT_FUNC_PREFIX void Brs_MemoryInit(const vLinkGen_RamMemAreaSet *, uint32);
#endif
#if !defined (BRSHW_ASM_MEMORY_ZERO_INIT_LOOP_AVAILABLE)
BRSMAIN_MEMINIT_FUNC_PREFIX void BrsHw_AsmMemoryZeroInitLoop_64bit(uint64 *, BrsAddressType, BrsInitType);
#endif
#if defined (BRSMAINSTARTUP_64BIT_MEMORYINIT) || defined (VLINKGEN_CFG_64BIT_MODE_ENABLED)
BRSMAIN_MEMINIT_FUNC_PREFIX void BrsHw_AsmMemoryInitLoop_64bit(uint64 *, uint64 *, BrsAddressType);
#endif

/**********************************************************************************************************************
 *  FUNCTION DEFINITIONS
 *********************************************************************************************************************/
#if defined (BRS_FIRST_EXECUTION_INSTANCE)
/* This code is only needed for the first instance in the system */
#define BRS_START_SEC_STARTUP_CODE
#include "Brs_MemMap.h"
/*****************************************************************************/
/* @brief      Unified routine for Pre Main() Startup.
 * @pre        Stack pointer needs to be initilialized in StartUpCode before.
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from assembler startup code.
 *             Called by all cores from the booting execution instance.
 *             Through Brs_MemMap.h, the API is mapped into section
 *             brsMainStartup, which allows a fix memory allocation.
 *****************************************************************************/
void Brs_PreMainStartup(void)
{
#if defined (BRSHW_EARLYINIT_AVAILABLE)
  BrsHwEarlyInitPowerOn();
#endif

#if (BRS_CPU_CORE_AMOUNT>1)
  if (BrsHw_GetCore() == BRSHW_INIT_CORE_ID)
#endif
  {
    brsMain_ResetReason = BrsHwGetResetReasonStartup();
  }

  Brs_ApplicationEntry();

  BrsMainExceptionStartup(); /* Illegal return from main */
}
#define BRS_STOP_SEC_STARTUP_CODE
#include "Brs_MemMap.h"
#endif /*BRS_FIRST_EXECUTION_INSTANCE*/

#define BRS_START_SEC_BRSAPPLENTRY_CODE
#include "Brs_MemMap.h"
/*****************************************************************************/
/* @brief      Unified application entry for Pre Main() Startup.
 * @pre        Stack pointer needs to be initilialized in StartUpCode before,
 *             brsMain_ResetReason needs to be initialized by booting execution
 *             instance (see Brs_PreMainStartup()).
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from Brs_PreMainStartup() of the booting
 *             execution instance or is the direct application entry of
 *             non-booting execution instances (e.g. FBL, with a previously
 *             running BootManager). Through Brs_MemMap.h, the API is mapped
 *             into section brsApplicationEntry, which allows a fix memory
 *             allocation. All APIs are called with current Core ID.
 *****************************************************************************/
void Brs_ApplicationEntry(void)
{
  uint32 coreID;

#if defined (BRSHW_APPLICATIONINIT_AVAILABLE)
  BrsHwApplicationInit();
#endif

  coreID = BrsHw_GetCore();

  BrsMain_MemoryInit_StageZero_Hook(coreID);

#if (VLINKGEN_CFG_NUM_ZERO_INIT_ZERO_GROUPS>1uL)
  /* vLinkGen_ZeroInit_Zero_GroupsSet contains vLinkGen VarSectionGroups, configured with Init Policy "ZERO_INIT" and Init Stage "ZERO" */
  Brs_MemoryZeroInit(&vLinkGen_ZeroInit_Zero_GroupsSet, BRS_INIT_PATTERN_AREAS, coreID);
#endif

#if (VLINKGEN_CFG_NUM_INIT_ZERO_GROUPS>1uL) && !defined (BRS_DISABLE_MEMORY_INIT_GLOBALLY)
  /* vLinkGen_Init_Zero_GroupsSet contains vLinkGen VarSectionGroups, configured with Init Policy "INIT" and Init Stage "ZERO" */
  Brs_MemoryInit(&vLinkGen_Init_Zero_GroupsSet, coreID);
#endif

  BrsMain_MemoryInit_StageHardReset_Hook(coreID);

  if (brsMain_ResetReason != BRSMAIN_RESET_SW)
  {
#if (VLINKGEN_CFG_NUM_ZERO_INIT_HARD_RESET_BLOCKS>1uL)
    /* vLinkGen_ZeroInit_HardReset_BlocksSet contains vLinkGen memory region blocks, configured with Init Stage "HARD_RESET_ONLY" */
    Brs_MemoryZeroInit(&vLinkGen_ZeroInit_HardReset_BlocksSet, BRS_INIT_PATTERN_HARDRESET_BLOCKS, coreID);
#endif

#if (VLINKGEN_CFG_NUM_ZERO_INIT_HARD_RESET_GROUPS>1uL)
    /* vLinkGen_ZeroInit_HardReset_GroupsSet contains vLinkGen VarSectionGroups, configured with Init Policy "ZERO_INIT" and Init Stage "HARD_RESET_ONLY" */
    Brs_MemoryZeroInit(&vLinkGen_ZeroInit_HardReset_GroupsSet, BRS_INIT_PATTERN_HARDRESET_AREAS, coreID);
#endif

#if (VLINKGEN_CFG_NUM_INIT_HARD_RESET_GROUPS>1uL) && !defined (BRS_DISABLE_MEMORY_INIT_GLOBALLY)
    /* vLinkGen_Init_HardReset_GroupsSet contains vLinkGen VarSectionGroups, configured with Init Policy "INIT" and Init Stage "HARD_RESET_ONLY" */
    Brs_MemoryInit(&vLinkGen_Init_HardReset_GroupsSet, coreID);
#endif
  }

  BrsMain_MemoryInit_StageOne_Hook(coreID);

#if (VLINKGEN_CFG_NUM_ZERO_INIT_ONE_BLOCKS>1uL)
  /* vLinkGen_ZeroInit_One_BlocksSet contains vLinkGen memory region blocks, configured with Init Stage "ONE" */
  Brs_MemoryZeroInit(&vLinkGen_ZeroInit_One_BlocksSet, BRS_INIT_PATTERN_BLOCKS, coreID);
#endif

#if (VLINKGEN_CFG_NUM_ZERO_INIT_ONE_GROUPS>1uL)
  /* vLinkGen_ZeroInit_One_GroupsSet contains vLinkGen VarSectionGroups, configured with Init Policy "ZERO_INIT" and Init Stage "ONE" */
  Brs_MemoryZeroInit(&vLinkGen_ZeroInit_One_GroupsSet, BRS_INIT_PATTERN_AREAS, coreID);
#endif

#if (VLINKGEN_CFG_NUM_INIT_ONE_GROUPS>1uL) && !defined (BRS_DISABLE_MEMORY_INIT_GLOBALLY)
  /* vLinkGen_Init_One_GroupsSet contains vLinkGen VarSectionGroups, configured with Init Policy "INIT" and Init Stage "ONE" */
  Brs_MemoryInit(&vLinkGen_Init_One_GroupsSet, coreID);
#endif

  BrsMain_MemoryInit_StageTwo_Hook(coreID);

#if (VLINKGEN_CFG_NUM_ZERO_INIT_TWO_GROUPS>1uL)
  /* vLinkGen_ZeroInit_Two_GroupsSet contains vLinkGen VarSectionGroups, configured with Init Policy "ZERO_INIT" and Init Stage "TWO" */
  Brs_MemoryZeroInit(&vLinkGen_ZeroInit_Two_GroupsSet, BRS_INIT_PATTERN_AREAS, coreID);
#endif

#if (VLINKGEN_CFG_NUM_INIT_TWO_GROUPS>1uL) && !defined (BRS_DISABLE_MEMORY_INIT_GLOBALLY)
  /* vLinkGen_Init_Two_GroupsSet contains vLinkGen VarSectionGroups, configured with Init Policy "INIT" and Init Stage "TWO" */
  Brs_MemoryInit(&vLinkGen_Init_Two_GroupsSet, coreID);
#endif

  BrsMain_MemoryInit_StageThree_Hook(coreID);

#if (VLINKGEN_CFG_NUM_ZERO_INIT_THREE_GROUPS>1uL)
  /* vLinkGen_ZeroInit_Three_GroupsSet contains vLinkGen VarSectionGroups, configured with Init Policy "ZERO_INIT" and Init Stage "THREE" */
  Brs_MemoryZeroInit(&vLinkGen_ZeroInit_Three_GroupsSet, BRS_INIT_PATTERN_AREAS, coreID);
#endif

#if (VLINKGEN_CFG_NUM_INIT_THREE_GROUPS>1uL) && !defined (BRS_DISABLE_MEMORY_INIT_GLOBALLY)
  /* vLinkGen_Init_Three_GroupsSet contains vLinkGen VarSectionGroups, configured with Init Policy "INIT" and Init Stage "THREE" */
  Brs_MemoryInit(&vLinkGen_Init_Three_GroupsSet, coreID);
#endif

  BrsMain_MemoryInit_StagePowerOn_Hook(coreID);

/* ----------------------------------------------------------------------------------------------------------------------------------------
   As there is no general condition available for POWER_ON initialization configured memory, these areas are always initialized as default.
   A project specific condition could be added here!

   Explanation from AR21-11 SWS_MemoryMapping:
     POWER_ON_CLEARED, used for variables that are not explicitly initialized (cleared) during normal start-up. Instead, these are cleared
     only after either a power on reset of the microcontroller or a power on reset of a battery backup memory itself after battery loss.
   ---------------------------------------------------------------------------------------------------------------------------------------- */
#if (VLINKGEN_CFG_NUM_ZERO_INIT_POWER_ON_GROUPS>1uL)
  /* vLinkGen_ZeroInit_PowerOn_GroupsSet contains vLinkGen VarSectionGroups, configured with Init Policy "ZERO_INIT" and Init Stage "POWER_ON" */
  Brs_MemoryZeroInit(&vLinkGen_ZeroInit_PowerOn_GroupsSet, BRS_INIT_PATTERN_AREAS, coreID);
#endif

#if (VLINKGEN_CFG_NUM_INIT_POWER_ON_GROUPS>1uL) && !defined (BRS_DISABLE_MEMORY_INIT_GLOBALLY)
  /* vLinkGen_Init_PowerOn_GroupsSet contains vLinkGen VarSectionGroups, configured with Init Policy "INIT" and Init Stage "POWER_ON" */
  Brs_MemoryInit(&vLinkGen_Init_PowerOn_GroupsSet, coreID);
#endif

  BrsMain_PreMainHook(coreID);

  main();

  BrsMainExceptionHandler(kBrsIllegalReturnFromMain, BRSERROR_MODULE_BRSMAIN, (uint16)(__LINE__));
}
#define BRS_STOP_SEC_BRSAPPLENTRY_CODE
#include "Brs_MemMap.h"

#if !defined (BRSHW_ASM_MEMORY_ZERO_INIT_LOOP_AVAILABLE)
/* This helper API is necessary, to get native 64-bit access on the HW (e.g. by getting "ldrd" and "strd" (or even "ldmia" and "stmia") assembly command on Arm Cortex-M platforms) reliable.
   That functionality is essential for memory areas with 8-byte aligned ECC! */
BRSMAIN_MEMINIT_FUNC_PREFIX void BrsHw_AsmMemoryZeroInitLoop_64bit(uint64 *memPtr64, BrsAddressType memAreaEnd, BrsInitType InitPattern)
{
  volatile uint64 InitPattern_64bit;

  InitPattern_64bit = InitPattern;
# if !defined (BRS_ENABLE_64BIT_INIT_PATTERN)
  InitPattern_64bit = (InitPattern_64bit<<32)|InitPattern;
# endif

  while ((BrsAddressType)memPtr64 < memAreaEnd)
  {
    *memPtr64 = InitPattern_64bit;
    memPtr64++;
  }
}
#endif /*!BRSHW_ASM_MEMORY_ZERO_INIT_LOOP_AVAILABLE*/

/*****************************************************************************/
/* @brief      Generic routine for RAM zeroing.
 * @pre        -
 * @param[in]  memAreaSet shall point to the first element of a vLinkGen_MemAreaSet struct array
 * @param[in]  InitPattern describes the pattern, to be used for the memory initialization
 * @param[in]  coreId shall describe the ID of the current CPU
 * @param[out] -
 * @return     -
 * @context    Function is called from Brs_PreMainStartup() to initialize memory ares,
 *             generated out of vLinkGen configuration
 *****************************************************************************/
BRSMAIN_MEMINIT_FUNC_PREFIX void Brs_MemoryZeroInit(const vLinkGen_MemAreaSet *memAreaSet, BrsInitType InitPattern, uint32 coreId)
{
  uint32 i;
#if !defined (BRSHW_ASM_MEMORY_ZERO_INIT_LOOP_AVAILABLE)
# if !defined (BRS_ENABLE_64BIT_INIT_PATTERN)
  volatile BrsAddressType *memPtr;
# endif
  volatile uint64 *memPtr64;
  volatile uint32 alignment;
#endif

  for (i=0; i<memAreaSet->Num; i++)
  {
    if ((memAreaSet->Areas[i].Core==coreId) && ((memAreaSet->Areas[i].End - memAreaSet->Areas[i].Start) > 0))
    {
#if defined (BRSHW_ASM_MEMORY_ZERO_INIT_LOOP_AVAILABLE)
      BrsHw_AsmMemoryZeroInitLoop(memAreaSet->Areas[i].Start, memAreaSet->Areas[i].End, InitPattern);

#else
      alignment = (uint32)memAreaSet->Areas[i].Alignment;
      if ((alignment != 0u) && (alignment != 4u) && (alignment != 8u))
      { /* Handling for the configured alignment is not supported yet */
        BrsMainExceptionHandler(kBrsMissingFunctionality, BRSERROR_MODULE_BRSMAINSTARTUP, (uint16)(__LINE__));
      }

# if !defined (BRS_ENABLE_64BIT_INIT_PATTERN)
      if ((alignment == 0u) || (alignment == 4u))
      { /* 32-bit/4Byte default alignment */
        memPtr = (BrsAddressType*)memAreaSet->Areas[i].Start;
        while ((BrsAddressType)memPtr < memAreaSet->Areas[i].End)
        {
          *memPtr = InitPattern;
          memPtr++;
        }
      }
      if (alignment == 8u)
# endif /*!BRS_ENABLE_64BIT_INIT_PATTERN*/
      { /* 64-bit/8Byte alignment or 64-Bit Init Pattern enabled */
        memPtr64 = (uint64*)memAreaSet->Areas[i].Start;
        BrsHw_AsmMemoryZeroInitLoop_64bit((uint64*)memPtr64, memAreaSet->Areas[i].End, InitPattern);
      }
#endif /*else BRSHW_ASM_MEMORY_ZERO_INIT_LOOP_AVAILABLE*/
    }
  }
}

/* To prevent issues with not 8-Byte aligned memory areas, the 64-bit memory initialization is disabled per default.
   If you want to use it, take care about the alignment and enable BRSMAINSTARTUP_64BIT_MEMORYINIT.
   Or enable the 64-bit addressing in vLinkGen.
   For ECC-RAM with 8-Byte aligned ECC, the memory should be handled by ZeroInit in advance */
#if defined (BRSMAINSTARTUP_64BIT_MEMORYINIT) || defined (VLINKGEN_CFG_64BIT_MODE_ENABLED)
/* This helper API is necessary, to get native 64-bit access on the HW (e.g. by getting "ldrd" and "strd" (or even "ldmia" and "stmia") assembly commands on Arm Cortex-M platforms) reliable.
   That functionality is essential for memory areas with 8-byte aligned ECC! */
BRSMAIN_MEMINIT_FUNC_PREFIX void BrsHw_AsmMemoryInitLoop_64bit(uint64 *memPtr64, uint64 *romPtr64, BrsAddressType memAreaEnd)
{
  while ((uint64)romPtr64 < memAreaEnd)
  {
    *memPtr64 = *romPtr64;
    memPtr64++;
    romPtr64++;
  }
}
#endif /*BRSMAINSTARTUP_64BIT_MEMORYINIT || VLINKGEN_CFG_64BIT_MODE_ENABLED*/

#if !defined (BRS_DISABLE_MEMORY_INIT_GLOBALLY)
/*****************************************************************************/
/* @brief      Generic routine for ROM to RAM initialization.
 * @pre        -
 * @param[in]  memAreasSet shall point to the first element of a vLinkGen_RamMemAreaSet struct array
 * @param[in]  coreId shall describe the ID of the current CPU
 * @param[out] -
 * @return     -
 * @context    Function is called from Brs_PreMainStartup() to initialize memory ares,
 *             generated out of vLinkGen configuration
 *****************************************************************************/
BRSMAIN_MEMINIT_FUNC_PREFIX void Brs_MemoryInit(const vLinkGen_RamMemAreaSet *memAreasSet, uint32 coreId)
{
#if !defined (VLINKGEN_CFG_64BIT_MODE_ENABLED)
  volatile uint32 *memPtr32;
  volatile uint32 *romPtr32;
#endif
  uint32 i;
  volatile uint32 alignment;

#if defined (BRSMAINSTARTUP_64BIT_MEMORYINIT) || defined (VLINKGEN_CFG_64BIT_MODE_ENABLED)
  volatile uint64 *memPtr64;
  volatile uint64 *romPtr64;
#endif

  for (i=0; i<memAreasSet->Num; i++)
  {
    if ((memAreasSet->Areas[i].Core==coreId) && ((memAreasSet->Areas[i].Romend - memAreasSet->Areas[i].Romstart) > 0))
    {
      if ((memAreasSet->Areas[i].End - memAreasSet->Areas[i].Start) < (memAreasSet->Areas[i].Romend - memAreasSet->Areas[i].Romstart))
      { /* Defined size in RAM is smaller than the ROM size -> data will not fit */
        BrsMainExceptionHandler(kBrsIllegalParameter, BRSERROR_MODULE_BRSMAINSTARTUP, (uint16)(__LINE__));
      }

      alignment = (uint32)memAreasSet->Areas[i].Alignment;
      if ((alignment != 0u) && (alignment != 4u) && (alignment != 8u))
      { /* Handling for the configured alignment is not supported yet */
        BrsMainExceptionHandler(kBrsMissingFunctionality, BRSERROR_MODULE_BRSMAINSTARTUP, (uint16)(__LINE__));
      }

#if defined (VLINKGEN_CFG_64BIT_MODE_ENABLED)
      /* 64-Bit Init Pattern enabled */
      memPtr64 = (uint64*)memAreasSet->Areas[i].Start;
      romPtr64 = (uint64*)memAreasSet->Areas[i].Romstart;
      BrsHw_AsmMemoryInitLoop_64bit((uint64*)memPtr64, (uint64*)romPtr64, memAreasSet->Areas[i].Romend);

#else
# if defined (BRSMAINSTARTUP_64BIT_MEMORYINIT)
      if ((alignment == 0u) || (alignment == 4u))
      { /* 32-bit/4Byte default alignment */
# endif

        memPtr32 = (uint32*)memAreasSet->Areas[i].Start;
        romPtr32 = (uint32*)memAreasSet->Areas[i].Romstart;

        while ((BrsAddressType)romPtr32 < memAreasSet->Areas[i].Romend)
        {
          *memPtr32 = *romPtr32;
          memPtr32++;
          romPtr32++;
        }

# if defined (BRSMAINSTARTUP_64BIT_MEMORYINIT)
      }
      if (alignment == 8u)
      { /* 64-bit/8Byte alignment */
        memPtr64 = (uint64*)memAreasSet->Areas[i].Start;
        romPtr64 = (uint64*)memAreasSet->Areas[i].Romstart;
        BrsHw_AsmMemoryInitLoop_64bit((uint64*)memPtr64, (uint64*)romPtr64, memAreasSet->Areas[i].Romend);
      }
# endif /*BRSMAINSTARTUP_64BIT_MEMORYINIT*/
#endif /*VLINKGEN_CFG_64BIT_MODE_ENABLED*/
    }
  }
}
#endif /*!BRS_DISABLE_MEMORY_INIT_GLOBALLY*/

#if !defined (VVIRTUALTARGET)
# if defined (BRS_FIRST_EXECUTION_INSTANCE)
/* This code is only needed for the first instance in the system */
#define BRS_START_SEC_STARTUP_CODE
#include "Brs_MemMap.h"
/*****************************************************************************/
/* @brief      This is the central exeption/issue handler of BRS, in startup
 *             phase.
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    This function implements an endless loop. The recommendation is
 *             to set a breakpoint on top of this function to see if any check
 *             has failed during the startup code execution.
 *****************************************************************************/
void BrsMainExceptionStartup(void)
{
  volatile uint8 BrsMainStartup_Continue;
  BrsMainStartup_Continue = 0;
  while (BrsMainStartup_Continue == 0)
  {
    /* Set BrsMainStartup_Continue to 1 to continue here.
     *  If the debugger is not able to show the stack properly, this mechanism can be used to find the
     *  source of the exception. */
  }
}
#define BRS_STOP_SEC_STARTUP_CODE
#include "Brs_MemMap.h"
# endif /*BRS_FIRST_EXECUTION_INSTANCE*/
#endif /*VVIRTUALTARGET*/
