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
 *              File: FblCw_Lcfg.h
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


#if !defined (FBLCW_LCFG_H)
# define FBLCW_LCFG_H

/**********************************************************************************************************************
 * MISRA JUSTIFICATION
 *********************************************************************************************************************/
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0779 EOF */ /* MD_CSL_0779 */

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
# include "ComStack_Types.h"
/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  FblCwPCDataSwitches  FblCw Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define FBLCW_BUSNMRXINDCYCLEMS                                                                     STD_ON
#define FBLCW_BUSNMRXINDDATA                                                                        STD_OFF  /**< Deactivateable: 'FblCw_BusNmRxIndData' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define FBLCW_BUSNMRXINDFCTPTROFBUSNMRXINDDATA                                                      STD_OFF  /**< Deactivateable: 'FblCw_BusNmRxIndData.BusNmRxIndFctPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define FBLCW_PDUINFOOFBUSNMRXINDDATA                                                               STD_OFF  /**< Deactivateable: 'FblCw_BusNmRxIndData.PduInfo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define FBLCW_SDULENGTHOFBUSNMRXINDDATA                                                             STD_OFF  /**< Deactivateable: 'FblCw_BusNmRxIndData.SduLength' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define FBLCW_CANIFCTRLINFO                                                                         STD_ON
#define FBLCW_COMMFRCHANNELINFO                                                                     STD_OFF  /**< Deactivateable: 'FblCw_ComMFrChannelInfo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define FBLCW_CWDCMCOMMCHANNELMAPPING                                                               STD_OFF  /**< Deactivateable: 'FblCw_CwDcmComMChannelMapping' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define FBLCW_CWNONDCMCOMMCHANNELS                                                                  STD_OFF  /**< Deactivateable: 'FblCw_CwNonDcmComMChannels' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define FBLCW_DCMDSLBROADCASTGROUPINFO                                                              STD_OFF  /**< Deactivateable: 'FblCw_DcmDslBroadcastGroupInfo' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define FBLCW_SNVOFDCMDSLBROADCASTGROUPINFO                                                         STD_OFF  /**< Deactivateable: 'FblCw_DcmDslBroadcastGroupInfo.Snv' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define FBLCW_DCMDSLBROADCASTGROUPINFOIND                                                           STD_OFF  /**< Deactivateable: 'FblCw_DcmDslBroadcastGroupInfoInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define FBLCW_DCMDSLCONNECTIONGROUPINFO                                                             STD_OFF  /**< Deactivateable: 'FblCw_DcmDslConnectionGroupInfo' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define FBLCW_SNVOFDCMDSLCONNECTIONGROUPINFO                                                        STD_OFF  /**< Deactivateable: 'FblCw_DcmDslConnectionGroupInfo.Snv' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define FBLCW_DCMDSLCONNECTIONGROUPINFOIND                                                          STD_OFF  /**< Deactivateable: 'FblCw_DcmDslConnectionGroupInfoInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define FBLCW_DCMDSLCONNECTIONINFO                                                                  STD_ON
#define FBLCW_BUSTYPEOFDCMDSLCONNECTIONINFO                                                         STD_ON
#define FBLCW_CHANNELREADYINDICATIONOFDCMDSLCONNECTIONINFO                                          STD_ON
#define FBLCW_CONTROLLEROFDCMDSLCONNECTIONINFO                                                      STD_ON
#define FBLCW_DCMDSLBROADCASTGROUPINFOIDXOFDCMDSLCONNECTIONINFO                                     STD_OFF  /**< Deactivateable: 'FblCw_DcmDslConnectionInfo.DcmDslBroadcastGroupInfoIdx' Reason: 'the optional indirection is deactivated because DcmDslBroadcastGroupInfoUsedOfDcmDslConnectionInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define FBLCW_DCMDSLBROADCASTGROUPINFOINDENDIDXOFDCMDSLCONNECTIONINFO                               STD_OFF  /**< Deactivateable: 'FblCw_DcmDslConnectionInfo.DcmDslBroadcastGroupInfoIndEndIdx' Reason: 'the optional indirection is deactivated because DcmDslBroadcastGroupInfoIndUsedOfDcmDslConnectionInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define FBLCW_DCMDSLBROADCASTGROUPINFOINDSTARTIDXOFDCMDSLCONNECTIONINFO                             STD_OFF  /**< Deactivateable: 'FblCw_DcmDslConnectionInfo.DcmDslBroadcastGroupInfoIndStartIdx' Reason: 'the optional indirection is deactivated because DcmDslBroadcastGroupInfoIndUsedOfDcmDslConnectionInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define FBLCW_DCMDSLBROADCASTGROUPINFOINDUSEDOFDCMDSLCONNECTIONINFO                                 STD_OFF  /**< Deactivateable: 'FblCw_DcmDslConnectionInfo.DcmDslBroadcastGroupInfoIndUsed' Reason: 'the optional indirection is deactivated because DcmDslBroadcastGroupInfoIndUsedOfDcmDslConnectionInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define FBLCW_DCMDSLBROADCASTGROUPINFOUSEDOFDCMDSLCONNECTIONINFO                                    STD_OFF  /**< Deactivateable: 'FblCw_DcmDslConnectionInfo.DcmDslBroadcastGroupInfoUsed' Reason: 'the optional indirection is deactivated because DcmDslBroadcastGroupInfoUsedOfDcmDslConnectionInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define FBLCW_DCMDSLCONNECTIONGROUPINFOINDENDIDXOFDCMDSLCONNECTIONINFO                              STD_OFF  /**< Deactivateable: 'FblCw_DcmDslConnectionInfo.DcmDslConnectionGroupInfoIndEndIdx' Reason: 'the optional indirection is deactivated because DcmDslConnectionGroupInfoIndUsedOfDcmDslConnectionInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define FBLCW_DCMDSLCONNECTIONGROUPINFOINDSTARTIDXOFDCMDSLCONNECTIONINFO                            STD_OFF  /**< Deactivateable: 'FblCw_DcmDslConnectionInfo.DcmDslConnectionGroupInfoIndStartIdx' Reason: 'the optional indirection is deactivated because DcmDslConnectionGroupInfoIndUsedOfDcmDslConnectionInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define FBLCW_DCMDSLCONNECTIONGROUPINFOINDUSEDOFDCMDSLCONNECTIONINFO                                STD_OFF  /**< Deactivateable: 'FblCw_DcmDslConnectionInfo.DcmDslConnectionGroupInfoIndUsed' Reason: 'the optional indirection is deactivated because DcmDslConnectionGroupInfoIndUsedOfDcmDslConnectionInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define FBLCW_PARAMETERINFOIDXOFDCMDSLCONNECTIONINFO                                                STD_OFF  /**< Deactivateable: 'FblCw_DcmDslConnectionInfo.ParameterInfoIdx' Reason: 'All indirection targets are deactivated in all variants.' */
#define FBLCW_PARAMETERINFOUSEDOFDCMDSLCONNECTIONINFO                                               STD_OFF  /**< Deactivateable: 'FblCw_DcmDslConnectionInfo.ParameterInfoUsed' Reason: 'All indirection targets are deactivated in all variants.' */
#define FBLCW_PAYLOADLIMITOFDCMDSLCONNECTIONINFO                                                    STD_ON
#define FBLCW_PROGSESSIONRESPONSEHANDLINGOFDCMDSLCONNECTIONINFO                                     STD_ON
#define FBLCW_RXTESTERSOURCEADDRESSOFDCMDSLCONNECTIONINFO                                           STD_ON
#define FBLCW_TXREMOTEPDUIDOFDCMDSLCONNECTIONINFO                                                   STD_ON
#define FBLCW_DCMDSLPROTOCOLRXINFO                                                                  STD_ON
#define FBLCW_ADDRTYPEOFDCMDSLPROTOCOLRXINFO                                                        STD_ON
#define FBLCW_DCMDSLCONNECTIONINFOIDXOFDCMDSLPROTOCOLRXINFO                                         STD_ON
#define FBLCW_INVALIDHNDOFDCMDSLPROTOCOLRXINFO                                                      STD_OFF  /**< Deactivateable: 'FblCw_DcmDslProtocolRxInfo.InvalidHnd' Reason: 'the value of FblCw_InvalidHndOfDcmDslProtocolRxInfo is always 'false' due to this, the array is deactivated.' */
#define FBLCW_DCMDSLPROTOCOLTXINFO                                                                  STD_ON
#define FBLCW_DCMDSLCONNECTIONINFOIDXOFDCMDSLPROTOCOLTXINFO                                         STD_ON
#define FBLCW_INVALIDHNDOFDCMDSLPROTOCOLTXINFO                                                      STD_OFF  /**< Deactivateable: 'FblCw_DcmDslProtocolTxInfo.InvalidHnd' Reason: 'the value of FblCw_InvalidHndOfDcmDslProtocolTxInfo is always 'false' due to this, the array is deactivated.' */
#define FBLCW_FINALMAGICNUMBER                                                                      STD_OFF  /**< Deactivateable: 'FblCw_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define FBLCW_INITDATAHASHCODE                                                                      STD_OFF  /**< Deactivateable: 'FblCw_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define FBLCW_INITIALBC                                                                             STD_OFF  /**< Deactivateable: 'FblCw_InitialBC' Reason: '/ActiveEcuC/PduR/Dcm[0:PduRChangeParameterRequestApi] is configured to 'false'' */
#define FBLCW_INITIALBS                                                                             STD_OFF  /**< Deactivateable: 'FblCw_InitialBS' Reason: '/ActiveEcuC/PduR/Dcm[0:PduRChangeParameterRequestApi] is configured to 'false'' */
#define FBLCW_INITIALSTMIN                                                                          STD_OFF  /**< Deactivateable: 'FblCw_InitialSTmin' Reason: '/ActiveEcuC/PduR/Dcm[0:PduRChangeParameterRequestApi] is configured to 'false'' */
#define FBLCW_INITIALIZED                                                                           STD_ON
#define FBLCW_PARAMETERINFO                                                                         STD_OFF  /**< Deactivateable: 'FblCw_ParameterInfo' Reason: '/ActiveEcuC/PduR/Dcm[0:PduRChangeParameterRequestApi] is configured to 'false'' */
#define FBLCW_CANTPIDOFPARAMETERINFO                                                                STD_OFF  /**< Deactivateable: 'FblCw_ParameterInfo.CanTpId' Reason: '/ActiveEcuC/PduR/Dcm[0:PduRChangeParameterRequestApi] is configured to 'false'' */
#define FBLCW_PDURIDOFPARAMETERINFO                                                                 STD_OFF  /**< Deactivateable: 'FblCw_ParameterInfo.PduRId' Reason: '/ActiveEcuC/PduR/Dcm[0:PduRChangeParameterRequestApi] is configured to 'false'' */
#define FBLCW_SIZEOFBUSNMRXINDDATA                                                                  STD_OFF  /**< Deactivateable: 'FblCw_SizeOfBusNmRxIndData' Reason: 'Deactivateable: 'BusNmRxIndData' Reason: 'Deactivateable: 'FblCw_BusNmRxIndData' Reason: 'the struct is deactivated because all elements are deactivated.''' */
#define FBLCW_SIZEOFCANIFCTRLINFO                                                                   STD_ON
#define FBLCW_SIZEOFCOMMFRCHANNELINFO                                                               STD_OFF  /**< Deactivateable: 'FblCw_SizeOfComMFrChannelInfo' Reason: 'Deactivateable: 'ComMFrChannelInfo' Reason: 'Deactivateable: 'FblCw_ComMFrChannelInfo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE''' */
#define FBLCW_SIZEOFCWDCMCOMMCHANNELMAPPING                                                         STD_OFF  /**< Deactivateable: 'FblCw_SizeOfCwDcmComMChannelMapping' Reason: 'Deactivateable: 'CwDcmComMChannelMapping' Reason: 'Deactivateable: 'FblCw_CwDcmComMChannelMapping' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE''' */
#define FBLCW_SIZEOFCWNONDCMCOMMCHANNELS                                                            STD_OFF  /**< Deactivateable: 'FblCw_SizeOfCwNonDcmComMChannels' Reason: 'Deactivateable: 'CwNonDcmComMChannels' Reason: 'Deactivateable: 'FblCw_CwNonDcmComMChannels' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE''' */
#define FBLCW_SIZEOFDCMDSLBROADCASTGROUPINFO                                                        STD_OFF  /**< Deactivateable: 'FblCw_SizeOfDcmDslBroadcastGroupInfo' Reason: 'Deactivateable: 'DcmDslBroadcastGroupInfo' Reason: 'Deactivateable: 'FblCw_DcmDslBroadcastGroupInfo' Reason: 'the struct is deactivated because all elements are deactivated.''' */
#define FBLCW_SIZEOFDCMDSLBROADCASTGROUPINFOIND                                                     STD_OFF  /**< Deactivateable: 'FblCw_SizeOfDcmDslBroadcastGroupInfoInd' Reason: 'Deactivateable: 'DcmDslBroadcastGroupInfoInd' Reason: 'Deactivateable: 'FblCw_DcmDslBroadcastGroupInfoInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE''' */
#define FBLCW_SIZEOFDCMDSLCONNECTIONGROUPINFO                                                       STD_OFF  /**< Deactivateable: 'FblCw_SizeOfDcmDslConnectionGroupInfo' Reason: 'Deactivateable: 'DcmDslConnectionGroupInfo' Reason: 'Deactivateable: 'FblCw_DcmDslConnectionGroupInfo' Reason: 'the struct is deactivated because all elements are deactivated.''' */
#define FBLCW_SIZEOFDCMDSLCONNECTIONGROUPINFOIND                                                    STD_OFF  /**< Deactivateable: 'FblCw_SizeOfDcmDslConnectionGroupInfoInd' Reason: 'Deactivateable: 'DcmDslConnectionGroupInfoInd' Reason: 'Deactivateable: 'FblCw_DcmDslConnectionGroupInfoInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE''' */
#define FBLCW_SIZEOFDCMDSLCONNECTIONINFO                                                            STD_ON
#define FBLCW_SIZEOFDCMDSLPROTOCOLRXINFO                                                            STD_ON
#define FBLCW_SIZEOFDCMDSLPROTOCOLTXINFO                                                            STD_ON
#define FBLCW_SIZEOFINITIALBC                                                                       STD_OFF  /**< Deactivateable: 'FblCw_SizeOfInitialBC' Reason: 'Deactivateable: 'InitialBC' Reason: 'Deactivateable: 'FblCw_InitialBC' Reason: '/ActiveEcuC/PduR/Dcm[0:PduRChangeParameterRequestApi] is configured to 'false'''' */
#define FBLCW_SIZEOFINITIALBS                                                                       STD_OFF  /**< Deactivateable: 'FblCw_SizeOfInitialBS' Reason: 'Deactivateable: 'InitialBS' Reason: 'Deactivateable: 'FblCw_InitialBS' Reason: '/ActiveEcuC/PduR/Dcm[0:PduRChangeParameterRequestApi] is configured to 'false'''' */
#define FBLCW_SIZEOFINITIALSTMIN                                                                    STD_OFF  /**< Deactivateable: 'FblCw_SizeOfInitialSTmin' Reason: 'Deactivateable: 'InitialSTmin' Reason: 'Deactivateable: 'FblCw_InitialSTmin' Reason: '/ActiveEcuC/PduR/Dcm[0:PduRChangeParameterRequestApi] is configured to 'false'''' */
#define FBLCW_SIZEOFPARAMETERINFO                                                                   STD_OFF  /**< Deactivateable: 'FblCw_SizeOfParameterInfo' Reason: 'Deactivateable: 'ParameterInfo' Reason: 'Deactivateable: 'FblCw_ParameterInfo' Reason: '/ActiveEcuC/PduR/Dcm[0:PduRChangeParameterRequestApi] is configured to 'false'''' */
#define FBLCW_VARIANTIDX                                                                            STD_ON
#define FBLCW_PCCONFIG                                                                              STD_ON
#define FBLCW_BUSNMRXINDCYCLEMSOFPCCONFIG                                                           STD_ON
#define FBLCW_CANIFCTRLINFOOFPCCONFIG                                                               STD_ON
#define FBLCW_DCMDSLCONNECTIONINFOOFPCCONFIG                                                        STD_ON
#define FBLCW_DCMDSLPROTOCOLRXINFOOFPCCONFIG                                                        STD_ON
#define FBLCW_DCMDSLPROTOCOLTXINFOOFPCCONFIG                                                        STD_ON
#define FBLCW_FINALMAGICNUMBEROFPCCONFIG                                                            STD_OFF  /**< Deactivateable: 'FblCw_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define FBLCW_INITDATAHASHCODEOFPCCONFIG                                                            STD_OFF  /**< Deactivateable: 'FblCw_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define FBLCW_INITIALIZEDOFPCCONFIG                                                                 STD_ON
#define FBLCW_SIZEOFBUSNMRXINDDATAOFPCCONFIG                                                        STD_OFF  /**< Deactivateable: 'FblCw_PCConfig.SizeOfBusNmRxIndData' Reason: 'Deactivateable: 'BusNmRxIndData' Reason: 'Deactivateable: 'FblCw_BusNmRxIndData' Reason: 'the struct is deactivated because all elements are deactivated.''' */
#define FBLCW_SIZEOFCANIFCTRLINFOOFPCCONFIG                                                         STD_ON
#define FBLCW_SIZEOFCOMMFRCHANNELINFOOFPCCONFIG                                                     STD_OFF  /**< Deactivateable: 'FblCw_PCConfig.SizeOfComMFrChannelInfo' Reason: 'Deactivateable: 'ComMFrChannelInfo' Reason: 'Deactivateable: 'FblCw_ComMFrChannelInfo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE''' */
#define FBLCW_SIZEOFCWDCMCOMMCHANNELMAPPINGOFPCCONFIG                                               STD_OFF  /**< Deactivateable: 'FblCw_PCConfig.SizeOfCwDcmComMChannelMapping' Reason: 'Deactivateable: 'CwDcmComMChannelMapping' Reason: 'Deactivateable: 'FblCw_CwDcmComMChannelMapping' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE''' */
#define FBLCW_SIZEOFCWNONDCMCOMMCHANNELSOFPCCONFIG                                                  STD_OFF  /**< Deactivateable: 'FblCw_PCConfig.SizeOfCwNonDcmComMChannels' Reason: 'Deactivateable: 'CwNonDcmComMChannels' Reason: 'Deactivateable: 'FblCw_CwNonDcmComMChannels' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE''' */
#define FBLCW_SIZEOFDCMDSLBROADCASTGROUPINFOINDOFPCCONFIG                                           STD_OFF  /**< Deactivateable: 'FblCw_PCConfig.SizeOfDcmDslBroadcastGroupInfoInd' Reason: 'Deactivateable: 'DcmDslBroadcastGroupInfoInd' Reason: 'Deactivateable: 'FblCw_DcmDslBroadcastGroupInfoInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE''' */
#define FBLCW_SIZEOFDCMDSLBROADCASTGROUPINFOOFPCCONFIG                                              STD_OFF  /**< Deactivateable: 'FblCw_PCConfig.SizeOfDcmDslBroadcastGroupInfo' Reason: 'Deactivateable: 'DcmDslBroadcastGroupInfo' Reason: 'Deactivateable: 'FblCw_DcmDslBroadcastGroupInfo' Reason: 'the struct is deactivated because all elements are deactivated.''' */
#define FBLCW_SIZEOFDCMDSLCONNECTIONGROUPINFOINDOFPCCONFIG                                          STD_OFF  /**< Deactivateable: 'FblCw_PCConfig.SizeOfDcmDslConnectionGroupInfoInd' Reason: 'Deactivateable: 'DcmDslConnectionGroupInfoInd' Reason: 'Deactivateable: 'FblCw_DcmDslConnectionGroupInfoInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE''' */
#define FBLCW_SIZEOFDCMDSLCONNECTIONGROUPINFOOFPCCONFIG                                             STD_OFF  /**< Deactivateable: 'FblCw_PCConfig.SizeOfDcmDslConnectionGroupInfo' Reason: 'Deactivateable: 'DcmDslConnectionGroupInfo' Reason: 'Deactivateable: 'FblCw_DcmDslConnectionGroupInfo' Reason: 'the struct is deactivated because all elements are deactivated.''' */
#define FBLCW_SIZEOFDCMDSLCONNECTIONINFOOFPCCONFIG                                                  STD_ON
#define FBLCW_SIZEOFDCMDSLPROTOCOLRXINFOOFPCCONFIG                                                  STD_ON
#define FBLCW_SIZEOFDCMDSLPROTOCOLTXINFOOFPCCONFIG                                                  STD_ON
#define FBLCW_SIZEOFINITIALBCOFPCCONFIG                                                             STD_OFF  /**< Deactivateable: 'FblCw_PCConfig.SizeOfInitialBC' Reason: 'Deactivateable: 'InitialBC' Reason: 'Deactivateable: 'FblCw_InitialBC' Reason: '/ActiveEcuC/PduR/Dcm[0:PduRChangeParameterRequestApi] is configured to 'false'''' */
#define FBLCW_SIZEOFINITIALBSOFPCCONFIG                                                             STD_OFF  /**< Deactivateable: 'FblCw_PCConfig.SizeOfInitialBS' Reason: 'Deactivateable: 'InitialBS' Reason: 'Deactivateable: 'FblCw_InitialBS' Reason: '/ActiveEcuC/PduR/Dcm[0:PduRChangeParameterRequestApi] is configured to 'false'''' */
#define FBLCW_SIZEOFINITIALSTMINOFPCCONFIG                                                          STD_OFF  /**< Deactivateable: 'FblCw_PCConfig.SizeOfInitialSTmin' Reason: 'Deactivateable: 'InitialSTmin' Reason: 'Deactivateable: 'FblCw_InitialSTmin' Reason: '/ActiveEcuC/PduR/Dcm[0:PduRChangeParameterRequestApi] is configured to 'false'''' */
#define FBLCW_SIZEOFPARAMETERINFOOFPCCONFIG                                                         STD_OFF  /**< Deactivateable: 'FblCw_PCConfig.SizeOfParameterInfo' Reason: 'Deactivateable: 'ParameterInfo' Reason: 'Deactivateable: 'FblCw_ParameterInfo' Reason: '/ActiveEcuC/PduR/Dcm[0:PduRChangeParameterRequestApi] is configured to 'false'''' */
#define FBLCW_VARIANTIDXOFPCCONFIG                                                                  STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  FblCwPCEnumExistsDefines  FblCw Enum Exists Defines (PRE_COMPILE)
  \brief  These defines can be used to deactivate enumeration based code sequences if the enumeration value does not exist in the configuration data.
  \{
*/ 
#define FBLCW_EXISTS_CAN_BUSTYPEOFDCMDSLCONNECTIONINFO                                              STD_ON
#define FBLCW_EXISTS_CANFD_BUSTYPEOFDCMDSLCONNECTIONINFO                                            STD_ON
#define FBLCW_EXISTS_FR_BUSTYPEOFDCMDSLCONNECTIONINFO                                               STD_OFF
#define FBLCW_EXISTS_ETH_BUSTYPEOFDCMDSLCONNECTIONINFO                                              STD_OFF
#define FBLCW_EXISTS_LIN_BUSTYPEOFDCMDSLCONNECTIONINFO                                              STD_OFF
#define FBLCW_EXISTS_CDD_BUSTYPEOFDCMDSLCONNECTIONINFO                                              STD_OFF
#define FBLCW_EXISTS_BOOTLOADER_RESPONSE_PROGSESSIONRESPONSEHANDLINGOFDCMDSLCONNECTIONINFO          STD_ON
#define FBLCW_EXISTS_APPLICATION_RESPONSE_PROGSESSIONRESPONSEHANDLINGOFDCMDSLCONNECTIONINFO         STD_OFF
#define FBLCW_EXISTS_DYNAMIC_RESPONSE_PROGSESSIONRESPONSEHANDLINGOFDCMDSLCONNECTIONINFO             STD_OFF
#define FBLCW_EXISTS_FUNCTIONAL_ADDRTYPEOFDCMDSLPROTOCOLRXINFO                                      STD_ON
#define FBLCW_EXISTS_PHYSICAL_ADDRTYPEOFDCMDSLPROTOCOLRXINFO                                        STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  FblCwPCEnumDefines  FblCw Enum Defines (PRE_COMPILE)
  \brief  These defines are the enumeration values of enumeration based CONST and VAR data.
  \{
*/ 
#define FBLCW_CAN_BUSTYPEOFDCMDSLCONNECTIONINFO                                                     0x00u
#define FBLCW_CANFD_BUSTYPEOFDCMDSLCONNECTIONINFO                                                   0x01u
#define FBLCW_BOOTLOADER_RESPONSE_PROGSESSIONRESPONSEHANDLINGOFDCMDSLCONNECTIONINFO                 0x00u
#define FBLCW_FUNCTIONAL_ADDRTYPEOFDCMDSLPROTOCOLRXINFO                                             0x00u
#define FBLCW_PHYSICAL_ADDRTYPEOFDCMDSLPROTOCOLRXINFO                                               0x01u
/** 
  \}
*/ 

/** 
  \defgroup  FblCwPCIsReducedToDefineDefines  FblCw Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define FBLCW_ISDEF_CANIFCTRLINFO                                                                   STD_OFF
#define FBLCW_ISDEF_BUSTYPEOFDCMDSLCONNECTIONINFO                                                   STD_OFF
#define FBLCW_ISDEF_CHANNELREADYINDICATIONOFDCMDSLCONNECTIONINFO                                    STD_OFF
#define FBLCW_ISDEF_CONTROLLEROFDCMDSLCONNECTIONINFO                                                STD_OFF
#define FBLCW_ISDEF_PAYLOADLIMITOFDCMDSLCONNECTIONINFO                                              STD_OFF
#define FBLCW_ISDEF_PROGSESSIONRESPONSEHANDLINGOFDCMDSLCONNECTIONINFO                               STD_OFF
#define FBLCW_ISDEF_RXTESTERSOURCEADDRESSOFDCMDSLCONNECTIONINFO                                     STD_OFF
#define FBLCW_ISDEF_TXREMOTEPDUIDOFDCMDSLCONNECTIONINFO                                             STD_OFF
#define FBLCW_ISDEF_ADDRTYPEOFDCMDSLPROTOCOLRXINFO                                                  STD_OFF
#define FBLCW_ISDEF_DCMDSLCONNECTIONINFOIDXOFDCMDSLPROTOCOLRXINFO                                   STD_OFF
#define FBLCW_ISDEF_DCMDSLCONNECTIONINFOIDXOFDCMDSLPROTOCOLTXINFO                                   STD_OFF
#define FBLCW_ISDEF_CANIFCTRLINFOOFPCCONFIG                                                         STD_ON
#define FBLCW_ISDEF_DCMDSLCONNECTIONINFOOFPCCONFIG                                                  STD_ON
#define FBLCW_ISDEF_DCMDSLPROTOCOLRXINFOOFPCCONFIG                                                  STD_ON
#define FBLCW_ISDEF_DCMDSLPROTOCOLTXINFOOFPCCONFIG                                                  STD_ON
#define FBLCW_ISDEF_INITIALIZEDOFPCCONFIG                                                           STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  FblCwPCEqualsAlwaysToDefines  FblCw Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define FBLCW_EQ2_CANIFCTRLINFO                                                                     
#define FBLCW_EQ2_BUSTYPEOFDCMDSLCONNECTIONINFO                                                     
#define FBLCW_EQ2_CHANNELREADYINDICATIONOFDCMDSLCONNECTIONINFO                                      
#define FBLCW_EQ2_CONTROLLEROFDCMDSLCONNECTIONINFO                                                  
#define FBLCW_EQ2_PAYLOADLIMITOFDCMDSLCONNECTIONINFO                                                
#define FBLCW_EQ2_PROGSESSIONRESPONSEHANDLINGOFDCMDSLCONNECTIONINFO                                 
#define FBLCW_EQ2_RXTESTERSOURCEADDRESSOFDCMDSLCONNECTIONINFO                                       
#define FBLCW_EQ2_TXREMOTEPDUIDOFDCMDSLCONNECTIONINFO                                               
#define FBLCW_EQ2_ADDRTYPEOFDCMDSLPROTOCOLRXINFO                                                    
#define FBLCW_EQ2_DCMDSLCONNECTIONINFOIDXOFDCMDSLPROTOCOLRXINFO                                     
#define FBLCW_EQ2_DCMDSLCONNECTIONINFOIDXOFDCMDSLPROTOCOLTXINFO                                     
#define FBLCW_EQ2_CANIFCTRLINFOOFPCCONFIG                                                           FblCw_CanIfCtrlInfo
#define FBLCW_EQ2_DCMDSLCONNECTIONINFOOFPCCONFIG                                                    FblCw_DcmDslConnectionInfo
#define FBLCW_EQ2_DCMDSLPROTOCOLRXINFOOFPCCONFIG                                                    FblCw_DcmDslProtocolRxInfo
#define FBLCW_EQ2_DCMDSLPROTOCOLTXINFOOFPCCONFIG                                                    FblCw_DcmDslProtocolTxInfo
#define FBLCW_EQ2_INITIALIZEDOFPCCONFIG                                                             (&(FblCw_Initialized))
/** 
  \}
*/ 

/** 
  \defgroup  FblCwPCSymbolicInitializationPointers  FblCw Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define FblCw_Config_Ptr                                                                            NULL_PTR  /**< symbolic identifier which shall be used to initialize 'FblCw' */
/** 
  \}
*/ 

/** 
  \defgroup  FblCwPCInitializationSymbols  FblCw Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define FblCw_Config                                                                                NULL_PTR  /**< symbolic identifier which could be used to initialize 'FblCw */
/** 
  \}
*/ 

/** 
  \defgroup  FblCwPCGeneral  FblCw General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define FBLCW_CHECK_INIT_POINTER                                                                    STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define FBLCW_FINAL_MAGIC_NUMBER                                                                    0xFF1Eu  /**< the precompile constant to validate the size of the initialization structure at initialization time of FblCw */
#define FBLCW_INDIVIDUAL_POSTBUILD                                                                  STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'FblCw' is not configured to be postbuild capable. */
#define FBLCW_INIT_DATA                                                                             FBLCW_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define FBLCW_INIT_DATA_HASH_CODE                                                                   -299722517  /**< the precompile constant to validate the initialization structure at initialization time of FblCw with a hashcode. The seed value is '0xFF1Eu' */
#define FBLCW_USE_ECUM_BSW_ERROR_HOOK                                                               STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define FBLCW_USE_INIT_POINTER                                                                      STD_OFF  /**< STD_ON if the init pointer FblCw shall be used. */
/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  FblCwLTDataSwitches  FblCw Data Switches  (LINK)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define FBLCW_LTCONFIG                                                                              STD_OFF  /**< Deactivateable: 'FblCw_LTConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
/** 
  \}
*/ 



/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
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
  \defgroup  FblCwPCGetConstantDuplicatedRootDataMacros  FblCw Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define FblCw_GetBusNmRxIndCycleMsOfPCConfig()                                                      65535u
#define FblCw_GetCanIfCtrlInfoOfPCConfig()                                                          FblCw_CanIfCtrlInfo  /**< the pointer to FblCw_CanIfCtrlInfo */
#define FblCw_GetDcmDslConnectionInfoOfPCConfig()                                                   FblCw_DcmDslConnectionInfo  /**< the pointer to FblCw_DcmDslConnectionInfo */
#define FblCw_GetDcmDslProtocolRxInfoOfPCConfig()                                                   FblCw_DcmDslProtocolRxInfo  /**< the pointer to FblCw_DcmDslProtocolRxInfo */
#define FblCw_GetDcmDslProtocolTxInfoOfPCConfig()                                                   FblCw_DcmDslProtocolTxInfo  /**< the pointer to FblCw_DcmDslProtocolTxInfo */
#define FblCw_GetInitializedOfPCConfig()                                                            (&(FblCw_Initialized))  /**< the pointer to FblCw_Initialized */
#define FblCw_GetSizeOfCanIfCtrlInfoOfPCConfig()                                                    1u  /**< the number of accomplishable value elements in FblCw_CanIfCtrlInfo */
#define FblCw_GetSizeOfDcmDslConnectionInfoOfPCConfig()                                             2u  /**< the number of accomplishable value elements in FblCw_DcmDslConnectionInfo */
#define FblCw_GetSizeOfDcmDslProtocolRxInfoOfPCConfig()                                             4u  /**< the number of accomplishable value elements in FblCw_DcmDslProtocolRxInfo */
#define FblCw_GetSizeOfDcmDslProtocolTxInfoOfPCConfig()                                             2u  /**< the number of accomplishable value elements in FblCw_DcmDslProtocolTxInfo */
#define FblCw_GetVariantIdxOfPCConfig()                                                             0u
/** 
  \}
*/ 

/** 
  \defgroup  FblCwPCGetDataMacros  FblCw Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define FblCw_GetCanIfCtrlInfo(Index)                                                               (FblCw_GetCanIfCtrlInfoOfPCConfig()[(Index)])
#define FblCw_GetBusTypeOfDcmDslConnectionInfo(Index)                                               (FblCw_GetDcmDslConnectionInfoOfPCConfig()[(Index)].BusTypeOfDcmDslConnectionInfo)
#define FblCw_IsChannelReadyIndicationOfDcmDslConnectionInfo(Index)                                 ((FblCw_GetDcmDslConnectionInfoOfPCConfig()[(Index)].ChannelReadyIndicationOfDcmDslConnectionInfo) != FALSE)
#define FblCw_GetControllerOfDcmDslConnectionInfo(Index)                                            (FblCw_GetDcmDslConnectionInfoOfPCConfig()[(Index)].ControllerOfDcmDslConnectionInfo)
#define FblCw_GetPayloadLimitOfDcmDslConnectionInfo(Index)                                          (FblCw_GetDcmDslConnectionInfoOfPCConfig()[(Index)].PayloadLimitOfDcmDslConnectionInfo)
#define FblCw_GetProgSessionResponseHandlingOfDcmDslConnectionInfo(Index)                           (FblCw_GetDcmDslConnectionInfoOfPCConfig()[(Index)].ProgSessionResponseHandlingOfDcmDslConnectionInfo)
#define FblCw_GetRxTesterSourceAddressOfDcmDslConnectionInfo(Index)                                 (FblCw_GetDcmDslConnectionInfoOfPCConfig()[(Index)].RxTesterSourceAddressOfDcmDslConnectionInfo)
#define FblCw_GetTxRemotePduIdOfDcmDslConnectionInfo(Index)                                         (FblCw_GetDcmDslConnectionInfoOfPCConfig()[(Index)].TxRemotePduIdOfDcmDslConnectionInfo)
#define FblCw_GetAddrTypeOfDcmDslProtocolRxInfo(Index)                                              (FblCw_GetDcmDslProtocolRxInfoOfPCConfig()[(Index)].AddrTypeOfDcmDslProtocolRxInfo)
#define FblCw_GetDcmDslConnectionInfoIdxOfDcmDslProtocolRxInfo(Index)                               (FblCw_GetDcmDslProtocolRxInfoOfPCConfig()[(Index)].DcmDslConnectionInfoIdxOfDcmDslProtocolRxInfo)
#define FblCw_GetDcmDslConnectionInfoIdxOfDcmDslProtocolTxInfo(Index)                               (FblCw_GetDcmDslProtocolTxInfoOfPCConfig()[(Index)].DcmDslConnectionInfoIdxOfDcmDslProtocolTxInfo)
#define FblCw_IsInitialized()                                                                       (((*(FblCw_GetInitializedOfPCConfig()))) != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  FblCwPCGetDeduplicatedDataMacros  FblCw Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define FblCw_GetBusNmRxIndCycleMs()                                                                FblCw_GetBusNmRxIndCycleMsOfPCConfig()
#define FblCw_GetSizeOfCanIfCtrlInfo()                                                              FblCw_GetSizeOfCanIfCtrlInfoOfPCConfig()
#define FblCw_GetSizeOfDcmDslConnectionInfo()                                                       FblCw_GetSizeOfDcmDslConnectionInfoOfPCConfig()
#define FblCw_GetSizeOfDcmDslProtocolRxInfo()                                                       FblCw_GetSizeOfDcmDslProtocolRxInfoOfPCConfig()
#define FblCw_GetSizeOfDcmDslProtocolTxInfo()                                                       FblCw_GetSizeOfDcmDslProtocolTxInfoOfPCConfig()
#define FblCw_GetVariantIdx()                                                                       FblCw_GetVariantIdxOfPCConfig()
/** 
  \}
*/ 

/** 
  \defgroup  FblCwPCSetDataMacros  FblCw Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define FblCw_SetInitialized(Value)                                                                 (*(FblCw_GetInitializedOfPCConfig())) = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  FblCwPCHasMacros  FblCw Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define FblCw_HasBusNmRxIndCycleMs()                                                                (TRUE != FALSE)
#define FblCw_HasCanIfCtrlInfo()                                                                    (TRUE != FALSE)
#define FblCw_HasDcmDslConnectionInfo()                                                             (TRUE != FALSE)
#define FblCw_HasBusTypeOfDcmDslConnectionInfo()                                                    (TRUE != FALSE)
#define FblCw_HasChannelReadyIndicationOfDcmDslConnectionInfo()                                     (TRUE != FALSE)
#define FblCw_HasControllerOfDcmDslConnectionInfo()                                                 (TRUE != FALSE)
#define FblCw_HasPayloadLimitOfDcmDslConnectionInfo()                                               (TRUE != FALSE)
#define FblCw_HasProgSessionResponseHandlingOfDcmDslConnectionInfo()                                (TRUE != FALSE)
#define FblCw_HasRxTesterSourceAddressOfDcmDslConnectionInfo()                                      (TRUE != FALSE)
#define FblCw_HasTxRemotePduIdOfDcmDslConnectionInfo()                                              (TRUE != FALSE)
#define FblCw_HasDcmDslProtocolRxInfo()                                                             (TRUE != FALSE)
#define FblCw_HasAddrTypeOfDcmDslProtocolRxInfo()                                                   (TRUE != FALSE)
#define FblCw_HasDcmDslConnectionInfoIdxOfDcmDslProtocolRxInfo()                                    (TRUE != FALSE)
#define FblCw_HasDcmDslProtocolTxInfo()                                                             (TRUE != FALSE)
#define FblCw_HasDcmDslConnectionInfoIdxOfDcmDslProtocolTxInfo()                                    (TRUE != FALSE)
#define FblCw_HasInitialized()                                                                      (TRUE != FALSE)
#define FblCw_HasSizeOfCanIfCtrlInfo()                                                              (TRUE != FALSE)
#define FblCw_HasSizeOfDcmDslConnectionInfo()                                                       (TRUE != FALSE)
#define FblCw_HasSizeOfDcmDslProtocolRxInfo()                                                       (TRUE != FALSE)
#define FblCw_HasSizeOfDcmDslProtocolTxInfo()                                                       (TRUE != FALSE)
#define FblCw_HasVariantIdx()                                                                       (TRUE != FALSE)
#define FblCw_HasPCConfig()                                                                         (TRUE != FALSE)
#define FblCw_HasBusNmRxIndCycleMsOfPCConfig()                                                      (TRUE != FALSE)
#define FblCw_HasCanIfCtrlInfoOfPCConfig()                                                          (TRUE != FALSE)
#define FblCw_HasDcmDslConnectionInfoOfPCConfig()                                                   (TRUE != FALSE)
#define FblCw_HasDcmDslProtocolRxInfoOfPCConfig()                                                   (TRUE != FALSE)
#define FblCw_HasDcmDslProtocolTxInfoOfPCConfig()                                                   (TRUE != FALSE)
#define FblCw_HasInitializedOfPCConfig()                                                            (TRUE != FALSE)
#define FblCw_HasSizeOfCanIfCtrlInfoOfPCConfig()                                                    (TRUE != FALSE)
#define FblCw_HasSizeOfDcmDslConnectionInfoOfPCConfig()                                             (TRUE != FALSE)
#define FblCw_HasSizeOfDcmDslProtocolRxInfoOfPCConfig()                                             (TRUE != FALSE)
#define FblCw_HasSizeOfDcmDslProtocolTxInfoOfPCConfig()                                             (TRUE != FALSE)
#define FblCw_HasVariantIdxOfPCConfig()                                                             (TRUE != FALSE)
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


/** 
  \defgroup  FblCw_GetSizeOfBusNmRxIndDataMacro  FblCw Get Size of BusNmRx Macro (PRE_COMPILE)
  \brief  This macro is the size information used to initialize pduBuff in FblCwInternalMainFunctionTimerTask.
  \{
*/ 
#define FblCw_GetSizeOfPduBuff()                                                                    0u

/**********************************************************************************************************************
  GLOBAL FUNCTION POINTERS
**********************************************************************************************************************/
/** 
  \var    FblCw_BusNmRxIndFctPtrType
  \brief  Function pointer to FblCw_BusNmRxIndFctPtrType
*/
#if (FBLCW_BUSNMRXINDDATA == STD_ON)
/* This is the function pointer type */
typedef void (*FblCw_BusNmRxIndFctPtrType)( PduIdType RxPduId, const PduInfoType * PduInfoPtr );
#endif

/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: SIZEOF DATA TYPES
**********************************************************************************************************************/
/** 
  \defgroup  FblCwPCSizeOfTypes  FblCw SizeOf Types (PRE_COMPILE)
  \brief  These type definitions are used for the SizeOf information.
  \{
*/ 
/**   \brief  value based type definition for FblCw_SizeOfCanIfCtrlInfo */
typedef uint8 FblCw_SizeOfCanIfCtrlInfoType;

/**   \brief  value based type definition for FblCw_SizeOfDcmDslConnectionInfo */
typedef uint8 FblCw_SizeOfDcmDslConnectionInfoType;

/**   \brief  value based type definition for FblCw_SizeOfDcmDslProtocolRxInfo */
typedef uint8 FblCw_SizeOfDcmDslProtocolRxInfoType;

/**   \brief  value based type definition for FblCw_SizeOfDcmDslProtocolTxInfo */
typedef uint8 FblCw_SizeOfDcmDslProtocolTxInfoType;

/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  FblCwPCIterableTypes  FblCw Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate FblCw_CanIfCtrlInfo */
typedef uint8_least FblCw_CanIfCtrlInfoIterType;

/**   \brief  type used to iterate FblCw_DcmDslConnectionInfo */
typedef uint8_least FblCw_DcmDslConnectionInfoIterType;

/**   \brief  type used to iterate FblCw_DcmDslProtocolRxInfo */
typedef uint8_least FblCw_DcmDslProtocolRxInfoIterType;

/**   \brief  type used to iterate FblCw_DcmDslProtocolTxInfo */
typedef uint8_least FblCw_DcmDslProtocolTxInfoIterType;

/** 
  \}
*/ 

/** 
  \defgroup  FblCwPCValueTypes  FblCw Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for FblCw_BusNmRxIndCycleMs */
typedef uint16 FblCw_BusNmRxIndCycleMsType;

/**   \brief  value based type definition for FblCw_CanIfCtrlInfo */
typedef uint8 FblCw_CanIfCtrlInfoType;

/**   \brief  value based type definition for FblCw_BusTypeOfDcmDslConnectionInfo */
typedef uint8 FblCw_BusTypeOfDcmDslConnectionInfoType;

/**   \brief  value based type definition for FblCw_ChannelReadyIndicationOfDcmDslConnectionInfo */
typedef boolean FblCw_ChannelReadyIndicationOfDcmDslConnectionInfoType;

/**   \brief  value based type definition for FblCw_ControllerOfDcmDslConnectionInfo */
typedef uint8 FblCw_ControllerOfDcmDslConnectionInfoType;

/**   \brief  value based type definition for FblCw_PayloadLimitOfDcmDslConnectionInfo */
typedef uint16 FblCw_PayloadLimitOfDcmDslConnectionInfoType;

/**   \brief  value based type definition for FblCw_ProgSessionResponseHandlingOfDcmDslConnectionInfo */
typedef uint8 FblCw_ProgSessionResponseHandlingOfDcmDslConnectionInfoType;

/**   \brief  value based type definition for FblCw_RxTesterSourceAddressOfDcmDslConnectionInfo */
typedef uint16 FblCw_RxTesterSourceAddressOfDcmDslConnectionInfoType;

/**   \brief  value based type definition for FblCw_TxRemotePduIdOfDcmDslConnectionInfo */
typedef uint8 FblCw_TxRemotePduIdOfDcmDslConnectionInfoType;

/**   \brief  value based type definition for FblCw_AddrTypeOfDcmDslProtocolRxInfo */
typedef uint8 FblCw_AddrTypeOfDcmDslProtocolRxInfoType;

/**   \brief  value based type definition for FblCw_DcmDslConnectionInfoIdxOfDcmDslProtocolRxInfo */
typedef uint8 FblCw_DcmDslConnectionInfoIdxOfDcmDslProtocolRxInfoType;

/**   \brief  value based type definition for FblCw_DcmDslConnectionInfoIdxOfDcmDslProtocolTxInfo */
typedef uint8 FblCw_DcmDslConnectionInfoIdxOfDcmDslProtocolTxInfoType;

/**   \brief  value based type definition for FblCw_Initialized */
typedef boolean FblCw_InitializedType;

/**   \brief  value based type definition for FblCw_VariantIdx */
typedef uint8 FblCw_VariantIdxType;

/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  FblCwPCStructTypes  FblCw Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in FblCw_DcmDslConnectionInfo */
typedef struct sFblCw_DcmDslConnectionInfoType
{
  FblCw_PayloadLimitOfDcmDslConnectionInfoType PayloadLimitOfDcmDslConnectionInfo;  /**< DefinitionRef: /MICROSARFBL/Dcm/DcmConfigSet/DcmDsl/DcmDslProtocol/DcmDslProtocolRow/DcmDslConnection/DcmDslMainConnection/DcmDslPayloadLimit */
  FblCw_RxTesterSourceAddressOfDcmDslConnectionInfoType RxTesterSourceAddressOfDcmDslConnectionInfo;  /**< DefinitionRef: /MICROSARFBL/Dcm/DcmConfigSet/DcmDsl/DcmDslProtocol/DcmDslProtocolRow/DcmDslConnection/DcmDslMainConnection/DcmDslProtocolRxTesterSourceAddr */
  FblCw_ChannelReadyIndicationOfDcmDslConnectionInfoType ChannelReadyIndicationOfDcmDslConnectionInfo;  /**< Defines if ChannelReady Indication is used for this connection */
  FblCw_BusTypeOfDcmDslConnectionInfoType BusTypeOfDcmDslConnectionInfo;  /**< the bustype of the connection */
  FblCw_ControllerOfDcmDslConnectionInfoType ControllerOfDcmDslConnectionInfo;  /**< controller handle */
  FblCw_ProgSessionResponseHandlingOfDcmDslConnectionInfoType ProgSessionResponseHandlingOfDcmDslConnectionInfo;  /**< DefinitionRef: /MICROSARFBL/Dcm/DcmConfigSet/DcmDsl/DcmDslProtocol/DcmDslProtocolRow/DcmDslConnection/DcmDslMainConnection/DcmProgSessionResponseHandling */
  FblCw_TxRemotePduIdOfDcmDslConnectionInfoType TxRemotePduIdOfDcmDslConnectionInfo;  /**< DefinitionRef: /[ANY]/PduR/PduRRoutingTables/PduRRoutingTable/PduRRoutingPath/PduRSrcPdu based symbolic name value */
} FblCw_DcmDslConnectionInfoType;

/**   \brief  type used in FblCw_DcmDslProtocolRxInfo */
typedef struct sFblCw_DcmDslProtocolRxInfoType
{
  FblCw_AddrTypeOfDcmDslProtocolRxInfoType AddrTypeOfDcmDslProtocolRxInfo;  /**< DefinitionRef: /MICROSARFBL/Dcm/DcmConfigSet/DcmDsl/DcmDslProtocol/DcmDslProtocolRow/DcmDslConnection/DcmDslMainConnection/DcmDslProtocolRx/DcmDslProtocolRxAddrType */
  FblCw_DcmDslConnectionInfoIdxOfDcmDslProtocolRxInfoType DcmDslConnectionInfoIdxOfDcmDslProtocolRxInfo;  /**< the index of the 1:1 relation pointing to FblCw_DcmDslConnectionInfo */
} FblCw_DcmDslProtocolRxInfoType;

/**   \brief  type used in FblCw_DcmDslProtocolTxInfo */
typedef struct sFblCw_DcmDslProtocolTxInfoType
{
  FblCw_DcmDslConnectionInfoIdxOfDcmDslProtocolTxInfoType DcmDslConnectionInfoIdxOfDcmDslProtocolTxInfo;  /**< the index of the 1:1 relation pointing to FblCw_DcmDslConnectionInfo */
} FblCw_DcmDslProtocolTxInfoType;

/** 
  \}
*/ 

/** 
  \defgroup  FblCwPCRootPointerTypes  FblCw Root Pointer Types (PRE_COMPILE)
  \brief  These type definitions are used to point from the config root to symbol instances.
  \{
*/ 
/**   \brief  type used to point to FblCw_CanIfCtrlInfo */
typedef P2CONST(FblCw_CanIfCtrlInfoType, TYPEDEF, FBLCW_CONST) FblCw_CanIfCtrlInfoPtrType;

/**   \brief  type used to point to FblCw_DcmDslConnectionInfo */
typedef P2CONST(FblCw_DcmDslConnectionInfoType, TYPEDEF, FBLCW_CONST) FblCw_DcmDslConnectionInfoPtrType;

/**   \brief  type used to point to FblCw_DcmDslProtocolRxInfo */
typedef P2CONST(FblCw_DcmDslProtocolRxInfoType, TYPEDEF, FBLCW_CONST) FblCw_DcmDslProtocolRxInfoPtrType;

/**   \brief  type used to point to FblCw_DcmDslProtocolTxInfo */
typedef P2CONST(FblCw_DcmDslProtocolTxInfoType, TYPEDEF, FBLCW_CONST) FblCw_DcmDslProtocolTxInfoPtrType;

/**   \brief  type used to point to FblCw_Initialized */
typedef P2VAR(FblCw_InitializedType, TYPEDEF, FBLCW_VAR_CLEARED) FblCw_InitializedPtrType;

/** 
  \}
*/ 

/** 
  \defgroup  FblCwPCRootValueTypes  FblCw Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in FblCw_PCConfig */
typedef struct sFblCw_PCConfigType
{
  uint8 FblCw_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} FblCw_PCConfigType;

typedef FblCw_PCConfigType FblCw_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: SIZEOF DATA TYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
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
extern CONST(FblCw_CanIfCtrlInfoType, FBLCW_CONST) FblCw_CanIfCtrlInfo[1];
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
extern CONST(FblCw_DcmDslConnectionInfoType, FBLCW_CONST) FblCw_DcmDslConnectionInfo[2];
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
extern CONST(FblCw_DcmDslProtocolRxInfoType, FBLCW_CONST) FblCw_DcmDslProtocolRxInfo[4];
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
extern CONST(FblCw_DcmDslProtocolTxInfoType, FBLCW_CONST) FblCw_DcmDslProtocolTxInfo[2];
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
extern VAR(FblCw_InitializedType, FBLCW_VAR_CLEARED) FblCw_Initialized;
#define FBLCW_STOP_SEC_VAR_CLEARED_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/



#define FBLCW_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define FBLCW_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif  /* FBLCW_LCFG_H */
/**********************************************************************************************************************
  END OF FILE: FblCw_Lcfg.h
**********************************************************************************************************************/

