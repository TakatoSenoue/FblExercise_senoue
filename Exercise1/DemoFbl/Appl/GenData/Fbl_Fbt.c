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
 *              File: Fbl_Fbt.c
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


/* Includes **********************************************************************************************************/
#include "fbl_inc.h"

/* Global data *******************************************************************************************************/
V_MEMROM0 V_MEMROM1_FAR tFlashBlock V_MEMROM2_FAR FlashBlock[] =
{
  {
    0x00010000u /*  Flash Bank A Block8 (32KB)  */ , 
    0x00017FFFu, 
    kMioDeviceFlash
  }, 
  {
    0x00018000u /*  Flash Bank A Block9 (32KB)  */ , 
    0x0001FFFFu, 
    kMioDeviceFlash
  }, 
  {
    0x00020000u /*  Flash Bank A Block10 (32KB)  */ , 
    0x00027FFFu, 
    kMioDeviceFlash
  }, 
  {
    0x00028000u /*  Flash Bank A Block11 (32KB)  */ , 
    0x0002FFFFu, 
    kMioDeviceFlash
  }, 
  {
    0x00030000u /*  Flash Bank A Block12 (32KB)  */ , 
    0x00037FFFu, 
    kMioDeviceFlash
  }, 
  {
    0x00038000u /*  Flash Bank A Block13 (32KB)  */ , 
    0x0003FFFFu, 
    kMioDeviceFlash
  }, 
  {
    0x00040000u /*  Flash Bank A Block14 (32KB)  */ , 
    0x00047FFFu, 
    kMioDeviceFlash
  }, 
  {
    0x00048000u /*  Flash Bank A Block15 (32KB)  */ , 
    0x0004FFFFu, 
    kMioDeviceFlash
  }, 
  {
    0x00050000u /*  Flash Bank A Block16-17 (64KB)  */ , 
    0x0005FFFFu, 
    kMioDeviceFlash
  }, 
  {
    0x00060000u /*  Flash Bank A Block18-19 (64KB)  */ , 
    0x0006FFFFu, 
    kMioDeviceFlash
  }, 
  {
    0x00070000u /*  Flash Bank A Block20-21 (64KB)  */ , 
    0x0007FFFFu, 
    kMioDeviceFlash
  }, 
  {
    0x00080000u /*  Flash Bank A Block22-23 (64KB)  */ , 
    0x0008FFFFu, 
    kMioDeviceFlash
  }, 
  {
    0x00090000u /*  Flash Bank A Block24-25 (64KB)  */ , 
    0x0009FFFFu, 
    kMioDeviceFlash
  }, 
  {
    0x01000000u /*  Extended User Area (32KB)  */ , 
    0x01007FFFu, 
    kMioDeviceFlash
  }
};
V_MEMROM0 V_MEMROM1_FAR vuint8 V_MEMROM2_FAR kNrOfFlashBlock = sizeof(FlashBlock) / sizeof(FlashBlock[0]);

V_MEMROM0 V_MEMROM1_FAR tMemDrv V_MEMROM2_FAR memDrvLst[] =
{
  {
    FlashDriver_InitSync, 
    FlashDriver_DeinitSync, 
    FlashDriver_REraseSync, 
    FlashDriver_RWriteSync, 
    FlashDriver_RReadSync, 
    0x0100u /*  Segment Size  */ , 
    0xFFu /*  Erased Value  */ , 
    FALSE /*  Init Hook  */ , 
    FALSE /*  Deinit Hook  */ , 
    FALSE /*  Erase Hook  */ , 
    FALSE /*  Write Hook  */ , 
    FALSE /*  Read Hook  */ 
  }
};
V_MEMROM0 V_MEMROM1_FAR vuint8 V_MEMROM2_FAR kNrOfMemDrv = sizeof(memDrvLst) / sizeof(memDrvLst[0]);

/* Try to check consistency between memory device driver
 * header files (e.g. flashdrv.h) and Cfg5 configuration */
#if defined( FLASH_SEGMENT_SIZE )
# if ( FLASH_SEGMENT_SIZE != 256u )
#  error "Consistency check failed! Adjust Cfg5 configuration!"
# endif
#endif

#if defined( FBL_FLASH_DELETED )
# if ( FBL_FLASH_DELETED != 0xFFu )
#  error "Consistency check failed! Adjust Cfg5 configuration!"
# endif
#endif



