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
 *            Module: WrapNv
 *           Program: FBL Vector SLP3 (FBL_Vector_SLP3)
 *          Customer: Vector Japan Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F7016493AFP-C
 *    License Scope : The usage is restricted to CBD1900263_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: WrapNv_Cfg.h
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

#if !defined (WRAPNV_CFG_H)
# define WRAPNV_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

# include "Std_Types.h"
/**********************************************************************************************************************
 *  CONFIGURATION DEFINES
 *********************************************************************************************************************/

#define WRAPNV_DISABLE_NVMAPIS_HANDLING 
#define WRAPNV_DISABLE_NVM_MULTIBLOCK_HANDLING 


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/*******************************************************************************
 *                                 ADDRESS        HANDLE         DESCRIPTION
 *   
 *   Memory Layout
 *   |
 *   +-- ProgReqFlag              0xFEF03008     1              Programming indication set by application software
 *   |
 *   +-- ResetResponseFlag        0xFEF03009     2              Flag if a response to a request received before response is required
 *   |
 *   +-- ApplValidity             0xFEF0300A     3              Application validity flag
 *   |
 *   +-- ValidityFlags            0xFEF0300B     4              Logical block validity information
 *   |
 *   +-- SecAccessDelayFlag       0xFEF0300C     5              Security Access delay flag
 *   |
 *   +-- SecAccessInvalidCount    0xFEF0300D     6              Invalid security access attempt counter
 *   |
 *   +-- DcmDslRxTesterSourceAddr 0xFEF0300E     7              Diagnostic connection tester source address to synchronize address between application and bootloader
 *   |
 *   +-- 3 x MetaData                                           Process data stored for each logical block
 *       |
 *       +-- Fingerprint          0xFEF03010     8              Fingerprint (programming date and tester serial number)
 *       |
 *       +-- ProgCounter          0xFEF03019     9              Successful reprogramming attempts
 *       |
 *       +-- ProgAttempts         0xFEF0301B     10             Reprogramming attempts
 *******************************************************************************/

/** General defines *********************************************************** */
#define WRAPNV_USECASE_DRVEEP
#define WRAPNV_MAINFUNCTION_POLLING          STD_OFF
#define WRAPNV_DEV_ERROR_REPORT              STD_ON

/** Size defines ************************************************************** */
#define kEepSizeProgReqFlag                  0x01u
#define kEepSizeResetResponseFlag            0x01u
#define kEepSizeApplValidity                 0x01u
#define kEepSizeValidityFlags                0x01u
#define kEepSizeSecAccessDelayFlag           0x01u
#define kEepSizeSecAccessInvalidCount        0x01u
#define kEepSizeDcmDslRxTesterSourceAddr     0x02u
#define kEepSizeFingerprint                  0x09u
#define kEepSizeProgCounter                  0x02u
#define kEepSizeProgAttempts                 0x02u
#define kEepSizeMetaData                     (kEepSizeFingerprint + kEepSizeProgCounter + kEepSizeProgAttempts)

/** Address defines *********************************************************** */
#define kEepFblBaseAddress                   0xFEF03008u
#define kEepStartAddress                     kEepFblBaseAddress
#define kEepAddressProgReqFlag               (kEepStartAddress)
#define kEepAddressResetResponseFlag         (kEepAddressProgReqFlag + kEepSizeProgReqFlag)
#define kEepAddressApplValidity              (kEepAddressResetResponseFlag + kEepSizeResetResponseFlag)
#define kEepAddressValidityFlags             (kEepAddressApplValidity + kEepSizeApplValidity)
#define kEepAddressSecAccessDelayFlag        (kEepAddressValidityFlags + kEepSizeValidityFlags)
#define kEepAddressSecAccessInvalidCount     (kEepAddressSecAccessDelayFlag + kEepSizeSecAccessDelayFlag)
#define kEepAddressDcmDslRxTesterSourceAddr  (kEepAddressSecAccessInvalidCount + kEepSizeSecAccessInvalidCount)
#define kEepAddressMetaData                  (kEepAddressDcmDslRxTesterSourceAddr + kEepSizeDcmDslRxTesterSourceAddr)
#define kEepAddressFingerprint               (kEepAddressMetaData)
#define kEepAddressProgCounter               (kEepAddressFingerprint + kEepSizeFingerprint)
#define kEepAddressProgAttempts              (kEepAddressProgCounter + kEepSizeProgCounter)
#define kEepEndAddress                       (kEepAddressMetaData + (kEepSizeMetaData * 3u) - 1u)
#define kEepSizeOfEeprom                     (kEepEndAddress - kEepStartAddress + 1u)

/** Access macros ************************************************************* */

/* PRQA S 3453 FctLikeMacroLabel */ /* MD_MSR_FctLikeMacro */

#define ApplFblNvReadProgReqFlag(buf)        ((EepromDriver_RReadSync((buf), kEepSizeProgReqFlag, kEepAddressProgReqFlag) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)
#define ApplFblNvReadPartialProgReqFlag(buf, offset, length) ((EepromDriver_RReadSync((buf), (length), (kEepAddressProgReqFlag + (offset))) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)
#define ApplFblNvWriteProgReqFlag(buf)       ((EepromDriver_RWriteSync((IO_MemPtrType)(buf), kEepSizeProgReqFlag, kEepAddressProgReqFlag) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)

#define ApplFblNvReadResetResponseFlag(buf)  ((EepromDriver_RReadSync((buf), kEepSizeResetResponseFlag, kEepAddressResetResponseFlag) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)
#define ApplFblNvReadPartialResetResponseFlag(buf, offset, length) ((EepromDriver_RReadSync((buf), (length), (kEepAddressResetResponseFlag + (offset))) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)
#define ApplFblNvWriteResetResponseFlag(buf) ((EepromDriver_RWriteSync((IO_MemPtrType)(buf), kEepSizeResetResponseFlag, kEepAddressResetResponseFlag) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)

#define ApplFblNvReadApplValidity(buf)       ((EepromDriver_RReadSync((buf), kEepSizeApplValidity, kEepAddressApplValidity) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)
#define ApplFblNvReadPartialApplValidity(buf, offset, length) ((EepromDriver_RReadSync((buf), (length), (kEepAddressApplValidity + (offset))) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)
#define ApplFblNvWriteApplValidity(buf)      ((EepromDriver_RWriteSync((IO_MemPtrType)(buf), kEepSizeApplValidity, kEepAddressApplValidity) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)

#define ApplFblNvReadValidityFlags(buf)      ((EepromDriver_RReadSync((buf), kEepSizeValidityFlags, kEepAddressValidityFlags) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)
#define ApplFblNvReadPartialValidityFlags(buf, offset, length) ((EepromDriver_RReadSync((buf), (length), (kEepAddressValidityFlags + (offset))) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)
#define ApplFblNvWriteValidityFlags(buf)     ((EepromDriver_RWriteSync((IO_MemPtrType)(buf), kEepSizeValidityFlags, kEepAddressValidityFlags) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)

#define ApplFblNvReadSecAccessDelayFlag(buf) ((EepromDriver_RReadSync((buf), kEepSizeSecAccessDelayFlag, kEepAddressSecAccessDelayFlag) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)
#define ApplFblNvReadPartialSecAccessDelayFlag(buf, offset, length) ((EepromDriver_RReadSync((buf), (length), (kEepAddressSecAccessDelayFlag + (offset))) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)
#define ApplFblNvWriteSecAccessDelayFlag(buf) ((EepromDriver_RWriteSync((IO_MemPtrType)(buf), kEepSizeSecAccessDelayFlag, kEepAddressSecAccessDelayFlag) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)

#define ApplFblNvReadSecAccessInvalidCount(buf) ((EepromDriver_RReadSync((buf), kEepSizeSecAccessInvalidCount, kEepAddressSecAccessInvalidCount) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)
#define ApplFblNvReadPartialSecAccessInvalidCount(buf, offset, length) ((EepromDriver_RReadSync((buf), (length), (kEepAddressSecAccessInvalidCount + (offset))) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)
#define ApplFblNvWriteSecAccessInvalidCount(buf) ((EepromDriver_RWriteSync((IO_MemPtrType)(buf), kEepSizeSecAccessInvalidCount, kEepAddressSecAccessInvalidCount) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)

#define ApplFblNvReadDcmDslRxTesterSourceAddr(buf) ((EepromDriver_RReadSync((buf), kEepSizeDcmDslRxTesterSourceAddr, kEepAddressDcmDslRxTesterSourceAddr) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)
#define ApplFblNvReadPartialDcmDslRxTesterSourceAddr(buf, offset, length) ((EepromDriver_RReadSync((buf), (length), (kEepAddressDcmDslRxTesterSourceAddr + (offset))) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)
#define ApplFblNvWriteDcmDslRxTesterSourceAddr(buf) ((EepromDriver_RWriteSync((IO_MemPtrType)(buf), kEepSizeDcmDslRxTesterSourceAddr, kEepAddressDcmDslRxTesterSourceAddr) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)

#define ApplFblNvReadFingerprint(idx, buf)   ((EepromDriver_RReadSync((buf), kEepSizeFingerprint, kEepAddressFingerprint + ((IO_PositionType)(idx) * kEepSizeMetaData)) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)
#define ApplFblNvReadPartialFingerprint(idx, buf, offset, length) ((EepromDriver_RReadSync((buf), (length), kEepAddressFingerprint + (((IO_PositionType)(idx) * kEepSizeMetaData) + (offset))) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)
#define ApplFblNvWriteFingerprint(idx, buf)  ((EepromDriver_RWriteSync((IO_MemPtrType)(buf), kEepSizeFingerprint, kEepAddressFingerprint + ((IO_PositionType)(idx) * kEepSizeMetaData)) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)

#define ApplFblNvReadProgCounter(idx, buf)   ((EepromDriver_RReadSync((buf), kEepSizeProgCounter, kEepAddressProgCounter + ((IO_PositionType)(idx) * kEepSizeMetaData)) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)
#define ApplFblNvReadPartialProgCounter(idx, buf, offset, length) ((EepromDriver_RReadSync((buf), (length), kEepAddressProgCounter + (((IO_PositionType)(idx) * kEepSizeMetaData) + (offset))) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)
#define ApplFblNvWriteProgCounter(idx, buf)  ((EepromDriver_RWriteSync((IO_MemPtrType)(buf), kEepSizeProgCounter, kEepAddressProgCounter + ((IO_PositionType)(idx) * kEepSizeMetaData)) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)

#define ApplFblNvReadProgAttempts(idx, buf)  ((EepromDriver_RReadSync((buf), kEepSizeProgAttempts, kEepAddressProgAttempts + ((IO_PositionType)(idx) * kEepSizeMetaData)) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)
#define ApplFblNvReadPartialProgAttempts(idx, buf, offset, length) ((EepromDriver_RReadSync((buf), (length), kEepAddressProgAttempts + (((IO_PositionType)(idx) * kEepSizeMetaData) + (offset))) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)
#define ApplFblNvWriteProgAttempts(idx, buf) ((EepromDriver_RWriteSync((IO_MemPtrType)(buf), kEepSizeProgAttempts, kEepAddressProgAttempts + ((IO_PositionType)(idx) * kEepSizeMetaData)) == IO_E_OK) ? WRAPNV_E_OK : WRAPNV_E_NOT_OK)

#define ApplFblIsValidEepAddress(i)          ((i) >= kEepStartAddress) && ((i) <= kEepEndAddress)
#define ApplFblIsValidEepMgrHandle(i)        ((i) >= kEepMgrFirstHandle) && ((i) <= kEepMgrLastHandle)

/* PRQA L:FctLikeMacroLabel */


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
# define WRAPNV_START_SEC_CODE
# include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(void, WRAPNV_CODE) WrapNv_InitConfig( void );


# define WRAPNV_STOP_SEC_CODE
# include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_MemMap */
/**********************************************************************************************************************
 *  USER CONFIG FILE
 *********************************************************************************************************************/



#endif  /* WRAPNV_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: WrapNv_Cfg.h
 *********************************************************************************************************************/

