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
 *            Module: Csm
 *           Program: FBL Vector SLP3 (FBL_Vector_SLP3)
 *          Customer: Vector Japan Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F7016493AFP-C
 *    License Scope : The usage is restricted to CBD1900263_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Csm_Cfg.c
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

#define CSM_CFG_SOURCE


/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Csm_Cfg.h"
#include "CryIf.h"
#include "SchM_Csm.h"



/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/
#if !defined (STATIC)
# define STATIC static
#endif

#if !defined (CSM_LOCAL)
# define CSM_LOCAL static
#endif

#if !defined (CSM_LOCAL_INLINE)
# define CSM_LOCAL_INLINE LOCAL_INLINE
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
  Csm_JobInfo
**********************************************************************************************************************/
#define CSM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Crypto_JobInfoType, CSM_CONST) Csm_JobInfo[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     JobInfo       Referable Keys */
  /*     0 */ {0u, 0u} ,  /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_DecryptionAes128NoneCbc] */
  /*     1 */ {1u, 0u} ,  /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_Signature_Class_C] */
  /*     2 */ {2u, 0u} ,  /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_RsaPssSha256] */
  /*     3 */ {3u, 0u} ,  /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_RsaV15Sha1] */
  /*     4 */ {4u, 0u} ,  /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_Ed25519] */
  /*     5 */ {5u, 0u}    /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_DummySha512] */
};
#define CSM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Csm_JobPrimitiveInfo
**********************************************************************************************************************/
/** 
  \var    Csm_JobPrimitiveInfo
  \brief  const uint32 callbackId; const Crypto_PrimitiveInfoType* primitiveInfo; const uint32 cryIfKeyId; const Crypto_ProcessingType processingType;
*/ 
#define CSM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Crypto_JobPrimitiveInfoType, CSM_CONST) Csm_JobPrimitiveInfo[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     JobPrimitiveInfo                                                                                            Referable Keys */
  /*     0 */ {0u, &Csm_PrimitiveInfo[0], CryIfConf_CryIfKey_CryIfKey_Fbl_Decrypt_Aes128, CRYPTO_PROCESSING_SYNC}    ,  /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_DecryptionAes128NoneCbc] */
  /*     1 */ {0u, &Csm_PrimitiveInfo[1], CryIfConf_CryIfKey_CryIfKey_Fbl_Signature_ClassC, CRYPTO_PROCESSING_SYNC}  ,  /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_Signature_Class_C] */
  /*     2 */ {0u, &Csm_PrimitiveInfo[2], CryIfConf_CryIfKey_CryIfKey_Fbl_Signature_Rsa3072, CRYPTO_PROCESSING_SYNC} ,  /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_RsaPssSha256] */
  /*     3 */ {0u, &Csm_PrimitiveInfo[3], CryIfConf_CryIfKey_CryIfKey_Fbl_Signature_Rsa1024, CRYPTO_PROCESSING_SYNC} ,  /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_RsaV15Sha1] */
  /*     4 */ {0u, &Csm_PrimitiveInfo[4], CryIfConf_CryIfKey_CryIfKey_Fbl_Signature_Ed25519, CRYPTO_PROCESSING_SYNC} ,  /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_Ed25519] */
  /*     5 */ {0u, &Csm_PrimitiveInfo[5], CryIfConf_CryIfKey_CryIfKey_Fbl_HashDummy, CRYPTO_PROCESSING_SYNC}            /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_DummySha512] */
};
#define CSM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Csm_JobTable
**********************************************************************************************************************/
/** 
  \var    Csm_JobTable
  \brief  Contains parameters of /MICROSAR/Csm/CsmJobs/CsmJob.
  \details
  Element         Description
  CsmKeyIdIdx     the index of the 1:1 relation pointing to Csm_Key
  Priority        Contains values of DefinitionRef: /MICROSAR/Csm/CsmJobs/CsmJob/CsmJobPriority.
  QueueInfoIdx    the index of the 1:1 relation pointing to Csm_QueueInfo
*/ 
#define CSM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Csm_JobTableType, CSM_CONST) Csm_JobTable[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    CsmKeyIdIdx  Priority  QueueInfoIdx        Referable Keys */
  { /*     0 */          0u,       0u,           0u },  /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_DecryptionAes128NoneCbc, /ActiveEcuC/Csm/CsmJobs, /ActiveEcuC/Smh/SmhJob_AesDecryption/SmhJob_AesDecryption:SmhCsmJobRef] */
  { /*     1 */          2u,       0u,           1u },  /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_Signature_Class_C, /ActiveEcuC/Csm/CsmJobs, /ActiveEcuC/Smh/SmhJob_Verify_ClassC/SmhJob_Verify_ClassC:SmhCsmJobRef] */
  { /*     2 */          6u,       0u,           1u },  /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_RsaPssSha256, /ActiveEcuC/Csm/CsmJobs] */
  { /*     3 */          4u,       0u,           1u },  /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_RsaV15Sha1, /ActiveEcuC/Csm/CsmJobs, /ActiveEcuC/Smh/SmhJob_Verify_ClassCCC/SmhJob_Verify_ClassCCC:SmhCsmJobRef] */
  { /*     4 */          3u,       0u,           1u },  /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_Ed25519, /ActiveEcuC/Csm/CsmJobs] */
  { /*     5 */          1u,       0u,           1u }   /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_DummySha512, /ActiveEcuC/Csm/CsmJobs, /ActiveEcuC/Smh/SmhJob_Verify_DummySha512/SmhJob_Verify_DummySha512:SmhCsmJobRef] */
};
#define CSM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Csm_Key
**********************************************************************************************************************/
/** 
  \var    Csm_Key
  \brief  Contains parameters of /AUTOSAR/EcucDefs/Csm/CsmKeys/CsmKey.
  \details
  Element       Description
  CryIfKeyId    Contains values of DefinitionRef: /MICROSAR/Csm/CsmKeys/CsmKey/CsmKeyRef.
*/ 
#define CSM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Csm_KeyType, CSM_CONST) Csm_Key[7] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    CryIfKeyId                                               Referable Keys */
  { /*     0 */ CryIfConf_CryIfKey_CryIfKey_Fbl_Decrypt_Aes128    },  /* [/ActiveEcuC/Csm/CsmKeys/CsmKey_Fbl_Decrypt_Aes128, /ActiveEcuC/Csm/CsmKeys, /ActiveEcuC/Csm/CsmJobs/CsmJob_DecryptionAes128NoneCbc:CsmJobKeyRef] */
  { /*     1 */ CryIfConf_CryIfKey_CryIfKey_Fbl_HashDummy         },  /* [/ActiveEcuC/Csm/CsmKeys/CsmKey_Fbl_HashDummy, /ActiveEcuC/Csm/CsmKeys, /ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_DummySha512:CsmJobKeyRef] */
  { /*     2 */ CryIfConf_CryIfKey_CryIfKey_Fbl_Signature_ClassC  },  /* [/ActiveEcuC/Csm/CsmKeys/CsmKey_Fbl_Signature_Class_C, /ActiveEcuC/Csm/CsmKeys, /ActiveEcuC/Csm/CsmJobs/CsmJob_Signature_Class_C:CsmJobKeyRef] */
  { /*     3 */ CryIfConf_CryIfKey_CryIfKey_Fbl_Signature_Ed25519 },  /* [/ActiveEcuC/Csm/CsmKeys/CsmKey_Fbl_Signature_Ed25519, /ActiveEcuC/Csm/CsmKeys, /ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_Ed25519:CsmJobKeyRef] */
  { /*     4 */ CryIfConf_CryIfKey_CryIfKey_Fbl_Signature_Rsa1024 },  /* [/ActiveEcuC/Csm/CsmKeys/CsmKey_Fbl_Signature_Rsa1024, /ActiveEcuC/Csm/CsmKeys, /ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_RsaV15Sha1:CsmJobKeyRef] */
  { /*     5 */ CryIfConf_CryIfKey_CryIfKey_Fbl_Signature_Rsa2048 },  /* [/ActiveEcuC/Csm/CsmKeys/CsmKey_Fbl_Signature_Rsa2048, /ActiveEcuC/Csm/CsmKeys] */
  { /*     6 */ CryIfConf_CryIfKey_CryIfKey_Fbl_Signature_Rsa3072 }   /* [/ActiveEcuC/Csm/CsmKeys/CsmKey_Fbl_Signature_Rsa3072, /ActiveEcuC/Csm/CsmKeys, /ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_RsaPssSha256:CsmJobKeyRef] */
};
#define CSM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Csm_PartitionIdentifiers
**********************************************************************************************************************/
/** 
  \var    Csm_PartitionIdentifiers
  \brief  the partition context in Config
  \details
  Element         Description
  PartitionSNV
*/ 
#define CSM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Csm_PartitionIdentifiersType, CSM_CONST) Csm_PartitionIdentifiers[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PartitionSNV         */
  { /*     0 */ CSM_SINGLE_PARTITION }
};
#define CSM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Csm_PrimitiveInfo
**********************************************************************************************************************/
#define CSM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Crypto_PrimitiveInfoType, CSM_CONST) Csm_PrimitiveInfo[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     PrimitiveInfo                                                                                                                              Referable Keys */
  /*     0 */ {CRYPTO_DECRYPT, {CRYPTO_ALGOFAM_AES, CRYPTO_ALGOFAM_CUSTOM_PADDING_PKCS7, 16u, CRYPTO_ALGOMODE_CBC}}                                 ,  /* [/ActiveEcuC/Csm/CsmPrimitives_Dec_Aes128NoneCbc/CsmDecrypt/CsmPrimitives_Dec_Aes128NoneCbc] */
  /*     1 */ {CRYPTO_MACVERIFY, {CRYPTO_ALGOFAM_SHA1, CRYPTO_ALGOFAM_NOT_SET, 16u, CRYPTO_ALGOMODE_HMAC}}                                          ,  /* [/ActiveEcuC/Csm/CsmPrimitives_MacVer_HmacSha1/CsmMacVerify/CsmPrimitives_MacVer_HmacSha1] */
  /*     2 */ {CRYPTO_SIGNATUREVERIFY, {CRYPTO_ALGOFAM_RSA, CRYPTO_ALGOFAM_SHA2_256, 32u, CRYPTO_ALGOMODE_RSASSA_PSS}}                              ,  /* [/ActiveEcuC/Csm/CsmPrimitives_SigAsymVer_RsaPssSha256/CsmSignatureVerify/CsmPrimitives_SigAsymVer_RsaPssSha256] */
  /*     3 */ {CRYPTO_SIGNATUREVERIFY, {CRYPTO_ALGOFAM_RSA, CRYPTO_ALGOFAM_SHA1, 32u, CRYPTO_ALGOMODE_RSASSA_PKCS1_v1_5}}                           ,  /* [/ActiveEcuC/Csm/CsmPrimitives_SigAsymVer_RsaV15Sha1/CsmSignatureVerify/CsmPrimitives_SigAsymVer_RsaV15Sha1] */
  /*     4 */ {CRYPTO_SIGNATUREVERIFY, {CRYPTO_ALGOFAM_ED25519, CRYPTO_ALGOFAM_SHA2_512, 32u, 176u} /*  Mode = Crypto_30_LibCv_EdDsaEd25519Ph  */ } ,  /* [/ActiveEcuC/Csm/CsmPrimitives_SigAsymVer_Ed25519Sha512/CsmSignatureVerify/CsmPrimitives_SigAsymVer_Ed25519Sha512] */
  /*     5 */ {CRYPTO_HASH, {CRYPTO_ALGOFAM_SHA2_512, CRYPTO_ALGOFAM_NOT_SET, 0u, CRYPTO_ALGOMODE_NOT_SET}}                                            /* [/ActiveEcuC/Csm/CsmPrimitives_SigAsymVer_DummySha512/CsmHash/CsmPrimitives_SigAsymVer_DummySha512] */
};
#define CSM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Csm_QueueInfo
**********************************************************************************************************************/
/** 
  \var    Csm_QueueInfo
  \brief  Contains parameters of /AUTOSAR/EcucDefs/Csm/CsmQueues/CsmQueue.
  \details
  Element                 Description
  ChannelId               Contains values of DefinitionRef: /MICROSAR/Csm/CsmQueues/CsmQueue/CsmChannelRef.
  JobSharing              Contains values of DefinitionRef: /MICROSAR/Csm/CsmQueues/CsmQueue/CsmJobSharing.
  JobObjSynchronousIdx    the index of the 0:1 relation pointing to Csm_Job
  JobPoolPartitionIdx 
  ProcessingMode      
  QueueEndIdx             the end index of the 1:n relation pointing to Csm_Queue
*/ 
#define CSM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Csm_QueueInfoType, CSM_CONST) Csm_QueueInfo[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    ChannelId                                                   JobSharing  JobObjSynchronousIdx  JobPoolPartitionIdx                              ProcessingMode          QueueEndIdx        Referable Keys */
  { /*     0 */ CryIfConf_CryIfChannel_CryIfChannel_CryptoCv_Fbl_Aes      ,       TRUE,                   1u,                  0u  /* CSM_SINGLE_PARTITION */, CRYPTO_PROCESSING_SYNC,          2u },  /* [/ActiveEcuC/Csm/CsmQueues/CsmQueue_Aes, /ActiveEcuC/Csm/CsmQueues, /ActiveEcuC/Csm/CsmJobs/CsmJob_DecryptionAes128NoneCbc:CsmJobQueueRef] */
  { /*     1 */ CryIfConf_CryIfChannel_CryIfChannel_CryptoCv_Fbl_Signature,       TRUE,                   0u,                  0u  /* CSM_SINGLE_PARTITION */, CRYPTO_PROCESSING_SYNC,          1u }   /* [/ActiveEcuC/Csm/CsmQueues/CsmQueue_Standard, /ActiveEcuC/Csm/CsmQueues, /ActiveEcuC/Csm/CsmJobs/CsmJob_Signature_Class_C:CsmJobQueueRef, /ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_RsaPssSha256:CsmJobQueueRef, /ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_RsaV15Sha1:CsmJobQueueRef, /ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_Ed25519:CsmJobQueueRef, /ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_DummySha512:CsmJobQueueRef] */
};
#define CSM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Csm_Job
**********************************************************************************************************************/
#define CSM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Crypto_JobType, CSM_VAR_NOINIT) Csm_Job[2];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [CsmQueue_Standard_AsyncPool, CsmQueue_Standard_SyncObj] */
  /*     1 */  /* [CsmQueue_Aes_AsyncPool, CsmQueue_Aes_SyncObj] */

#define CSM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Csm_JobState
**********************************************************************************************************************/
#define CSM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Csm_JobStateType, CSM_VAR_NOINIT) Csm_JobState[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_DecryptionAes128NoneCbc, /ActiveEcuC/Csm/CsmJobs, /ActiveEcuC/Smh/SmhJob_AesDecryption/SmhJob_AesDecryption:SmhCsmJobRef] */
  /*     1 */  /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_Signature_Class_C, /ActiveEcuC/Csm/CsmJobs, /ActiveEcuC/Smh/SmhJob_Verify_ClassC/SmhJob_Verify_ClassC:SmhCsmJobRef] */
  /*     2 */  /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_RsaPssSha256, /ActiveEcuC/Csm/CsmJobs] */
  /*     3 */  /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_RsaV15Sha1, /ActiveEcuC/Csm/CsmJobs, /ActiveEcuC/Smh/SmhJob_Verify_ClassCCC/SmhJob_Verify_ClassCCC:SmhCsmJobRef] */
  /*     4 */  /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_Ed25519, /ActiveEcuC/Csm/CsmJobs] */
  /*     5 */  /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_DummySha512, /ActiveEcuC/Csm/CsmJobs, /ActiveEcuC/Smh/SmhJob_Verify_DummySha512/SmhJob_Verify_DummySha512:SmhCsmJobRef] */

#define CSM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Csm_JobToObjMap
**********************************************************************************************************************/
#define CSM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Csm_SizeOfJobType, CSM_VAR_NOINIT) Csm_JobToObjMap[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_DecryptionAes128NoneCbc, /ActiveEcuC/Csm/CsmJobs, /ActiveEcuC/Smh/SmhJob_AesDecryption/SmhJob_AesDecryption:SmhCsmJobRef] */
  /*     1 */  /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_Signature_Class_C, /ActiveEcuC/Csm/CsmJobs, /ActiveEcuC/Smh/SmhJob_Verify_ClassC/SmhJob_Verify_ClassC:SmhCsmJobRef] */
  /*     2 */  /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_RsaPssSha256, /ActiveEcuC/Csm/CsmJobs] */
  /*     3 */  /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_RsaV15Sha1, /ActiveEcuC/Csm/CsmJobs, /ActiveEcuC/Smh/SmhJob_Verify_ClassCCC/SmhJob_Verify_ClassCCC:SmhCsmJobRef] */
  /*     4 */  /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_Ed25519, /ActiveEcuC/Csm/CsmJobs] */
  /*     5 */  /* [/ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_DummySha512, /ActiveEcuC/Csm/CsmJobs, /ActiveEcuC/Smh/SmhJob_Verify_DummySha512/SmhJob_Verify_DummySha512:SmhCsmJobRef] */

#define CSM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Csm_PartitionDataInitialized
**********************************************************************************************************************/
#define CSM_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Csm_PartitionDataInitializedType, CSM_VAR_ZERO_INIT) Csm_PartitionDataInitialized = 0u;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define CSM_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Csm_Queue
**********************************************************************************************************************/
#define CSM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Csm_QueueUType, CSM_VAR_NOINIT) Csm_Queue;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Csm/CsmQueues/CsmQueue_Standard] */
  /*     1 */  /* [/ActiveEcuC/Csm/CsmQueues/CsmQueue_Aes] */

#define CSM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Csm_QueueState
**********************************************************************************************************************/
/** 
  \var    Csm_QueueState
  \brief  Stores state of the asynchronous job queue.
  \details
  Element     Description
  Lock    
  QueueIdx    the index of the 1:1 relation pointing to Csm_Queue
*/ 
#define CSM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Csm_QueueStateType, CSM_VAR_NOINIT) Csm_QueueState[2];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Csm/CsmQueues/CsmQueue_Aes, /ActiveEcuC/Csm/CsmQueues, /ActiveEcuC/Csm/CsmJobs/CsmJob_DecryptionAes128NoneCbc:CsmJobQueueRef] */
  /*     1 */  /* [/ActiveEcuC/Csm/CsmQueues/CsmQueue_Standard, /ActiveEcuC/Csm/CsmQueues, /ActiveEcuC/Csm/CsmJobs/CsmJob_Signature_Class_C:CsmJobQueueRef, /ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_RsaPssSha256:CsmJobQueueRef, /ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_RsaV15Sha1:CsmJobQueueRef, /ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_Ed25519:CsmJobQueueRef, /ActiveEcuC/Csm/CsmJobs/CsmJob_SigAsymVer_DummySha512:CsmJobQueueRef] */

#define CSM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */





/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/



 
/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/
#define CSM_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/***********************************************************************************************************************
 *  Csm_InitMemory
 **********************************************************************************************************************/
FUNC(void, CSM_CODE) Csm_InitMemory(void)
{
  Csm_InitMemory_Local(Csm_PartitionIndexOfCSLForCSM_SINGLE_PARTITION); /*lint !e522 */
}

/***********************************************************************************************************************
 *  Csm_MainFunction
 **********************************************************************************************************************/
FUNC(void, CSM_CODE) Csm_MainFunction(void)
{
  Csm_MainFunction_Local(Csm_PartitionIndexOfCSLForCSM_SINGLE_PARTITION); /*lint !e522 */
}

#define CSM_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define CSM_START_SEC_CODE
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
/***********************************************************************************************************************
 *  Function Group 
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  Function Group MainFunctionGroup
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  Function Group InitMemoryGroup
 **********************************************************************************************************************/

#define CSM_STOP_SEC_CODE
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/**********************************************************************************************************************
 *  END OF FILE: Csm_Cfg.c
 *********************************************************************************************************************/
