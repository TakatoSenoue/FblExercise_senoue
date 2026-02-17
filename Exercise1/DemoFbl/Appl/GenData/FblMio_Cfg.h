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
 *            Module: FblMio
 *           Program: FBL Vector SLP3 (FBL_Vector_SLP3)
 *          Customer: Vector Japan Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F7016493AFP-C
 *    License Scope : The usage is restricted to CBD1900263_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: FblMio_Cfg.h
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


#ifndef FBLMIO_CFG_H
#define FBLMIO_CFG_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/

#include "iotypes.h"

/***********************************************************************************************************************
 *  DEFINES
 **********************************************************************************************************************/

/* If the HIS wrapper components are not present, the defines accessed by the MIO config file are not present as well */
#if !defined( MEM_30_FBLHIS_NR_OF_INSTANCES )
# define MEM_30_FBLHIS_NR_OF_INSTANCES    0u
#endif /* MEM_30_FBLHIS_NR_OF_INSTANCES */

#if !defined( VMEM_30_FBLHIS_NR_OF_INSTANCES )
# define VMEM_30_FBLHIS_NR_OF_INSTANCES   0u
#endif /* VMEM_30_FBLHIS_NR_OF_INSTANCES */

/* General configuration defines */
#define FBL_MIO_USECASE                    FBL_MIO_USECASE_HIS_ONLY 
#define FBL_MIO_DISABLE_BLANK_CHECK_API 
#define FBL_MIO_ENABLE_FLASH_BLOCK_CACHING 
#define FBL_MIO_ENABLE_MEMINFO_CACHING 
#define FBL_MIO_DISABLE_USER_INIT_FUNCTION 
#define FBL_MIO_DISABLE_MEM_DRIVER_READY 

/* Compabibility defines */
#define FBL_MIO_CURRENT_ADDR_AREA      0u 
#define FblMio_RemapRetVal(x)          (x) 
#define FblMio_GetMemDeviceByOpInfo(x) FblMio_MemInfoGetHwId(x) 



/* Read/Write/Erase defines */
#define FblMio_Read(a, b, c, d)     (memDrvLst[FblMio_MemInfoGetHwId(c)].read(d, b, a)) 
#define FblMio_Write(a, b, c, d)    (memDrvLst[FblMio_MemInfoGetHwId(c)].write(d, b, a)) 
#define FblMio_Erase(a, b, c, d)    (memDrvLst[FblMio_MemInfoGetHwId(c)].erase(b, a)) 
#define FblMio_BlankChk(a, b, c, d) (FblMio_BlankChkHis(a, b, c)) 

/* Memory info data structure access defines */
#define FblMio_MemInfoGetSectorSize(x)    ((x)->sectorSize) 
#define FblMio_MemInfoGetPageSize(x)      ((x)->pageSize) 
#define FblMio_MemInfoGetPhysStartAddr(x) ((x)->physicalStartAddress) 
#define FblMio_MemInfoGetVirtStartAddr(x) ((x)->virtualStartAddress) 
#define FblMio_MemInfoGetMaxOffset(x)     ((x)->maxOffset) 
#define FblMio_MemInfoGetHwId(x)          ((x)->hwId) 
#define FblMio_OpInfoGetMemInfo(x)        ((x)) 

#define FblMio_MemInfoSetSectorSize(x, y)    ((x)->sectorSize = (y)) 
#define FblMio_MemInfoSetPageSize(x, y)      ((x)->pageSize = (y)) 
#define FblMio_MemInfoSetPhysStartAddr(x, y) ((x)->physicalStartAddress = (y)) 
#define FblMio_MemInfoSetVirtStartAddr(x, y) ((x)->virtualStartAddress = (y)) 
#define FblMio_MemInfoSetMaxOffset(x, y)     ((x)->maxOffset = (y)) 
#define FblMio_MemInfoSetHwId(x, y)          ((x)->hwId = (y)) 
#define FblMio_OpInfoSetMemInfo(x, y)        ((x) = (y)) 

/* Variant handling defines/macros */
#define FBLMIO_VARIANT_NROFAVAILABLEVARIANTS 1u 
#define FBLMIO_VARIANT_ID_STARTUP            0u 


/***********************************************************************************************************************
 *  TYPEDEFS
 **********************************************************************************************************************/
/* General types */
typedef IO_PositionType    tFblMioAddress;
typedef IO_SizeType        tFblMioLength;
typedef vuint8             tFblMioAddressArea;
typedef vuint8             tFblMioVariantId;

/* Compatibility types */
typedef vuint8             tFblMioHwId;

typedef struct
{
   tFblMioLength       sectorSize;
   tFblMioLength       pageSize;
   tFblMioAddress      physicalStartAddress;
   tFblMioAddress      virtualStartAddress;
   tFblMioLength       maxOffset;
   tFblMioHwId         hwId;
} tFblMioMemoryInfo;

/* For HIS-only use-case, memory info type is same as memory operation type */
typedef tFblMioMemoryInfo  tFblMioOpInfo;


/***********************************************************************************************************************
 *  GLOBAL DATA
 **********************************************************************************************************************/
#define FBLMIO_START_SEC_CONST
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
/* Dummy constant HIS-only use-case as completely empty C-file can cause compiler warnings */
V_MEMROM0 extern V_MEMROM1 vuint8 V_MEMROM2 kFblMioDummyConstant;
#define FBLMIO_STOP_SEC_CONST
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/***********************************************************************************************************************
 *  FUNCTION PROTOTYPES
 **********************************************************************************************************************/
#define FBLMIO_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define FBLMIO_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#endif /* FBLMIO_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: FblMio_Cfg.h
 *********************************************************************************************************************/

