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
 *            Module: CanTp
 *           Program: FBL Vector SLP3 (FBL_Vector_SLP3)
 *          Customer: Vector Japan Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F7016493AFP-C
 *    License Scope : The usage is restricted to CBD1900263_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: CanTp_Lcfg.c
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

#define CANTP_LCFG_SOURCE

/* -----------------------------------------------------------------------------
    &&&~ Include files
 ----------------------------------------------------------------------------- */
# include "CanTp_Lcfg.h"

#if (CANTP_LOLAYER_CANIF == STD_ON)
# include "CanIf.h"
#endif
# include "PduR_CanTp.h"

/* -----------------------------------------------------------------------------
    &&&~ Data definitions
 ----------------------------------------------------------------------------- */



/**********************************************************************************************************************
 *  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA
**********************************************************************************************************************/
#define CANTP_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanTp_MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_MemMap */

#if(CANTP_USE_INIT_POINTER == STD_ON)
P2CONST(CanTp_PBConfigType, CANTP_VAR_CLEARED, CANTP_PBCFG) CanTp_ConfigDataPtr = (P2CONST(CanTp_PBConfigType, CANTP_VAR_CLEARED, CANTP_PBCFG))NULL_PTR;
#endif

#define CANTP_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "CanTp_MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_MemMap */

#define CANTP_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "CanTp_MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_MemMap */

VAR(boolean, CANTP_VAR_NO_INIT) CanTp_PreInitialized;

#define CANTP_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "CanTp_MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_MemMap */

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CanTp_PartitionIdentifiers
**********************************************************************************************************************/
/** 
  \var    CanTp_PartitionIdentifiers
  \brief  the partition context in Config
  \details
  Element                 Description
  PartitionSNV        
  PCPartitionConfigIdx    the index of the 1:1 relation pointing to CanTp_PCPartitionConfig
*/ 
#define CANTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTp_PartitionIdentifiersType, CANTP_CONST) CanTp_PartitionIdentifiers[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PartitionSNV                PCPartitionConfigIdx */
  { /*     0 */ CanTpSinglePartitionMemory,                   0u }
};
#define CANTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_RxPdu2RxSduInd
**********************************************************************************************************************/
/** 
  \var    CanTp_RxPdu2RxSduInd
  \brief  the indexes of the 1:1 sorted relation pointing to CanTp_RxSduCfg
*/ 
#define CANTP_START_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTp_RxPdu2RxSduIndType, CANTP_CONST) CanTp_RxPdu2RxSduInd[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     RxPdu2RxSduInd      Referable Keys */
  /*     0 */              3u,  /* [RxPdu_0] */
  /*     1 */              1u,  /* [RxPdu_1] */
  /*     2 */              0u,  /* [RxPdu_2] */
  /*     3 */              2u   /* [RxPdu_3] */
};
#define CANTP_STOP_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_RxPdu2TxSduInd
**********************************************************************************************************************/
/** 
  \var    CanTp_RxPdu2TxSduInd
  \brief  the indexes of the 1:1 sorted relation pointing to CanTp_TxSduCfg
*/ 
#define CANTP_START_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTp_RxPdu2TxSduIndType, CANTP_CONST) CanTp_RxPdu2TxSduInd[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     RxPdu2TxSduInd      Referable Keys */
  /*     0 */              1u,  /* [RxPdu_0] */
  /*     1 */              0u   /* [RxPdu_1] */
};
#define CANTP_STOP_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_RxPduMap
**********************************************************************************************************************/
/** 
  \var    CanTp_RxPduMap
  \brief  Table of Addressing Infos of RxNPdus
  \details
  Element                    Description
  RxPdu2RxSduEndIdx          the end index of the 0:n relation pointing to one of CanTp_RxPdu2RxSduInd
  RxPdu2RxSduStartIdx        the start index of the 0:n relation pointing to one of CanTp_RxPdu2RxSduInd
  RxPdu2TxSduEndIdx          the end index of the 0:n relation pointing to one of CanTp_RxPdu2TxSduInd
  RxPdu2TxSduPartitionIdx    the partition index of the 0:n relation pointing to one of CanTp_RxPdu2TxSduInd
  RxPdu2TxSduStartIdx        the start index of the 0:n relation pointing to one of CanTp_RxPdu2TxSduInd
*/ 
#define CANTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTp_RxPduMapType, CANTP_CONST) CanTp_RxPduMap[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RxPdu2RxSduEndIdx  RxPdu2RxSduStartIdx  RxPdu2TxSduEndIdx                     RxPdu2TxSduPartitionIdx                                                       RxPdu2TxSduStartIdx                           Referable Keys */
  { /*     0 */                1u,                  0u,                                   1u,                                         0u  /* CanTpSinglePartitionMemory */,                                     0u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/Demo_0_CAN_FD_Request_Tp_oDemoFBL_Vector_SLP3_9e917504_Rx] */
  { /*     1 */                2u,                  1u,                                   2u,                                         0u  /* CanTpSinglePartitionMemory */,                                     1u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/Demo_0_CAN_FD_Request_Tp_oDemoFBL_Vector_SLP3_20_f2ebe614_Rx] */
  { /*     2 */                3u,                  2u, CANTP_NO_RXPDU2TXSDUENDIDXOFRXPDUMAP, CANTP_NO_RXPDU2TXSDUPARTITIONIDXOFRXPDUMAP                                  , CANTP_NO_RXPDU2TXSDUSTARTIDXOFRXPDUMAP },  /* [/ActiveEcuC/EcuC/EcucPduCollection/Functional_CAN_FD_Tp_oDemoFBL_Vector_SLP3_20_883488d5_Rx] */
  { /*     3 */                4u,                  3u, CANTP_NO_RXPDU2TXSDUENDIDXOFRXPDUMAP, CANTP_NO_RXPDU2TXSDUPARTITIONIDXOFRXPDUMAP                                  , CANTP_NO_RXPDU2TXSDUSTARTIDXOFRXPDUMAP }   /* [/ActiveEcuC/EcuC/EcucPduCollection/Functional_CAN_FD_Tp_oDemoFBL_Vector_SLP3_36e4c388_Rx] */
};
#define CANTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_RxSduCfg
**********************************************************************************************************************/
/** 
  \var    CanTp_RxSduCfg
  \brief  CanTp RxNSdu Configuration
  \details
  Element                     Description
  LoLayerTxFcPduId        
  PduRRxSduId             
  RxPduId                 
  TxFcPduConfirmationPduId
  BlockSize               
  CanType                 
  NAr                     
  NCr                     
  RxMaxPayloadLength      
  RxPduMapIdx                 the index of the 0:1 relation pointing to CanTp_RxPduMap
  RxTaType                
  TxPduMapIdx                 the index of the 0:1 relation pointing to CanTp_TxPduMap
  TxSduCfgIdx                 the index of the 0:1 relation pointing to CanTp_TxSduCfg
*/ 
#define CANTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTp_RxSduCfgType, CANTP_CONST) CanTp_RxSduCfg[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    LoLayerTxFcPduId                                                                       PduRRxSduId                              RxPduId                                     TxFcPduConfirmationPduId                        BlockSize  CanType                        NAr  NCr   RxMaxPayloadLength  RxPduMapIdx  RxTaType                             TxPduMapIdx                     TxSduCfgIdx                           Comment                            Referable Keys */
  { /*     0 */ CANTP_INVALID_HDL                                                                    , PduRConf_PduRSrcPdu_PduRSrcPdu_3d6136a3, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_3cfeb570, CANTP_INVALID_HDL                             ,        8u, CANTP_CAN20_CANTYPEOFRXSDUCFG, 11u,  11u,                 7u,          2u, CANTP_FUNCTIONAL_RXTATYPEOFRXSDUCFG, CANTP_NO_TXPDUMAPIDXOFRXSDUCFG, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_08631fbd] */  /* [CanTpRxNSdu_08631fbd, RxPdu_2] */
  { /*     1 */ CanIfConf_CanIfTxPduCfg_Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_20_cf88ffc8_Tx, PduRConf_PduRSrcPdu_PduRSrcPdu_5b048e34, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_df6d4951, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_df6d4951,        0u, CANTP_CAN20_CANTYPEOFRXSDUCFG, 21u, 101u,                 7u,          1u,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,                             0u,                             0u },  /* [CanTpRxNSdu_0468c0cb] */  /* [CanTpRxNSdu_0468c0cb, RxPdu_1, TxPdu_0] */
  { /*     2 */ CANTP_INVALID_HDL                                                                    , PduRConf_PduRSrcPdu_PduRSrcPdu_1cf8eade, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_e4a40b7d, CANTP_INVALID_HDL                             ,        8u, CANTP_CANFD_CANTYPEOFRXSDUCFG, 11u,  11u,                63u,          3u, CANTP_FUNCTIONAL_RXTATYPEOFRXSDUCFG, CANTP_NO_TXPDUMAPIDXOFRXSDUCFG, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_e1aeb83a] */  /* [CanTpRxNSdu_e1aeb83a, RxPdu_3] */
  { /*     3 */ CanIfConf_CanIfTxPduCfg_Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_efb2f3be_Tx   , PduRConf_PduRSrcPdu_PduRSrcPdu_425f3fdc, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_e980d874, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_e980d874,        0u, CANTP_CANFD_CANTYPEOFRXSDUCFG, 21u, 101u,                63u,          0u,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,                             1u,                             1u }   /* [CanTpRxNSdu_f05a2e85] */  /* [CanTpRxNSdu_f05a2e85, RxPdu_0, TxPdu_1] */
};
#define CANTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_RxSduSnv2Hdl
**********************************************************************************************************************/
/** 
  \var    CanTp_RxSduSnv2Hdl
  \brief  CanTpRxNSdu SNV to Handle (i.e. internal index) mapping
  \details
  Element         Description
  RxNSduHdlIdx    the index of the 0:1 relation pointing to CanTp_RxSduCfg
*/ 
#define CANTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTp_RxSduSnv2HdlType, CANTP_CONST) CanTp_RxSduSnv2Hdl[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RxNSduHdlIdx        Comment */
  { /*     0 */           0u },  /* [CanTpRxNSdu_08631fbd] */
  { /*     1 */           1u },  /* [CanTpRxNSdu_0468c0cb] */
  { /*     2 */           2u },  /* [CanTpRxNSdu_e1aeb83a] */
  { /*     3 */           3u }   /* [CanTpRxNSdu_f05a2e85] */
};
#define CANTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_TxPdu2RxSduInd
**********************************************************************************************************************/
/** 
  \var    CanTp_TxPdu2RxSduInd
  \brief  the indexes of the 1:1 sorted relation pointing to CanTp_RxSduCfg
*/ 
#define CANTP_START_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTp_TxPdu2RxSduIndType, CANTP_CONST) CanTp_TxPdu2RxSduInd[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     TxPdu2RxSduInd      Referable Keys */
  /*     0 */              1u,  /* [TxPdu_0] */
  /*     1 */              3u   /* [TxPdu_1] */
};
#define CANTP_STOP_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_TxPdu2TxSduInd
**********************************************************************************************************************/
/** 
  \var    CanTp_TxPdu2TxSduInd
  \brief  the indexes of the 1:1 sorted relation pointing to CanTp_TxSduCfg
*/ 
#define CANTP_START_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTp_TxPdu2TxSduIndType, CANTP_CONST) CanTp_TxPdu2TxSduInd[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     TxPdu2TxSduInd      Referable Keys */
  /*     0 */              0u,  /* [TxPdu_0] */
  /*     1 */              1u   /* [TxPdu_1] */
};
#define CANTP_STOP_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_TxPduMap
**********************************************************************************************************************/
/** 
  \var    CanTp_TxPduMap
  \brief  Table of Usage Infos of TxNPdus
  \details
  Element                Description
  CanId              
  TxPdu2RxSduEndIdx      the end index of the 0:n relation pointing to one of CanTp_TxPdu2RxSduInd
  TxPdu2RxSduStartIdx    the start index of the 0:n relation pointing to one of CanTp_TxPdu2RxSduInd
  TxPdu2TxSduEndIdx      the end index of the 0:n relation pointing to one of CanTp_TxPdu2TxSduInd
  TxPdu2TxSduStartIdx    the start index of the 0:n relation pointing to one of CanTp_TxPdu2TxSduInd
*/ 
#define CANTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTp_TxPduMapType, CANTP_CONST) CanTp_TxPduMap[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    CanId        TxPdu2RxSduEndIdx  TxPdu2RxSduStartIdx  TxPdu2TxSduEndIdx  TxPdu2TxSduStartIdx        Referable Keys */
  { /*     0 */ 0x000005B2u,                1u,                  0u,                1u,                  0u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_20_ee1db9f7_Tx] */
  { /*     1 */ 0x400005B2u,                2u,                  1u,                2u,                  1u }   /* [/ActiveEcuC/EcuC/EcucPduCollection/Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_126039d0_Tx] */
};
#define CANTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_TxSduCfg
**********************************************************************************************************************/
/** 
  \var    CanTp_TxSduCfg
  \brief  CanTp TxNSdu Configuration
  \details
  Element                   Description
  LoLayerTxPduId        
  PduRTxSduId           
  RxFcPduId             
  TxPduConfirmationPduId
  CanType               
  RxPduMapIdx               the index of the 0:1 relation pointing to CanTp_RxPduMap
  RxSduCfgIdx               the index of the 0:1 relation pointing to CanTp_RxSduCfg
  TxMaxPayloadLength    
  TxPduMapIdx               the index of the 0:1 relation pointing to CanTp_TxPduMap
*/ 
#define CANTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTp_TxSduCfgType, CANTP_CONST) CanTp_TxSduCfg[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    LoLayerTxPduId                                                                         PduRTxSduId                                                                      RxFcPduId                                       TxPduConfirmationPduId                      CanType                        RxPduMapIdx  RxSduCfgIdx  TxMaxPayloadLength  TxPduMapIdx        Comment                            Referable Keys */
  { /*     0 */ CanIfConf_CanIfTxPduCfg_Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_20_cf88ffc8_Tx, PduRConf_PduRDestPdu_Demo_0_CAN_FD_Response_oDemoFBL_Vector_SLP3_20_50875972_Tx, CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_fd979da3, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_fd979da3, CANTP_CAN20_CANTYPEOFTXSDUCFG,          1u,          1u,                 7u,          0u },  /* [CanTpTxNSdu_0468c0cb] */  /* [CanTpTxNSdu_0468c0cb, TxPdu_0, RxPdu_1] */
  { /*     1 */ CanIfConf_CanIfTxPduCfg_Demo_0_CAN_FD_Response_Tp_oDemoFBL_Vector_SLP3_efb2f3be_Tx   , PduRConf_PduRDestPdu_Demo_0_CAN_FD_Response_oDemoFBL_Vector_SLP3_8fbef359_Tx   , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_cb7a0c86, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_cb7a0c86, CANTP_CANFD_CANTYPEOFTXSDUCFG,          0u,          3u,                63u,          1u }   /* [CanTpTxNSdu_f05a2e85] */  /* [CanTpTxNSdu_f05a2e85, TxPdu_1, RxPdu_0] */
};
#define CANTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_TxSduSnv2Hdl
**********************************************************************************************************************/
/** 
  \var    CanTp_TxSduSnv2Hdl
  \brief  CanTpTxNSdu SNV to Handle (i.e. internal index) mapping
  \details
  Element         Description
  TxNSduHdlIdx    the index of the 0:1 relation pointing to CanTp_TxSduCfg
*/ 
#define CANTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTp_TxSduSnv2HdlType, CANTP_CONST) CanTp_TxSduSnv2Hdl[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxNSduHdlIdx        Comment */
  { /*     0 */           0u },  /* [CanTpTxNSdu_0468c0cb] */
  { /*     1 */           1u }   /* [CanTpTxNSdu_f05a2e85] */
};
#define CANTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_CalcBS
**********************************************************************************************************************/
/** 
  \var    CanTp_CalcBS
  \brief  CalcBS array
*/ 
#define CANTP_START_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanTp_CalcBSType, CANTP_VAR_NO_INIT) CanTp_CalcBS[4];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define CANTP_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_RxState
**********************************************************************************************************************/
/** 
  \var    CanTp_RxState
  \brief  RxState array
*/ 
#define CANTP_START_SEC_VAR_NO_INIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanTp_RxStateType, CANTP_VAR_NO_INIT) CanTp_RxState[4];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define CANTP_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_TxSemaphores
**********************************************************************************************************************/
/** 
  \var    CanTp_TxSemaphores
  \brief  TxSemaphores array
*/ 
#define CANTP_START_SEC_VAR_NO_INIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanTp_TxSemaphoreType, CANTP_VAR_NO_INIT) CanTp_TxSemaphores[2];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define CANTP_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_TxState
**********************************************************************************************************************/
/** 
  \var    CanTp_TxState
  \brief  TxState array
*/ 
#define CANTP_START_SEC_VAR_NO_INIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanTp_TxStateType, CANTP_VAR_NO_INIT) CanTp_TxState[2];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define CANTP_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CanTp_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
 * FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/




