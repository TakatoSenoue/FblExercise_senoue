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
 *              File: Fbl_Lbt.h
 *   Generation Time: 2026-02-10 09:18:58
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


#if !defined(__FBL_LBT_H__)
#define __FBL_LBT_H__

/* Includes **********************************************************************************************************/
#include "Platform_Types.h"

/* Defines ***********************************************************************************************************/
#define FBL_LBT_DISABLE_REPROGRAMMABLE_LBT 
#define FBL_LBT_ENABLE_MANDATORY_TYPE 
#define FBL_LBT_ENABLE_BLOCK_INDEX 
#define FBL_LBT_ENABLE_BM_HEADER_ADDRESS 
#define FBL_LBT_ENABLE_MAX_PROG_ATTEMPTS 
#define FBL_LBT_ENABLE_VERIFY_INPUT 
#define FBL_LBT_ENABLE_VERIFY_PROCESSED 
#define FBL_LBT_ENABLE_VERIFY_PIPELINED 
#define FBL_LBT_ENABLE_VERIFY_OUTPUT 
#define FBL_LBT_ENABLE_FILE_NAME 
#define FBL_LBT_DEMOAPPL_BLOCK_NUMBER      0u 
#define FBL_LBT_DEMOAPPL_BLOCK_INDEX       0x00000000u 
#define FBL_LBT_DEMOAPPL_FILENAME_SIZE     0u 
#define FBL_LBT_BLOCK_COUNT                1u 
#define kNrOfValidationBytes               1u 
#define FBL_LBT_MAGIC_FLAG                 0xA51413E2u 

/* Macro to determine if the block table is valid */
#define IsLogicalBlockTableValid()        (FblLogicalBlockTable.magicFlag == FBL_LBT_MAGIC_FLAG)

/* Compatibility defines */
#define FBL_MTAB_DEMOAPPL_BLOCK_NUMBER FBL_LBT_DEMOAPPL_BLOCK_NUMBER 
#define FBL_MTAB_DEMOAPPL_BLOCK_INDEX  FBL_LBT_DEMOAPPL_BLOCK_INDEX 
#define FBL_MTAB_NO_OF_BLOCKS          FBL_LBT_BLOCK_COUNT 
#define FBL_MTAB_MAGIC_FLAG            FBL_LBT_MAGIC_FLAG 


/* Typedefs **********************************************************************************************************/
typedef vuint8 tFblLbtBlockNr; 
typedef boolean tFblLbtMandatoryType; 
typedef vuint32 tFblLbtBlockIndex; 
typedef vuint16 tFblLbtMaxProgAttempts; 
typedef vsint8 tFblLbtFileName; 
typedef vuint32 tFblLbtFileNameSize; 
typedef vuint32 tFblLbtMagicFlag; 
typedef vuint8 tFblLbtAssignFlags; 
typedef vuint8 tFblLbtBlockCount; 


/* Entry type of logical block table */
typedef struct tBlockDescriptorTag {
  tFblLbtBlockNr blockNr; /*  Number of logical block  */ 
  tFblLbtMandatoryType mandatoryType; /*  Optional or mandatory block  */ 
  tFblLbtBlockIndex blockIndex;
  tFblAddress blockStartAddress; /*  Start address of current block  */ 
  tFblLength blockLength; /*  Block length in bytes  */ 
  tFblAddress bmHeaderAddress; /*  BM Header Address  */ 
  tFblLbtMaxProgAttempts maxProgAttempts; /*  Maximum number of reprogramming attempts  */ 
  tExportFct verifyInput; /*  Input Verification  */ 
  tExportFct verifyProcessed; /*  Processed Verification  */ 
  tExportFct verifyPipelined; /*  Pipelined Verification  */ 
  tExportFct verifyOutput; /*  Output Verification  */ 
   V_MEMROM1 tFblLbtFileName V_MEMROM2 V_MEMROM3 * fileName; /*  File Name  */ 
  tFblLbtFileNameSize fileNameSize; /*  File Name Size  */ 
} tBlockDescriptor;

/* The logical block table describes the memory layout of logical blocks */
typedef struct tLogicalBlockTableTag {
  tFblLbtMagicFlag magicFlag; /*  Value of FBL_LBT_MAGIC_FLAG - Indicates the existence of the table  */ 
  tFblLbtAssignFlags assignFlags[kNrOfValidationBytes]; /*  Disposability bit field (mandatory/optional)  */ 
  tFblLbtBlockCount noOfBlocks; /*  Number of configured logical blocks  */ 
  tBlockDescriptor logicalBlock[FBL_LBT_BLOCK_COUNT];
} tLogicalBlockTable;

/* Global data *******************************************************************************************************/
V_MEMROM0 extern V_MEMROM1 tLogicalBlockTable V_MEMROM2 FblLogicalBlockTable;

#endif /* __FBL_LBT_H__ */
