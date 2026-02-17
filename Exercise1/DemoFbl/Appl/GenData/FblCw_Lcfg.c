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
 *            Module: FblCw
 *           Program: FBL Vector SLP3 (FBL_Vector_SLP3)
 *          Customer: Vector Japan Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F7016493AFP-C
 *    License Scope : The usage is restricted to CBD1900263_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: FblCw_Lcfg.c
 *   Generation Time: 2026-02-10 09:18:59
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


#define FBLCW_LCFG_SOURCE
/**********************************************************************************************************************
 * MISRA JUSTIFICATION
 *********************************************************************************************************************/
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0779 EOF */ /* MD_CSL_0779 */

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "fbl_inc.h"
#include "FblCw_Lcfg.h"
#include "PduR_Dcm.h"

#include "CanIf.h"
#include "CanTp.h"




/**********************************************************************************************************************
  LOCAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  FblCw_CanIfCtrlInfo
**********************************************************************************************************************/
/** 
  \var    FblCw_CanIfCtrlInfo
  \brief  DefinitionRef: /[ANY]/CanIf/CanIfCtrlDrvCfg/CanIfCtrlCfg
*/ 
#define FBLCW_START_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(FblCw_CanIfCtrlInfoType, FBLCW_CONST) FblCw_CanIfCtrlInfo[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     CanIfCtrlInfo                                               Referable Keys */
  /*     0 */  CanIfConf_CanIfCtrlCfg_CT_DemoFBL_Vector_SLP3_216858f6   /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_DemoFBL_Vector_SLP3_216858f6] */
};
#define FBLCW_STOP_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  FblCw_DcmDslConnectionInfo
**********************************************************************************************************************/
/** 
  \var    FblCw_DcmDslConnectionInfo
  \brief  DefinitionRef: /MICROSARFBL/Dcm/DcmConfigSet/DcmDsl/DcmDslProtocol/DcmDslProtocolRow/DcmDslConnection
  \details
  Element                        Description
  PayloadLimit                   DefinitionRef: /MICROSARFBL/Dcm/DcmConfigSet/DcmDsl/DcmDslProtocol/DcmDslProtocolRow/DcmDslConnection/DcmDslMainConnection/DcmDslPayloadLimit
  RxTesterSourceAddress          DefinitionRef: /MICROSARFBL/Dcm/DcmConfigSet/DcmDsl/DcmDslProtocol/DcmDslProtocolRow/DcmDslConnection/DcmDslMainConnection/DcmDslProtocolRxTesterSourceAddr
  ChannelReadyIndication         Defines if ChannelReady Indication is used for this connection
  BusType                        the bustype of the connection
  Controller                     controller handle
  ProgSessionResponseHandling    DefinitionRef: /MICROSARFBL/Dcm/DcmConfigSet/DcmDsl/DcmDslProtocol/DcmDslProtocolRow/DcmDslConnection/DcmDslMainConnection/DcmProgSessionResponseHandling
  TxRemotePduId                  DefinitionRef: /[ANY]/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath/PduRSrcPdu based symbolic name value
*/ 
#define FBLCW_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(FblCw_DcmDslConnectionInfoType, FBLCW_CONST) FblCw_DcmDslConnectionInfo[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PayloadLimit  RxTesterSourceAddress  ChannelReadyIndication  BusType                                    Controller                                              ProgSessionResponseHandling                                                  TxRemotePduId                                  Referable Keys */
  { /*     0 */      0x0FFFu,                  257u,                  FALSE,   FBLCW_CAN_BUSTYPEOFDCMDSLCONNECTIONINFO, CanIfConf_CanIfCtrlCfg_CT_DemoFBL_Vector_SLP3_216858f6, FBLCW_BOOTLOADER_RESPONSE_PROGSESSIONRESPONSEHANDLINGOFDCMDSLCONNECTIONINFO, PduRConf_PduRSrcPdu_PduRSrcPdu_554525c7 },  /* [/ActiveEcuC/Dcm/DcmConfigSet/DcmDsl/DcmDslProtocol/DcmDslProtocolRow_29812fbf/DcmDslConnection_64d54b0f] */
  { /*     1 */      0x0FFFu,                  514u,                  FALSE, FBLCW_CANFD_BUSTYPEOFDCMDSLCONNECTIONINFO, CanIfConf_CanIfCtrlCfg_CT_DemoFBL_Vector_SLP3_216858f6, FBLCW_BOOTLOADER_RESPONSE_PROGSESSIONRESPONSEHANDLINGOFDCMDSLCONNECTIONINFO, PduRConf_PduRSrcPdu_PduRSrcPdu_c8f30f5f }   /* [/ActiveEcuC/Dcm/DcmConfigSet/DcmDsl/DcmDslProtocol/DcmDslProtocolRow_29812fbf/DcmDslConnection_bcbd2a82] */
};
#define FBLCW_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  FblCw_DcmDslProtocolRxInfo
**********************************************************************************************************************/
/** 
  \var    FblCw_DcmDslProtocolRxInfo
  \brief  DefinitionRef: /MICROSARFBL/Dcm/DcmConfigSet/DcmDsl/DcmDslProtocol/DcmDslProtocolRow/DcmDslConnection/DcmDslMainConnection/DcmDslProtocolRx
  \details
  Element                    Description
  AddrType                   DefinitionRef: /MICROSARFBL/Dcm/DcmConfigSet/DcmDsl/DcmDslProtocol/DcmDslProtocolRow/DcmDslConnection/DcmDslMainConnection/DcmDslProtocolRx/DcmDslProtocolRxAddrType
  DcmDslConnectionInfoIdx    the index of the 1:1 relation pointing to FblCw_DcmDslConnectionInfo
*/ 
#define FBLCW_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(FblCw_DcmDslProtocolRxInfoType, FBLCW_CONST) FblCw_DcmDslProtocolRxInfo[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    AddrType                                         DcmDslConnectionInfoIdx        Referable Keys */
  { /*     0 */   FBLCW_PHYSICAL_ADDRTYPEOFDCMDSLPROTOCOLRXINFO,                      0u },  /* [/ActiveEcuC/Dcm/DcmConfigSet/DcmDsl/DcmDslProtocol/DcmDslProtocolRow_29812fbf/DcmDslConnection_64d54b0f/DcmDslMainConnection_e6feb00f/Demo_0_CAN_FD_Request_oDemoFBL_Vector_SLP3_20_797faa4e_Rx_26d06049] */
  { /*     1 */ FBLCW_FUNCTIONAL_ADDRTYPEOFDCMDSLPROTOCOLRXINFO,                      0u },  /* [/ActiveEcuC/Dcm/DcmConfigSet/DcmDsl/DcmDslProtocol/DcmDslProtocolRow_29812fbf/DcmDslConnection_64d54b0f/DcmDslMainConnection_e6feb00f/Functional_CAN_FD_oDemoFBL_Vector_SLP3_20_57859879_Rx_0f27df12] */
  { /*     2 */   FBLCW_PHYSICAL_ADDRTYPEOFDCMDSLPROTOCOLRXINFO,                      1u },  /* [/ActiveEcuC/Dcm/DcmConfigSet/DcmDsl/DcmDslProtocol/DcmDslProtocolRow_29812fbf/DcmDslConnection_bcbd2a82/DcmDslMainConnection_0a68bfea/Demo_0_CAN_FD_Request_oDemoFBL_Vector_SLP3_67f6c3c9_Rx_2eeaac32] */
  { /*     3 */ FBLCW_FUNCTIONAL_ADDRTYPEOFDCMDSLPROTOCOLRXINFO,                      1u }   /* [/ActiveEcuC/Dcm/DcmConfigSet/DcmDsl/DcmDslProtocol/DcmDslProtocolRow_29812fbf/DcmDslConnection_bcbd2a82/DcmDslMainConnection_0a68bfea/Functional_CAN_FD_oDemoFBL_Vector_SLP3_3cffe9e9_Rx_56b3eb44] */
};
#define FBLCW_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  FblCw_DcmDslProtocolTxInfo
**********************************************************************************************************************/
/** 
  \var    FblCw_DcmDslProtocolTxInfo
  \brief  DefinitionRef: /MICROSARFBL/Dcm/DcmConfigSet/DcmDsl/DcmDslProtocol/DcmDslProtocolRow/DcmDslConnection/DcmDslMainConnection/DcmDslProtocolTx
  \details
  Element                    Description
  DcmDslConnectionInfoIdx    the index of the 1:1 relation pointing to FblCw_DcmDslConnectionInfo
*/ 
#define FBLCW_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(FblCw_DcmDslProtocolTxInfoType, FBLCW_CONST) FblCw_DcmDslProtocolTxInfo[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    DcmDslConnectionInfoIdx        Referable Keys */
  { /*     0 */                      0u },  /* [/ActiveEcuC/Dcm/DcmConfigSet/DcmDsl/DcmDslProtocol/DcmDslProtocolRow_29812fbf/DcmDslConnection_64d54b0f/DcmDslMainConnection_e6feb00f/Demo_0_CAN_FD_Response_oDemoFBL_Vector_SLP3_20_fac2fc54_Tx_7966a2bf] */
  { /*     1 */                      1u }   /* [/ActiveEcuC/Dcm/DcmConfigSet/DcmDsl/DcmDslProtocol/DcmDslProtocolRow_29812fbf/DcmDslConnection_bcbd2a82/DcmDslMainConnection_0a68bfea/Demo_0_CAN_FD_Response_oDemoFBL_Vector_SLP3_01a35bfe_Tx_6ae15480] */
};
#define FBLCW_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  FblCw_Initialized
**********************************************************************************************************************/
/** 
  \var    FblCw_Initialized
  \brief  Initialization state of the Dcm. TRUE, if Dcm_Init() has been called, else FALSE.
*/ 
#define FBLCW_START_SEC_VAR_CLEARED_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(FblCw_InitializedType, FBLCW_VAR_CLEARED) FblCw_Initialized;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define FBLCW_STOP_SEC_VAR_CLEARED_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
  LOCAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/

#define FBLCW_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define FBLCW_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
  END OF FILE: FblCw_Lcfg.c
**********************************************************************************************************************/

