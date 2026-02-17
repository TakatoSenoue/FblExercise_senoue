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
 *              File: CanTp_Cfg.h
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

#if !defined(CANTP_CFG_H)
#define CANTP_CFG_H

/* -----------------------------------------------------------------------------
    &&&~ Include files
 ----------------------------------------------------------------------------- */

#include "ComStack_Types.h"

/* Definition of feature switches in the library delivered */
#ifndef CANTP_USE_DUMMY_STATEMENT
#define CANTP_USE_DUMMY_STATEMENT STD_ON /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef CANTP_DUMMY_STATEMENT
#define CANTP_DUMMY_STATEMENT(v) (v)=(v) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef CANTP_DUMMY_STATEMENT_CONST
#define CANTP_DUMMY_STATEMENT_CONST(v) (void)(v) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef CANTP_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define CANTP_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef CANTP_ATOMIC_VARIABLE_ACCESS
#define CANTP_ATOMIC_VARIABLE_ACCESS 8u /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef CANTP_PROCESSOR_RH850_1649
#define CANTP_PROCESSOR_RH850_1649
#endif
#ifndef CANTP_COMP_GREENHILLS
#define CANTP_COMP_GREENHILLS
#endif
#ifndef CANTP_GEN_GENERATOR_MSR
#define CANTP_GEN_GENERATOR_MSR
#endif
#ifndef CANTP_CPUTYPE_BITORDER_LSB2MSB
#define CANTP_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/vSet/vSetPlatform/vSetBitOrder */
#endif
#ifndef CANTP_CONFIGURATION_VARIANT_PRECOMPILE
#define CANTP_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef CANTP_CONFIGURATION_VARIANT_LINKTIME
#define CANTP_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef CANTP_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define CANTP_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef CANTP_CONFIGURATION_VARIANT
#define CANTP_CONFIGURATION_VARIANT CANTP_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef CANTP_POSTBUILD_VARIANT_SUPPORT
#define CANTP_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


/* PRQA S 3453 MACROS_3453 */  /* MD_CSL_3453 */
 /*  Version information  */ 
#define CANTP_CFG_GEN_MAJOR_VERSION                                            7u 
#define CANTP_CFG_GEN_MINOR_VERSION                                            1u 
#define CANTP_CFG_GEN_PATCH_VERSION                                            0u 

 /*  Global defines  */ 
#define CANTP_VERSION_INFO_API                                                 STD_OFF 
#define CANTP_DEV_ERROR_DETECT                                                 STD_ON 
#define CANTP_DEV_ERROR_REPORT                                                 STD_ON 
#define CANTP_RUNTIME_ERROR_REPORT                                             STD_OFF 
#define CANTP_TC                                                               STD_OFF 
#define CANTP_RC                                                               STD_OFF 
#define CANTP_INVALID_HDL                                                      ((PduIdType) 255u) 
#define CANTP_TASK_CYCLE                                                       5u 

 /*  Global constant defines  */ 
#define CANTP_MAX_FRAME_LENGTH                                                 64u 
#define CANTP_MAX_PAYLOAD_LENGTH                                               63u 
#define CANTP_MAX_SDU_METADATA_LENGTH                                          0u 
#define CANTP_NUM_RX_CHANNELS                                                  CanTp_GetSizeOfRxState() 
#define CANTP_NUM_RX_SDUS                                                      4 
#define CANTP_NUM_TX_CHANNELS                                                  CanTp_GetSizeOfTxState() 
#define CANTP_NUM_TX_SDUS                                                      2 
#define CANTP_PDU_METADATA_LENGTH                                              4u 
#define CANTP_SIZEOF_PDULENGTHTYPE                                             2 
#define CanTpSinglePartitionMemory                                             0u                          /* Symbolic name value of CanTp memory for 'single partition' use case. */ 

 /*  Communication Type  */ 
#define CANTP_MODE_FULL_DUPLEX                                                 1u 
#define CANTP_MODE_HALF_DUPLEX                                                 0u 
#define CANTP_TATYPE_FUNCTIONAL                                                1u 
#define CANTP_TATYPE_PHYSICAL                                                  0u 

 /*  CanTp Adress Format  */ 
#define CANTP_ADDRESS_FORMAT_CUSTOM                                            5u 
#define CANTP_ADDRESS_FORMAT_EXTENDED                                          1u 
#define CANTP_ADDRESS_FORMAT_MIXED11                                           2u 
#define CANTP_ADDRESS_FORMAT_MIXED29                                           4u 
#define CANTP_ADDRESS_FORMAT_NORMALFIXED                                       3u 
#define CANTP_ADDRESS_FORMAT_STANDARD                                          0u 

 /*  Can Type  */ 
#define CANTP_CANTYPE_CAN20                                                    0u 
#define CANTP_CANTYPE_CANFD                                                    1u 

 /*  Vector-CanTp extended capabilities  */ 
#define CANTP_GENERATOR_COMPATIBILITY_VERSION                                  0x000C99FFu                                                    /* Extended error detection capabilities */ 
#define CANTP_CAN20_PADDING_ACTIVE                                             STD_ON 
#define CANTP_HAVE_PADDING_BYTE                                                STD_OFF 
#define CANTP_PADDING_PATTERN                                                  0xCCu                                                          /* Padding byte to be used for the Tx side if CANTP_HAVE_PADDING_BYTE is ON */ 
#define CANTP_DYN_CHANNEL_ASSIGNMENT                                           STD_OFF 
#define CANTP_STANDARD_ADDRESSING                                              STD_ON 
#define CANTP_EXTENDED_ADDRESSING                                              STD_OFF 
#define CANTP_MIXED11_ADDRESSING                                               STD_OFF 
#define CANTP_MIXED29_ADDRESSING                                               STD_ON 
#define CANTP_NORMALFIXED_ADDRESSING                                           STD_ON 
#define CANTP_CUSTOM_ADDRESSING                                                STD_OFF 
#define CANTP_SINGLE_RX_BUFFER_OPTIMIZED                                       STD_OFF 
#define CANTP_RXTX_MAINFUNCTION_API                                            STD_OFF 
#define CANTP_CONSTANT_BS                                                      STD_ON 
#define CANTP_REJECT_FC_WITH_RES_STMIN                                         STD_OFF 
#define CANTP_USE_ONLY_FIRST_FC                                                STD_OFF 
#define CANTP_ENABLE_CHANGE_PARAM                                              STD_OFF 
#define CANTP_ENABLE_READ_PARAM                                                STD_OFF 
#define CANTP_ONLY_NOTIFY_INFORMED_APPL                                        STD_ON 
#define CANTP_TRANSMIT_QUEUE                                                   STD_OFF 
#define CANTP_SUPPORT_MULTI_PARTITION                                          STD_OFF 
#define CANTP_SUPPORT_LONG_FF                                                  STD_ON 
#define CANTP_PDUR_API_AR_VERSION                                              0x412 
#define CANTP_SYNC_TRANSMIT                                                    STD_ON 
#define CANTP_SUPPORT_CANFD                                                    STD_ON 
#define CANTP_STMIN_BY_APPL                                                    STD_OFF 
#define CANTP_DCM_REQUEST_DETECT                                               STD_OFF 
#define CANTP_GENERIC_CONNECTIONS                                              STD_OFF 
#define CANTP_NON_STRICT_LENGTHCHECK                                           STD_OFF 
#define CanTp_ApplStartSeparationTime                                           /*  mapping of user defined function to internal name  */  

 /*  CanTp Lower Layer  */ 
#define CANTP_LOLAYER_CANIF                                                    STD_ON 
#define CANTP_LOLAYER_TC                                                       STD_OFF 
#define CanTp_CanIfCancelTransmit(Dir, ConnId, PduId)                           
#define CanTp_CanIfTransmit(Dir, ConnId, PduId, Data)                          (CanIf_Transmit((PduId),(Data))) 


/* PRQA L:MACROS_3453 */



/* -----------------------------------------------------------------------------
    &&&~ Pre-Compile optimized configuration
 ----------------------------------------------------------------------------- */
 
/* -----------------------------------------------------------------------------
    &&&~ Rx Sdu Handle IDs
----------------------------------------------------------------------------- */
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_08631fbd 0u 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_0468c0cb 1u 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_e1aeb83a 2u 
#define CanTpConf_CanTpRxNSdu_CanTpRxNSdu_f05a2e85 3u 

 
/* -----------------------------------------------------------------------------
    &&&~ Tx Sdu Handle IDs
----------------------------------------------------------------------------- */
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_0468c0cb 0u 
#define CanTpConf_CanTpTxNSdu_CanTpTxNSdu_f05a2e85 1u 


/* -----------------------------------------------------------------------------
    &&&~ Rx Pdu IDs
 ----------------------------------------------------------------------------- */
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_cb7a0c86 0u 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_e980d874     0u 
#define CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_fd979da3 1u 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_df6d4951     1u 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_3cfeb570     2u 
#define CanTpConf_CanTpRxNPdu_CanTpRxNPdu_e4a40b7d     3u 


/* -----------------------------------------------------------------------------
    &&&~ TxConfirmation Pdu IDs
 ----------------------------------------------------------------------------- */
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_df6d4951 0u 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_fd979da3     0u 
#define CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_e980d874 1u 
#define CanTpConf_CanTpTxNPdu_CanTpTxNPdu_cb7a0c86     1u 




 /**********************************************************************************************************************
 * MACROS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanTpPCDataSwitches  CanTp Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CANTP_CALCBS                                                                                STD_ON
#define CANTP_COMPATIBILITYVERSION                                                                  STD_ON
#define CANTP_DYNFCPARAMETERS                                                                       STD_OFF  /**< Deactivateable: 'CanTp_DynFCParameters' Reason: 'Change Paramter Api is disabled' */
#define CANTP_FINALMAGICNUMBER                                                                      STD_OFF  /**< Deactivateable: 'CanTp_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define CANTP_INITDATAHASHCODE                                                                      STD_OFF  /**< Deactivateable: 'CanTp_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define CANTP_LOLAYERFCTS                                                                           STD_OFF  /**< Deactivateable: 'CanTp_LoLayerFcts' Reason: 'A function table is not required, since just one lower layer exists.' */
#define CANTP_CANCELTRANSMITFCTOFLOLAYERFCTS                                                        STD_OFF  /**< Deactivateable: 'CanTp_LoLayerFcts.CancelTransmitFct' Reason: 'A function table is not required, since just one lower layer exists.' */
#define CANTP_TRANSMITFCTOFLOLAYERFCTS                                                              STD_OFF  /**< Deactivateable: 'CanTp_LoLayerFcts.TransmitFct' Reason: 'A function table is not required, since just one lower layer exists.' */
#define CANTP_METADATAGETTERADDRESS_EXTENSION_8                                                     STD_OFF  /**< Deactivateable: 'CanTp_MetaDataGetterADDRESS_EXTENSION_8' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CANTP_METADATAGETTERCAN_ID_32                                                               STD_OFF  /**< Deactivateable: 'CanTp_MetaDataGetterCAN_ID_32' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CANTP_METADATAGETTERSOURCE_ADDRESS_16                                                       STD_OFF  /**< Deactivateable: 'CanTp_MetaDataGetterSOURCE_ADDRESS_16' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CANTP_METADATAGETTERTARGET_ADDRESS_16                                                       STD_OFF  /**< Deactivateable: 'CanTp_MetaDataGetterTARGET_ADDRESS_16' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CANTP_METADATASETTERADDRESS_EXTENSION_8                                                     STD_OFF  /**< Deactivateable: 'CanTp_MetaDataSetterADDRESS_EXTENSION_8' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CANTP_METADATASETTERCAN_ID_32                                                               STD_OFF  /**< Deactivateable: 'CanTp_MetaDataSetterCAN_ID_32' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CANTP_METADATASETTERSOURCE_ADDRESS_16                                                       STD_OFF  /**< Deactivateable: 'CanTp_MetaDataSetterSOURCE_ADDRESS_16' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CANTP_METADATASETTERTARGET_ADDRESS_16                                                       STD_OFF  /**< Deactivateable: 'CanTp_MetaDataSetterTARGET_ADDRESS_16' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CANTP_PARTITIONIDENTIFIERS                                                                  STD_ON
#define CANTP_PCPARTITIONCONFIGIDXOFPARTITIONIDENTIFIERS                                            STD_ON
#define CANTP_PARTITIONSNVOFPARTITIONIDENTIFIERS                                                    STD_ON
#define CANTP_PARTITIONLOOKUPTABLE                                                                  STD_OFF  /**< Deactivateable: 'CanTp_PartitionLookupTable' Reason: 'the struct is deactivated because all elements are deactivated in all variants.' */
#define CANTP_OSAPPLICATIONTOCANTPOFPARTITIONLOOKUPTABLE                                            STD_OFF  /**< Deactivateable: 'CanTp_PartitionLookupTable.OsApplicationToCanTp' Reason: 'the structure element is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define CANTP_RXCHANNELMAP                                                                          STD_OFF  /**< Deactivateable: 'CanTp_RxChannelMap' Reason: 'Dynamic Channel Assignment is disabled' */
#define CANTP_RXPDU2RXSDUIND                                                                        STD_ON
#define CANTP_RXPDU2TXSDUIND                                                                        STD_ON
#define CANTP_RXPDUMAP                                                                              STD_ON
#define CANTP_ADDRESSINGFORMATOFRXPDUMAP                                                            STD_ON
#define CANTP_GENERICCONNECTIONOFRXPDUMAP                                                           STD_ON
#define CANTP_METADATAGETTERCAN_ID_32IDXOFRXPDUMAP                                                  STD_OFF  /**< Deactivateable: 'CanTp_RxPduMap.MetaDataGetterCAN_ID_32Idx' Reason: 'the optional indirection is deactivated because MetaDataGetterCAN_ID_32UsedOfRxPduMap is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CANTP_METADATAGETTERCAN_ID_32USEDOFRXPDUMAP                                                 STD_OFF  /**< Deactivateable: 'CanTp_RxPduMap.MetaDataGetterCAN_ID_32Used' Reason: 'the optional indirection is deactivated because MetaDataGetterCAN_ID_32UsedOfRxPduMap is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CANTP_PDUMETADATAOFRXPDUMAP                                                                 STD_ON
#define CANTP_RXPDU2RXSDUENDIDXOFRXPDUMAP                                                           STD_ON
#define CANTP_RXPDU2RXSDUPARTITIONIDXOFRXPDUMAP                                                     STD_ON
#define CANTP_RXPDU2RXSDUSTARTIDXOFRXPDUMAP                                                         STD_ON
#define CANTP_RXPDU2RXSDUUSEDOFRXPDUMAP                                                             STD_ON
#define CANTP_RXPDU2TXSDUENDIDXOFRXPDUMAP                                                           STD_ON
#define CANTP_RXPDU2TXSDUPARTITIONIDXOFRXPDUMAP                                                     STD_ON
#define CANTP_RXPDU2TXSDUSTARTIDXOFRXPDUMAP                                                         STD_ON
#define CANTP_RXPDU2TXSDUUSEDOFRXPDUMAP                                                             STD_ON
#define CANTP_RXSDUCFG                                                                              STD_ON
#define CANTP_BLOCKSIZEOFRXSDUCFG                                                                   STD_ON
#define CANTP_CANTYPEOFRXSDUCFG                                                                     STD_ON
#define CANTP_CHANNELMODEOFRXSDUCFG                                                                 STD_ON
#define CANTP_GENERICCONNECTIONOFRXSDUCFG                                                           STD_ON
#define CANTP_LOLAYERFCTSIDXOFRXSDUCFG                                                              STD_OFF  /**< Deactivateable: 'CanTp_RxSduCfg.LoLayerFctsIdx' Reason: 'All indirection targets are deactivated in all variants.' */
#define CANTP_LOLAYERTXFCPDUIDOFRXSDUCFG                                                            STD_ON
#define CANTP_METADATAGETTERADDRESS_EXTENSION_8IDXOFRXSDUCFG                                        STD_OFF  /**< Deactivateable: 'CanTp_RxSduCfg.MetaDataGetterADDRESS_EXTENSION_8Idx' Reason: 'the optional indirection is deactivated because MetaDataGetterADDRESS_EXTENSION_8UsedOfRxSduCfg is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CANTP_METADATAGETTERADDRESS_EXTENSION_8USEDOFRXSDUCFG                                       STD_OFF  /**< Deactivateable: 'CanTp_RxSduCfg.MetaDataGetterADDRESS_EXTENSION_8Used' Reason: 'the optional indirection is deactivated because MetaDataGetterADDRESS_EXTENSION_8UsedOfRxSduCfg is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CANTP_METADATASETTERADDRESS_EXTENSION_8IDXOFRXSDUCFG                                        STD_OFF  /**< Deactivateable: 'CanTp_RxSduCfg.MetaDataSetterADDRESS_EXTENSION_8Idx' Reason: 'the optional indirection is deactivated because MetaDataSetterADDRESS_EXTENSION_8UsedOfRxSduCfg is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CANTP_METADATASETTERADDRESS_EXTENSION_8USEDOFRXSDUCFG                                       STD_OFF  /**< Deactivateable: 'CanTp_RxSduCfg.MetaDataSetterADDRESS_EXTENSION_8Used' Reason: 'the optional indirection is deactivated because MetaDataSetterADDRESS_EXTENSION_8UsedOfRxSduCfg is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CANTP_METADATASETTERCAN_ID_32IDXOFRXSDUCFG                                                  STD_OFF  /**< Deactivateable: 'CanTp_RxSduCfg.MetaDataSetterCAN_ID_32Idx' Reason: 'the optional indirection is deactivated because MetaDataSetterCAN_ID_32UsedOfRxSduCfg is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CANTP_METADATASETTERCAN_ID_32USEDOFRXSDUCFG                                                 STD_OFF  /**< Deactivateable: 'CanTp_RxSduCfg.MetaDataSetterCAN_ID_32Used' Reason: 'the optional indirection is deactivated because MetaDataSetterCAN_ID_32UsedOfRxSduCfg is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CANTP_METADATASETTERSOURCE_ADDRESS_16IDXOFRXSDUCFG                                          STD_OFF  /**< Deactivateable: 'CanTp_RxSduCfg.MetaDataSetterSOURCE_ADDRESS_16Idx' Reason: 'the optional indirection is deactivated because MetaDataSetterSOURCE_ADDRESS_16UsedOfRxSduCfg is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CANTP_METADATASETTERSOURCE_ADDRESS_16USEDOFRXSDUCFG                                         STD_OFF  /**< Deactivateable: 'CanTp_RxSduCfg.MetaDataSetterSOURCE_ADDRESS_16Used' Reason: 'the optional indirection is deactivated because MetaDataSetterSOURCE_ADDRESS_16UsedOfRxSduCfg is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CANTP_METADATASETTERTARGET_ADDRESS_16IDXOFRXSDUCFG                                          STD_OFF  /**< Deactivateable: 'CanTp_RxSduCfg.MetaDataSetterTARGET_ADDRESS_16Idx' Reason: 'the optional indirection is deactivated because MetaDataSetterTARGET_ADDRESS_16UsedOfRxSduCfg is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CANTP_METADATASETTERTARGET_ADDRESS_16USEDOFRXSDUCFG                                         STD_OFF  /**< Deactivateable: 'CanTp_RxSduCfg.MetaDataSetterTARGET_ADDRESS_16Used' Reason: 'the optional indirection is deactivated because MetaDataSetterTARGET_ADDRESS_16UsedOfRxSduCfg is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CANTP_NAROFRXSDUCFG                                                                         STD_ON
#define CANTP_NBROFRXSDUCFG                                                                         STD_ON
#define CANTP_NCROFRXSDUCFG                                                                         STD_ON
#define CANTP_PDUMETADATAOFRXSDUCFG                                                                 STD_OFF  /**< Deactivateable: 'CanTp_RxSduCfg.PduMetadata' Reason: 'PDU metadata is not required with the current configuration.' */
#define CANTP_PDURRXSDUIDOFRXSDUCFG                                                                 STD_ON
#define CANTP_RXADDRESSOFRXSDUCFG                                                                   STD_ON
#define CANTP_RXADDRESSINGFORMATOFRXSDUCFG                                                          STD_ON
#define CANTP_RXMAXPAYLOADLENGTHOFRXSDUCFG                                                          STD_ON
#define CANTP_RXPADDINGACTIVATIONOFRXSDUCFG                                                         STD_ON
#define CANTP_RXPDUIDOFRXSDUCFG                                                                     STD_ON
#define CANTP_RXPDUMAPIDXOFRXSDUCFG                                                                 STD_ON
#define CANTP_RXPDUMAPUSEDOFRXSDUCFG                                                                STD_ON
#define CANTP_RXTATYPEOFRXSDUCFG                                                                    STD_ON
#define CANTP_RXWFTMAXOFRXSDUCFG                                                                    STD_ON
#define CANTP_STMINOFRXSDUCFG                                                                       STD_ON
#define CANTP_SDUMETADATALENGTHOFRXSDUCFG                                                           STD_ON
#define CANTP_TXFCADDRESSOFRXSDUCFG                                                                 STD_ON
#define CANTP_TXFCPDUCONFIRMATIONPDUIDOFRXSDUCFG                                                    STD_ON
#define CANTP_TXPDUMAPIDXOFRXSDUCFG                                                                 STD_ON
#define CANTP_TXPDUMAPUSEDOFRXSDUCFG                                                                STD_ON
#define CANTP_TXSDUCFGIDXOFRXSDUCFG                                                                 STD_ON
#define CANTP_TXSDUCFGUSEDOFRXSDUCFG                                                                STD_ON
#define CANTP_UPLAYERFCTSRXFCTPTRIDXOFRXSDUCFG                                                      STD_OFF  /**< Deactivateable: 'CanTp_RxSduCfg.UpLayerFctsRxFctPtrIdx' Reason: '/ActiveEcuC/CanTp/CanTpGeneral[0:CanTpSupportCustomAddressing] is configured to 'false'' */
#define CANTP_UPLAYERFCTSRXFCTPTRUSEDOFRXSDUCFG                                                     STD_OFF  /**< Deactivateable: 'CanTp_RxSduCfg.UpLayerFctsRxFctPtrUsed' Reason: '/ActiveEcuC/CanTp/CanTpGeneral[0:CanTpSupportCustomAddressing] is configured to 'false'' */
#define CANTP_RXSDUSNV2HDL                                                                          STD_ON
#define CANTP_INVALIDHNDOFRXSDUSNV2HDL                                                              STD_OFF  /**< Deactivateable: 'CanTp_RxSduSnv2Hdl.InvalidHnd' Reason: 'the value of CanTp_InvalidHndOfRxSduSnv2Hdl is always 'false' due to this, the array is deactivated.' and Deactivateable: 'CanTp_RxSduSnv2Hdl.InvalidHnd' Reason: 'the value of CanTp_InvalidHndOfRxSduSnv2Hdl is always 'false' due to this, the array is deactivated.' */
#define CANTP_RXNSDUHDLIDXOFRXSDUSNV2HDL                                                            STD_ON
#define CANTP_RXNSDUHDLPARTITIONIDXOFRXSDUSNV2HDL                                                   STD_ON
#define CANTP_RXNSDUHDLUSEDOFRXSDUSNV2HDL                                                           STD_ON
#define CANTP_RXSTATE                                                                               STD_ON
#define CANTP_SIZEOFCALCBS                                                                          STD_ON
#define CANTP_SIZEOFDYNFCPARAMETERS                                                                 STD_OFF  /**< Deactivateable: 'CanTp_SizeOfDynFCParameters' Reason: 'Deactivateable: 'DynFCParameters' Reason: 'Deactivateable: 'CanTp_DynFCParameters' Reason: 'Change Paramter Api is disabled''' */
#define CANTP_SIZEOFLOLAYERFCTS                                                                     STD_OFF  /**< Deactivateable: 'CanTp_SizeOfLoLayerFcts' Reason: 'Deactivateable: 'LoLayerFcts' Reason: 'Deactivateable: 'CanTp_LoLayerFcts' Reason: 'A function table is not required, since just one lower layer exists.''' */
#define CANTP_SIZEOFMETADATAGETTERADDRESS_EXTENSION_8                                               STD_OFF  /**< Deactivateable: 'CanTp_SizeOfMetaDataGetterADDRESS_EXTENSION_8' Reason: 'Deactivateable: 'MetaDataGetterADDRESS_EXTENSION_8' Reason: 'Deactivateable: 'CanTp_MetaDataGetterADDRESS_EXTENSION_8' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE''' */
#define CANTP_SIZEOFMETADATAGETTERCAN_ID_32                                                         STD_OFF  /**< Deactivateable: 'CanTp_SizeOfMetaDataGetterCAN_ID_32' Reason: 'Deactivateable: 'MetaDataGetterCAN_ID_32' Reason: 'Deactivateable: 'CanTp_MetaDataGetterCAN_ID_32' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE''' */
#define CANTP_SIZEOFMETADATAGETTERSOURCE_ADDRESS_16                                                 STD_OFF  /**< Deactivateable: 'CanTp_SizeOfMetaDataGetterSOURCE_ADDRESS_16' Reason: 'Deactivateable: 'MetaDataGetterSOURCE_ADDRESS_16' Reason: 'Deactivateable: 'CanTp_MetaDataGetterSOURCE_ADDRESS_16' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE''' */
#define CANTP_SIZEOFMETADATAGETTERTARGET_ADDRESS_16                                                 STD_OFF  /**< Deactivateable: 'CanTp_SizeOfMetaDataGetterTARGET_ADDRESS_16' Reason: 'Deactivateable: 'MetaDataGetterTARGET_ADDRESS_16' Reason: 'Deactivateable: 'CanTp_MetaDataGetterTARGET_ADDRESS_16' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE''' */
#define CANTP_SIZEOFMETADATASETTERADDRESS_EXTENSION_8                                               STD_OFF  /**< Deactivateable: 'CanTp_SizeOfMetaDataSetterADDRESS_EXTENSION_8' Reason: 'Deactivateable: 'MetaDataSetterADDRESS_EXTENSION_8' Reason: 'Deactivateable: 'CanTp_MetaDataSetterADDRESS_EXTENSION_8' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE''' */
#define CANTP_SIZEOFMETADATASETTERCAN_ID_32                                                         STD_OFF  /**< Deactivateable: 'CanTp_SizeOfMetaDataSetterCAN_ID_32' Reason: 'Deactivateable: 'MetaDataSetterCAN_ID_32' Reason: 'Deactivateable: 'CanTp_MetaDataSetterCAN_ID_32' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE''' */
#define CANTP_SIZEOFMETADATASETTERSOURCE_ADDRESS_16                                                 STD_OFF  /**< Deactivateable: 'CanTp_SizeOfMetaDataSetterSOURCE_ADDRESS_16' Reason: 'Deactivateable: 'MetaDataSetterSOURCE_ADDRESS_16' Reason: 'Deactivateable: 'CanTp_MetaDataSetterSOURCE_ADDRESS_16' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE''' */
#define CANTP_SIZEOFMETADATASETTERTARGET_ADDRESS_16                                                 STD_OFF  /**< Deactivateable: 'CanTp_SizeOfMetaDataSetterTARGET_ADDRESS_16' Reason: 'Deactivateable: 'MetaDataSetterTARGET_ADDRESS_16' Reason: 'Deactivateable: 'CanTp_MetaDataSetterTARGET_ADDRESS_16' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE''' */
#define CANTP_SIZEOFPARTITIONIDENTIFIERS                                                            STD_ON
#define CANTP_SIZEOFPARTITIONLOOKUPTABLE                                                            STD_OFF  /**< Deactivateable: 'CanTp_SizeOfPartitionLookupTable' Reason: 'Deactivateable: 'PartitionLookupTable' Reason: 'Deactivateable: 'CanTp_PartitionLookupTable' Reason: 'the struct is deactivated because all elements are deactivated in all variants.''' */
#define CANTP_SIZEOFRXCHANNELMAP                                                                    STD_OFF  /**< Deactivateable: 'CanTp_SizeOfRxChannelMap' Reason: 'Deactivateable: 'RxChannelMap' Reason: 'Deactivateable: 'CanTp_RxChannelMap' Reason: 'Dynamic Channel Assignment is disabled''' */
#define CANTP_SIZEOFRXPDU2RXSDUIND                                                                  STD_ON
#define CANTP_SIZEOFRXPDU2TXSDUIND                                                                  STD_ON
#define CANTP_SIZEOFRXPDUMAP                                                                        STD_ON
#define CANTP_SIZEOFRXSDUCFG                                                                        STD_ON
#define CANTP_SIZEOFRXSDUSNV2HDL                                                                    STD_ON
#define CANTP_SIZEOFRXSTATE                                                                         STD_ON
#define CANTP_SIZEOFTXCHANNELMAP                                                                    STD_OFF  /**< Deactivateable: 'CanTp_SizeOfTxChannelMap' Reason: 'Deactivateable: 'TxChannelMap' Reason: 'Deactivateable: 'CanTp_TxChannelMap' Reason: 'Dynamic Channel Assignment is disabled''' */
#define CANTP_SIZEOFTXPDU2RXSDUIND                                                                  STD_ON
#define CANTP_SIZEOFTXPDU2TXSDUIND                                                                  STD_ON
#define CANTP_SIZEOFTXPDUMAP                                                                        STD_ON
#define CANTP_SIZEOFTXQUEUE                                                                         STD_OFF  /**< Deactivateable: 'CanTp_SizeOfTxQueue' Reason: 'Deactivateable: 'TxQueue' Reason: 'Deactivateable: 'CanTp_TxQueue' Reason: 'Transmit Queue is disabled''' */
#define CANTP_SIZEOFTXSDUCFG                                                                        STD_ON
#define CANTP_SIZEOFTXSDUSNV2HDL                                                                    STD_ON
#define CANTP_SIZEOFTXSEMAPHORES                                                                    STD_ON
#define CANTP_SIZEOFTXSTATE                                                                         STD_ON
#define CANTP_SIZEOFUPLAYERFCTSRXFCTPTR                                                             STD_OFF  /**< Deactivateable: 'CanTp_SizeOfUpLayerFctsRxFctPtr' Reason: 'Deactivateable: 'UpLayerFctsRxFctPtr' Reason: 'Deactivateable: 'CanTp_UpLayerFctsRxFctPtr' Reason: '/ActiveEcuC/CanTp/CanTpGeneral[0:CanTpSupportCustomAddressing] is configured to 'false'''' */
#define CANTP_SIZEOFUPLAYERFCTSTXFCTPTR                                                             STD_OFF  /**< Deactivateable: 'CanTp_SizeOfUpLayerFctsTxFctPtr' Reason: 'Deactivateable: 'UpLayerFctsTxFctPtr' Reason: 'Deactivateable: 'CanTp_UpLayerFctsTxFctPtr' Reason: '/ActiveEcuC/CanTp/CanTpGeneral[0:CanTpSupportCustomAddressing] is configured to 'false'''' */
#define CANTP_TXCHANNELMAP                                                                          STD_OFF  /**< Deactivateable: 'CanTp_TxChannelMap' Reason: 'Dynamic Channel Assignment is disabled' */
#define CANTP_TXPDU2RXSDUIND                                                                        STD_ON
#define CANTP_TXPDU2TXSDUIND                                                                        STD_ON
#define CANTP_TXPDUMAP                                                                              STD_ON
#define CANTP_CANIDOFTXPDUMAP                                                                       STD_ON
#define CANTP_MASKOFTXPDUMAP                                                                        STD_ON
#define CANTP_METADATASETTERCAN_ID_32IDXOFTXPDUMAP                                                  STD_OFF  /**< Deactivateable: 'CanTp_TxPduMap.MetaDataSetterCAN_ID_32Idx' Reason: 'the optional indirection is deactivated because MetaDataSetterCAN_ID_32UsedOfTxPduMap is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CANTP_METADATASETTERCAN_ID_32USEDOFTXPDUMAP                                                 STD_OFF  /**< Deactivateable: 'CanTp_TxPduMap.MetaDataSetterCAN_ID_32Used' Reason: 'the optional indirection is deactivated because MetaDataSetterCAN_ID_32UsedOfTxPduMap is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CANTP_TXPDU2RXSDUENDIDXOFTXPDUMAP                                                           STD_ON
#define CANTP_TXPDU2RXSDUPARTITIONIDXOFTXPDUMAP                                                     STD_ON
#define CANTP_TXPDU2RXSDUSTARTIDXOFTXPDUMAP                                                         STD_ON
#define CANTP_TXPDU2RXSDUUSEDOFTXPDUMAP                                                             STD_ON
#define CANTP_TXPDU2TXSDUENDIDXOFTXPDUMAP                                                           STD_ON
#define CANTP_TXPDU2TXSDUPARTITIONIDXOFTXPDUMAP                                                     STD_ON
#define CANTP_TXPDU2TXSDUSTARTIDXOFTXPDUMAP                                                         STD_ON
#define CANTP_TXPDU2TXSDUUSEDOFTXPDUMAP                                                             STD_ON
#define CANTP_TXQUEUE                                                                               STD_OFF  /**< Deactivateable: 'CanTp_TxQueue' Reason: 'Transmit Queue is disabled' */
#define CANTP_TXSDUCFG                                                                              STD_ON
#define CANTP_CANTYPEOFTXSDUCFG                                                                     STD_ON
#define CANTP_CHANNELMODEOFTXSDUCFG                                                                 STD_ON
#define CANTP_LOLAYERFCTSIDXOFTXSDUCFG                                                              STD_OFF  /**< Deactivateable: 'CanTp_TxSduCfg.LoLayerFctsIdx' Reason: 'All indirection targets are deactivated in all variants.' */
#define CANTP_LOLAYERTXPDUIDOFTXSDUCFG                                                              STD_ON
#define CANTP_METADATAGETTERADDRESS_EXTENSION_8IDXOFTXSDUCFG                                        STD_OFF  /**< Deactivateable: 'CanTp_TxSduCfg.MetaDataGetterADDRESS_EXTENSION_8Idx' Reason: 'the optional indirection is deactivated because MetaDataGetterADDRESS_EXTENSION_8UsedOfTxSduCfg is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CANTP_METADATAGETTERADDRESS_EXTENSION_8USEDOFTXSDUCFG                                       STD_OFF  /**< Deactivateable: 'CanTp_TxSduCfg.MetaDataGetterADDRESS_EXTENSION_8Used' Reason: 'the optional indirection is deactivated because MetaDataGetterADDRESS_EXTENSION_8UsedOfTxSduCfg is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CANTP_METADATAGETTERCAN_ID_32IDXOFTXSDUCFG                                                  STD_OFF  /**< Deactivateable: 'CanTp_TxSduCfg.MetaDataGetterCAN_ID_32Idx' Reason: 'the optional indirection is deactivated because MetaDataGetterCAN_ID_32UsedOfTxSduCfg is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CANTP_METADATAGETTERCAN_ID_32USEDOFTXSDUCFG                                                 STD_OFF  /**< Deactivateable: 'CanTp_TxSduCfg.MetaDataGetterCAN_ID_32Used' Reason: 'the optional indirection is deactivated because MetaDataGetterCAN_ID_32UsedOfTxSduCfg is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CANTP_METADATAGETTERSOURCE_ADDRESS_16IDXOFTXSDUCFG                                          STD_OFF  /**< Deactivateable: 'CanTp_TxSduCfg.MetaDataGetterSOURCE_ADDRESS_16Idx' Reason: 'the optional indirection is deactivated because MetaDataGetterSOURCE_ADDRESS_16UsedOfTxSduCfg is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CANTP_METADATAGETTERSOURCE_ADDRESS_16USEDOFTXSDUCFG                                         STD_OFF  /**< Deactivateable: 'CanTp_TxSduCfg.MetaDataGetterSOURCE_ADDRESS_16Used' Reason: 'the optional indirection is deactivated because MetaDataGetterSOURCE_ADDRESS_16UsedOfTxSduCfg is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CANTP_METADATAGETTERTARGET_ADDRESS_16IDXOFTXSDUCFG                                          STD_OFF  /**< Deactivateable: 'CanTp_TxSduCfg.MetaDataGetterTARGET_ADDRESS_16Idx' Reason: 'the optional indirection is deactivated because MetaDataGetterTARGET_ADDRESS_16UsedOfTxSduCfg is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CANTP_METADATAGETTERTARGET_ADDRESS_16USEDOFTXSDUCFG                                         STD_OFF  /**< Deactivateable: 'CanTp_TxSduCfg.MetaDataGetterTARGET_ADDRESS_16Used' Reason: 'the optional indirection is deactivated because MetaDataGetterTARGET_ADDRESS_16UsedOfTxSduCfg is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CANTP_METADATASETTERADDRESS_EXTENSION_8IDXOFTXSDUCFG                                        STD_OFF  /**< Deactivateable: 'CanTp_TxSduCfg.MetaDataSetterADDRESS_EXTENSION_8Idx' Reason: 'the optional indirection is deactivated because MetaDataSetterADDRESS_EXTENSION_8UsedOfTxSduCfg is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CANTP_METADATASETTERADDRESS_EXTENSION_8USEDOFTXSDUCFG                                       STD_OFF  /**< Deactivateable: 'CanTp_TxSduCfg.MetaDataSetterADDRESS_EXTENSION_8Used' Reason: 'the optional indirection is deactivated because MetaDataSetterADDRESS_EXTENSION_8UsedOfTxSduCfg is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CANTP_METADATASETTERSOURCE_ADDRESS_16IDXOFTXSDUCFG                                          STD_OFF  /**< Deactivateable: 'CanTp_TxSduCfg.MetaDataSetterSOURCE_ADDRESS_16Idx' Reason: 'the optional indirection is deactivated because MetaDataSetterSOURCE_ADDRESS_16UsedOfTxSduCfg is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CANTP_METADATASETTERSOURCE_ADDRESS_16USEDOFTXSDUCFG                                         STD_OFF  /**< Deactivateable: 'CanTp_TxSduCfg.MetaDataSetterSOURCE_ADDRESS_16Used' Reason: 'the optional indirection is deactivated because MetaDataSetterSOURCE_ADDRESS_16UsedOfTxSduCfg is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CANTP_METADATASETTERTARGET_ADDRESS_16IDXOFTXSDUCFG                                          STD_OFF  /**< Deactivateable: 'CanTp_TxSduCfg.MetaDataSetterTARGET_ADDRESS_16Idx' Reason: 'the optional indirection is deactivated because MetaDataSetterTARGET_ADDRESS_16UsedOfTxSduCfg is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CANTP_METADATASETTERTARGET_ADDRESS_16USEDOFTXSDUCFG                                         STD_OFF  /**< Deactivateable: 'CanTp_TxSduCfg.MetaDataSetterTARGET_ADDRESS_16Used' Reason: 'the optional indirection is deactivated because MetaDataSetterTARGET_ADDRESS_16UsedOfTxSduCfg is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CANTP_NASOFTXSDUCFG                                                                         STD_ON
#define CANTP_NBSOFTXSDUCFG                                                                         STD_ON
#define CANTP_NCSOFTXSDUCFG                                                                         STD_ON
#define CANTP_PDUMETADATAOFTXSDUCFG                                                                 STD_OFF  /**< Deactivateable: 'CanTp_TxSduCfg.PduMetadata' Reason: 'PDU metadata is not required with the current configuration.' */
#define CANTP_PDURTXSDUIDOFTXSDUCFG                                                                 STD_ON
#define CANTP_RXFCADDRESSOFTXSDUCFG                                                                 STD_ON
#define CANTP_RXFCPDUIDOFTXSDUCFG                                                                   STD_ON
#define CANTP_RXPDUMAPIDXOFTXSDUCFG                                                                 STD_ON
#define CANTP_RXPDUMAPUSEDOFTXSDUCFG                                                                STD_ON
#define CANTP_RXSDUCFGIDXOFTXSDUCFG                                                                 STD_ON
#define CANTP_RXSDUCFGUSEDOFTXSDUCFG                                                                STD_ON
#define CANTP_SDUMETADATALENGTHOFTXSDUCFG                                                           STD_ON
#define CANTP_TRANSMITCANCELLATIONOFTXSDUCFG                                                        STD_ON
#define CANTP_TXADDRESSOFTXSDUCFG                                                                   STD_ON
#define CANTP_TXADDRESSINGFORMATOFTXSDUCFG                                                          STD_ON
#define CANTP_TXMAXPAYLOADLENGTHOFTXSDUCFG                                                          STD_ON
#define CANTP_TXPADDINGACTIVATIONOFTXSDUCFG                                                         STD_ON
#define CANTP_TXPDUCONFIRMATIONPDUIDOFTXSDUCFG                                                      STD_ON
#define CANTP_TXPDUMAPIDXOFTXSDUCFG                                                                 STD_ON
#define CANTP_TXPDUMAPUSEDOFTXSDUCFG                                                                STD_ON
#define CANTP_TXTATYPEOFTXSDUCFG                                                                    STD_ON
#define CANTP_UPLAYERFCTSTXFCTPTRIDXOFTXSDUCFG                                                      STD_OFF  /**< Deactivateable: 'CanTp_TxSduCfg.UpLayerFctsTxFctPtrIdx' Reason: '/ActiveEcuC/CanTp/CanTpGeneral[0:CanTpSupportCustomAddressing] is configured to 'false'' */
#define CANTP_UPLAYERFCTSTXFCTPTRUSEDOFTXSDUCFG                                                     STD_OFF  /**< Deactivateable: 'CanTp_TxSduCfg.UpLayerFctsTxFctPtrUsed' Reason: '/ActiveEcuC/CanTp/CanTpGeneral[0:CanTpSupportCustomAddressing] is configured to 'false'' */
#define CANTP_TXSDUSNV2HDL                                                                          STD_ON
#define CANTP_INVALIDHNDOFTXSDUSNV2HDL                                                              STD_OFF  /**< Deactivateable: 'CanTp_TxSduSnv2Hdl.InvalidHnd' Reason: 'the value of CanTp_InvalidHndOfTxSduSnv2Hdl is always 'false' due to this, the array is deactivated.' and Deactivateable: 'CanTp_TxSduSnv2Hdl.InvalidHnd' Reason: 'the value of CanTp_InvalidHndOfTxSduSnv2Hdl is always 'false' due to this, the array is deactivated.' */
#define CANTP_TXNSDUHDLIDXOFTXSDUSNV2HDL                                                            STD_ON
#define CANTP_TXNSDUHDLPARTITIONIDXOFTXSDUSNV2HDL                                                   STD_ON
#define CANTP_TXNSDUHDLUSEDOFTXSDUSNV2HDL                                                           STD_ON
#define CANTP_TXSEMAPHORES                                                                          STD_ON
#define CANTP_TXSTATE                                                                               STD_ON
#define CANTP_UPLAYERFCTSRXFCTPTR                                                                   STD_OFF  /**< Deactivateable: 'CanTp_UpLayerFctsRxFctPtr' Reason: '/ActiveEcuC/CanTp/CanTpGeneral[0:CanTpSupportCustomAddressing] is configured to 'false'' */
#define CANTP_UPLAYERFCTSTXFCTPTR                                                                   STD_OFF  /**< Deactivateable: 'CanTp_UpLayerFctsTxFctPtr' Reason: '/ActiveEcuC/CanTp/CanTpGeneral[0:CanTpSupportCustomAddressing] is configured to 'false'' */
#define CANTP_PCCONFIG                                                                              STD_ON
#define CANTP_FINALMAGICNUMBEROFPCCONFIG                                                            STD_OFF  /**< Deactivateable: 'CanTp_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define CANTP_INITDATAHASHCODEOFPCCONFIG                                                            STD_OFF  /**< Deactivateable: 'CanTp_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define CANTP_PCPARTITIONCONFIGOFPCCONFIG                                                           STD_ON
#define CANTP_PARTITIONIDENTIFIERSOFPCCONFIG                                                        STD_ON
#define CANTP_SIZEOFPARTITIONIDENTIFIERSOFPCCONFIG                                                  STD_ON
#define CANTP_PCPARTITIONCONFIG                                                                     STD_ON
#define CANTP_CALCBSOFPCPARTITIONCONFIG                                                             STD_ON
#define CANTP_COMPATIBILITYVERSIONOFPCPARTITIONCONFIG                                               STD_ON
#define CANTP_RXPDU2RXSDUINDOFPCPARTITIONCONFIG                                                     STD_ON
#define CANTP_RXPDU2TXSDUINDOFPCPARTITIONCONFIG                                                     STD_ON
#define CANTP_RXPDUMAPOFPCPARTITIONCONFIG                                                           STD_ON
#define CANTP_RXSDUCFGOFPCPARTITIONCONFIG                                                           STD_ON
#define CANTP_RXSDUSNV2HDLOFPCPARTITIONCONFIG                                                       STD_ON
#define CANTP_RXSTATEOFPCPARTITIONCONFIG                                                            STD_ON
#define CANTP_SIZEOFCALCBSOFPCPARTITIONCONFIG                                                       STD_ON
#define CANTP_SIZEOFDYNFCPARAMETERSOFPCPARTITIONCONFIG                                              STD_OFF  /**< Deactivateable: 'CanTp_PCPartitionConfig.SizeOfDynFCParameters' Reason: 'Deactivateable: 'DynFCParameters' Reason: 'Deactivateable: 'CanTp_DynFCParameters' Reason: 'Change Paramter Api is disabled''' */
#define CANTP_SIZEOFLOLAYERFCTSOFPCPARTITIONCONFIG                                                  STD_OFF  /**< Deactivateable: 'CanTp_PCPartitionConfig.SizeOfLoLayerFcts' Reason: 'Deactivateable: 'LoLayerFcts' Reason: 'Deactivateable: 'CanTp_LoLayerFcts' Reason: 'A function table is not required, since just one lower layer exists.''' */
#define CANTP_SIZEOFMETADATAGETTERADDRESS_EXTENSION_8OFPCPARTITIONCONFIG                            STD_OFF  /**< Deactivateable: 'CanTp_PCPartitionConfig.SizeOfMetaDataGetterADDRESS_EXTENSION_8' Reason: 'Deactivateable: 'MetaDataGetterADDRESS_EXTENSION_8' Reason: 'Deactivateable: 'CanTp_MetaDataGetterADDRESS_EXTENSION_8' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE''' */
#define CANTP_SIZEOFMETADATAGETTERCAN_ID_32OFPCPARTITIONCONFIG                                      STD_OFF  /**< Deactivateable: 'CanTp_PCPartitionConfig.SizeOfMetaDataGetterCAN_ID_32' Reason: 'Deactivateable: 'MetaDataGetterCAN_ID_32' Reason: 'Deactivateable: 'CanTp_MetaDataGetterCAN_ID_32' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE''' */
#define CANTP_SIZEOFMETADATAGETTERSOURCE_ADDRESS_16OFPCPARTITIONCONFIG                              STD_OFF  /**< Deactivateable: 'CanTp_PCPartitionConfig.SizeOfMetaDataGetterSOURCE_ADDRESS_16' Reason: 'Deactivateable: 'MetaDataGetterSOURCE_ADDRESS_16' Reason: 'Deactivateable: 'CanTp_MetaDataGetterSOURCE_ADDRESS_16' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE''' */
#define CANTP_SIZEOFMETADATAGETTERTARGET_ADDRESS_16OFPCPARTITIONCONFIG                              STD_OFF  /**< Deactivateable: 'CanTp_PCPartitionConfig.SizeOfMetaDataGetterTARGET_ADDRESS_16' Reason: 'Deactivateable: 'MetaDataGetterTARGET_ADDRESS_16' Reason: 'Deactivateable: 'CanTp_MetaDataGetterTARGET_ADDRESS_16' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE''' */
#define CANTP_SIZEOFMETADATASETTERADDRESS_EXTENSION_8OFPCPARTITIONCONFIG                            STD_OFF  /**< Deactivateable: 'CanTp_PCPartitionConfig.SizeOfMetaDataSetterADDRESS_EXTENSION_8' Reason: 'Deactivateable: 'MetaDataSetterADDRESS_EXTENSION_8' Reason: 'Deactivateable: 'CanTp_MetaDataSetterADDRESS_EXTENSION_8' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE''' */
#define CANTP_SIZEOFMETADATASETTERCAN_ID_32OFPCPARTITIONCONFIG                                      STD_OFF  /**< Deactivateable: 'CanTp_PCPartitionConfig.SizeOfMetaDataSetterCAN_ID_32' Reason: 'Deactivateable: 'MetaDataSetterCAN_ID_32' Reason: 'Deactivateable: 'CanTp_MetaDataSetterCAN_ID_32' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE''' */
#define CANTP_SIZEOFMETADATASETTERSOURCE_ADDRESS_16OFPCPARTITIONCONFIG                              STD_OFF  /**< Deactivateable: 'CanTp_PCPartitionConfig.SizeOfMetaDataSetterSOURCE_ADDRESS_16' Reason: 'Deactivateable: 'MetaDataSetterSOURCE_ADDRESS_16' Reason: 'Deactivateable: 'CanTp_MetaDataSetterSOURCE_ADDRESS_16' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE''' */
#define CANTP_SIZEOFMETADATASETTERTARGET_ADDRESS_16OFPCPARTITIONCONFIG                              STD_OFF  /**< Deactivateable: 'CanTp_PCPartitionConfig.SizeOfMetaDataSetterTARGET_ADDRESS_16' Reason: 'Deactivateable: 'MetaDataSetterTARGET_ADDRESS_16' Reason: 'Deactivateable: 'CanTp_MetaDataSetterTARGET_ADDRESS_16' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE''' */
#define CANTP_SIZEOFPARTITIONLOOKUPTABLEOFPCPARTITIONCONFIG                                         STD_OFF  /**< Deactivateable: 'CanTp_PCPartitionConfig.SizeOfPartitionLookupTable' Reason: 'Deactivateable: 'PartitionLookupTable' Reason: 'Deactivateable: 'CanTp_PartitionLookupTable' Reason: 'the struct is deactivated because all elements are deactivated in all variants.''' */
#define CANTP_SIZEOFRXCHANNELMAPOFPCPARTITIONCONFIG                                                 STD_OFF  /**< Deactivateable: 'CanTp_PCPartitionConfig.SizeOfRxChannelMap' Reason: 'Deactivateable: 'RxChannelMap' Reason: 'Deactivateable: 'CanTp_RxChannelMap' Reason: 'Dynamic Channel Assignment is disabled''' */
#define CANTP_SIZEOFRXPDU2RXSDUINDOFPCPARTITIONCONFIG                                               STD_ON
#define CANTP_SIZEOFRXPDU2TXSDUINDOFPCPARTITIONCONFIG                                               STD_ON
#define CANTP_SIZEOFRXPDUMAPOFPCPARTITIONCONFIG                                                     STD_ON
#define CANTP_SIZEOFRXSDUCFGOFPCPARTITIONCONFIG                                                     STD_ON
#define CANTP_SIZEOFRXSDUSNV2HDLOFPCPARTITIONCONFIG                                                 STD_ON
#define CANTP_SIZEOFRXSTATEOFPCPARTITIONCONFIG                                                      STD_ON
#define CANTP_SIZEOFTXCHANNELMAPOFPCPARTITIONCONFIG                                                 STD_OFF  /**< Deactivateable: 'CanTp_PCPartitionConfig.SizeOfTxChannelMap' Reason: 'Deactivateable: 'TxChannelMap' Reason: 'Deactivateable: 'CanTp_TxChannelMap' Reason: 'Dynamic Channel Assignment is disabled''' */
#define CANTP_SIZEOFTXPDU2RXSDUINDOFPCPARTITIONCONFIG                                               STD_ON
#define CANTP_SIZEOFTXPDU2TXSDUINDOFPCPARTITIONCONFIG                                               STD_ON
#define CANTP_SIZEOFTXPDUMAPOFPCPARTITIONCONFIG                                                     STD_ON
#define CANTP_SIZEOFTXQUEUEOFPCPARTITIONCONFIG                                                      STD_OFF  /**< Deactivateable: 'CanTp_PCPartitionConfig.SizeOfTxQueue' Reason: 'Deactivateable: 'TxQueue' Reason: 'Deactivateable: 'CanTp_TxQueue' Reason: 'Transmit Queue is disabled''' */
#define CANTP_SIZEOFTXSDUCFGOFPCPARTITIONCONFIG                                                     STD_ON
#define CANTP_SIZEOFTXSDUSNV2HDLOFPCPARTITIONCONFIG                                                 STD_ON
#define CANTP_SIZEOFTXSEMAPHORESOFPCPARTITIONCONFIG                                                 STD_ON
#define CANTP_SIZEOFTXSTATEOFPCPARTITIONCONFIG                                                      STD_ON
#define CANTP_SIZEOFUPLAYERFCTSRXFCTPTROFPCPARTITIONCONFIG                                          STD_OFF  /**< Deactivateable: 'CanTp_PCPartitionConfig.SizeOfUpLayerFctsRxFctPtr' Reason: 'Deactivateable: 'UpLayerFctsRxFctPtr' Reason: 'Deactivateable: 'CanTp_UpLayerFctsRxFctPtr' Reason: '/ActiveEcuC/CanTp/CanTpGeneral[0:CanTpSupportCustomAddressing] is configured to 'false'''' */
#define CANTP_SIZEOFUPLAYERFCTSTXFCTPTROFPCPARTITIONCONFIG                                          STD_OFF  /**< Deactivateable: 'CanTp_PCPartitionConfig.SizeOfUpLayerFctsTxFctPtr' Reason: 'Deactivateable: 'UpLayerFctsTxFctPtr' Reason: 'Deactivateable: 'CanTp_UpLayerFctsTxFctPtr' Reason: '/ActiveEcuC/CanTp/CanTpGeneral[0:CanTpSupportCustomAddressing] is configured to 'false'''' */
#define CANTP_TXPDU2RXSDUINDOFPCPARTITIONCONFIG                                                     STD_ON
#define CANTP_TXPDU2TXSDUINDOFPCPARTITIONCONFIG                                                     STD_ON
#define CANTP_TXPDUMAPOFPCPARTITIONCONFIG                                                           STD_ON
#define CANTP_TXSDUCFGOFPCPARTITIONCONFIG                                                           STD_ON
#define CANTP_TXSDUSNV2HDLOFPCPARTITIONCONFIG                                                       STD_ON
#define CANTP_TXSEMAPHORESOFPCPARTITIONCONFIG                                                       STD_ON
#define CANTP_TXSTATEOFPCPARTITIONCONFIG                                                            STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCMinNumericValueDefines  CanTp Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define CANTP_MIN_CALCBS                                                                            0u
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCMaxNumericValueDefines  CanTp Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define CANTP_MAX_CALCBS                                                                            255u
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCNoReferenceDefines  CanTp No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define CANTP_NO_RXPDU2RXSDUENDIDXOFRXPDUMAP                                                        255u
#define CANTP_NO_RXPDU2RXSDUPARTITIONIDXOFRXPDUMAP                                                  255u
#define CANTP_NO_RXPDU2RXSDUSTARTIDXOFRXPDUMAP                                                      255u
#define CANTP_NO_RXPDU2TXSDUENDIDXOFRXPDUMAP                                                        255u
#define CANTP_NO_RXPDU2TXSDUPARTITIONIDXOFRXPDUMAP                                                  255u
#define CANTP_NO_RXPDU2TXSDUSTARTIDXOFRXPDUMAP                                                      255u
#define CANTP_NO_RXPDUMAPIDXOFRXSDUCFG                                                              255u
#define CANTP_NO_TXPDUMAPIDXOFRXSDUCFG                                                              255u
#define CANTP_NO_TXSDUCFGIDXOFRXSDUCFG                                                              255u
#define CANTP_NO_RXNSDUHDLIDXOFRXSDUSNV2HDL                                                         255u
#define CANTP_NO_RXNSDUHDLPARTITIONIDXOFRXSDUSNV2HDL                                                255u
#define CANTP_NO_TXPDU2RXSDUENDIDXOFTXPDUMAP                                                        255u
#define CANTP_NO_TXPDU2RXSDUPARTITIONIDXOFTXPDUMAP                                                  255u
#define CANTP_NO_TXPDU2RXSDUSTARTIDXOFTXPDUMAP                                                      255u
#define CANTP_NO_TXPDU2TXSDUENDIDXOFTXPDUMAP                                                        255u
#define CANTP_NO_TXPDU2TXSDUPARTITIONIDXOFTXPDUMAP                                                  255u
#define CANTP_NO_TXPDU2TXSDUSTARTIDXOFTXPDUMAP                                                      255u
#define CANTP_NO_RXPDUMAPIDXOFTXSDUCFG                                                              255u
#define CANTP_NO_RXSDUCFGIDXOFTXSDUCFG                                                              255u
#define CANTP_NO_TXPDUMAPIDXOFTXSDUCFG                                                              255u
#define CANTP_NO_TXNSDUHDLIDXOFTXSDUSNV2HDL                                                         255u
#define CANTP_NO_TXNSDUHDLPARTITIONIDXOFTXSDUSNV2HDL                                                255u
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCEnumExistsDefines  CanTp Enum Exists Defines (PRE_COMPILE)
  \brief  These defines can be used to deactivate enumeration based code sequences if the enumeration value does not exist in the configuration data.
  \{
*/ 
#define CANTP_EXISTS_NORMAL_ADDRESSING_ADDRESSINGFORMATOFRXPDUMAP                                   STD_ON
#define CANTP_EXISTS_EXTENDED_ADDRESSING_ADDRESSINGFORMATOFRXPDUMAP                                 STD_OFF
#define CANTP_EXISTS_MIXED11_ADDRESSING_ADDRESSINGFORMATOFRXPDUMAP                                  STD_OFF
#define CANTP_EXISTS_NORMALFIXED_ADDRESSING_ADDRESSINGFORMATOFRXPDUMAP                              STD_OFF
#define CANTP_EXISTS_MIXED29_ADDRESSING_ADDRESSINGFORMATOFRXPDUMAP                                  STD_OFF
#define CANTP_EXISTS_CUSTOM_ADDRESSING_ADDRESSINGFORMATOFRXPDUMAP                                   STD_OFF
#define CANTP_EXISTS_CAN20_CANTYPEOFRXSDUCFG                                                        STD_ON
#define CANTP_EXISTS_CANFD_CANTYPEOFRXSDUCFG                                                        STD_ON
#define CANTP_EXISTS_HALF_DUPLEX_CHANNELMODEOFRXSDUCFG                                              STD_OFF
#define CANTP_EXISTS_FULL_DUPLEX_CHANNELMODEOFRXSDUCFG                                              STD_ON
#define CANTP_EXISTS_NORMAL_ADDRESSING_RXADDRESSINGFORMATOFRXSDUCFG                                 STD_ON
#define CANTP_EXISTS_EXTENDED_ADDRESSING_RXADDRESSINGFORMATOFRXSDUCFG                               STD_OFF
#define CANTP_EXISTS_MIXED11_ADDRESSING_RXADDRESSINGFORMATOFRXSDUCFG                                STD_OFF
#define CANTP_EXISTS_NORMALFIXED_ADDRESSING_RXADDRESSINGFORMATOFRXSDUCFG                            STD_OFF
#define CANTP_EXISTS_MIXED29_ADDRESSING_RXADDRESSINGFORMATOFRXSDUCFG                                STD_OFF
#define CANTP_EXISTS_CUSTOM_ADDRESSING_RXADDRESSINGFORMATOFRXSDUCFG                                 STD_OFF
#define CANTP_EXISTS_PHYSICAL_RXTATYPEOFRXSDUCFG                                                    STD_ON
#define CANTP_EXISTS_FUNCTIONAL_RXTATYPEOFRXSDUCFG                                                  STD_ON
#define CANTP_EXISTS_CANFD_PHYSICAL_RXTATYPEOFRXSDUCFG                                              STD_ON
#define CANTP_EXISTS_CANFD_FUNCTIONAL_RXTATYPEOFRXSDUCFG                                            STD_ON
#define CANTP_EXISTS_CAN20_CANTYPEOFTXSDUCFG                                                        STD_ON
#define CANTP_EXISTS_CANFD_CANTYPEOFTXSDUCFG                                                        STD_ON
#define CANTP_EXISTS_HALF_DUPLEX_CHANNELMODEOFTXSDUCFG                                              STD_OFF
#define CANTP_EXISTS_FULL_DUPLEX_CHANNELMODEOFTXSDUCFG                                              STD_ON
#define CANTP_EXISTS_NORMAL_ADDRESSING_TXADDRESSINGFORMATOFTXSDUCFG                                 STD_ON
#define CANTP_EXISTS_EXTENDED_ADDRESSING_TXADDRESSINGFORMATOFTXSDUCFG                               STD_OFF
#define CANTP_EXISTS_MIXED11_ADDRESSING_TXADDRESSINGFORMATOFTXSDUCFG                                STD_OFF
#define CANTP_EXISTS_NORMALFIXED_ADDRESSING_TXADDRESSINGFORMATOFTXSDUCFG                            STD_OFF
#define CANTP_EXISTS_MIXED29_ADDRESSING_TXADDRESSINGFORMATOFTXSDUCFG                                STD_OFF
#define CANTP_EXISTS_CUSTOM_ADDRESSING_TXADDRESSINGFORMATOFTXSDUCFG                                 STD_OFF
#define CANTP_EXISTS_PHYSICAL_TXTATYPEOFTXSDUCFG                                                    STD_ON
#define CANTP_EXISTS_FUNCTIONAL_TXTATYPEOFTXSDUCFG                                                  STD_OFF
#define CANTP_EXISTS_CANFD_PHYSICAL_TXTATYPEOFTXSDUCFG                                              STD_ON
#define CANTP_EXISTS_CANFD_FUNCTIONAL_TXTATYPEOFTXSDUCFG                                            STD_OFF
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCEnumDefines  CanTp Enum Defines (PRE_COMPILE)
  \brief  These defines are the enumeration values of enumeration based CONST and VAR data.
  \{
*/ 
#define CANTP_NORMAL_ADDRESSING_ADDRESSINGFORMATOFRXPDUMAP                                          0x00u
#define CANTP_CAN20_CANTYPEOFRXSDUCFG                                                               0x00u
#define CANTP_CANFD_CANTYPEOFRXSDUCFG                                                               0x01u
#define CANTP_FULL_DUPLEX_CHANNELMODEOFRXSDUCFG                                                     0x01u
#define CANTP_NORMAL_ADDRESSING_RXADDRESSINGFORMATOFRXSDUCFG                                        0x00u
#define CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG                                                           0x00u
#define CANTP_FUNCTIONAL_RXTATYPEOFRXSDUCFG                                                         0x01u
#define CANTP_CANFD_PHYSICAL_RXTATYPEOFRXSDUCFG                                                     0x00u
#define CANTP_CANFD_FUNCTIONAL_RXTATYPEOFRXSDUCFG                                                   0x01u
#define CANTP_CAN20_CANTYPEOFTXSDUCFG                                                               0x00u
#define CANTP_CANFD_CANTYPEOFTXSDUCFG                                                               0x01u
#define CANTP_FULL_DUPLEX_CHANNELMODEOFTXSDUCFG                                                     0x01u
#define CANTP_NORMAL_ADDRESSING_TXADDRESSINGFORMATOFTXSDUCFG                                        0x00u
#define CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG                                                           0x00u
#define CANTP_CANFD_PHYSICAL_TXTATYPEOFTXSDUCFG                                                     0x00u
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCIsReducedToDefineDefines  CanTp Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define CANTP_ISDEF_PCPARTITIONCONFIGIDXOFPARTITIONIDENTIFIERS                                      STD_OFF
#define CANTP_ISDEF_PARTITIONSNVOFPARTITIONIDENTIFIERS                                              STD_OFF
#define CANTP_ISDEF_RXPDU2RXSDUIND                                                                  STD_OFF
#define CANTP_ISDEF_RXPDU2TXSDUIND                                                                  STD_OFF
#define CANTP_ISDEF_ADDRESSINGFORMATOFRXPDUMAP                                                      STD_ON
#define CANTP_ISDEF_GENERICCONNECTIONOFRXPDUMAP                                                     STD_ON
#define CANTP_ISDEF_PDUMETADATAOFRXPDUMAP                                                           STD_ON
#define CANTP_ISDEF_RXPDU2RXSDUENDIDXOFRXPDUMAP                                                     STD_OFF
#define CANTP_ISDEF_RXPDU2RXSDUPARTITIONIDXOFRXPDUMAP                                               STD_ON
#define CANTP_ISDEF_RXPDU2RXSDUSTARTIDXOFRXPDUMAP                                                   STD_OFF
#define CANTP_ISDEF_RXPDU2RXSDUUSEDOFRXPDUMAP                                                       STD_ON
#define CANTP_ISDEF_RXPDU2TXSDUENDIDXOFRXPDUMAP                                                     STD_OFF
#define CANTP_ISDEF_RXPDU2TXSDUPARTITIONIDXOFRXPDUMAP                                               STD_OFF
#define CANTP_ISDEF_RXPDU2TXSDUSTARTIDXOFRXPDUMAP                                                   STD_OFF
#define CANTP_ISDEF_RXPDU2TXSDUUSEDOFRXPDUMAP                                                       STD_OFF
#define CANTP_ISDEF_BLOCKSIZEOFRXSDUCFG                                                             STD_OFF
#define CANTP_ISDEF_CANTYPEOFRXSDUCFG                                                               STD_OFF
#define CANTP_ISDEF_CHANNELMODEOFRXSDUCFG                                                           STD_ON
#define CANTP_ISDEF_GENERICCONNECTIONOFRXSDUCFG                                                     STD_ON
#define CANTP_ISDEF_LOLAYERTXFCPDUIDOFRXSDUCFG                                                      STD_OFF
#define CANTP_ISDEF_NAROFRXSDUCFG                                                                   STD_OFF
#define CANTP_ISDEF_NBROFRXSDUCFG                                                                   STD_ON
#define CANTP_ISDEF_NCROFRXSDUCFG                                                                   STD_OFF
#define CANTP_ISDEF_PDURRXSDUIDOFRXSDUCFG                                                           STD_OFF
#define CANTP_ISDEF_RXADDRESSOFRXSDUCFG                                                             STD_ON
#define CANTP_ISDEF_RXADDRESSINGFORMATOFRXSDUCFG                                                    STD_ON
#define CANTP_ISDEF_RXMAXPAYLOADLENGTHOFRXSDUCFG                                                    STD_OFF
#define CANTP_ISDEF_RXPADDINGACTIVATIONOFRXSDUCFG                                                   STD_ON
#define CANTP_ISDEF_RXPDUIDOFRXSDUCFG                                                               STD_OFF
#define CANTP_ISDEF_RXPDUMAPIDXOFRXSDUCFG                                                           STD_OFF
#define CANTP_ISDEF_RXPDUMAPUSEDOFRXSDUCFG                                                          STD_ON
#define CANTP_ISDEF_RXTATYPEOFRXSDUCFG                                                              STD_OFF
#define CANTP_ISDEF_RXWFTMAXOFRXSDUCFG                                                              STD_ON
#define CANTP_ISDEF_STMINOFRXSDUCFG                                                                 STD_ON
#define CANTP_ISDEF_SDUMETADATALENGTHOFRXSDUCFG                                                     STD_ON
#define CANTP_ISDEF_TXFCADDRESSOFRXSDUCFG                                                           STD_ON
#define CANTP_ISDEF_TXFCPDUCONFIRMATIONPDUIDOFRXSDUCFG                                              STD_OFF
#define CANTP_ISDEF_TXPDUMAPIDXOFRXSDUCFG                                                           STD_OFF
#define CANTP_ISDEF_TXPDUMAPUSEDOFRXSDUCFG                                                          STD_OFF
#define CANTP_ISDEF_TXSDUCFGIDXOFRXSDUCFG                                                           STD_OFF
#define CANTP_ISDEF_TXSDUCFGUSEDOFRXSDUCFG                                                          STD_OFF
#define CANTP_ISDEF_RXNSDUHDLIDXOFRXSDUSNV2HDL                                                      STD_OFF
#define CANTP_ISDEF_RXNSDUHDLPARTITIONIDXOFRXSDUSNV2HDL                                             STD_ON
#define CANTP_ISDEF_RXNSDUHDLUSEDOFRXSDUSNV2HDL                                                     STD_ON
#define CANTP_ISDEF_TXPDU2RXSDUIND                                                                  STD_OFF
#define CANTP_ISDEF_TXPDU2TXSDUIND                                                                  STD_OFF
#define CANTP_ISDEF_CANIDOFTXPDUMAP                                                                 STD_OFF
#define CANTP_ISDEF_MASKOFTXPDUMAP                                                                  STD_ON
#define CANTP_ISDEF_TXPDU2RXSDUENDIDXOFTXPDUMAP                                                     STD_OFF
#define CANTP_ISDEF_TXPDU2RXSDUPARTITIONIDXOFTXPDUMAP                                               STD_ON
#define CANTP_ISDEF_TXPDU2RXSDUSTARTIDXOFTXPDUMAP                                                   STD_OFF
#define CANTP_ISDEF_TXPDU2RXSDUUSEDOFTXPDUMAP                                                       STD_ON
#define CANTP_ISDEF_TXPDU2TXSDUENDIDXOFTXPDUMAP                                                     STD_OFF
#define CANTP_ISDEF_TXPDU2TXSDUPARTITIONIDXOFTXPDUMAP                                               STD_ON
#define CANTP_ISDEF_TXPDU2TXSDUSTARTIDXOFTXPDUMAP                                                   STD_OFF
#define CANTP_ISDEF_TXPDU2TXSDUUSEDOFTXPDUMAP                                                       STD_ON
#define CANTP_ISDEF_CANTYPEOFTXSDUCFG                                                               STD_OFF
#define CANTP_ISDEF_CHANNELMODEOFTXSDUCFG                                                           STD_ON
#define CANTP_ISDEF_LOLAYERTXPDUIDOFTXSDUCFG                                                        STD_OFF
#define CANTP_ISDEF_NASOFTXSDUCFG                                                                   STD_ON
#define CANTP_ISDEF_NBSOFTXSDUCFG                                                                   STD_ON
#define CANTP_ISDEF_NCSOFTXSDUCFG                                                                   STD_ON
#define CANTP_ISDEF_PDURTXSDUIDOFTXSDUCFG                                                           STD_OFF
#define CANTP_ISDEF_RXFCADDRESSOFTXSDUCFG                                                           STD_ON
#define CANTP_ISDEF_RXFCPDUIDOFTXSDUCFG                                                             STD_OFF
#define CANTP_ISDEF_RXPDUMAPIDXOFTXSDUCFG                                                           STD_OFF
#define CANTP_ISDEF_RXPDUMAPUSEDOFTXSDUCFG                                                          STD_ON
#define CANTP_ISDEF_RXSDUCFGIDXOFTXSDUCFG                                                           STD_OFF
#define CANTP_ISDEF_RXSDUCFGUSEDOFTXSDUCFG                                                          STD_ON
#define CANTP_ISDEF_SDUMETADATALENGTHOFTXSDUCFG                                                     STD_ON
#define CANTP_ISDEF_TRANSMITCANCELLATIONOFTXSDUCFG                                                  STD_ON
#define CANTP_ISDEF_TXADDRESSOFTXSDUCFG                                                             STD_ON
#define CANTP_ISDEF_TXADDRESSINGFORMATOFTXSDUCFG                                                    STD_ON
#define CANTP_ISDEF_TXMAXPAYLOADLENGTHOFTXSDUCFG                                                    STD_OFF
#define CANTP_ISDEF_TXPADDINGACTIVATIONOFTXSDUCFG                                                   STD_ON
#define CANTP_ISDEF_TXPDUCONFIRMATIONPDUIDOFTXSDUCFG                                                STD_OFF
#define CANTP_ISDEF_TXPDUMAPIDXOFTXSDUCFG                                                           STD_OFF
#define CANTP_ISDEF_TXPDUMAPUSEDOFTXSDUCFG                                                          STD_ON
#define CANTP_ISDEF_TXTATYPEOFTXSDUCFG                                                              STD_ON
#define CANTP_ISDEF_TXNSDUHDLIDXOFTXSDUSNV2HDL                                                      STD_OFF
#define CANTP_ISDEF_TXNSDUHDLPARTITIONIDXOFTXSDUSNV2HDL                                             STD_ON
#define CANTP_ISDEF_TXNSDUHDLUSEDOFTXSDUSNV2HDL                                                     STD_ON
#define CANTP_ISDEF_PCPARTITIONCONFIGOFPCCONFIG                                                     STD_ON
#define CANTP_ISDEF_PARTITIONIDENTIFIERSOFPCCONFIG                                                  STD_ON
#define CANTP_ISDEF_CALCBSOFPCPARTITIONCONFIG                                                       STD_ON
#define CANTP_ISDEF_RXPDU2RXSDUINDOFPCPARTITIONCONFIG                                               STD_ON
#define CANTP_ISDEF_RXPDU2TXSDUINDOFPCPARTITIONCONFIG                                               STD_ON
#define CANTP_ISDEF_RXPDUMAPOFPCPARTITIONCONFIG                                                     STD_ON
#define CANTP_ISDEF_RXSDUCFGOFPCPARTITIONCONFIG                                                     STD_ON
#define CANTP_ISDEF_RXSDUSNV2HDLOFPCPARTITIONCONFIG                                                 STD_ON
#define CANTP_ISDEF_RXSTATEOFPCPARTITIONCONFIG                                                      STD_ON
#define CANTP_ISDEF_TXPDU2RXSDUINDOFPCPARTITIONCONFIG                                               STD_ON
#define CANTP_ISDEF_TXPDU2TXSDUINDOFPCPARTITIONCONFIG                                               STD_ON
#define CANTP_ISDEF_TXPDUMAPOFPCPARTITIONCONFIG                                                     STD_ON
#define CANTP_ISDEF_TXSDUCFGOFPCPARTITIONCONFIG                                                     STD_ON
#define CANTP_ISDEF_TXSDUSNV2HDLOFPCPARTITIONCONFIG                                                 STD_ON
#define CANTP_ISDEF_TXSEMAPHORESOFPCPARTITIONCONFIG                                                 STD_ON
#define CANTP_ISDEF_TXSTATEOFPCPARTITIONCONFIG                                                      STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCEqualsAlwaysToDefines  CanTp Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define CANTP_EQ2_PCPARTITIONCONFIGIDXOFPARTITIONIDENTIFIERS                                        
#define CANTP_EQ2_PARTITIONSNVOFPARTITIONIDENTIFIERS                                                
#define CANTP_EQ2_RXPDU2RXSDUIND                                                                    
#define CANTP_EQ2_RXPDU2TXSDUIND                                                                    
#define CANTP_EQ2_ADDRESSINGFORMATOFRXPDUMAP                                                        CANTP_NORMAL_ADDRESSING_ADDRESSINGFORMATOFRXPDUMAP
#define CANTP_EQ2_GENERICCONNECTIONOFRXPDUMAP                                                       FALSE
#define CANTP_EQ2_PDUMETADATAOFRXPDUMAP                                                             FALSE
#define CANTP_EQ2_RXPDU2RXSDUENDIDXOFRXPDUMAP                                                       
#define CANTP_EQ2_RXPDU2RXSDUPARTITIONIDXOFRXPDUMAP                                                 0u
#define CANTP_EQ2_RXPDU2RXSDUSTARTIDXOFRXPDUMAP                                                     
#define CANTP_EQ2_RXPDU2RXSDUUSEDOFRXPDUMAP                                                         TRUE
#define CANTP_EQ2_RXPDU2TXSDUENDIDXOFRXPDUMAP                                                       
#define CANTP_EQ2_RXPDU2TXSDUPARTITIONIDXOFRXPDUMAP                                                 
#define CANTP_EQ2_RXPDU2TXSDUSTARTIDXOFRXPDUMAP                                                     
#define CANTP_EQ2_RXPDU2TXSDUUSEDOFRXPDUMAP                                                         
#define CANTP_EQ2_BLOCKSIZEOFRXSDUCFG                                                               
#define CANTP_EQ2_CANTYPEOFRXSDUCFG                                                                 
#define CANTP_EQ2_CHANNELMODEOFRXSDUCFG                                                             CANTP_FULL_DUPLEX_CHANNELMODEOFRXSDUCFG
#define CANTP_EQ2_GENERICCONNECTIONOFRXSDUCFG                                                       FALSE
#define CANTP_EQ2_LOLAYERTXFCPDUIDOFRXSDUCFG                                                        
#define CANTP_EQ2_NAROFRXSDUCFG                                                                     
#define CANTP_EQ2_NBROFRXSDUCFG                                                                     21u
#define CANTP_EQ2_NCROFRXSDUCFG                                                                     
#define CANTP_EQ2_PDURRXSDUIDOFRXSDUCFG                                                             
#define CANTP_EQ2_RXADDRESSOFRXSDUCFG                                                               255u
#define CANTP_EQ2_RXADDRESSINGFORMATOFRXSDUCFG                                                      CANTP_NORMAL_ADDRESSING_RXADDRESSINGFORMATOFRXSDUCFG
#define CANTP_EQ2_RXMAXPAYLOADLENGTHOFRXSDUCFG                                                      
#define CANTP_EQ2_RXPADDINGACTIVATIONOFRXSDUCFG                                                     TRUE
#define CANTP_EQ2_RXPDUIDOFRXSDUCFG                                                                 
#define CANTP_EQ2_RXPDUMAPIDXOFRXSDUCFG                                                             
#define CANTP_EQ2_RXPDUMAPUSEDOFRXSDUCFG                                                            TRUE
#define CANTP_EQ2_RXTATYPEOFRXSDUCFG                                                                
#define CANTP_EQ2_RXWFTMAXOFRXSDUCFG                                                                15u
#define CANTP_EQ2_STMINOFRXSDUCFG                                                                   0u
#define CANTP_EQ2_SDUMETADATALENGTHOFRXSDUCFG                                                       0u
#define CANTP_EQ2_TXFCADDRESSOFRXSDUCFG                                                             255u
#define CANTP_EQ2_TXFCPDUCONFIRMATIONPDUIDOFRXSDUCFG                                                
#define CANTP_EQ2_TXPDUMAPIDXOFRXSDUCFG                                                             
#define CANTP_EQ2_TXPDUMAPUSEDOFRXSDUCFG                                                            
#define CANTP_EQ2_TXSDUCFGIDXOFRXSDUCFG                                                             
#define CANTP_EQ2_TXSDUCFGUSEDOFRXSDUCFG                                                            
#define CANTP_EQ2_RXNSDUHDLIDXOFRXSDUSNV2HDL                                                        
#define CANTP_EQ2_RXNSDUHDLPARTITIONIDXOFRXSDUSNV2HDL                                               0u
#define CANTP_EQ2_RXNSDUHDLUSEDOFRXSDUSNV2HDL                                                       TRUE
#define CANTP_EQ2_TXPDU2RXSDUIND                                                                    
#define CANTP_EQ2_TXPDU2TXSDUIND                                                                    
#define CANTP_EQ2_CANIDOFTXPDUMAP                                                                   
#define CANTP_EQ2_MASKOFTXPDUMAP                                                                    0xFFFFFFFFu
#define CANTP_EQ2_TXPDU2RXSDUENDIDXOFTXPDUMAP                                                       
#define CANTP_EQ2_TXPDU2RXSDUPARTITIONIDXOFTXPDUMAP                                                 0u
#define CANTP_EQ2_TXPDU2RXSDUSTARTIDXOFTXPDUMAP                                                     
#define CANTP_EQ2_TXPDU2RXSDUUSEDOFTXPDUMAP                                                         TRUE
#define CANTP_EQ2_TXPDU2TXSDUENDIDXOFTXPDUMAP                                                       
#define CANTP_EQ2_TXPDU2TXSDUPARTITIONIDXOFTXPDUMAP                                                 0u
#define CANTP_EQ2_TXPDU2TXSDUSTARTIDXOFTXPDUMAP                                                     
#define CANTP_EQ2_TXPDU2TXSDUUSEDOFTXPDUMAP                                                         TRUE
#define CANTP_EQ2_CANTYPEOFTXSDUCFG                                                                 
#define CANTP_EQ2_CHANNELMODEOFTXSDUCFG                                                             CANTP_FULL_DUPLEX_CHANNELMODEOFTXSDUCFG
#define CANTP_EQ2_LOLAYERTXPDUIDOFTXSDUCFG                                                          
#define CANTP_EQ2_NASOFTXSDUCFG                                                                     21u
#define CANTP_EQ2_NBSOFTXSDUCFG                                                                     101u
#define CANTP_EQ2_NCSOFTXSDUCFG                                                                     41u
#define CANTP_EQ2_PDURTXSDUIDOFTXSDUCFG                                                             
#define CANTP_EQ2_RXFCADDRESSOFTXSDUCFG                                                             255u
#define CANTP_EQ2_RXFCPDUIDOFTXSDUCFG                                                               
#define CANTP_EQ2_RXPDUMAPIDXOFTXSDUCFG                                                             
#define CANTP_EQ2_RXPDUMAPUSEDOFTXSDUCFG                                                            TRUE
#define CANTP_EQ2_RXSDUCFGIDXOFTXSDUCFG                                                             
#define CANTP_EQ2_RXSDUCFGUSEDOFTXSDUCFG                                                            TRUE
#define CANTP_EQ2_SDUMETADATALENGTHOFTXSDUCFG                                                       0u
#define CANTP_EQ2_TRANSMITCANCELLATIONOFTXSDUCFG                                                    FALSE
#define CANTP_EQ2_TXADDRESSOFTXSDUCFG                                                               255u
#define CANTP_EQ2_TXADDRESSINGFORMATOFTXSDUCFG                                                      CANTP_NORMAL_ADDRESSING_TXADDRESSINGFORMATOFTXSDUCFG
#define CANTP_EQ2_TXMAXPAYLOADLENGTHOFTXSDUCFG                                                      
#define CANTP_EQ2_TXPADDINGACTIVATIONOFTXSDUCFG                                                     TRUE
#define CANTP_EQ2_TXPDUCONFIRMATIONPDUIDOFTXSDUCFG                                                  
#define CANTP_EQ2_TXPDUMAPIDXOFTXSDUCFG                                                             
#define CANTP_EQ2_TXPDUMAPUSEDOFTXSDUCFG                                                            TRUE
#define CANTP_EQ2_TXTATYPEOFTXSDUCFG                                                                CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG
#define CANTP_EQ2_TXNSDUHDLIDXOFTXSDUSNV2HDL                                                        
#define CANTP_EQ2_TXNSDUHDLPARTITIONIDXOFTXSDUSNV2HDL                                               0u
#define CANTP_EQ2_TXNSDUHDLUSEDOFTXSDUSNV2HDL                                                       TRUE
#define CANTP_EQ2_PCPARTITIONCONFIGOFPCCONFIG                                                       CanTp_PCPartitionConfig
#define CANTP_EQ2_PARTITIONIDENTIFIERSOFPCCONFIG                                                    CanTp_PartitionIdentifiers
#define CANTP_EQ2_CALCBSOFPCPARTITIONCONFIG                                                         CanTp_CalcBS
#define CANTP_EQ2_RXPDU2RXSDUINDOFPCPARTITIONCONFIG                                                 CanTp_RxPdu2RxSduInd
#define CANTP_EQ2_RXPDU2TXSDUINDOFPCPARTITIONCONFIG                                                 CanTp_RxPdu2TxSduInd
#define CANTP_EQ2_RXPDUMAPOFPCPARTITIONCONFIG                                                       CanTp_RxPduMap
#define CANTP_EQ2_RXSDUCFGOFPCPARTITIONCONFIG                                                       CanTp_RxSduCfg
#define CANTP_EQ2_RXSDUSNV2HDLOFPCPARTITIONCONFIG                                                   CanTp_RxSduSnv2Hdl
#define CANTP_EQ2_RXSTATEOFPCPARTITIONCONFIG                                                        CanTp_RxState
#define CANTP_EQ2_TXPDU2RXSDUINDOFPCPARTITIONCONFIG                                                 CanTp_TxPdu2RxSduInd
#define CANTP_EQ2_TXPDU2TXSDUINDOFPCPARTITIONCONFIG                                                 CanTp_TxPdu2TxSduInd
#define CANTP_EQ2_TXPDUMAPOFPCPARTITIONCONFIG                                                       CanTp_TxPduMap
#define CANTP_EQ2_TXSDUCFGOFPCPARTITIONCONFIG                                                       CanTp_TxSduCfg
#define CANTP_EQ2_TXSDUSNV2HDLOFPCPARTITIONCONFIG                                                   CanTp_TxSduSnv2Hdl
#define CANTP_EQ2_TXSEMAPHORESOFPCPARTITIONCONFIG                                                   CanTp_TxSemaphores
#define CANTP_EQ2_TXSTATEOFPCPARTITIONCONFIG                                                        CanTp_TxState
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCSymbolicInitializationPointers  CanTp Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define CanTp_Config_Ptr                                                                            NULL_PTR  /**< symbolic identifier which shall be used to initialize 'CanTp' */
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCInitializationSymbols  CanTp Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define CanTp_Config                                                                                NULL_PTR  /**< symbolic identifier which could be used to initialize 'CanTp */
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCGeneral  CanTp General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define CANTP_CHECK_INIT_POINTER                                                                    STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define CANTP_FINAL_MAGIC_NUMBER                                                                    0x231Eu  /**< the precompile constant to validate the size of the initialization structure at initialization time of CanTp */
#define CANTP_INDIVIDUAL_POSTBUILD                                                                  STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'CanTp' is not configured to be postbuild capable. */
#define CANTP_INIT_DATA                                                                             CANTP_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define CANTP_INIT_DATA_HASH_CODE                                                                   835452236  /**< the precompile constant to validate the initialization structure at initialization time of CanTp with a hashcode. The seed value is '0x231Eu' */
#define CANTP_USE_ECUM_BSW_ERROR_HOOK                                                               STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define CANTP_USE_INIT_POINTER                                                                      STD_OFF  /**< STD_ON if the init pointer CanTp shall be used. */
#define CanTp_PartitionIndexOfCSLForCanTpSinglePartitionMemory                                      0u  /**< internal partition index of the ComStackLib for the partition CanTpSinglePartitionMemory */
/** 
  \}
*/ 


/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 Macros_3453 */  /* MD_MSR_FctLikeMacro */
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanTpPCGetConstantDuplicatedRootDataMacros  CanTp Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define CanTp_GetPartitionIdentifiersOfPCConfig()                                                   CanTp_PartitionIdentifiers  /**< the pointer to CanTp_PartitionIdentifiers */
#define CanTp_GetSizeOfPartitionIdentifiersOfPCConfig()                                             1u  /**< the number of accomplishable value elements in CanTp_PartitionIdentifiers */
#define CanTp_GetCalcBSOfPCPartitionConfig(partitionIndex)                                          CanTp_CalcBS  /**< the pointer to CanTp_CalcBS */
#define CanTp_GetCompatibilityVersionOfPCPartitionConfig(partitionIndex)                            825855u
#define CanTp_GetRxPdu2RxSduIndOfPCPartitionConfig(partitionIndex)                                  CanTp_RxPdu2RxSduInd  /**< the pointer to CanTp_RxPdu2RxSduInd */
#define CanTp_GetRxPdu2TxSduIndOfPCPartitionConfig(partitionIndex)                                  CanTp_RxPdu2TxSduInd  /**< the pointer to CanTp_RxPdu2TxSduInd */
#define CanTp_GetRxPduMapOfPCPartitionConfig()                                                      CanTp_RxPduMap  /**< the pointer to CanTp_RxPduMap */
#define CanTp_GetRxSduCfgOfPCPartitionConfig(partitionIndex)                                        CanTp_RxSduCfg  /**< the pointer to CanTp_RxSduCfg */
#define CanTp_GetRxSduSnv2HdlOfPCPartitionConfig()                                                  CanTp_RxSduSnv2Hdl  /**< the pointer to CanTp_RxSduSnv2Hdl */
#define CanTp_GetRxStateOfPCPartitionConfig(partitionIndex)                                         CanTp_RxState  /**< the pointer to CanTp_RxState */
#define CanTp_GetSizeOfCalcBSOfPCPartitionConfig(partitionIndex)                                    4u  /**< the number of accomplishable value elements in CanTp_CalcBS */
#define CanTp_GetSizeOfRxPdu2RxSduIndOfPCPartitionConfig(partitionIndex)                            4u  /**< the number of accomplishable value elements in CanTp_RxPdu2RxSduInd */
#define CanTp_GetSizeOfRxPdu2TxSduIndOfPCPartitionConfig(partitionIndex)                            2u  /**< the number of accomplishable value elements in CanTp_RxPdu2TxSduInd */
#define CanTp_GetSizeOfRxPduMapOfPCPartitionConfig()                                                4u  /**< the number of accomplishable value elements in CanTp_RxPduMap */
#define CanTp_GetSizeOfRxSduCfgOfPCPartitionConfig(partitionIndex)                                  4u  /**< the number of accomplishable value elements in CanTp_RxSduCfg */
#define CanTp_GetSizeOfRxSduSnv2HdlOfPCPartitionConfig()                                            4u  /**< the number of accomplishable value elements in CanTp_RxSduSnv2Hdl */
#define CanTp_GetSizeOfRxStateOfPCPartitionConfig(partitionIndex)                                   4u  /**< the number of accomplishable value elements in CanTp_RxState */
#define CanTp_GetSizeOfTxPdu2RxSduIndOfPCPartitionConfig(partitionIndex)                            2u  /**< the number of accomplishable value elements in CanTp_TxPdu2RxSduInd */
#define CanTp_GetSizeOfTxPdu2TxSduIndOfPCPartitionConfig(partitionIndex)                            2u  /**< the number of accomplishable value elements in CanTp_TxPdu2TxSduInd */
#define CanTp_GetSizeOfTxPduMapOfPCPartitionConfig()                                                2u  /**< the number of accomplishable value elements in CanTp_TxPduMap */
#define CanTp_GetSizeOfTxSduCfgOfPCPartitionConfig(partitionIndex)                                  2u  /**< the number of accomplishable value elements in CanTp_TxSduCfg */
#define CanTp_GetSizeOfTxSduSnv2HdlOfPCPartitionConfig()                                            2u  /**< the number of accomplishable value elements in CanTp_TxSduSnv2Hdl */
#define CanTp_GetSizeOfTxSemaphoresOfPCPartitionConfig(partitionIndex)                              2u  /**< the number of accomplishable value elements in CanTp_TxSemaphores */
#define CanTp_GetSizeOfTxStateOfPCPartitionConfig(partitionIndex)                                   2u  /**< the number of accomplishable value elements in CanTp_TxState */
#define CanTp_GetTxPdu2RxSduIndOfPCPartitionConfig(partitionIndex)                                  CanTp_TxPdu2RxSduInd  /**< the pointer to CanTp_TxPdu2RxSduInd */
#define CanTp_GetTxPdu2TxSduIndOfPCPartitionConfig(partitionIndex)                                  CanTp_TxPdu2TxSduInd  /**< the pointer to CanTp_TxPdu2TxSduInd */
#define CanTp_GetTxPduMapOfPCPartitionConfig()                                                      CanTp_TxPduMap  /**< the pointer to CanTp_TxPduMap */
#define CanTp_GetTxSduCfgOfPCPartitionConfig(partitionIndex)                                        CanTp_TxSduCfg  /**< the pointer to CanTp_TxSduCfg */
#define CanTp_GetTxSduSnv2HdlOfPCPartitionConfig()                                                  CanTp_TxSduSnv2Hdl  /**< the pointer to CanTp_TxSduSnv2Hdl */
#define CanTp_GetTxSemaphoresOfPCPartitionConfig(partitionIndex)                                    CanTp_TxSemaphores  /**< the pointer to CanTp_TxSemaphores */
#define CanTp_GetTxStateOfPCPartitionConfig(partitionIndex)                                         CanTp_TxState  /**< the pointer to CanTp_TxState */
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCGetDataMacros  CanTp Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define CanTp_GetCalcBS(Index, partitionIndex)                                                      (CanTp_GetCalcBSOfPCPartitionConfig(partitionIndex)[(Index)])
#define CanTp_GetPCPartitionConfigIdxOfPartitionIdentifiers(Index)                                  (CanTp_GetPartitionIdentifiersOfPCConfig()[(Index)].PCPartitionConfigIdxOfPartitionIdentifiers)
#define CanTp_GetPartitionSNVOfPartitionIdentifiers(Index)                                          (CanTp_GetPartitionIdentifiersOfPCConfig()[(Index)].PartitionSNVOfPartitionIdentifiers)
#define CanTp_GetRxPdu2RxSduInd(Index, partitionIndex)                                              (CanTp_GetRxPdu2RxSduIndOfPCPartitionConfig(partitionIndex)[(Index)])
#define CanTp_GetRxPdu2TxSduInd(Index, partitionIndex)                                              (CanTp_GetRxPdu2TxSduIndOfPCPartitionConfig(partitionIndex)[(Index)])
#define CanTp_GetRxPdu2RxSduEndIdxOfRxPduMap(Index)                                                 (CanTp_GetRxPduMapOfPCPartitionConfig()[(Index)].RxPdu2RxSduEndIdxOfRxPduMap)
#define CanTp_GetRxPdu2RxSduStartIdxOfRxPduMap(Index)                                               (CanTp_GetRxPduMapOfPCPartitionConfig()[(Index)].RxPdu2RxSduStartIdxOfRxPduMap)
#define CanTp_GetRxPdu2TxSduEndIdxOfRxPduMap(Index)                                                 (CanTp_GetRxPduMapOfPCPartitionConfig()[(Index)].RxPdu2TxSduEndIdxOfRxPduMap)
#define CanTp_GetRxPdu2TxSduPartitionIdxOfRxPduMap(Index)                                           (CanTp_GetRxPduMapOfPCPartitionConfig()[(Index)].RxPdu2TxSduPartitionIdxOfRxPduMap)
#define CanTp_GetRxPdu2TxSduStartIdxOfRxPduMap(Index)                                               (CanTp_GetRxPduMapOfPCPartitionConfig()[(Index)].RxPdu2TxSduStartIdxOfRxPduMap)
#define CanTp_GetBlockSizeOfRxSduCfg(Index, partitionIndex)                                         (CanTp_GetRxSduCfgOfPCPartitionConfig(partitionIndex)[(Index)].BlockSizeOfRxSduCfg)
#define CanTp_GetCanTypeOfRxSduCfg(Index, partitionIndex)                                           (CanTp_GetRxSduCfgOfPCPartitionConfig(partitionIndex)[(Index)].CanTypeOfRxSduCfg)
#define CanTp_GetLoLayerTxFcPduIdOfRxSduCfg(Index, partitionIndex)                                  (CanTp_GetRxSduCfgOfPCPartitionConfig(partitionIndex)[(Index)].LoLayerTxFcPduIdOfRxSduCfg)
#define CanTp_GetNArOfRxSduCfg(Index, partitionIndex)                                               (CanTp_GetRxSduCfgOfPCPartitionConfig(partitionIndex)[(Index)].NArOfRxSduCfg)
#define CanTp_GetNCrOfRxSduCfg(Index, partitionIndex)                                               (CanTp_GetRxSduCfgOfPCPartitionConfig(partitionIndex)[(Index)].NCrOfRxSduCfg)
#define CanTp_GetPduRRxSduIdOfRxSduCfg(Index, partitionIndex)                                       (CanTp_GetRxSduCfgOfPCPartitionConfig(partitionIndex)[(Index)].PduRRxSduIdOfRxSduCfg)
#define CanTp_GetRxMaxPayloadLengthOfRxSduCfg(Index, partitionIndex)                                (CanTp_GetRxSduCfgOfPCPartitionConfig(partitionIndex)[(Index)].RxMaxPayloadLengthOfRxSduCfg)
#define CanTp_GetRxPduIdOfRxSduCfg(Index, partitionIndex)                                           (CanTp_GetRxSduCfgOfPCPartitionConfig(partitionIndex)[(Index)].RxPduIdOfRxSduCfg)
#define CanTp_GetRxPduMapIdxOfRxSduCfg(Index, partitionIndex)                                       (CanTp_GetRxSduCfgOfPCPartitionConfig(partitionIndex)[(Index)].RxPduMapIdxOfRxSduCfg)
#define CanTp_GetRxTaTypeOfRxSduCfg(Index, partitionIndex)                                          (CanTp_GetRxSduCfgOfPCPartitionConfig(partitionIndex)[(Index)].RxTaTypeOfRxSduCfg)
#define CanTp_GetTxFcPduConfirmationPduIdOfRxSduCfg(Index, partitionIndex)                          (CanTp_GetRxSduCfgOfPCPartitionConfig(partitionIndex)[(Index)].TxFcPduConfirmationPduIdOfRxSduCfg)
#define CanTp_GetTxPduMapIdxOfRxSduCfg(Index, partitionIndex)                                       (CanTp_GetRxSduCfgOfPCPartitionConfig(partitionIndex)[(Index)].TxPduMapIdxOfRxSduCfg)
#define CanTp_GetTxSduCfgIdxOfRxSduCfg(Index, partitionIndex)                                       (CanTp_GetRxSduCfgOfPCPartitionConfig(partitionIndex)[(Index)].TxSduCfgIdxOfRxSduCfg)
#define CanTp_GetRxNSduHdlIdxOfRxSduSnv2Hdl(Index)                                                  (CanTp_GetRxSduSnv2HdlOfPCPartitionConfig()[(Index)].RxNSduHdlIdxOfRxSduSnv2Hdl)
#define CanTp_GetRxState(Index, partitionIndex)                                                     (CanTp_GetRxStateOfPCPartitionConfig(partitionIndex)[(Index)])
#define CanTp_GetTxPdu2RxSduInd(Index, partitionIndex)                                              (CanTp_GetTxPdu2RxSduIndOfPCPartitionConfig(partitionIndex)[(Index)])
#define CanTp_GetTxPdu2TxSduInd(Index, partitionIndex)                                              (CanTp_GetTxPdu2TxSduIndOfPCPartitionConfig(partitionIndex)[(Index)])
#define CanTp_GetCanIdOfTxPduMap(Index)                                                             (CanTp_GetTxPduMapOfPCPartitionConfig()[(Index)].CanIdOfTxPduMap)
#define CanTp_GetTxPdu2RxSduEndIdxOfTxPduMap(Index)                                                 (CanTp_GetTxPduMapOfPCPartitionConfig()[(Index)].TxPdu2RxSduEndIdxOfTxPduMap)
#define CanTp_GetTxPdu2RxSduStartIdxOfTxPduMap(Index)                                               (CanTp_GetTxPduMapOfPCPartitionConfig()[(Index)].TxPdu2RxSduStartIdxOfTxPduMap)
#define CanTp_GetTxPdu2TxSduEndIdxOfTxPduMap(Index)                                                 (CanTp_GetTxPduMapOfPCPartitionConfig()[(Index)].TxPdu2TxSduEndIdxOfTxPduMap)
#define CanTp_GetTxPdu2TxSduStartIdxOfTxPduMap(Index)                                               (CanTp_GetTxPduMapOfPCPartitionConfig()[(Index)].TxPdu2TxSduStartIdxOfTxPduMap)
#define CanTp_GetCanTypeOfTxSduCfg(Index, partitionIndex)                                           (CanTp_GetTxSduCfgOfPCPartitionConfig(partitionIndex)[(Index)].CanTypeOfTxSduCfg)
#define CanTp_GetLoLayerTxPduIdOfTxSduCfg(Index, partitionIndex)                                    (CanTp_GetTxSduCfgOfPCPartitionConfig(partitionIndex)[(Index)].LoLayerTxPduIdOfTxSduCfg)
#define CanTp_GetPduRTxSduIdOfTxSduCfg(Index, partitionIndex)                                       (CanTp_GetTxSduCfgOfPCPartitionConfig(partitionIndex)[(Index)].PduRTxSduIdOfTxSduCfg)
#define CanTp_GetRxFcPduIdOfTxSduCfg(Index, partitionIndex)                                         (CanTp_GetTxSduCfgOfPCPartitionConfig(partitionIndex)[(Index)].RxFcPduIdOfTxSduCfg)
#define CanTp_GetRxPduMapIdxOfTxSduCfg(Index, partitionIndex)                                       (CanTp_GetTxSduCfgOfPCPartitionConfig(partitionIndex)[(Index)].RxPduMapIdxOfTxSduCfg)
#define CanTp_GetRxSduCfgIdxOfTxSduCfg(Index, partitionIndex)                                       (CanTp_GetTxSduCfgOfPCPartitionConfig(partitionIndex)[(Index)].RxSduCfgIdxOfTxSduCfg)
#define CanTp_GetTxMaxPayloadLengthOfTxSduCfg(Index, partitionIndex)                                (CanTp_GetTxSduCfgOfPCPartitionConfig(partitionIndex)[(Index)].TxMaxPayloadLengthOfTxSduCfg)
#define CanTp_GetTxPduConfirmationPduIdOfTxSduCfg(Index, partitionIndex)                            (CanTp_GetTxSduCfgOfPCPartitionConfig(partitionIndex)[(Index)].TxPduConfirmationPduIdOfTxSduCfg)
#define CanTp_GetTxPduMapIdxOfTxSduCfg(Index, partitionIndex)                                       (CanTp_GetTxSduCfgOfPCPartitionConfig(partitionIndex)[(Index)].TxPduMapIdxOfTxSduCfg)
#define CanTp_GetTxNSduHdlIdxOfTxSduSnv2Hdl(Index)                                                  (CanTp_GetTxSduSnv2HdlOfPCPartitionConfig()[(Index)].TxNSduHdlIdxOfTxSduSnv2Hdl)
#define CanTp_GetTxSemaphores(Index, partitionIndex)                                                (CanTp_GetTxSemaphoresOfPCPartitionConfig(partitionIndex)[(Index)])
#define CanTp_GetTxState(Index, partitionIndex)                                                     (CanTp_GetTxStateOfPCPartitionConfig(partitionIndex)[(Index)])
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCGetDeduplicatedDataMacros  CanTp Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define CanTp_GetCompatibilityVersion(partitionIndex)                                               CanTp_GetCompatibilityVersionOfPCPartitionConfig(partitionIndex)
#define CanTp_GetAddressingFormatOfRxPduMap(Index)                                                  CANTP_NORMAL_ADDRESSING_ADDRESSINGFORMATOFRXPDUMAP
#define CanTp_IsGenericConnectionOfRxPduMap(Index)                                                  (((FALSE)) != FALSE)
#define CanTp_IsPduMetadataOfRxPduMap(Index)                                                        (((FALSE)) != FALSE)
#define CanTp_GetRxPdu2RxSduPartitionIdxOfRxPduMap(Index)                                           0u  /**< the partition index of the 0:n relation pointing to one of CanTp_RxPdu2RxSduInd */
#define CanTp_IsRxPdu2RxSduUsedOfRxPduMap(Index)                                                    (((TRUE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to one of CanTp_RxPdu2RxSduInd */
#define CanTp_IsRxPdu2TxSduUsedOfRxPduMap(Index)                                                    (((boolean)(CanTp_GetRxPdu2TxSduStartIdxOfRxPduMap(Index) != CANTP_NO_RXPDU2TXSDUSTARTIDXOFRXPDUMAP)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to one of CanTp_RxPdu2TxSduInd */
#define CanTp_GetChannelModeOfRxSduCfg(Index, partitionIndex)                                       CANTP_FULL_DUPLEX_CHANNELMODEOFRXSDUCFG
#define CanTp_IsGenericConnectionOfRxSduCfg(Index, partitionIndex)                                  (((FALSE)) != FALSE)
#define CanTp_GetNBrOfRxSduCfg(Index, partitionIndex)                                               21u
#define CanTp_GetRxAddressOfRxSduCfg(Index, partitionIndex)                                         255u
#define CanTp_GetRxAddressingFormatOfRxSduCfg(Index, partitionIndex)                                CANTP_NORMAL_ADDRESSING_RXADDRESSINGFORMATOFRXSDUCFG
#define CanTp_IsRxPaddingActivationOfRxSduCfg(Index, partitionIndex)                                (((TRUE)) != FALSE)
#define CanTp_IsRxPduMapUsedOfRxSduCfg(Index, partitionIndex)                                       (((TRUE)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to CanTp_RxPduMap */
#define CanTp_GetRxWftMaxOfRxSduCfg(Index, partitionIndex)                                          15u
#define CanTp_GetSTminOfRxSduCfg(Index, partitionIndex)                                             0u
#define CanTp_GetSduMetadataLengthOfRxSduCfg(Index, partitionIndex)                                 0u
#define CanTp_GetTxFcAddressOfRxSduCfg(Index, partitionIndex)                                       255u
#define CanTp_IsTxPduMapUsedOfRxSduCfg(Index, partitionIndex)                                       (((boolean)(CanTp_GetTxPduMapIdxOfRxSduCfg(((Index)), (partitionIndex)) != CANTP_NO_TXPDUMAPIDXOFRXSDUCFG)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to CanTp_TxPduMap */
#define CanTp_IsTxSduCfgUsedOfRxSduCfg(Index, partitionIndex)                                       (((boolean)(CanTp_GetTxSduCfgIdxOfRxSduCfg(((Index)), (partitionIndex)) != CANTP_NO_TXSDUCFGIDXOFRXSDUCFG)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to CanTp_TxSduCfg */
#define CanTp_GetRxNSduHdlPartitionIdxOfRxSduSnv2Hdl(Index)                                         0u  /**< the partition index of the 0:1 relation pointing to CanTp_RxSduCfg */
#define CanTp_IsRxNSduHdlUsedOfRxSduSnv2Hdl(Index)                                                  (((TRUE)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to CanTp_RxSduCfg */
#define CanTp_GetSizeOfCalcBS(partitionIndex)                                                       CanTp_GetSizeOfCalcBSOfPCPartitionConfig(partitionIndex)
#define CanTp_GetSizeOfPartitionIdentifiers()                                                       CanTp_GetSizeOfPartitionIdentifiersOfPCConfig()
#define CanTp_GetSizeOfRxPdu2RxSduInd(partitionIndex)                                               CanTp_GetSizeOfRxPdu2RxSduIndOfPCPartitionConfig(partitionIndex)
#define CanTp_GetSizeOfRxPdu2TxSduInd(partitionIndex)                                               CanTp_GetSizeOfRxPdu2TxSduIndOfPCPartitionConfig(partitionIndex)
#define CanTp_GetSizeOfRxPduMap()                                                                   CanTp_GetSizeOfRxPduMapOfPCPartitionConfig()
#define CanTp_GetSizeOfRxSduCfg(partitionIndex)                                                     CanTp_GetSizeOfRxSduCfgOfPCPartitionConfig(partitionIndex)
#define CanTp_GetSizeOfRxSduSnv2Hdl()                                                               CanTp_GetSizeOfRxSduSnv2HdlOfPCPartitionConfig()
#define CanTp_GetSizeOfRxState(partitionIndex)                                                      CanTp_GetSizeOfRxStateOfPCPartitionConfig(partitionIndex)
#define CanTp_GetSizeOfTxPdu2RxSduInd(partitionIndex)                                               CanTp_GetSizeOfTxPdu2RxSduIndOfPCPartitionConfig(partitionIndex)
#define CanTp_GetSizeOfTxPdu2TxSduInd(partitionIndex)                                               CanTp_GetSizeOfTxPdu2TxSduIndOfPCPartitionConfig(partitionIndex)
#define CanTp_GetSizeOfTxPduMap()                                                                   CanTp_GetSizeOfTxPduMapOfPCPartitionConfig()
#define CanTp_GetSizeOfTxSduCfg(partitionIndex)                                                     CanTp_GetSizeOfTxSduCfgOfPCPartitionConfig(partitionIndex)
#define CanTp_GetSizeOfTxSduSnv2Hdl()                                                               CanTp_GetSizeOfTxSduSnv2HdlOfPCPartitionConfig()
#define CanTp_GetSizeOfTxSemaphores(partitionIndex)                                                 CanTp_GetSizeOfTxSemaphoresOfPCPartitionConfig(partitionIndex)
#define CanTp_GetSizeOfTxState(partitionIndex)                                                      CanTp_GetSizeOfTxStateOfPCPartitionConfig(partitionIndex)
#define CanTp_GetMaskOfTxPduMap(Index)                                                              0xFFFFFFFFu
#define CanTp_GetTxPdu2RxSduPartitionIdxOfTxPduMap(Index)                                           0u  /**< the partition index of the 0:n relation pointing to one of CanTp_TxPdu2RxSduInd */
#define CanTp_IsTxPdu2RxSduUsedOfTxPduMap(Index)                                                    (((TRUE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to one of CanTp_TxPdu2RxSduInd */
#define CanTp_GetTxPdu2TxSduPartitionIdxOfTxPduMap(Index)                                           0u  /**< the partition index of the 0:n relation pointing to one of CanTp_TxPdu2TxSduInd */
#define CanTp_IsTxPdu2TxSduUsedOfTxPduMap(Index)                                                    (((TRUE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to one of CanTp_TxPdu2TxSduInd */
#define CanTp_GetChannelModeOfTxSduCfg(Index, partitionIndex)                                       CANTP_FULL_DUPLEX_CHANNELMODEOFTXSDUCFG
#define CanTp_GetNAsOfTxSduCfg(Index, partitionIndex)                                               21u
#define CanTp_GetNBsOfTxSduCfg(Index, partitionIndex)                                               101u
#define CanTp_GetNCsOfTxSduCfg(Index, partitionIndex)                                               41u
#define CanTp_GetRxFcAddressOfTxSduCfg(Index, partitionIndex)                                       255u
#define CanTp_IsRxPduMapUsedOfTxSduCfg(Index, partitionIndex)                                       (((TRUE)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to CanTp_RxPduMap */
#define CanTp_IsRxSduCfgUsedOfTxSduCfg(Index, partitionIndex)                                       (((TRUE)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to CanTp_RxSduCfg */
#define CanTp_GetSduMetadataLengthOfTxSduCfg(Index, partitionIndex)                                 0u
#define CanTp_IsTransmitCancellationOfTxSduCfg(Index, partitionIndex)                               (((FALSE)) != FALSE)
#define CanTp_GetTxAddressOfTxSduCfg(Index, partitionIndex)                                         255u
#define CanTp_GetTxAddressingFormatOfTxSduCfg(Index, partitionIndex)                                CANTP_NORMAL_ADDRESSING_TXADDRESSINGFORMATOFTXSDUCFG
#define CanTp_IsTxPaddingActivationOfTxSduCfg(Index, partitionIndex)                                (((TRUE)) != FALSE)
#define CanTp_IsTxPduMapUsedOfTxSduCfg(Index, partitionIndex)                                       (((TRUE)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to CanTp_TxPduMap */
#define CanTp_GetTxTaTypeOfTxSduCfg(Index, partitionIndex)                                          CANTP_PHYSICAL_TXTATYPEOFTXSDUCFG
#define CanTp_GetTxNSduHdlPartitionIdxOfTxSduSnv2Hdl(Index)                                         0u  /**< the partition index of the 0:1 relation pointing to CanTp_TxSduCfg */
#define CanTp_IsTxNSduHdlUsedOfTxSduSnv2Hdl(Index)                                                  (((TRUE)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to CanTp_TxSduCfg */
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCSetDataMacros  CanTp Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define CanTp_SetCalcBS(Index, Value, partitionIndex)                                               CanTp_GetCalcBSOfPCPartitionConfig(partitionIndex)[(Index)] = (Value)
#define CanTp_SetRxState(Index, Value, partitionIndex)                                              CanTp_GetRxStateOfPCPartitionConfig(partitionIndex)[(Index)] = (Value)
#define CanTp_SetTxSemaphores(Index, Value, partitionIndex)                                         CanTp_GetTxSemaphoresOfPCPartitionConfig(partitionIndex)[(Index)] = (Value)
#define CanTp_SetTxState(Index, Value, partitionIndex)                                              CanTp_GetTxStateOfPCPartitionConfig(partitionIndex)[(Index)] = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCGetAddressOfDataMacros  CanTp Get Address Of Data Macros (PRE_COMPILE)
  \brief  These macros can be used to get the data by the address operator.
  \{
*/ 
#define CanTp_GetAddrCalcBS(Index, partitionIndex)                                                  (&CanTp_GetCalcBS(((Index)), (partitionIndex)))
#define CanTp_GetAddrRxState(Index, partitionIndex)                                                 (&CanTp_GetRxState(((Index)), (partitionIndex)))
#define CanTp_GetAddrTxSemaphores(Index, partitionIndex)                                            (&CanTp_GetTxSemaphores(((Index)), (partitionIndex)))
#define CanTp_GetAddrTxState(Index, partitionIndex)                                                 (&CanTp_GetTxState(((Index)), (partitionIndex)))
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCHasMacros  CanTp Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define CanTp_HasCalcBS(partitionIndex)                                                             (TRUE != FALSE)
#define CanTp_HasCompatibilityVersion(partitionIndex)                                               (TRUE != FALSE)
#define CanTp_HasPartitionIdentifiers()                                                             (TRUE != FALSE)
#define CanTp_HasPCPartitionConfigIdxOfPartitionIdentifiers()                                       (TRUE != FALSE)
#define CanTp_HasPartitionSNVOfPartitionIdentifiers()                                               (TRUE != FALSE)
#define CanTp_HasRxPdu2RxSduInd(partitionIndex)                                                     (TRUE != FALSE)
#define CanTp_HasRxPdu2TxSduInd(partitionIndex)                                                     (TRUE != FALSE)
#define CanTp_HasRxPduMap()                                                                         (TRUE != FALSE)
#define CanTp_HasAddressingFormatOfRxPduMap()                                                       (TRUE != FALSE)
#define CanTp_HasGenericConnectionOfRxPduMap()                                                      (TRUE != FALSE)
#define CanTp_HasPduMetadataOfRxPduMap()                                                            (TRUE != FALSE)
#define CanTp_HasRxPdu2RxSduEndIdxOfRxPduMap()                                                      (TRUE != FALSE)
#define CanTp_HasRxPdu2RxSduPartitionIdxOfRxPduMap()                                                (TRUE != FALSE)
#define CanTp_HasRxPdu2RxSduStartIdxOfRxPduMap()                                                    (TRUE != FALSE)
#define CanTp_HasRxPdu2RxSduUsedOfRxPduMap()                                                        (TRUE != FALSE)
#define CanTp_HasRxPdu2TxSduEndIdxOfRxPduMap()                                                      (TRUE != FALSE)
#define CanTp_HasRxPdu2TxSduPartitionIdxOfRxPduMap()                                                (TRUE != FALSE)
#define CanTp_HasRxPdu2TxSduStartIdxOfRxPduMap()                                                    (TRUE != FALSE)
#define CanTp_HasRxPdu2TxSduUsedOfRxPduMap()                                                        (TRUE != FALSE)
#define CanTp_HasRxSduCfg(partitionIndex)                                                           (TRUE != FALSE)
#define CanTp_HasBlockSizeOfRxSduCfg(partitionIndex)                                                (TRUE != FALSE)
#define CanTp_HasCanTypeOfRxSduCfg(partitionIndex)                                                  (TRUE != FALSE)
#define CanTp_HasChannelModeOfRxSduCfg(partitionIndex)                                              (TRUE != FALSE)
#define CanTp_HasGenericConnectionOfRxSduCfg(partitionIndex)                                        (TRUE != FALSE)
#define CanTp_HasLoLayerTxFcPduIdOfRxSduCfg(partitionIndex)                                         (TRUE != FALSE)
#define CanTp_HasNArOfRxSduCfg(partitionIndex)                                                      (TRUE != FALSE)
#define CanTp_HasNBrOfRxSduCfg(partitionIndex)                                                      (TRUE != FALSE)
#define CanTp_HasNCrOfRxSduCfg(partitionIndex)                                                      (TRUE != FALSE)
#define CanTp_HasPduRRxSduIdOfRxSduCfg(partitionIndex)                                              (TRUE != FALSE)
#define CanTp_HasRxAddressOfRxSduCfg(partitionIndex)                                                (TRUE != FALSE)
#define CanTp_HasRxAddressingFormatOfRxSduCfg(partitionIndex)                                       (TRUE != FALSE)
#define CanTp_HasRxMaxPayloadLengthOfRxSduCfg(partitionIndex)                                       (TRUE != FALSE)
#define CanTp_HasRxPaddingActivationOfRxSduCfg(partitionIndex)                                      (TRUE != FALSE)
#define CanTp_HasRxPduIdOfRxSduCfg(partitionIndex)                                                  (TRUE != FALSE)
#define CanTp_HasRxPduMapIdxOfRxSduCfg(partitionIndex)                                              (TRUE != FALSE)
#define CanTp_HasRxPduMapUsedOfRxSduCfg(partitionIndex)                                             (TRUE != FALSE)
#define CanTp_HasRxTaTypeOfRxSduCfg(partitionIndex)                                                 (TRUE != FALSE)
#define CanTp_HasRxWftMaxOfRxSduCfg(partitionIndex)                                                 (TRUE != FALSE)
#define CanTp_HasSTminOfRxSduCfg(partitionIndex)                                                    (TRUE != FALSE)
#define CanTp_HasSduMetadataLengthOfRxSduCfg(partitionIndex)                                        (TRUE != FALSE)
#define CanTp_HasTxFcAddressOfRxSduCfg(partitionIndex)                                              (TRUE != FALSE)
#define CanTp_HasTxFcPduConfirmationPduIdOfRxSduCfg(partitionIndex)                                 (TRUE != FALSE)
#define CanTp_HasTxPduMapIdxOfRxSduCfg(partitionIndex)                                              (TRUE != FALSE)
#define CanTp_HasTxPduMapUsedOfRxSduCfg(partitionIndex)                                             (TRUE != FALSE)
#define CanTp_HasTxSduCfgIdxOfRxSduCfg(partitionIndex)                                              (TRUE != FALSE)
#define CanTp_HasTxSduCfgUsedOfRxSduCfg(partitionIndex)                                             (TRUE != FALSE)
#define CanTp_HasRxSduSnv2Hdl()                                                                     (TRUE != FALSE)
#define CanTp_HasRxNSduHdlIdxOfRxSduSnv2Hdl()                                                       (TRUE != FALSE)
#define CanTp_HasRxNSduHdlPartitionIdxOfRxSduSnv2Hdl()                                              (TRUE != FALSE)
#define CanTp_HasRxNSduHdlUsedOfRxSduSnv2Hdl()                                                      (TRUE != FALSE)
#define CanTp_HasRxState(partitionIndex)                                                            (TRUE != FALSE)
#define CanTp_HasSizeOfCalcBS(partitionIndex)                                                       (TRUE != FALSE)
#define CanTp_HasSizeOfPartitionIdentifiers()                                                       (TRUE != FALSE)
#define CanTp_HasSizeOfRxPdu2RxSduInd(partitionIndex)                                               (TRUE != FALSE)
#define CanTp_HasSizeOfRxPdu2TxSduInd(partitionIndex)                                               (TRUE != FALSE)
#define CanTp_HasSizeOfRxPduMap()                                                                   (TRUE != FALSE)
#define CanTp_HasSizeOfRxSduCfg(partitionIndex)                                                     (TRUE != FALSE)
#define CanTp_HasSizeOfRxSduSnv2Hdl()                                                               (TRUE != FALSE)
#define CanTp_HasSizeOfRxState(partitionIndex)                                                      (TRUE != FALSE)
#define CanTp_HasSizeOfTxPdu2RxSduInd(partitionIndex)                                               (TRUE != FALSE)
#define CanTp_HasSizeOfTxPdu2TxSduInd(partitionIndex)                                               (TRUE != FALSE)
#define CanTp_HasSizeOfTxPduMap()                                                                   (TRUE != FALSE)
#define CanTp_HasSizeOfTxSduCfg(partitionIndex)                                                     (TRUE != FALSE)
#define CanTp_HasSizeOfTxSduSnv2Hdl()                                                               (TRUE != FALSE)
#define CanTp_HasSizeOfTxSemaphores(partitionIndex)                                                 (TRUE != FALSE)
#define CanTp_HasSizeOfTxState(partitionIndex)                                                      (TRUE != FALSE)
#define CanTp_HasTxPdu2RxSduInd(partitionIndex)                                                     (TRUE != FALSE)
#define CanTp_HasTxPdu2TxSduInd(partitionIndex)                                                     (TRUE != FALSE)
#define CanTp_HasTxPduMap()                                                                         (TRUE != FALSE)
#define CanTp_HasCanIdOfTxPduMap()                                                                  (TRUE != FALSE)
#define CanTp_HasMaskOfTxPduMap()                                                                   (TRUE != FALSE)
#define CanTp_HasTxPdu2RxSduEndIdxOfTxPduMap()                                                      (TRUE != FALSE)
#define CanTp_HasTxPdu2RxSduPartitionIdxOfTxPduMap()                                                (TRUE != FALSE)
#define CanTp_HasTxPdu2RxSduStartIdxOfTxPduMap()                                                    (TRUE != FALSE)
#define CanTp_HasTxPdu2RxSduUsedOfTxPduMap()                                                        (TRUE != FALSE)
#define CanTp_HasTxPdu2TxSduEndIdxOfTxPduMap()                                                      (TRUE != FALSE)
#define CanTp_HasTxPdu2TxSduPartitionIdxOfTxPduMap()                                                (TRUE != FALSE)
#define CanTp_HasTxPdu2TxSduStartIdxOfTxPduMap()                                                    (TRUE != FALSE)
#define CanTp_HasTxPdu2TxSduUsedOfTxPduMap()                                                        (TRUE != FALSE)
#define CanTp_HasTxSduCfg(partitionIndex)                                                           (TRUE != FALSE)
#define CanTp_HasCanTypeOfTxSduCfg(partitionIndex)                                                  (TRUE != FALSE)
#define CanTp_HasChannelModeOfTxSduCfg(partitionIndex)                                              (TRUE != FALSE)
#define CanTp_HasLoLayerTxPduIdOfTxSduCfg(partitionIndex)                                           (TRUE != FALSE)
#define CanTp_HasNAsOfTxSduCfg(partitionIndex)                                                      (TRUE != FALSE)
#define CanTp_HasNBsOfTxSduCfg(partitionIndex)                                                      (TRUE != FALSE)
#define CanTp_HasNCsOfTxSduCfg(partitionIndex)                                                      (TRUE != FALSE)
#define CanTp_HasPduRTxSduIdOfTxSduCfg(partitionIndex)                                              (TRUE != FALSE)
#define CanTp_HasRxFcAddressOfTxSduCfg(partitionIndex)                                              (TRUE != FALSE)
#define CanTp_HasRxFcPduIdOfTxSduCfg(partitionIndex)                                                (TRUE != FALSE)
#define CanTp_HasRxPduMapIdxOfTxSduCfg(partitionIndex)                                              (TRUE != FALSE)
#define CanTp_HasRxPduMapUsedOfTxSduCfg(partitionIndex)                                             (TRUE != FALSE)
#define CanTp_HasRxSduCfgIdxOfTxSduCfg(partitionIndex)                                              (TRUE != FALSE)
#define CanTp_HasRxSduCfgUsedOfTxSduCfg(partitionIndex)                                             (TRUE != FALSE)
#define CanTp_HasSduMetadataLengthOfTxSduCfg(partitionIndex)                                        (TRUE != FALSE)
#define CanTp_HasTransmitCancellationOfTxSduCfg(partitionIndex)                                     (TRUE != FALSE)
#define CanTp_HasTxAddressOfTxSduCfg(partitionIndex)                                                (TRUE != FALSE)
#define CanTp_HasTxAddressingFormatOfTxSduCfg(partitionIndex)                                       (TRUE != FALSE)
#define CanTp_HasTxMaxPayloadLengthOfTxSduCfg(partitionIndex)                                       (TRUE != FALSE)
#define CanTp_HasTxPaddingActivationOfTxSduCfg(partitionIndex)                                      (TRUE != FALSE)
#define CanTp_HasTxPduConfirmationPduIdOfTxSduCfg(partitionIndex)                                   (TRUE != FALSE)
#define CanTp_HasTxPduMapIdxOfTxSduCfg(partitionIndex)                                              (TRUE != FALSE)
#define CanTp_HasTxPduMapUsedOfTxSduCfg(partitionIndex)                                             (TRUE != FALSE)
#define CanTp_HasTxTaTypeOfTxSduCfg(partitionIndex)                                                 (TRUE != FALSE)
#define CanTp_HasTxSduSnv2Hdl()                                                                     (TRUE != FALSE)
#define CanTp_HasTxNSduHdlIdxOfTxSduSnv2Hdl()                                                       (TRUE != FALSE)
#define CanTp_HasTxNSduHdlPartitionIdxOfTxSduSnv2Hdl()                                              (TRUE != FALSE)
#define CanTp_HasTxNSduHdlUsedOfTxSduSnv2Hdl()                                                      (TRUE != FALSE)
#define CanTp_HasTxSemaphores(partitionIndex)                                                       (TRUE != FALSE)
#define CanTp_HasTxState(partitionIndex)                                                            (TRUE != FALSE)
#define CanTp_HasPCConfig()                                                                         (TRUE != FALSE)
#define CanTp_HasPCPartitionConfigOfPCConfig()                                                      (TRUE != FALSE)
#define CanTp_HasPartitionIdentifiersOfPCConfig()                                                   (TRUE != FALSE)
#define CanTp_HasSizeOfPartitionIdentifiersOfPCConfig()                                             (TRUE != FALSE)
#define CanTp_HasPCPartitionConfig()                                                                (TRUE != FALSE)
#define CanTp_HasCalcBSOfPCPartitionConfig(partitionIndex)                                          (TRUE != FALSE)
#define CanTp_HasCompatibilityVersionOfPCPartitionConfig(partitionIndex)                            (TRUE != FALSE)
#define CanTp_HasRxPdu2RxSduIndOfPCPartitionConfig(partitionIndex)                                  (TRUE != FALSE)
#define CanTp_HasRxPdu2TxSduIndOfPCPartitionConfig(partitionIndex)                                  (TRUE != FALSE)
#define CanTp_HasRxPduMapOfPCPartitionConfig()                                                      (TRUE != FALSE)
#define CanTp_HasRxSduCfgOfPCPartitionConfig(partitionIndex)                                        (TRUE != FALSE)
#define CanTp_HasRxSduSnv2HdlOfPCPartitionConfig()                                                  (TRUE != FALSE)
#define CanTp_HasRxStateOfPCPartitionConfig(partitionIndex)                                         (TRUE != FALSE)
#define CanTp_HasSizeOfCalcBSOfPCPartitionConfig(partitionIndex)                                    (TRUE != FALSE)
#define CanTp_HasSizeOfRxPdu2RxSduIndOfPCPartitionConfig(partitionIndex)                            (TRUE != FALSE)
#define CanTp_HasSizeOfRxPdu2TxSduIndOfPCPartitionConfig(partitionIndex)                            (TRUE != FALSE)
#define CanTp_HasSizeOfRxPduMapOfPCPartitionConfig()                                                (TRUE != FALSE)
#define CanTp_HasSizeOfRxSduCfgOfPCPartitionConfig(partitionIndex)                                  (TRUE != FALSE)
#define CanTp_HasSizeOfRxSduSnv2HdlOfPCPartitionConfig()                                            (TRUE != FALSE)
#define CanTp_HasSizeOfRxStateOfPCPartitionConfig(partitionIndex)                                   (TRUE != FALSE)
#define CanTp_HasSizeOfTxPdu2RxSduIndOfPCPartitionConfig(partitionIndex)                            (TRUE != FALSE)
#define CanTp_HasSizeOfTxPdu2TxSduIndOfPCPartitionConfig(partitionIndex)                            (TRUE != FALSE)
#define CanTp_HasSizeOfTxPduMapOfPCPartitionConfig()                                                (TRUE != FALSE)
#define CanTp_HasSizeOfTxSduCfgOfPCPartitionConfig(partitionIndex)                                  (TRUE != FALSE)
#define CanTp_HasSizeOfTxSduSnv2HdlOfPCPartitionConfig()                                            (TRUE != FALSE)
#define CanTp_HasSizeOfTxSemaphoresOfPCPartitionConfig(partitionIndex)                              (TRUE != FALSE)
#define CanTp_HasSizeOfTxStateOfPCPartitionConfig(partitionIndex)                                   (TRUE != FALSE)
#define CanTp_HasTxPdu2RxSduIndOfPCPartitionConfig(partitionIndex)                                  (TRUE != FALSE)
#define CanTp_HasTxPdu2TxSduIndOfPCPartitionConfig(partitionIndex)                                  (TRUE != FALSE)
#define CanTp_HasTxPduMapOfPCPartitionConfig()                                                      (TRUE != FALSE)
#define CanTp_HasTxSduCfgOfPCPartitionConfig(partitionIndex)                                        (TRUE != FALSE)
#define CanTp_HasTxSduSnv2HdlOfPCPartitionConfig()                                                  (TRUE != FALSE)
#define CanTp_HasTxSemaphoresOfPCPartitionConfig(partitionIndex)                                    (TRUE != FALSE)
#define CanTp_HasTxStateOfPCPartitionConfig(partitionIndex)                                         (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCIncrementDataMacros  CanTp Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define CanTp_IncCalcBS(Index, partitionIndex)                                                      CanTp_GetCalcBS(((Index)), (partitionIndex))++
#define CanTp_IncRxState(Index, partitionIndex)                                                     CanTp_GetRxState(((Index)), (partitionIndex))++
#define CanTp_IncTxSemaphores(Index, partitionIndex)                                                CanTp_GetTxSemaphores(((Index)), (partitionIndex))++
#define CanTp_IncTxState(Index, partitionIndex)                                                     CanTp_GetTxState(((Index)), (partitionIndex))++
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCDecrementDataMacros  CanTp Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define CanTp_DecCalcBS(Index, partitionIndex)                                                      CanTp_GetCalcBS(((Index)), (partitionIndex))--
#define CanTp_DecRxState(Index, partitionIndex)                                                     CanTp_GetRxState(((Index)), (partitionIndex))--
#define CanTp_DecTxSemaphores(Index, partitionIndex)                                                CanTp_GetTxSemaphores(((Index)), (partitionIndex))--
#define CanTp_DecTxState(Index, partitionIndex)                                                     CanTp_GetTxState(((Index)), (partitionIndex))--
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCAddDataMacros  CanTp Add Data Macros (PRE_COMPILE)
  \brief  These macros can be used to add VAR data with numerical nature.
  \{
*/ 
#define CanTp_AddCalcBS(Index, Value, partitionIndex)                                               CanTp_SetCalcBS(Index, (CanTp_GetCalcBS(((Index)), (partitionIndex)) + Value), partitionIndex)
#define CanTp_AddRxState(Index, Value, partitionIndex)                                              CanTp_SetRxState(Index, (CanTp_GetRxState(((Index)), (partitionIndex)) + Value), partitionIndex)
#define CanTp_AddTxSemaphores(Index, Value, partitionIndex)                                         CanTp_SetTxSemaphores(Index, (CanTp_GetTxSemaphores(((Index)), (partitionIndex)) + Value), partitionIndex)
#define CanTp_AddTxState(Index, Value, partitionIndex)                                              CanTp_SetTxState(Index, (CanTp_GetTxState(((Index)), (partitionIndex)) + Value), partitionIndex)
/** 
  \}
*/ 

/** 
  \defgroup  CanTpPCSubstractDataMacros  CanTp Substract Data Macros (PRE_COMPILE)
  \brief  These macros can be used to substract VAR data with numerical nature.
  \{
*/ 
#define CanTp_SubCalcBS(Index, Value, partitionIndex)                                               CanTp_SetCalcBS(Index, (CanTp_GetCalcBS(((Index)), (partitionIndex)) - Value), partitionIndex)
#define CanTp_SubRxState(Index, Value, partitionIndex)                                              CanTp_SetRxState(Index, (CanTp_GetRxState(((Index)), (partitionIndex)) - Value), partitionIndex)
#define CanTp_SubTxSemaphores(Index, Value, partitionIndex)                                         CanTp_SetTxSemaphores(Index, (CanTp_GetTxSemaphores(((Index)), (partitionIndex)) - Value), partitionIndex)
#define CanTp_SubTxState(Index, Value, partitionIndex)                                              CanTp_SetTxState(Index, (CanTp_GetTxState(((Index)), (partitionIndex)) - Value), partitionIndex)
/** 
  \}
*/ 

  /* PRQA L:Macros_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanTpLTDataSwitches  CanTp Data Switches  (LINK)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CANTP_LTCONFIG                                                                              STD_OFF  /**< Deactivateable: 'CanTp_LTConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CANTP_LTPARTITIONCONFIGOFLTCONFIG                                                           STD_OFF  /**< Deactivateable: 'CanTp_LTConfig.LTPartitionConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CANTP_LTPARTITIONCONFIG                                                                     STD_OFF  /**< Deactivateable: 'CanTp_LTPartitionConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
/** 
  \}
*/ 


/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 Macros_3453 */  /* MD_MSR_FctLikeMacro */
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
  /* PRQA L:Macros_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanTpPBDataSwitches  CanTp Data Switches  (POST_BUILD)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CANTP_PBCONFIG                                                                              STD_OFF  /**< Deactivateable: 'CanTp_PBConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CANTP_LTCONFIGIDXOFPBCONFIG                                                                 STD_OFF  /**< Deactivateable: 'CanTp_PBConfig.LTConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CANTP_PBPARTITIONCONFIGOFPBCONFIG                                                           STD_OFF  /**< Deactivateable: 'CanTp_PBConfig.PBPartitionConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CANTP_PCCONFIGIDXOFPBCONFIG                                                                 STD_OFF  /**< Deactivateable: 'CanTp_PBConfig.PCConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CANTP_PBPARTITIONCONFIG                                                                     STD_OFF  /**< Deactivateable: 'CanTp_PBPartitionConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
/** 
  \}
*/ 


/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 Macros_3453 */  /* MD_MSR_FctLikeMacro */
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
  /* PRQA L:Macros_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/


#endif /* CANTP_CFG_H */
