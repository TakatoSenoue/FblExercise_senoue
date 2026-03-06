/***********************************************************************************************************************
 *  FILE DESCRIPTION
 *  ------------------------------------------------------------------------------------------------------------------*/
/** \file
 *  \brief         Include File
 *
 *  --------------------------------------------------------------------------------------------------------------------
 *  COPYRIGHT
 *  --------------------------------------------------------------------------------------------------------------------
 *  \par Copyright
 *  \verbatim
 *  Copyright (c) 2025 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 */
/**********************************************************************************************************************/

/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Version    Date        Author  Change Id        Description
 *  --------------------------------------------------------------------------------------------------------------------
 *  05.00.00   2019-03-08  visach  ESCAN00102413    Remove generation tool dependent includes for memory tables
 *  05.01.00   2019-08-13  vistbe  FBL-370          Added support for generic MCMP slave
 *  06.00.00   2020-03-02  vistbe  FBL-949          Use ExecutionInstance define to exclude non relevant includes
 *                                 ESCAN00104557    Bootmanager modules are not included
 *  06.01.00   2020-05-14  vistbe  FBL-673          Changed include order for FblLib_SecBoot
 *  06.02.00   2020-05-14  vistbe  FBL-2021         Moved inlcude of vOtaM
 *  06.03.00   2021-12-22  vishor  FBL-4110         Encapsulate Sec_Types include with SecureBoot
 *  06.04.00   2022-04-01  visrie  FBL-1904         Add (automatic) support for additional driver includes
 *  06.05.00   2022-04-13  vismix  FBL-4950         Add include for DrvSwap
 *  06.06.00   2023-09-26  vistbe  FBL-6997         Update OTA related includes
 *  06.07.00   2023-08-01  vismix  FBL-5781         Create component for virtual flash driver
 *  06.08.00   2023-10-11  visrie  ESCAN00115473    Compiler error: tFlashParam_XD1/XD2/XD3 is not defined
 *                                 ESCAN00115573    Compiler error: Include file flashrom_xd1.h, flashdrv_xd1.h,
 *                                                   fbl_flio_xd1.h or EepMgr_Inc.h might be missing
 *  06.09.00   2023-11-23  visrie  FBL-7852         Encapsulate main flashdrv and flio for automatic include
 *  06.10.00   2024-08-29  viswmo  FBL-9163         Add target-based BmHdrHeader search for updater
 *  06.11.00   2025-02-18  virchl  FBL-10116        Add fbl logger include
 **********************************************************************************************************************/

#ifndef FBL_INC_H
#define FBL_INC_H

/***********************************************************************************************************************
 *  VERSION
 **********************************************************************************************************************/

/* ##V_CFG_MANAGEMENT ##CQProject : FblInc CQComponent : Implementation */
#define FBLINC_VERSION          0x0611u
#define FBLINC_RELEASE_VERSION  0x00u

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/

/* Version check file */
#include "v_ver.h"
#include "v_cfg.h"
#if defined( VGEN_GENY )
# include "v_inc.h"
#endif /* VGEN_GENY */

/* Include BM config to have information about the configured instance */
#include "FblBm_Cfg.h"

#if defined( FBLBM_INSTANCE_BOOTLOADER ) ||\
    defined( FBLBM_INSTANCE_APPLICATION )
/* Security module */
#  include "SecM.h"
#else
#  if defined( FBLBM_ENABLE_SECURE_BOOT )
#   include "Sec_Types.h"
#  endif /* FBLBM_ENABLE_SECURE_BOOT */
#endif /* FBLBM_INSTANCE_* */

/* Include FBL def to get basic definitions and FBL configuration */
#include "fbl_def.h"

/* Logical block table types and definitions */
# include "Fbl_Lbt.h"
#  include "fbl_lbt_access.h"

#if defined( FBLBM_INSTANCE_BOOTLOADER ) ||\
    defined( FBLBM_INSTANCE_APPLICATION) ||\
    defined( FBLBM_INSTANCE_UPDATER )
#endif /* FBLBM_INSTANCE_* */

/* Basic types and definitions */


#include "fbl_wd.h"

#include "iotypes.h"

/* Flash block table */
#include "Fbl_Fbt.h"

#if defined( kMioDeviceFlash )
# include "flashdrv.h"
#endif
#if defined( kMioDeviceFlash_XD1 )
# include "flashdrv_xd1.h"
#endif
#if defined( kMioDeviceFlash_XD2 )
# include "flashdrv_xd2.h"
#endif
#if defined( kMioDeviceFlash_XD3 )
# include "flashdrv_xd3.h"
#endif

#if defined( FBL_DIAG_ENABLE_FLASHDRV_ROM )
# include "FlashRom.h"
#endif

#include "fbl_mio.h"
#if defined( kMioDeviceFlash )
# include "fbl_flio.h"
#endif
#if defined( kMioDeviceFlash_XD1 )
# include "fbl_flio_xd1.h"
#endif
#if defined( kMioDeviceFlash_XD2 )
# include "fbl_flio_xd2.h"
#endif
#if defined( kMioDeviceFlash_XD3 )
# include "fbl_flio_xd3.h"
#endif
#if defined( kMioDeviceFlash_D1_Virtual ) || defined ( kMioDeviceFlash_D2_Virtual ) || defined ( kMioDeviceFlash_D3_Virtual )
# include "fbl_virtualio.h"
#endif


/* Application vector table */
#include "applvect.h"

/* API of the communication wrapper */
#  if defined( FBLBM_INSTANCE_BOOTLOADER ) || \
      defined( FBLBM_INSTANCE_APPLICATION ) || \
    ( defined( FBLBM_INSTANCE_UPDATER ) && defined( FBL_ENABLE_RESPONSE_AFTER_RESET ) )
#   include "fbl_cw.h"
#  endif

/* Hardware dependent header file */
#include "fbl_hw.h"

#if defined( FBL_ENABLE_WRAPPER_NV )
# include "WrapNv_inc.h"
#endif

# include "fbl_nvpattern.h"

#if defined( kMioDeviceRam )
/* Memory driver for RAM access */
# include "fbl_ramio_inc.h"
#endif
#if defined( kMioDeviceProtected )
/* Pseudo memory driver for protected memory areas */
# include "fbl_protio.h"
#endif

#if defined( FBLBM_INSTANCE_BOOTLOADER ) ||\
    defined( FBLBM_INSTANCE_APPLICATION )

/* Diagnostic layer */

#  include "fbl_diag.h"

#  include "fbl_mem.h"
#endif /* FBLBM_INSTANCE_* */

/* Application call-back functions */
#if defined( FBL_ENABLE_COMMON_DATA )
# include "comdat.h"
#endif /* FBL_ENABLE_COMMON_DATA */

#if defined( FBLBM_ENABLE_SECURE_BOOT )
# include "fbl_secboot.h"
#endif

#if defined( FBL_ENABLE_HARDWARE_SWAP )
# include "fbl_swap.h"
#endif



#if defined( FBLBM_INSTANCE_BOOTLOADER ) ||\
    defined( FBLBM_INSTANCE_APPLICATION )
# include "fbl_ap.h"
#endif /* FBLBM_INSTANCE_* */

#include "fbl_apwd.h"

#if defined( FBLBM_INSTANCE_BOOTLOADER ) ||\
    defined( FBLBM_INSTANCE_APPLICATION )
#  include "fbl_apdi.h"
#  include "fbl_apnv.h"
#endif /* FBLBM_INSTANCE_* */





#if defined( FBLBM_INSTANCE_BOOTLOADER ) ||\
    defined( FBLBM_INSTANCE_APPLICATION)
#  include "fbl_main.h"
#endif /* FBLBM_INSTANCE_* */

#if defined (FBLBM_INSTANCE_UPDATER)
# include "upd_ap.h"
# include "upd_main.h"
#endif /* FBLBM_INSTANCE_UPDATER */

#include "bm_main.h"

#endif /* FBL_INC_H */

/***********************************************************************************************************************
 *  END OF FILE: FBL_INC.H
 **********************************************************************************************************************/
