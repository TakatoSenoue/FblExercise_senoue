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
 *            Module: CanIf
 *           Program: FBL Vector SLP3 (FBL_Vector_SLP3)
 *          Customer: Vector Japan Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F7016493AFP-C
 *    License Scope : The usage is restricted to CBD1900263_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: CanIf_Lcfg.c
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

#define CANIF_LCFG_SOURCE

/**********************************************************************************************************************
  \file  Includes
**********************************************************************************************************************/
/** 
  \brief  Required external files.
*/ 

#include "CanIf_Cfg.h"

 /*  CanTp Header Files  */ 
#include "CanTp_Cfg.h"
#include "CanTp_Cbk.h"
 /*  CDD Header Files  */ 
#include "CanIf_Cdd.h"


#define CANIF_START_SEC_APPL_CODE

#include "CanIf_MemMap.h" /* PRQA S 5087 */  /* MD_MSR_MemMap */

/**********************************************************************************************************************
  \var  Prototypes of callback functions
**********************************************************************************************************************/

/** 
  \brief  Tx confirmation functions.
*/



/** 
  \brief  Rx indication functions.
*/





#define CANIF_STOP_SEC_APPL_CODE

#include "CanIf_MemMap.h" /* PRQA S 5087 */  /* MD_MSR_MemMap */

/**********************************************************************************************************************
  ComStackLib
**********************************************************************************************************************/
/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CanIf_BusOffNotificationFctPtr
**********************************************************************************************************************/
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_BusOffNotificationFctType, CANIF_CONST) CanIf_BusOffNotificationFctPtr = FblCw_ControllerBusOff;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_CanIfCtrlId2MappedTxBuffersConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_CanIfCtrlId2MappedTxBuffersConfig
  \brief  CAN controller configuration - mapped Tx-buffer(s).
  \details
  Element                          Description
  MappedTxBuffersConfigEndIdx      the end index of the 1:n relation pointing to CanIf_MappedTxBuffersConfig
  MappedTxBuffersConfigStartIdx    the start index of the 1:n relation pointing to CanIf_MappedTxBuffersConfig
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_CanIfCtrlId2MappedTxBuffersConfigType, CANIF_CONST) CanIf_CanIfCtrlId2MappedTxBuffersConfig[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    MappedTxBuffersConfigEndIdx                                                                                    MappedTxBuffersConfigStartIdx                                                                                          Referable Keys */
  { /*     0 */                          1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_DemoFBL_Vector_SLP3_216858f6 */,                            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_DemoFBL_Vector_SLP3_216858f6 */ }   /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_DemoFBL_Vector_SLP3_216858f6] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_CtrlConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_CtrlConfig
  \details
  Element              Description
  RxDHRandomNumber1    Rx - DoubleHash - 1st random number.
  RxDHRandomNumber2    Rx - DoubleHash - 2nd random number.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_CtrlConfigType, CANIF_CONST) CanIf_CtrlConfig[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RxDHRandomNumber1  RxDHRandomNumber2        Comment */
  { /*     0 */           0x473Cu,           0xA58Du }   /* [CAN controller with ControllerId: 0] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_CtrlModeIndicationFctPtr
**********************************************************************************************************************/
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_CtrlModeIndicationFctType, CANIF_CONST) CanIf_CtrlModeIndicationFctPtr = FblCw_ControllerModeIndication;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_MailBoxConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_MailBoxConfig
  \brief  Mailbox table.
  \details
  Element                 Description
  CtrlStatesIdx           the index of the 1:1 relation pointing to CanIf_CtrlStates
  PduIdFirst              "First" PDU mapped to mailbox.
  PduIdLast               "Last" PDU mapped to mailbox.
  TxBufferCfg         
  TxBufferCfgIdx          the index of the 0:1 relation pointing to CanIf_TxBufferPrioByCanIdConfig
  TxBufferHandlingType
  MailBoxType             Type of mailbox: Rx-/Tx- BasicCAN/FullCAN/unused.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_MailBoxConfigType, CANIF_CONST) CanIf_MailBoxConfig[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    CtrlStatesIdx                                                                                    PduIdFirst                           PduIdLast                           TxBufferCfg                                                 TxBufferCfgIdx                                                                              TxBufferHandlingType                     MailBoxType                    Referable Keys */
  { /*     0 */            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_DemoFBL_Vector_SLP3_216858f6 */,         0u  /* Unused, TxPduId 0 */,        0u  /* Unused, TxPduId 1 */, CANIF_TXBUFFERPRIOBYCANIDCONFIG_TXBUFFERCFGOFMAILBOXCONFIG,                                     0u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_3b54cc70 */, CANIF_TXBUFFER_HANDLINGTYPE_PRIOBYCANID, CANIF_TxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/CN_DemoFBL_Vector_SLP3_abba4211_Tx] */
  { /*     1 */            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_DemoFBL_Vector_SLP3_216858f6 */,         0u  /* RxPduId */          ,        3u  /* RxPduId  */         ,                        CANIF_NO_TXBUFFERCFGOFMAILBOXCONFIG, CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex1 */                                , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxBasicCANMailbox }   /* [/ActiveEcuC/Can/CanConfigSet/CN_DemoFBL_Vector_SLP3_dfd96cca_Rx] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_MappedTxBuffersConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_MappedTxBuffersConfig
  \brief  Mapped Tx-buffer(s)
  \details
  Element             Description
  MailBoxConfigIdx    the index of the 1:1 relation pointing to CanIf_MailBoxConfig
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_MappedTxBuffersConfigType, CANIF_CONST) CanIf_MappedTxBuffersConfig[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    MailBoxConfigIdx                                                                               Referable Keys */
  { /*     0 */               0u  /* /ActiveEcuC/Can/CanConfigSet/CN_DemoFBL_Vector_SLP3_abba4211_Tx */ }   /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_DemoFBL_Vector_SLP3_216858f6] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_RxDHAdjust
**********************************************************************************************************************/
/** 
  \var    CanIf_RxDHAdjust
  \brief  Rx - DoubleHash - adjust values.
*/ 
#define CANIF_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_RxDHAdjustType, CANIF_CONST) CanIf_RxDHAdjust[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     RxDHAdjust  */
  /*     0 */       0x00u,
  /*     1 */       0x02u,
  /*     2 */       0x03u,
  /*     3 */       0x03u,
  /*     4 */       0x00u
};
#define CANIF_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_RxIndicationFctList
**********************************************************************************************************************/
/** 
  \var    CanIf_RxIndicationFctList
  \brief  Rx indication functions table.
  \details
  Element               Description
  RxIndicationFct       Rx indication function.
  RxIndicationLayout    Layout of Rx indication function.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_RxIndicationFctListType, CANIF_CONST) CanIf_RxIndicationFctList[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RxIndicationFct                                           RxIndicationLayout                                                                 Referable Keys */
  { /*     0 */  { (CanIf_SimpleRxIndicationFctType)NULL_PTR }          , CanIf_SimpleRxIndicationLayout    /* PRQA S 0313 */ /* MD_CanIf_Rule11.1 */ },  /* [NULL_PTR] */
  { /*     1 */  { (CanIf_SimpleRxIndicationFctType)CanTp_RxIndication }, CanIf_AdvancedRxIndicationLayout  /* PRQA S 0313 */ /* MD_CanIf_Rule11.1 */ }   /* [CanTp_RxIndication] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_RxPduConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_RxPduConfig
  \brief  Rx-PDU configuration table.
  \details
  Element                   Description
  RxPduCanId                Rx-PDU: CAN identifier.
  RxPduMask                 Rx-PDU: CAN identifier mask.
  UpperPduId                PDU ID defined by upper layer.
  RxIndicationFctListIdx    the index of the 1:1 relation pointing to CanIf_RxIndicationFctList
  RxPduDlc                  Rx-PDU length (DLC).
  MsgType                   Type of CAN message: *CAN (both 2.0 or FD), *FD_CAN (only FD), *NO_FD_CAN (only 2.0).
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_RxPduConfigType, CANIF_CONST) CanIf_RxPduConfig[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RxPduCanId                                                                                            RxPduMask                                                                      UpperPduId                                      RxIndicationFctListIdx                            RxPduDlc  MsgType                         Comment                                                                                           Referable Keys */
  { /*     0 */    0x4779u  /* Rx PDU: Functional_CAN_FD_Tp_oDemoFBL_Vector_SLP3_646360de_Rx, only CAN FD */        ,   0x47FFu  /* Functional_CAN_FD_Tp_oDemoFBL_Vector_SLP3_646360de_Rx */       , CanTpConf_CanTpRxNPdu_CanTpRxNPdu_e4a40b7d    ,                     1u  /* CanTp_RxIndication */,      64u, CANIF_MSG_TYPE_FD_CAN    },  /* [Rx PDU: Functional_CAN_FD_Tp_oDemoFBL_Vector_SLP3_646360de_Rx, CAN ID: 0x4779]       */  /* [CanIfConf_CanIfRxPduCfg_Functional_CAN_FD_Tp_oDemoFBL_Vector_SLP3_646360de_Rx] */
  { /*     1 */    0x0779u  /* Rx PDU: Functional_CAN_FD_Tp_oDemoFBL_Vector_SLP3_20_12cf71bb_Rx, only CAN 2.0 */    ,   0x07FFu  /* Functional_CAN_FD_Tp_oDemoFBL_Vector_SLP3_20_12cf71bb_Rx */    , CanTpConf_CanTpRxNPdu_CanTpRxNPdu_3cfeb570    ,                     1u  /* CanTp_RxIndication */,       8u, CANIF_MSG_TYPE_NO_FD_CAN },  /* [Rx PDU: Functional_CAN_FD_Tp_oDemoFBL_Vector_SLP3_20_12cf71bb_Rx, CAN ID: 0x779]     */  /* [CanIfConf_CanIfRxPduCfg_Functional_CAN_FD_Tp_oDemoFBL_Vector_SLP3_20_12cf71bb_Rx] */
  { /*     2 */    0x45A2u  /* Rx PDU: Demo_0_CAN_FD_Request_Tp_oDemoFBL_Vector_SLP3_c807a36f_Rx, only CAN FD */    ,   0x07FFu  /* Demo_0_CAN_FD_Request_Tp_oDemoFBL_Vector_SLP3_c807a36f_Rx */   , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_cb7a0c86,                     1u  /* CanTp_RxIndication */,      64u, CANIF_MSG_TYPE_FD_CAN    },  /* [Rx PDU: Demo_0_CAN_FD_Request_Tp_oDemoFBL_Vector_SLP3_c807a36f_Rx, CAN ID: 0x45a2]   */  /* [CanIfConf_CanIfRxPduCfg_Demo_0_CAN_FD_Request_Tp_oDemoFBL_Vector_SLP3_c807a36f_Rx] */
  { /*     3 */    0x05A2u  /* Rx PDU: Demo_0_CAN_FD_Request_Tp_oDemoFBL_Vector_SLP3_20_507d1247_Rx, only CAN 2.0 */,   0x07FFu  /* Demo_0_CAN_FD_Request_Tp_oDemoFBL_Vector_SLP3_20_507d1247_Rx */, CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_fd979da3,                     1u  /* CanTp_RxIndication */,       8u, CANIF_MSG_TYPE_NO_FD_CAN }   /* [Rx PDU: Demo_0_CAN_FD_Request_Tp_oDemoFBL_Vector_SLP3_20_507d1247_Rx, CAN ID: 0x5a2] */  /* [CanIfConf_CanIfRxPduCfg_Demo_0_CAN_FD_Request_Tp_oDemoFBL_Vector_SLP3_20_507d1247_Rx] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxBufferPrioByCanIdConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_TxBufferPrioByCanIdConfig
  \brief  Tx-buffer: PRIO_BY_CANID
  \details
  Element                       Description
  BitPos2TxPduIdOffset      
  TxBufferPrioByCanIdBaseIdx    the index of the 1:1 relation pointing to CanIf_TxBufferPrioByCanIdBase
  TxQueueFlagsEndIdx            the end index of the 1:n relation pointing to CanIf_TxQueueFlags
  TxQueueFlagsStartIdx          the start index of the 1:n relation pointing to CanIf_TxQueueFlags
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_TxBufferPrioByCanIdConfigType, CANIF_CONST) CanIf_TxBufferPrioByCanIdConfig[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    BitPos2TxPduIdOffset  TxBufferPrioByCanIdBaseIdx                                                      TxQueueFlagsEndIdx                                                      TxQueueFlagsStartIdx                                                            Referable Keys */
  { /*     0 */                   0u,                         0u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_3b54cc70 */,                 1u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_3b54cc70 */,                   0u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CHNL_3b54cc70 */ }   /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_3b54cc70] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxConfirmationFctList
**********************************************************************************************************************/
/** 
  \var    CanIf_TxConfirmationFctList
  \brief  Tx confirmation functions table.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_TxConfirmationFctType, CANIF_CONST) CanIf_TxConfirmationFctList[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     TxConfirmationFctList                      Referable Keys */
  /*     0 */ (CanIf_TxConfirmationFctType)NULL_PTR ,  /* [NULL_PTR] */
  /*     1 */ CanTp_TxConfirmation                     /* [CanTp_TxConfirmation] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxPduConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_TxPduConfig
  \brief  Tx PDUs - configuration.
  \details
  Element                     Description
  CanId                       CAN identifier (16bit / 32bit).
  UpperLayerTxPduId           Upper layer handle-Id (8bit / 16bit).
  IsTxPduTruncation           TRUE: Truncation of Tx PDU is enabled, FALSE: Truncation of Tx PDU is disabled
  CtrlStatesIdx               the index of the 1:1 relation pointing to CanIf_CtrlStates
  MailBoxConfigIdx            the index of the 1:1 relation pointing to CanIf_MailBoxConfig
  TxConfirmationFctListIdx    the index of the 1:1 relation pointing to CanIf_TxConfirmationFctList
  TxPduLength                 Tx PDU length.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_TxPduConfigType, CANIF_CONST) CanIf_TxPduConfig[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    CanId    UpperLayerTxPduId                           IsTxPduTruncation  CtrlStatesIdx                                                                                    MailBoxConfigIdx                                                                         TxConfirmationFctListIdx                              TxPduLength        Comment                                                                             Referable Keys */
  { /*     0 */ 0x45B2u, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_cb7a0c86, TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_DemoFBL_Vector_SLP3_216858f6 */,               0u  /* /ActiveEcuC/Can/CanConfigSet/CN_DemoFBL_Vector_SLP3_abba4211_Tx */,                       1u  /* CanTp_TxConfirmation */,         64u },  /* [Tx PDU: Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_efb2f3be_Tx]    */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_efb2f3be_Tx] */
  { /*     1 */ 0x05B2u, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_fd979da3, TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_DemoFBL_Vector_SLP3_216858f6 */,               0u  /* /ActiveEcuC/Can/CanConfigSet/CN_DemoFBL_Vector_SLP3_abba4211_Tx */,                       1u  /* CanTp_TxConfirmation */,          8u }   /* [Tx PDU: Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_20_cf88ffc8_Tx] */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_20_cf88ffc8_Tx] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxPduQueueIndex
**********************************************************************************************************************/
/** 
  \var    CanIf_TxPduQueueIndex
  \brief  Indirection table: Tx PDU ID to corresponding Tx buffer of type PrioByCanId handle-ID. NOTE: Only Basic-CAN Tx PDUs which are mapped to a Tx buffer of type PrioByCanId have a valid indirection.
  \details
  Element                          Description
  TxQueueIdx                       the index of the 0:1 relation pointing to CanIf_TxQueue
  TxQueueIndex2DataStartStopIdx    the index of the 0:1 relation pointing to CanIf_TxQueueIndex2DataStartStop
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_TxPduQueueIndexType, CANIF_CONST) CanIf_TxPduQueueIndex[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxQueueIdx                                                                                                      TxQueueIndex2DataStartStopIdx                                                                                                            Comment                                                                                                                       Referable Keys */
  { /*     0 */         0u  /* /ActiveEcuC/CanIf/CanIfInitCfg/Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_efb2f3be_Tx */   ,                            0u  /* /ActiveEcuC/CanIf/CanIfInitCfg/Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_efb2f3be_Tx */    },  /* [Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_efb2f3be_Tx, Basic-CAN Tx PDU with Tx buffer type PrioByCanId]    */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_efb2f3be_Tx] */
  { /*     1 */         1u  /* /ActiveEcuC/CanIf/CanIfInitCfg/Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_20_cf88ffc8_Tx */,                            1u  /* /ActiveEcuC/CanIf/CanIfInitCfg/Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_20_cf88ffc8_Tx */ }   /* [Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_20_cf88ffc8_Tx, Basic-CAN Tx PDU with Tx buffer type PrioByCanId] */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_20_cf88ffc8_Tx] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxQueueIndex2DataStartStop
**********************************************************************************************************************/
/** 
  \var    CanIf_TxQueueIndex2DataStartStop
  \details
  Element                Description
  TxQueueDataEndIdx      the end index of the 0:n relation pointing to CanIf_TxQueueData
  TxQueueDataLength      the number of relations pointing to CanIf_TxQueueData
  TxQueueDataStartIdx    the start index of the 0:n relation pointing to CanIf_TxQueueData
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_TxQueueIndex2DataStartStopType, CANIF_CONST) CanIf_TxQueueIndex2DataStartStop[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxQueueDataEndIdx                                                                                                      TxQueueDataLength                                                                                                      TxQueueDataStartIdx                                                                                                            Comment                                                                             Referable Keys */
  { /*     0 */               64u  /* /ActiveEcuC/CanIf/CanIfInitCfg/Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_efb2f3be_Tx */   ,               64u  /* /ActiveEcuC/CanIf/CanIfInitCfg/Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_efb2f3be_Tx */   ,                  0u  /* /ActiveEcuC/CanIf/CanIfInitCfg/Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_efb2f3be_Tx */    },  /* [Tx PDU: Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_efb2f3be_Tx]    */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_efb2f3be_Tx] */
  { /*     1 */               72u  /* /ActiveEcuC/CanIf/CanIfInitCfg/Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_20_cf88ffc8_Tx */,                8u  /* /ActiveEcuC/CanIf/CanIfInitCfg/Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_20_cf88ffc8_Tx */,                 64u  /* /ActiveEcuC/CanIf/CanIfInitCfg/Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_20_cf88ffc8_Tx */ }   /* [Tx PDU: Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_20_cf88ffc8_Tx] */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_20_cf88ffc8_Tx] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_CtrlStates
**********************************************************************************************************************/
/** 
  \var    CanIf_CtrlStates
  \details
  Element     Description
  CtrlMode    Controller mode.
  PduMode     PDU mode state.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanIf_CtrlStatesUType, CANIF_VAR_NOINIT) CanIf_CtrlStates;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_DemoFBL_Vector_SLP3_216858f6] */

#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxBufferPrioByCanIdBase
**********************************************************************************************************************/
/** 
  \var    CanIf_TxBufferPrioByCanIdBase
  \brief  Variable declaration - Tx buffer: PRIO_BY_CANID. Stores the current number of buffered PDUs per Tx Buffer.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanIf_TxBufferPrioByCanIdBaseUType, CANIF_VAR_NOINIT) CanIf_TxBufferPrioByCanIdBase;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_3b54cc70] */

#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxQueue
**********************************************************************************************************************/
/** 
  \var    CanIf_TxQueue
  \brief  Variable declaration - Tx buffer: PRIO_BY_CANID. Stores the CAN ID, SDU length and SDU of a buffered PDU.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanIf_TxQueueUType, CANIF_VAR_NOINIT) CanIf_TxQueue;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_efb2f3be_Tx] */
  /*     1 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_20_cf88ffc8_Tx] */

#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxQueueData
**********************************************************************************************************************/
/** 
  \var    CanIf_TxQueueData
  \brief  Variable declaration - Tx queue data.
*/ 
#define CANIF_START_SEC_VAR_FAST_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanIf_TxQueueDataUType, CANIF_VAR_NOINIT_FAST) CanIf_TxQueueData;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_efb2f3be_Tx] */
  /*   ... */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_efb2f3be_Tx] */
  /*    63 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_efb2f3be_Tx] */
  /*    64 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_20_cf88ffc8_Tx] */
  /*   ... */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_20_cf88ffc8_Tx] */
  /*    71 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_20_cf88ffc8_Tx] */

#define CANIF_STOP_SEC_VAR_FAST_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxQueueFlags
**********************************************************************************************************************/
/** 
  \var    CanIf_TxQueueFlags
  \brief  Variable declaration - Tx buffer: PRIO_BY_CANID. Stores the flags indicating whether the corresponding PDU is buffered or not.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanIf_TxQueueFlagsUType, CANIF_VAR_NOINIT) CanIf_TxQueueFlags;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CHNL_3b54cc70] */

#define CANIF_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "CanIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */




