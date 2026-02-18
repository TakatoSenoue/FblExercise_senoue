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
 *            Module: Det
 *           Program: FBL Vector SLP3 (FBL_Vector_SLP3)
 *          Customer: Vector Japan Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F7016493AFP-C
 *    License Scope : The usage is restricted to CBD1900263_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Det_Private_Cfg.h
 *   Generation Time: 2026-02-17 14:09:27
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

 
#if !defined(DET_PRIVATE_CFG_H)
#define DET_PRIVATE_CFG_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: SIZEOF DATA TYPES
**********************************************************************************************************************/
/** 
  \defgroup  DetPCSizeOfTypes  Det SizeOf Types (PRE_COMPILE)
  \brief  These type definitions are used for the SizeOf information.
  \{
*/ 
/**   \brief  value based type definition for Det_SizeOfErrorHookTable */
typedef uint8 Det_SizeOfErrorHookTableType;

/**   \brief  value based type definition for Det_SizeOfRuntimeErrorCalloutTable */
typedef uint8 Det_SizeOfRuntimeErrorCalloutTableType;

/**   \brief  value based type definition for Det_SizeOfTransientFaultCalloutTable */
typedef uint8 Det_SizeOfTransientFaultCalloutTableType;

/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  DetPCIterableTypes  Det Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate Det_ErrorHookTable */
typedef uint8_least Det_ErrorHookTableIterType;

/**   \brief  type used to iterate Det_RuntimeErrorCalloutTable */
typedef uint8_least Det_RuntimeErrorCalloutTableIterType;

/**   \brief  type used to iterate Det_TransientFaultCalloutTable */
typedef uint8_least Det_TransientFaultCalloutTableIterType;

/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  DetPCRootPointerTypes  Det Root Pointer Types (PRE_COMPILE)
  \brief  These type definitions are used to point from the config root to symbol instances.
  \{
*/ 
/**   \brief  type used to point to Det_ErrorHookTable */
typedef P2CONST(Det_CalloutTableType, TYPEDEF, DET_CONST) Det_ErrorHookTablePtrType;

/**   \brief  type used to point to Det_RuntimeErrorCalloutTable */
typedef P2CONST(Det_CalloutTableType, TYPEDEF, DET_CONST) Det_RuntimeErrorCalloutTablePtrType;

/**   \brief  type used to point to Det_TransientFaultCalloutTable */
typedef P2CONST(Det_CalloutTableType, TYPEDEF, DET_CONST) Det_TransientFaultCalloutTablePtrType;

/** 
  \}
*/ 

/** 
  \defgroup  DetPCRootValueTypes  Det Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in Det_PCConfig */
typedef struct sDet_PCConfigType
{
  uint8 Det_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Det_PCConfigType;

typedef Det_PCConfigType Det_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/** 
  \}
*/ 

 

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  Det_ErrorHookTable
**********************************************************************************************************************/
/** 
  \var    Det_ErrorHookTable
  \brief  List of functions to be called by the Default Error Tracer in context of each call of Det_ReportError
*/ 
#define DET_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Det_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Det_CalloutTableType, DET_CONST) Det_ErrorHookTable[1];
#define DET_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Det_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Det_RuntimeErrorCalloutTable
**********************************************************************************************************************/
/** 
  \var    Det_RuntimeErrorCalloutTable
  \brief  List of callout functions for the corresponding runtime error handler.
*/ 
#define DET_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Det_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Det_CalloutTableType, DET_CONST) Det_RuntimeErrorCalloutTable[1];
#define DET_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Det_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Det_TransientFaultCalloutTable
**********************************************************************************************************************/
/** 
  \var    Det_TransientFaultCalloutTable
  \brief  List of callout functions for the corresponding transient fault handler.
*/ 
#define DET_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Det_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Det_CalloutTableType, DET_CONST) Det_TransientFaultCalloutTable[1];
#define DET_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Det_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

 

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


#endif /* DET_PRIVATE_CFG_H */
