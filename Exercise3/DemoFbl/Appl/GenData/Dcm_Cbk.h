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
 *              File: Dcm_Cbk.h
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


#if !defined (DCM_CBK_H)
# define DCM_CBK_H

/**********************************************************************************************************************
 * MISRA JUSTIFICATION
 *********************************************************************************************************************/

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
# include "Platform_Types.h"
# include "ComStack_Types.h"

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/




/**
 * \defgroup DcmHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define DcmConf_DcmDslProtocolRx_Demo_0_CAN_FD_Request_oDemoFBL_Vector_SLP3_20_797faa4e_Rx_26d06049 0u
#define DcmConf_DcmDslProtocolRx_Demo_0_CAN_FD_Request_oDemoFBL_Vector_SLP3_67f6c3c9_Rx_2eeaac32 2u
#define DcmConf_DcmDslProtocolRx_Functional_CAN_FD_oDemoFBL_Vector_SLP3_3cffe9e9_Rx_56b3eb44 3u
#define DcmConf_DcmDslProtocolRx_Functional_CAN_FD_oDemoFBL_Vector_SLP3_20_57859879_Rx_0f27df12 1u
/**\} */




/**
 * \defgroup DcmHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define DcmConf_DcmDslProtocolTx_Demo_0_CAN_FD_Response_oDemoFBL_Vector_SLP3_01a35bfe_Tx_6ae15480 1u
#define DcmConf_DcmDslProtocolTx_Demo_0_CAN_FD_Response_oDemoFBL_Vector_SLP3_20_fac2fc54_Tx_7966a2bf 0u
/**\} */

/* ComM indications for DCM */
# define Dcm_ComM_FullComModeEntered(a)
# define Dcm_ComM_SilentComModeEntered(a)
# define Dcm_ComM_NoComModeEntered(a)

/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
# define FBLCW_START_SEC_CODE
/*lint -save -esym(961, 19.1) */
# include "MemMap.h"    /* PRQA S 5087 */       /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dcm_StartOfReception
**********************************************************************************************************************/
/** \brief       The function call indicates the reception start of a segmented PDU.
    \param[in]   id             id of the TP DcmDslProtocolRx PDU.
    \param[in]   info           Pointer to a PduInfoType structure containing the payload data
    \param[in]   TpSduLength    length of the entire the TP SDU that will be received.
    \param[out]  bufferSizePtr  length of the available receive buffer in FblCw.\n
                                This parameter is used e.g. in CanTp to calculate the Block Size (BS).
    \return      a BufReq_ReturnType constant of ComStackTypes.h.
    \pre         The FblCw is initialized and active.
    \context     This function can be called on interrupt and task level and has not to be interrupted by other\n
                 Dcm_StartOfReception calls for the same id.
    \note        The function is called by the PduR.
**********************************************************************************************************************/
FUNC(BufReq_ReturnType, FBLCW_CODE) Dcm_StartOfReception(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, FBLCW_APPL_DATA) info, PduLengthType TpSduLength, P2VAR(PduLengthType, AUTOMATIC, FBLCW_APPL_DATA) bufferSizePtr);

/**********************************************************************************************************************
  Dcm_CopyRxData
**********************************************************************************************************************/
/** \brief       This function is called to trigger the copy process of a segmented PDU.\n
                 The function can be called several times and\n
                 each call to this function copies parts of the received data.\n
    \param[in]   id             id of the TP DcmDslProtocolRx PDU.
    \param[in]   info           a PduInfoType pointing to the data to be copied in the FblCw data buffer.
    \param[out]  bufferSizePtr  available receive buffer after data has been copied.
    \return      a BufReq_ReturnType constant of ComStackTypes.h.      
    \pre         The FblCw is initialized and active.
    \context     This function can be called on interrupt and task level and has not to be interrupted by other\n
                 Dcm_CopyRxData calls for the same id.
    \note        The function is called by the PduR.
**********************************************************************************************************************/
FUNC(BufReq_ReturnType, FBLCW_CODE) Dcm_CopyRxData(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, FBLCW_APPL_DATA) info, P2VAR(PduLengthType, AUTOMATIC, FBLCW_APPL_DATA) bufferSizePtr);

/**********************************************************************************************************************
  Dcm_TpRxIndication
**********************************************************************************************************************/
/** \brief       The function is called to indicate the complete receiption of a FblCw TP SDU
                 or to report an error that occurred during reception.
    \param[in]   id             id of the TP DcmDslProtocolRx PDU.
    \param[in]   result         a Std_ReturnType to indicate the result of the reception.
    \return      none
    \pre         The FblCw is initialized and active.
    \context     This function can be called on interrupt and task level and has not to be interrupted by other\n
                 Dcm_TpRxIndication calls for the same id.
    \note        The function is called by the PduR.
**********************************************************************************************************************/
FUNC(void, FBLCW_CODE) Dcm_TpRxIndication(PduIdType id, Std_ReturnType result);

/**********************************************************************************************************************
  Dcm_CopyTxData
**********************************************************************************************************************/
/** \brief       This function is called to request transmit data of a TP DcmDslProtocolTx PDU\n
                 The function can be called several times and\n
                 each call to this function copies the next part of the data to be transmitted.\n
    \param[in]   id             id of the TP DcmDslProtocolTx PDU.
    \param[in]   info           a PduInfoType pointing to the destination buffer.
    \param[in]   retry          NULL_PTR to indicate a successful copy process\n
                                or a RetryInfoType containing a TpDataStateType constant of ComStackTypes.h.
    \param       availableDataPtr   Indicates the remaining number of bytes that are available in the TX buffer.\n
                                availableDataPtr can be used by TP modules that support dynamic payload lengths\n
                                (e.g. Iso FrTp) to determine the size of the following CFs.
    \return      a BufReq_ReturnType constant of ComStackTypes.h.
    \pre         The FblCw is initialized and active.
    \context     This function can be called on interrupt and task level and has not to be interrupted by other\n
                 Dcm_CopyTxData calls for the same id.
    \note        The function is called by the PduR.
**********************************************************************************************************************/
FUNC(BufReq_ReturnType, FBLCW_CODE) Dcm_CopyTxData(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, FBLCW_APPL_DATA) info, P2VAR(RetryInfoType, AUTOMATIC, FBLCW_APPL_DATA) retry, P2VAR(PduLengthType, AUTOMATIC, FBLCW_APPL_DATA) availableDataPtr);

/**********************************************************************************************************************
  Dcm_TpTxConfirmation
**********************************************************************************************************************/
/** \brief       The function is called to confirm a successful transmission of a TP DcmDslProtocolTx PDU\n
                 or to report an error that occurred during transmission.
    \param[in]   id             id of the TP DcmDslProtocolTx PDU.
    \param[in]   result         a Std_ReturnType to indicate the result of the transmission.
    \return      none
    \pre         The FblCw is initialized and active.
    \context     This function can be called on interrupt and task level and has not to be interrupted by other\n
                 Dcm_TpTxConfirmation calls for the same id.
    \note        The function is called by the PduR.
**********************************************************************************************************************/
FUNC(void, FBLCW_CODE) Dcm_TpTxConfirmation(PduIdType id, Std_ReturnType result);


# define FBLCW_STOP_SEC_CODE
/*lint -save -esym(961, 19.1) */
# include "MemMap.h"    /* PRQA S 5087 */       /* MD_MSR_19.1 */
/*lint -restore */

#endif  /* DCM_CBK_H */
/**********************************************************************************************************************
  END OF FILE: Dcm_Cbk.h
**********************************************************************************************************************/

