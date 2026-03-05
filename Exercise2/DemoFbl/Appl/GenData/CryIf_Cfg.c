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
 *            Module: CryIf
 *           Program: FBL Vector SLP3 (FBL_Vector_SLP3)
 *          Customer: Vector Japan Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F7016493AFP-C
 *    License Scope : The usage is restricted to CBD1900263_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: CryIf_Cfg.c
 *   Generation Time: 2026-02-17 14:09:26
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

#define CRYIF_CFG_SOURCE


/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "CryIf_Cfg.h"
#include "CryIf.h"
#include "CryIf_Private.h"
#include "Crypto_30_LibCv.h"



/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/
#if !defined (STATIC)
# define STATIC static
#endif

#if !defined (CRYIF_LOCAL)
# define CRYIF_LOCAL static
#endif

#if !defined (CRYIF_LOCAL_INLINE)
# define CRYIF_LOCAL_INLINE LOCAL_INLINE
#endif




/**********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA PROTOTYPES
**********************************************************************************************************************/






/**********************************************************************************************************************
 *  LOCAL DATA
 *********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/




/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CryIf_Channel
**********************************************************************************************************************/
/** 
  \var    CryIf_Channel
  \brief  Contains parameters of /MICROSAR/CryIf/CryIfChannel.
  \details
  Element               Description
  DriverObjectRef       Contains values of DefinitionRef: /MICROSAR/CryIf/CryIfChannel/CryIfDriverObjectRef.
  CryptoFunctionsIdx    the index of the 1:1 relation pointing to CryIf_CryptoFunctions
  Id                    Contains values of DefinitionRef: /MICROSAR/CryIf/CryIfChannel/CryIfChannelId.
*/ 
#define CRYIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CryIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CryIf_ChannelType, CRYIF_CONST) CryIf_Channel[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    DriverObjectRef                                    CryptoFunctionsIdx  Id        Referable Keys */
  { /*     0 */ CryptoConf_CryptoDriverObject_Crypto_30_LibCv    ,                 0u, 0u },  /* [/ActiveEcuC/CryIf/CryIfChannel_CryptoCv_Fbl_Signature, /ActiveEcuC/CryIf, /ActiveEcuC/Csm/CsmQueues/CsmQueue_Standard:CsmChannelRef] */
  { /*     1 */ CryptoConf_CryptoDriverObject_Crypto_30_LibCv_Aes,                 0u, 1u }   /* [/ActiveEcuC/CryIf/CryIfChannel_CryptoCv_Fbl_Aes, /ActiveEcuC/CryIf, /ActiveEcuC/Csm/CsmQueues/CsmQueue_Aes:CsmChannelRef] */
};
#define CRYIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CryIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CryIf_CryptoFunctions
**********************************************************************************************************************/
/** 
  \var    CryIf_CryptoFunctions
  \details
  Element                          Description
  SupportsKeyElementCopyPartial
  CancelJob                    
  CertificateParse             
  CertificateVerify            
  KeyCopy                      
  KeyDerive                    
  KeyElementCopy               
  KeyElementCopyPartial        
  KeyElementGet                
  KeyElementIdsGet             
  KeyElementSet                
  KeyExchangeCalcPubVal        
  KeyExchangeCalcSecret        
  KeyGenerate                  
  KeyGetStatus                 
  KeySetInvalid                
  KeyValidSet                  
  ProcessJob                   
  RandomSeed                   
*/ 
#define CRYIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CryIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CryIf_CryptoFunctionsType, CRYIF_CONST) CryIf_CryptoFunctions[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    SupportsKeyElementCopyPartial  CancelJob                  CertificateParse                  CertificateVerify                  KeyCopy                  KeyDerive                  KeyElementCopy                  KeyElementCopyPartial                  KeyElementGet                  KeyElementIdsGet                  KeyElementSet                  KeyExchangeCalcPubVal                  KeyExchangeCalcSecret                  KeyGenerate                  KeyGetStatus             KeySetInvalid             KeyValidSet                  ProcessJob                  RandomSeed                        Referable Keys */
  { /*     0 */                          TRUE, Crypto_30_LibCv_CancelJob, Crypto_30_LibCv_CertificateParse, Crypto_30_LibCv_CertificateVerify, Crypto_30_LibCv_KeyCopy, Crypto_30_LibCv_KeyDerive, Crypto_30_LibCv_KeyElementCopy, Crypto_30_LibCv_KeyElementCopyPartial, Crypto_30_LibCv_KeyElementGet, Crypto_30_LibCv_KeyElementIdsGet, Crypto_30_LibCv_KeyElementSet, Crypto_30_LibCv_KeyExchangeCalcPubVal, Crypto_30_LibCv_KeyExchangeCalcSecret, Crypto_30_LibCv_KeyGenerate, CryIf_KeyGetStatus_Stub, CryIf_KeySetInvalid_Stub, Crypto_30_LibCv_KeyValidSet, Crypto_30_LibCv_ProcessJob, Crypto_30_LibCv_RandomSeed }   /* [/ActiveEcuC/Crypto] */
};
#define CRYIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CryIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CryIf_Key
**********************************************************************************************************************/
/** 
  \var    CryIf_Key
  \brief  Contains parameters of /MICROSAR/CryIf/CryIfKey.
  \details
  Element               Description
  Ref                   Contains values of DefinitionRef: /MICROSAR/CryIf/CryIfKey/CryIfKeyRef.
  CryptoFunctionsIdx    the index of the 1:1 relation pointing to CryIf_CryptoFunctions
*/ 
#define CRYIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CryIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CryIf_KeyType, CRYIF_CONST) CryIf_Key[7] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Ref                                                   CryptoFunctionsIdx        Referable Keys */
  { /*     0 */ CryptoConf_CryptoKey_CryptoKey_Fbl_Decrypt_Aes128   ,                 0u },  /* [/ActiveEcuC/CryIf/CryIfKey_Fbl_Decrypt_Aes128, /ActiveEcuC/CryIf, /ActiveEcuC/Csm/CsmKeys/CsmKey_Fbl_Decrypt_Aes128:CsmKeyRef] */
  { /*     1 */ CryptoConf_CryptoKey_CryptoKey_Fbl_Signature_Class_C,                 0u },  /* [/ActiveEcuC/CryIf/CryIfKey_Fbl_Signature_ClassC, /ActiveEcuC/CryIf, /ActiveEcuC/Csm/CsmKeys/CsmKey_Fbl_Signature_Class_C:CsmKeyRef] */
  { /*     2 */ CryptoConf_CryptoKey_CryptoKey_Fbl_Signature_Ed25519,                 0u },  /* [/ActiveEcuC/CryIf/CryIfKey_Fbl_Signature_Ed25519, /ActiveEcuC/CryIf, /ActiveEcuC/Csm/CsmKeys/CsmKey_Fbl_Signature_Ed25519:CsmKeyRef] */
  { /*     3 */ CryptoConf_CryptoKey_CryptoKey_Fbl_Signature_Rsa1024,                 0u },  /* [/ActiveEcuC/CryIf/CryIfKey_Fbl_Signature_Rsa1024, /ActiveEcuC/CryIf, /ActiveEcuC/Csm/CsmKeys/CsmKey_Fbl_Signature_Rsa1024:CsmKeyRef] */
  { /*     4 */ CryptoConf_CryptoKey_CryptoKey_Fbl_Signature_Rsa2048,                 0u },  /* [/ActiveEcuC/CryIf/CryIfKey_Fbl_Signature_Rsa2048, /ActiveEcuC/CryIf, /ActiveEcuC/Csm/CsmKeys/CsmKey_Fbl_Signature_Rsa2048:CsmKeyRef] */
  { /*     5 */ CryptoConf_CryptoKey_CryptoKey_Fbl_Signature_Rsa3072,                 0u },  /* [/ActiveEcuC/CryIf/CryIfKey_Fbl_Signature_Rsa3072, /ActiveEcuC/CryIf, /ActiveEcuC/Csm/CsmKeys/CsmKey_Fbl_Signature_Rsa3072:CsmKeyRef] */
  { /*     6 */ CryptoConf_CryptoKey_CryptoKey_Fbl_HashDummy        ,                 0u }   /* [/ActiveEcuC/CryIf/CryIfKey_Fbl_HashDummy, /ActiveEcuC/CryIf, /ActiveEcuC/Csm/CsmKeys/CsmKey_Fbl_HashDummy:CsmKeyRef] */
};
#define CRYIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "CryIf_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */





/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/



 
/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/




/**********************************************************************************************************************
 *  END OF FILE: CryIf_Cfg.c
 *********************************************************************************************************************/
