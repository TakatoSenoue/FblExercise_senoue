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
 *            Module: PduR
 *           Program: FBL Vector SLP3 (FBL_Vector_SLP3)
 *          Customer: Vector Japan Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F7016493AFP-C
 *    License Scope : The usage is restricted to CBD1900263_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: PduR_Lcfg.c
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

#define PDUR_LCFG_SOURCE

/**********************************************************************************************************************
 * MISRA / PCLINT JUSTIFICATION
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "PduR.h"
#include "SchM_PduR.h"
#if(PDUR_DEV_ERROR_REPORT == STD_ON)
# include "Det.h"
#endif
# include "PduR_Lcfg.h"



/**********************************************************************************************************************
 * LOCAL CONSTANT MACROS
 *********************************************************************************************************************/
#define CommonSharedMemory  0u /* Dummy symbolic name value for the shared memory memory section */

/**********************************************************************************************************************
 * LOCAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
#define PDUR_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "PduR_MemMap.h"

/* Exclusive Area Wrapper functions */
static FUNC(void, PDUR_CODE) PduR_SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0(void);
static FUNC(void, PDUR_CODE) PduR_SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0(void);

/* Upper Layer Interface API declarations */
FUNC(Std_ReturnType, PDUR_CODE) PduR_DcmTransmit(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info);

/* Communication Interface API declarations */

/* Trigger Transmit API declarations */

/* Transport Protocol API declarations */
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_CanTpStartOfReception(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, PduLengthType TpSduLength, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr);
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_CanTpCopyRxData(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr);
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_CanTpCopyTxData(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, P2VAR(RetryInfoType, AUTOMATIC, PDUR_APPL_DATA) retry, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) availableDataPtr);
FUNC(void, PDUR_CODE) PduR_CanTpRxIndication(PduIdType id, Std_ReturnType result);
FUNC(void, PDUR_CODE) PduR_CanTpTxConfirmation(PduIdType id, Std_ReturnType result);

/* Cancel Receive API declarations */

/* Change Parameter API declarations */

/* Cancel Transmit API declarations */

#define PDUR_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "PduR_MemMap.h"
  
/**********************************************************************************************************************
 * LOCAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * GLOBAL DATA
 *********************************************************************************************************************/
/* \trace SPEC-663, SPEC-661 */

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  PduR_InitializedRam
**********************************************************************************************************************/
/** 
  \var    PduR_InitializedRam
  \brief  Initialized status of each partition the PduR runs on.
*/ 
#define PDUR_START_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(PduR_InitializedRamType, PDUR_VAR_NO_INIT) PduR_InitializedRam[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [PduRSinglePartitionDummy] */

#define PDUR_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_ExclusiveAreaRom
**********************************************************************************************************************/
/** 
  \var    PduR_ExclusiveAreaRom
  \brief  PduR Exclusive Area Locks
  \details
  Element    Description
  Lock       Lock function
  Unlock     Unlock function
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_ExclusiveAreaRomType, PDUR_CONST) PduR_ExclusiveAreaRom[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Lock                                        Unlock                                           Referable Keys */
  { /*     0 */ PduR_SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0, PduR_SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0 }   /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRLock_PduRExclusiveArea] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_MmRom
**********************************************************************************************************************/
/** 
  \var    PduR_MmRom
  \brief  Module manager: Contains all function pointers of the bordering modules.
  \details
  Element                       Description
  UpTp                          Is the module a upper transport protocol module.
  LoTpCancelReceiveFctPtr       Lower layer cancel receive function pointers.
  LoIfCancelTransmitFctPtr      Lower layer cancel transmit function pointers.
  LoTpCancelTransmitFctPtr      Lower layer cancel transmit function pointers.
  LoTpChangeParameterFctPtr     lower layer change parameter function pointers to change e.g. BS or STmin..
  UpTpCopyRxDataFctPtr          Transport protocol CopyRxData function pointers
  UpTpCopyTxDataFctPtr          Transport protocol CopyTxData function pointers
  UpIfRxIndicationFctPtr        Upper layer communication interface Rx indication function pointers.
  UpIfTxConfirmationFctPtr      Upper layer communication interface Tx confimation function pointers
  UpTpStartOfReceptionFctPtr    Transport protocol StartOfReception function pointers
  UpTpTpRxIndicationFctPtr      Transport protocol TpRxIndication function pointers
  UpTpTpTxConfirmationFctPtr    Transport protocol TpTxConfimation function pointers
  LoIfTransmitFctPtr            Lower layer If transmit function pointers
  LoTpTransmitFctPtr            Lower layer Tp transmit function pointers
  UpIfTriggerTransmitFctPtr     Upper layer trigger transmit function pointers
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_MmRomType, PDUR_CONST) PduR_MmRom[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    UpTp   LoTpCancelReceiveFctPtr  LoIfCancelTransmitFctPtr  LoTpCancelTransmitFctPtr  LoTpChangeParameterFctPtr  UpTpCopyRxDataFctPtr  UpTpCopyTxDataFctPtr  UpIfRxIndicationFctPtr  UpIfTxConfirmationFctPtr  UpTpStartOfReceptionFctPtr  UpTpTpRxIndicationFctPtr  UpTpTpTxConfirmationFctPtr  LoIfTransmitFctPtr  LoTpTransmitFctPtr  UpIfTriggerTransmitFctPtr        Referable Keys */
  { /*     0 */ FALSE, NULL_PTR               , NULL_PTR                , NULL_PTR                , NULL_PTR                 , NULL_PTR            , NULL_PTR            , NULL_PTR              , NULL_PTR                , NULL_PTR                  , NULL_PTR                , NULL_PTR                  , NULL_PTR          , CanTp_Transmit    , NULL_PTR                  },  /* [/ActiveEcuC/PduR/CanTp] */
  { /*     1 */  TRUE, NULL_PTR               , NULL_PTR                , NULL_PTR                , NULL_PTR                 , Dcm_CopyRxData      , Dcm_CopyTxData      , NULL_PTR              , NULL_PTR                , Dcm_StartOfReception      , Dcm_TpRxIndication      , Dcm_TpTxConfirmation      , NULL_PTR          , NULL_PTR          , NULL_PTR                  }   /* [/ActiveEcuC/PduR/Dcm] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_PartitionIdentifiers
**********************************************************************************************************************/
/** 
  \var    PduR_PartitionIdentifiers
  \brief  the partition context in Config
  \details
  Element         Description
  PartitionSNV
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_PartitionIdentifiersType, PDUR_CONST) PduR_PartitionIdentifiers[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PartitionSNV       */
  { /*     0 */ CommonSharedMemory }
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmDestRom
**********************************************************************************************************************/
/** 
  \var    PduR_RmDestRom
  \brief  PduR RoutingPathManager destPdu Table
  \details
  Element          Description
  RmGDestRomIdx    the index of the 1:1 relation pointing to PduR_RmGDestRom
  RmSrcRomIdx      the index of the 1:1 relation pointing to PduR_RmSrcRom
  RoutingType      Type of the Routing (API Forwarding, Gateway).
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_RmDestRomType, PDUR_CONST) PduR_RmDestRom[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RmGDestRomIdx  RmSrcRomIdx  RoutingType                                                 Comment                                                                                          Referable Keys */
  { /*     0 */            5u,          3u, PDUR_TP_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: Functional_CAN_FD_oDemoFBL_Vector_SLP3_ed563a98_Rx_1cf8eade_Rx]        */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Functional_CAN_FD_oDemoFBL_Vector_SLP3_ed563a98_Rx/PduRSrcPdu_1cf8eade, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Functional_CAN_FD_oDemoFBL_Vector_SLP3_ed563a98_Rx/Functional_CAN_FD_oDemoFBL_Vector_SLP3_ed563a98_Rx_1cf8eade_Rx] */
  { /*     1 */            4u,          2u, PDUR_TP_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: Functional_CAN_FD_oDemoFBL_Vector_SLP3_20_7403a32a_Rx_3d6136a3_Rx]     */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Functional_CAN_FD_oDemoFBL_Vector_SLP3_20_7403a32a_Rx/PduRSrcPdu_3d6136a3, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Functional_CAN_FD_oDemoFBL_Vector_SLP3_20_7403a32a_Rx/Functional_CAN_FD_oDemoFBL_Vector_SLP3_20_7403a32a_Rx_3d6136a3_Rx] */
  { /*     2 */            1u,          1u, PDUR_TP_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: Demo_0_CAN_FD_Request_oDemoFBL_Vector_SLP3_6635a675_Rx_425f3fdc_Rx]    */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Demo_0_CAN_FD_Request_oDemoFBL_Vector_SLP3_6635a675_Rx/PduRSrcPdu_425f3fdc, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Demo_0_CAN_FD_Request_oDemoFBL_Vector_SLP3_6635a675_Rx/Demo_0_CAN_FD_Request_oDemoFBL_Vector_SLP3_6635a675_Rx_425f3fdc_Rx] */
  { /*     3 */            2u,          5u, PDUR_TP_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: Demo_0_CAN_FD_Response_oDemoFBL_Vector_SLP3_20_50875972_Tx]            */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Demo_0_CAN_FD_Response_oDemoFBL_Vector_SLP3_20_fac2fc54_Tx/PduRSrcPdu_554525c7, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Demo_0_CAN_FD_Response_oDemoFBL_Vector_SLP3_20_fac2fc54_Tx/Demo_0_CAN_FD_Response_oDemoFBL_Vector_SLP3_20_50875972_Tx] */
  { /*     4 */            0u,          0u, PDUR_TP_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: Demo_0_CAN_FD_Request_oDemoFBL_Vector_SLP3_20_dc7615a6_Rx_5b048e34_Rx] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Demo_0_CAN_FD_Request_oDemoFBL_Vector_SLP3_20_dc7615a6_Rx/PduRSrcPdu_5b048e34, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Demo_0_CAN_FD_Request_oDemoFBL_Vector_SLP3_20_dc7615a6_Rx/Demo_0_CAN_FD_Request_oDemoFBL_Vector_SLP3_20_dc7615a6_Rx_5b048e34_Rx] */
  { /*     5 */            3u,          4u, PDUR_TP_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM }   /* [PduRDestPdu: Demo_0_CAN_FD_Response_oDemoFBL_Vector_SLP3_8fbef359_Tx]               */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Demo_0_CAN_FD_Response_oDemoFBL_Vector_SLP3_01a35bfe_Tx/PduRSrcPdu_c8f30f5f, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Demo_0_CAN_FD_Response_oDemoFBL_Vector_SLP3_01a35bfe_Tx/Demo_0_CAN_FD_Response_oDemoFBL_Vector_SLP3_8fbef359_Tx] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmGDestRom
**********************************************************************************************************************/
/** 
  \var    PduR_RmGDestRom
  \brief  PduR RoutingPathManager global destPdu Table
  \details
  Element         Description
  DestHnd         handle to be used as parameter for the StartOfReception, CopyRxData, Transmit or RxIndication function call.
  Direction       Direction of this Pdu: Rx or Tx
  MmRomIdx        the index of the 1:1 relation pointing to PduR_MmRom
  PduLength       Configured PduLength without the metadata.
  RmDestRomIdx    the index of the 1:1 relation pointing to PduR_RmDestRom
  TxIf2UpIdx      TxIf2Up index.
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_RmGDestRomType, PDUR_CONST) PduR_RmGDestRom[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    DestHnd                                                                                      Direction                      MmRomIdx  PduLength  RmDestRomIdx  TxIf2UpIdx        Comment                                                                                      Referable Keys */
  { /*     0 */ DcmConf_DcmDslProtocolRx_Demo_0_CAN_FD_Request_oDemoFBL_Vector_SLP3_20_797faa4e_Rx_26d06049, PDUR_RX_DIRECTIONOFRMGDESTROM,       1u,        8u,           4u,         0u },  /* [Global PduRDestPdu: Demo_0_CAN_FD_Request_oDemoFBL_Vector_SLP3_20_797faa4e_Rx]  */  /* [/ActiveEcuC/EcuC/EcucPduCollection/Demo_0_CAN_FD_Request_oDemoFBL_Vector_SLP3_20_797faa4e_Rx, /ActiveEcuC/PduR/Dcm, PduRSinglePartitionDummy] */
  { /*     1 */    DcmConf_DcmDslProtocolRx_Demo_0_CAN_FD_Request_oDemoFBL_Vector_SLP3_67f6c3c9_Rx_2eeaac32, PDUR_RX_DIRECTIONOFRMGDESTROM,       1u,       64u,           2u,         1u },  /* [Global PduRDestPdu: Demo_0_CAN_FD_Request_oDemoFBL_Vector_SLP3_67f6c3c9_Rx]     */  /* [/ActiveEcuC/EcuC/EcucPduCollection/Demo_0_CAN_FD_Request_oDemoFBL_Vector_SLP3_67f6c3c9_Rx, /ActiveEcuC/PduR/Dcm, PduRSinglePartitionDummy] */
  { /*     2 */                                                  CanTpConf_CanTpTxNSdu_CanTpTxNSdu_0468c0cb, PDUR_TX_DIRECTIONOFRMGDESTROM,       0u,        8u,           3u,         1u },  /* [Global PduRDestPdu: Demo_0_CAN_FD_Response_oDemoFBL_Vector_SLP3_20_50875972_Tx] */  /* [/ActiveEcuC/EcuC/EcucPduCollection/Demo_0_CAN_FD_Response_oDemoFBL_Vector_SLP3_20_50875972_Tx, /ActiveEcuC/PduR/CanTp, PduRSinglePartitionDummy] */
  { /*     3 */                                                  CanTpConf_CanTpTxNSdu_CanTpTxNSdu_f05a2e85, PDUR_TX_DIRECTIONOFRMGDESTROM,       0u,       64u,           5u,         0u },  /* [Global PduRDestPdu: Demo_0_CAN_FD_Response_oDemoFBL_Vector_SLP3_8fbef359_Tx]    */  /* [/ActiveEcuC/EcuC/EcucPduCollection/Demo_0_CAN_FD_Response_oDemoFBL_Vector_SLP3_8fbef359_Tx, /ActiveEcuC/PduR/CanTp, PduRSinglePartitionDummy] */
  { /*     4 */     DcmConf_DcmDslProtocolRx_Functional_CAN_FD_oDemoFBL_Vector_SLP3_20_57859879_Rx_0f27df12, PDUR_RX_DIRECTIONOFRMGDESTROM,       1u,        7u,           1u,         3u },  /* [Global PduRDestPdu: Functional_CAN_FD_oDemoFBL_Vector_SLP3_20_57859879_Rx]      */  /* [/ActiveEcuC/EcuC/EcucPduCollection/Functional_CAN_FD_oDemoFBL_Vector_SLP3_20_57859879_Rx, /ActiveEcuC/PduR/Dcm, PduRSinglePartitionDummy] */
  { /*     5 */        DcmConf_DcmDslProtocolRx_Functional_CAN_FD_oDemoFBL_Vector_SLP3_3cffe9e9_Rx_56b3eb44, PDUR_RX_DIRECTIONOFRMGDESTROM,       1u,       62u,           0u,         2u }   /* [Global PduRDestPdu: Functional_CAN_FD_oDemoFBL_Vector_SLP3_3cffe9e9_Rx]         */  /* [/ActiveEcuC/EcuC/EcucPduCollection/Functional_CAN_FD_oDemoFBL_Vector_SLP3_3cffe9e9_Rx, /ActiveEcuC/PduR/Dcm, PduRSinglePartitionDummy] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmSrcRom
**********************************************************************************************************************/
/** 
  \var    PduR_RmSrcRom
  \brief  PduR RoutiongManager SrcPdu Table
  \details
  Element              Description
  MmRomIdx             the index of the 1:1 relation pointing to PduR_MmRom
  RmDestRomStartIdx    the start index of the 1:n relation pointing to PduR_RmDestRom
  SrcHnd               handle to be used as parameter for the TxConfirmation or TriggerTransmit function call.
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_RmSrcRomType, PDUR_CONST) PduR_RmSrcRom[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    MmRomIdx  RmDestRomStartIdx  SrcHnd                                                                                              Comment                                       Referable Keys */
  { /*     0 */       0u,                4u,                                                                                           0u },  /* [PduRSrcPdu: PduRSrcPdu_5b048e34] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Demo_0_CAN_FD_Request_oDemoFBL_Vector_SLP3_20_dc7615a6_Rx/PduRSrcPdu_5b048e34] */
  { /*     1 */       0u,                2u,                                                                                           0u },  /* [PduRSrcPdu: PduRSrcPdu_425f3fdc] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Demo_0_CAN_FD_Request_oDemoFBL_Vector_SLP3_6635a675_Rx/PduRSrcPdu_425f3fdc] */
  { /*     2 */       0u,                1u,                                                                                           0u },  /* [PduRSrcPdu: PduRSrcPdu_3d6136a3] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Functional_CAN_FD_oDemoFBL_Vector_SLP3_20_7403a32a_Rx/PduRSrcPdu_3d6136a3] */
  { /*     3 */       0u,                0u,                                                                                           0u },  /* [PduRSrcPdu: PduRSrcPdu_1cf8eade] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Functional_CAN_FD_oDemoFBL_Vector_SLP3_ed563a98_Rx/PduRSrcPdu_1cf8eade] */
  { /*     4 */       1u,                5u,    DcmConf_DcmDslProtocolTx_Demo_0_CAN_FD_Response_oDemoFBL_Vector_SLP3_01a35bfe_Tx_6ae15480 },  /* [PduRSrcPdu: PduRSrcPdu_c8f30f5f] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Demo_0_CAN_FD_Response_oDemoFBL_Vector_SLP3_01a35bfe_Tx/PduRSrcPdu_c8f30f5f] */
  { /*     5 */       1u,                3u, DcmConf_DcmDslProtocolTx_Demo_0_CAN_FD_Response_oDemoFBL_Vector_SLP3_20_fac2fc54_Tx_7966a2bf }   /* [PduRSrcPdu: PduRSrcPdu_554525c7] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Demo_0_CAN_FD_Response_oDemoFBL_Vector_SLP3_20_fac2fc54_Tx/PduRSrcPdu_554525c7] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RxTp2Src
**********************************************************************************************************************/
/** 
  \var    PduR_RxTp2Src
  \brief  This table contains all routing information to perform the ChangeParameter or CancelReceive handling. Used in ChangeParameter and CancelReceive APIs 	race SPEC-1024
  \details
  Element         Description
  RmDestRomIdx    the index of the 1:1 relation pointing to PduR_RmDestRom
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_RxTp2SrcType, PDUR_CONST) PduR_RxTp2Src[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RmDestRomIdx */
  { /*     0 */           4u },
  { /*     1 */           2u },
  { /*     2 */           0u },
  { /*     3 */           1u }
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TxTp2Src
**********************************************************************************************************************/
/** 
  \var    PduR_TxTp2Src
  \brief  This table contains all routing information to perform the Tx handling of a transport protocol routing, Used in the &lt;LoTp&gt;_CopyTxData and &lt;LoTp&gt;_TxConfirmation
  \details
  Element          Description
  RmGDestRomIdx    the index of the 1:1 relation pointing to PduR_RmGDestRom
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_TxTp2SrcType, PDUR_CONST) PduR_TxTp2Src[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RmGDestRomIdx        Referable Keys */
  { /*     0 */            3u },  /* [/ActiveEcuC/EcuC/EcucPduCollection/Demo_0_CAN_FD_Response_oDemoFBL_Vector_SLP3_8fbef359_Tx] */
  { /*     1 */            2u }   /* [/ActiveEcuC/EcuC/EcucPduCollection/Demo_0_CAN_FD_Response_oDemoFBL_Vector_SLP3_20_50875972_Tx] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "PduR_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/


#define PDUR_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "PduR_MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_MemMap */

#if(PDUR_USE_INIT_POINTER == STD_ON)
P2CONST(PduR_PBConfigType, PDUR_VAR_CLEARED, PDUR_PBCFG) PduR_ConfigDataPtr = (const PduR_PBConfigType *) NULL_PTR;
#endif

#define PDUR_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "PduR_MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_MemMap */

#define PDUR_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "PduR_MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_MemMap */

VAR(boolean, PDUR_VAR_NO_INIT) PduR_PreInitialized;

#define PDUR_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "PduR_MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_MemMap */
  
/**********************************************************************************************************************
 * LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/
#define PDUR_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "PduR_MemMap.h"

/* Exclusive Area Wrapper functions */

/**********************************************************************************************************************
 * PduR_SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0
 *********************************************************************************************************************/
/*!
 * \internal
 * -  enter the EA  
 * \endinternal
 *********************************************************************************************************************/
static FUNC(void, PDUR_CODE) PduR_SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0(void)
{
  SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0();
}


/**********************************************************************************************************************
 * PduR_SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0
 *********************************************************************************************************************/
/*!
 * \internal
 * -  exit the EA  
 * \endinternal
 *********************************************************************************************************************/
static FUNC(void, PDUR_CODE) PduR_SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0(void)
{
  SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0();
}


/* Upper Layer Interface APIs */

/**********************************************************************************************************************
 * PduR_DcmTransmit
 *********************************************************************************************************************/
/*!
 * \internal
 * - call upper layer Transmit function. 
 * \endinternal
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_DcmTransmit(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info)  /* VCA_PDUR_GLUE_FUNCTION */
{
  return PduR_UpTransmit(id, info);
}


/* Communication Interface APIs */

/* Trigger Transmit APIs */

/* Transport Protocol APIs */

/**********************************************************************************************************************
 * PduR_CanTpStartOfReception
 *********************************************************************************************************************/
 /*!
 * \internal
 * - call transport protocoll StartOfReception function.  
 * \endinternal
 *********************************************************************************************************************/
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_CanTpStartOfReception(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, PduLengthType TpSduLength, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr)  /* VCA_PDUR_GLUE_FUNCTION */
{
  return PduR_LoTpStartOfReception(id, info, TpSduLength, bufferSizePtr);
}


/**********************************************************************************************************************
 * PduR_CanTpCopyRxData
 *********************************************************************************************************************/
/*!
 * \internal
 * - call internal general CopyRxData.
 * \endinternal
 *********************************************************************************************************************/
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_CanTpCopyRxData(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr)  /* VCA_PDUR_GLUE_FUNCTION */
{
  return PduR_LoTpCopyRxData(id, info, bufferSizePtr);
}


/**********************************************************************************************************************
 * PduR_CanTpCopyTxData
 *********************************************************************************************************************/
/*!
 * \internal
 * - call internal general CopyTxData.
 * \endinternal
 *********************************************************************************************************************/
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_CanTpCopyTxData(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, P2VAR(RetryInfoType, AUTOMATIC, PDUR_APPL_DATA) retry, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) availableDataPtr)  /* VCA_PDUR_GLUE_FUNCTION */
{
  return PduR_LoTpCopyTxData(id, info, retry, availableDataPtr);
}


/**********************************************************************************************************************
 * PduR_CanTpRxIndication
 *********************************************************************************************************************/
/*!
 * \internal
 * - call Tp RxIndication function.
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_CanTpRxIndication(PduIdType id, Std_ReturnType result)  /* VCA_PDUR_GLUE_FUNCTION */
{
  PduR_LoTpRxIndication(id, result);
}


/**********************************************************************************************************************
 * PduR_CanTpTxConfirmation
 *********************************************************************************************************************/
/*!
 * \internal
 * - call Tp TxConfirmation function 
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_CanTpTxConfirmation(PduIdType id, Std_ReturnType result)  /* VCA_PDUR_GLUE_FUNCTION */
{
  PduR_LoTpTxConfirmation(id, result);
}


/* Cancel Receive API */

/* Change Parameter API */

/* Cancel Transmit API */

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/


#define PDUR_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "PduR_MemMap.h"

/**********************************************************************************************************************
 * END OF FILE: PduR_Lcfg.c
 *********************************************************************************************************************/

