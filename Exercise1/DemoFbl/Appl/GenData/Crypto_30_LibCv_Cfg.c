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
 *            Module: Crypto_30_LibCv
 *           Program: FBL Vector SLP3 (FBL_Vector_SLP3)
 *          Customer: Vector Japan Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F7016493AFP-C
 *    License Scope : The usage is restricted to CBD1900263_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Crypto_30_LibCv_Cfg.c
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

#define CRYPTO_30_LIBCV_CFG_SOURCE


/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Crypto_30_LibCv_Cfg.h"
#include "Crypto_30_LibCv.h"
#include "Crypto_30_LibCv_Services.h"
#include "Crypto_30_LibCv_AutosarDefines.h"
/* PRQA S 0759 EOF */ /* MD_CSL_18.4 */
/*lint -e91 */
#include "Crypto_30_LibCv_AeadDecrypt.h"
#include "Crypto_30_LibCv_AeadEncrypt.h"
#include "Crypto_30_LibCv_Decrypt.h"
#include "Crypto_30_LibCv_Encrypt.h"
#include "Crypto_30_LibCv_Hash.h"
#include "Crypto_30_LibCv_KeyDerive.h"
#include "Crypto_30_LibCv_KeyExchange.h"
#include "Crypto_30_LibCv_KeyGenerate.h"
#include "Crypto_30_LibCv_KeySetInvalid.h"
#include "Crypto_30_LibCv_KeySetValid.h"
#include "Crypto_30_LibCv_MacGenerate.h"
#include "Crypto_30_LibCv_MacVerify.h"
#include "Crypto_30_LibCv_RandomGenerate.h"
#include "Crypto_30_LibCv_RandomSeed.h"
#include "Crypto_30_LibCv_SignatureGenerate.h"
#include "Crypto_30_LibCv_SignatureVerify.h"
#include "Crypto_30_LibCv_KeyWrap.h"
#include "Crypto_30_LibCv_KeyUnwrap.h"



/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/
#if !defined (STATIC)
# define STATIC static
#endif

#if !defined (CRYPTO_30_LIBCV_LOCAL)
# define CRYPTO_30_LIBCV_LOCAL static
#endif

#if !defined (CRYPTO_30_LIBCV_LOCAL_INLINE)
# define CRYPTO_30_LIBCV_LOCAL_INLINE LOCAL_INLINE
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
  Crypto_30_LibCv_AesDecrypt
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_AesDecrypt
  \details
  Element      Description
  Workspace
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Crypto_30_LibCv_AesDecryptType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_AesDecrypt[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Workspace                                                                                                              Referable Keys */
  { /*     0 */ &Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv_Aes[0].DataOfStructUnionWS_Crypto_30_LibCv_Aes.primWS.AesDecrypt }   /* [/ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv_Aes] */
};
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_CmacAesVerify
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_CmacAesVerify
  \details
  Element      Description
  Workspace
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Crypto_30_LibCv_CmacAesVerifyType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_CmacAesVerify[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Workspace                                                                                                         Referable Keys */
  { /*     0 */ &Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv[0].DataOfStructUnionWS_Crypto_30_LibCv.primWS.CmacAesVerify }   /* [/ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv] */
};
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_Ed25519Verify
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_Ed25519Verify
  \details
  Element      Description
  Workspace
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Crypto_30_LibCv_Ed25519VerifyType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_Ed25519Verify[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Workspace                                                                                                         Referable Keys */
  { /*     0 */ &Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv[0].DataOfStructUnionWS_Crypto_30_LibCv.primWS.Ed25519Verify }   /* [/ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv] */
};
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_FamilyToHashMapping
**********************************************************************************************************************/
#define CRYPTO_30_LIBCV_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Crypto_30_LibCv_FamilyToHashMappingType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_FamilyToHashMapping[8] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     FamilyToHashMapping               Referable Keys */
  /*     0 */ 0xFFu                        ,  /* [CRYPTO_ALGOFAM_NOT_SET] */
  /*     1 */ 0xFFu                        ,  /* [CRYPTO_ALGOFAM_SHA1] */
  /*     2 */ 0xFFu                        ,  /* [CRYPTO_ALGOFAM_SHA2_224] */
  /*     3 */ 0xFFu                        ,  /* [CRYPTO_ALGOFAM_SHA2_256] */
  /*     4 */ VSECPRIM_DIGEST_SHA2_384     ,  /* [CRYPTO_ALGOFAM_SHA2_384] */
  /*     5 */ VSECPRIM_DIGEST_SHA2_512     ,  /* [CRYPTO_ALGOFAM_SHA2_512] */
  /*     6 */ VSECPRIM_DIGEST_SHA2_512_224 ,  /* [CRYPTO_ALGOFAM_SHA2_512_224] */
  /*     7 */ VSECPRIM_DIGEST_SHA2_512_256    /* [CRYPTO_ALGOFAM_SHA2_512_256] */
};
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_Hash
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_Hash
  \details
  Element      Description
  Workspace
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Crypto_30_LibCv_HashType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_Hash[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Workspace                                                                                                Referable Keys */
  { /*     0 */ &Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv[0].DataOfStructUnionWS_Crypto_30_LibCv.primWS.Hash }   /* [/ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv] */
};
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_HmacSha1Verify
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_HmacSha1Verify
  \details
  Element      Description
  Workspace
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Crypto_30_LibCv_HmacSha1VerifyType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_HmacSha1Verify[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Workspace                                                                                                          Referable Keys */
  { /*     0 */ &Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv[0].DataOfStructUnionWS_Crypto_30_LibCv.primWS.HmacSha1Verify }   /* [/ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv] */
};
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_Key
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_Key
  \details
  Element                Description
  KeyElementsEndIdx      the end index of the 1:n relation pointing to Crypto_30_LibCv_KeyElements
  KeyElementsStartIdx    the start index of the 1:n relation pointing to Crypto_30_LibCv_KeyElements
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Crypto_30_LibCv_KeyType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_Key[7] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    KeyElementsEndIdx  KeyElementsStartIdx        Referable Keys */
  { /*     0 */                2u,                  0u },  /* [/ActiveEcuC/Crypto/CryptoKeys/CryptoKey_Fbl_Decrypt_Aes128] */
  { /*     1 */                3u,                  2u },  /* [/ActiveEcuC/Crypto/CryptoKeys/CryptoKey_Fbl_Signature_Class_C] */
  { /*     2 */                4u,                  3u },  /* [/ActiveEcuC/Crypto/CryptoKeys/CryptoKey_Fbl_Signature_Ed25519] */
  { /*     3 */                6u,                  4u },  /* [/ActiveEcuC/Crypto/CryptoKeys/CryptoKey_Fbl_Signature_Rsa1024] */
  { /*     4 */                8u,                  6u },  /* [/ActiveEcuC/Crypto/CryptoKeys/CryptoKey_Fbl_Signature_Rsa2048] */
  { /*     5 */               10u,                  8u },  /* [/ActiveEcuC/Crypto/CryptoKeys/CryptoKey_Fbl_Signature_Rsa3072] */
  { /*     6 */               11u,                 10u }   /* [/ActiveEcuC/Crypto/CryptoKeys/CryptoKey_Fbl_HashDummy] */
};
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_KeyElementInfo
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_KeyElementInfo
  \details
  Element       Description
  Length    
  Id        
  MaskedBits    contains bitcoded the boolean data of Crypto_30_LibCv_OnceOfKeyElementInfo, Crypto_30_LibCv_PartialOfKeyElementInfo, Crypto_30_LibCv_PersistOfKeyElementInfo
  Read      
  Write     
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Crypto_30_LibCv_KeyElementInfoType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_KeyElementInfo[11] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Length  Id    MaskedBits  Read                        Write                             Referable Keys */
  { /*     0 */    16u,   1u,      0x00u, CRYPTO_30_LIBCV_RA_ALLOWED, CRYPTO_30_LIBCV_WA_ALLOWED },  /* [/ActiveEcuC/Crypto/CryptoKeyElements/Crypto_30_LibCv_Fbl_Decrypt_Aes128_Key] */
  { /*     1 */    16u,   5u,      0x00u, CRYPTO_30_LIBCV_RA_ALLOWED, CRYPTO_30_LIBCV_WA_ALLOWED },  /* [/ActiveEcuC/Crypto/CryptoKeyElements/Crypto_30_LibCv_Fbl_Decrypt_Aes128_IV] */
  { /*     2 */    16u,   1u,      0x00u, CRYPTO_30_LIBCV_RA_ALLOWED, CRYPTO_30_LIBCV_WA_ALLOWED },  /* [/ActiveEcuC/Crypto/CryptoKeyElements/Crypto_30_LibCv_Fbl_Signature_ClassC] */
  { /*     3 */    32u,   1u,      0x00u, CRYPTO_30_LIBCV_RA_ALLOWED, CRYPTO_30_LIBCV_WA_ALLOWED },  /* [/ActiveEcuC/Crypto/CryptoKeyElements/Crypto_30_LibCv_Fbl_Signature_Ed25519] */
  { /*     4 */   128u, 160u,      0x00u, CRYPTO_30_LIBCV_RA_ALLOWED, CRYPTO_30_LIBCV_WA_ALLOWED },  /* [/ActiveEcuC/Crypto/CryptoKeyElements/Crypto_30_LibCv_Fbl_Signature_Rsa1024_Mod] */
  { /*     5 */     4u, 161u,      0x00u, CRYPTO_30_LIBCV_RA_ALLOWED, CRYPTO_30_LIBCV_WA_ALLOWED },  /* [/ActiveEcuC/Crypto/CryptoKeyElements/Crypto_30_LibCv_Fbl_Signature_Rsa1024_Exp] */
  { /*     6 */   256u, 160u,      0x00u, CRYPTO_30_LIBCV_RA_ALLOWED, CRYPTO_30_LIBCV_WA_ALLOWED },  /* [/ActiveEcuC/Crypto/CryptoKeyElements/Crypto_30_LibCv_Fbl_Signature_Rsa2048_Mod] */
  { /*     7 */     4u, 161u,      0x00u, CRYPTO_30_LIBCV_RA_ALLOWED, CRYPTO_30_LIBCV_WA_ALLOWED },  /* [/ActiveEcuC/Crypto/CryptoKeyElements/Crypto_30_LibCv_Fbl_Signature_Rsa2048_Exp] */
  { /*     8 */   384u, 160u,      0x00u, CRYPTO_30_LIBCV_RA_ALLOWED, CRYPTO_30_LIBCV_WA_ALLOWED },  /* [/ActiveEcuC/Crypto/CryptoKeyElements/Crypto_30_LibCv_Fbl_Signature_Rsa3072_Mod] */
  { /*     9 */     4u, 161u,      0x00u, CRYPTO_30_LIBCV_RA_ALLOWED, CRYPTO_30_LIBCV_WA_ALLOWED },  /* [/ActiveEcuC/Crypto/CryptoKeyElements/Crypto_30_LibCv_Fbl_Signature_Rsa3072_Exp] */
  { /*    10 */    20u,   1u,      0x00u, CRYPTO_30_LIBCV_RA_ALLOWED, CRYPTO_30_LIBCV_WA_ALLOWED }   /* [/ActiveEcuC/Crypto/CryptoKeyElements/Crypto_30_LibCv_Hash_Result] */
};
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_KeyElements
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_KeyElements
  \details
  Element               Description
  KeyStorageEndIdx      the end index of the 1:n relation pointing to Crypto_30_LibCv_KeyStorage
  KeyStorageStartIdx    the start index of the 1:n relation pointing to Crypto_30_LibCv_KeyStorage
  Id                
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Crypto_30_LibCv_KeyElementsType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_KeyElements[11] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    KeyStorageEndIdx  KeyStorageStartIdx  Id          Referable Keys */
  { /*     0 */              20u,                 4u,   1u },  /* [/ActiveEcuC/Crypto/CryptoKeys/CryptoKey_Fbl_Decrypt_Aes128, CryptoKey_Fbl_Decrypt_Aes128__Crypto_30_LibCv_Fbl_Decrypt_Aes128_Key] */
  { /*     1 */              40u,                24u,   5u },  /* [/ActiveEcuC/Crypto/CryptoKeys/CryptoKey_Fbl_Decrypt_Aes128, CryptoKey_Fbl_Decrypt_Aes128__Crypto_30_LibCv_Fbl_Decrypt_Aes128_IV] */
  { /*     2 */              60u,                44u,   1u },  /* [/ActiveEcuC/Crypto/CryptoKeys/CryptoKey_Fbl_Signature_Class_C, CryptoKey_Fbl_Signature_Class_C__Crypto_30_LibCv_Fbl_Signature_ClassC] */
  { /*     3 */              96u,                64u,   1u },  /* [/ActiveEcuC/Crypto/CryptoKeys/CryptoKey_Fbl_Signature_Ed25519, CryptoKey_Fbl_Signature_Ed25519__Crypto_30_LibCv_Fbl_Signature_Ed25519] */
  { /*     4 */             228u,               100u, 160u },  /* [/ActiveEcuC/Crypto/CryptoKeys/CryptoKey_Fbl_Signature_Rsa1024, CryptoKey_Fbl_Signature_Rsa1024__Crypto_30_LibCv_Fbl_Signature_Rsa1024_Mod] */
  { /*     5 */             236u,               232u, 161u },  /* [/ActiveEcuC/Crypto/CryptoKeys/CryptoKey_Fbl_Signature_Rsa1024, CryptoKey_Fbl_Signature_Rsa1024__Crypto_30_LibCv_Fbl_Signature_Rsa1024_Exp] */
  { /*     6 */             496u,               240u, 160u },  /* [/ActiveEcuC/Crypto/CryptoKeys/CryptoKey_Fbl_Signature_Rsa2048, CryptoKey_Fbl_Signature_Rsa2048__Crypto_30_LibCv_Fbl_Signature_Rsa2048_Mod] */
  { /*     7 */             504u,               500u, 161u },  /* [/ActiveEcuC/Crypto/CryptoKeys/CryptoKey_Fbl_Signature_Rsa2048, CryptoKey_Fbl_Signature_Rsa2048__Crypto_30_LibCv_Fbl_Signature_Rsa2048_Exp] */
  { /*     8 */             892u,               508u, 160u },  /* [/ActiveEcuC/Crypto/CryptoKeys/CryptoKey_Fbl_Signature_Rsa3072, CryptoKey_Fbl_Signature_Rsa3072__Crypto_30_LibCv_Fbl_Signature_Rsa3072_Mod] */
  { /*     9 */             900u,               896u, 161u },  /* [/ActiveEcuC/Crypto/CryptoKeys/CryptoKey_Fbl_Signature_Rsa3072, CryptoKey_Fbl_Signature_Rsa3072__Crypto_30_LibCv_Fbl_Signature_Rsa3072_Exp] */
  { /*    10 */             924u,               904u,   1u }   /* [/ActiveEcuC/Crypto/CryptoKeys/CryptoKey_Fbl_HashDummy, CryptoKey_Fbl_HashDummy__Crypto_30_LibCv_Hash_Result] */
};
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_ObjectInfo
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_ObjectInfo
  \details
  Element              Description
  WorkspaceLength      Holds the length of the workspace.
  AesDecryptIdx        the index of the 0:1 relation pointing to Crypto_30_LibCv_AesDecrypt
  CmacAesVerifyIdx     the index of the 0:1 relation pointing to Crypto_30_LibCv_CmacAesVerify
  Ed25519VerifyIdx     the index of the 0:1 relation pointing to Crypto_30_LibCv_Ed25519Verify
  HashIdx              the index of the 0:1 relation pointing to Crypto_30_LibCv_Hash
  HmacSha1VerifyIdx    the index of the 0:1 relation pointing to Crypto_30_LibCv_HmacSha1Verify
  QueueIdx             the index of the 1:1 relation pointing to Crypto_30_LibCv_Queue
  RsaPkcs1VerifyIdx    the index of the 0:1 relation pointing to Crypto_30_LibCv_RsaPkcs1Verify
  RsaPssVerifyIdx      the index of the 0:1 relation pointing to Crypto_30_LibCv_RsaPssVerify
  WorkspaceAddr        Holds the address of the workspace.
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Crypto_30_LibCv_ObjectInfoType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_ObjectInfo[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    WorkspaceLength                                      AesDecryptIdx                                 CmacAesVerifyIdx                                 Ed25519VerifyIdx                                 HashIdx                                 HmacSha1VerifyIdx                                 QueueIdx  RsaPkcs1VerifyIdx                                 RsaPssVerifyIdx                                 WorkspaceAddr                                                                                                                                             Referable Keys */
  { /*     0 */ sizeof(Crypto_30_LibCv_WS_Crypto_30_LibCv_Aes_Type),                                           0u, CRYPTO_30_LIBCV_NO_CMACAESVERIFYIDXOFOBJECTINFO, CRYPTO_30_LIBCV_NO_ED25519VERIFYIDXOFOBJECTINFO, CRYPTO_30_LIBCV_NO_HASHIDXOFOBJECTINFO, CRYPTO_30_LIBCV_NO_HMACSHA1VERIFYIDXOFOBJECTINFO,       0u, CRYPTO_30_LIBCV_NO_RSAPKCS1VERIFYIDXOFOBJECTINFO, CRYPTO_30_LIBCV_NO_RSAPSSVERIFYIDXOFOBJECTINFO, (P2VAR(uint8, AUTOMATIC, CRYPTO_30_LIBCV_VAR_NOINIT))&Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv_Aes[0].DataOfStructUnionWS_Crypto_30_LibCv_Aes },  /* [/ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv_Aes, AesDecrypt] */
  { /*     1 */ sizeof(Crypto_30_LibCv_WS_Crypto_30_LibCv_Type)    , CRYPTO_30_LIBCV_NO_AESDECRYPTIDXOFOBJECTINFO,                                              0u,                                              0u,                                     0u,                                               0u,       1u,                                               0u,                                             0u, (P2VAR(uint8, AUTOMATIC, CRYPTO_30_LIBCV_VAR_NOINIT))&Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv[0].DataOfStructUnionWS_Crypto_30_LibCv         }   /* [/ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv, SHA512, CmacAesVerify, HmacSha1Verify, Ed25519PhVerify, RsaPssVerifySha256, RsaPkcs1VerifySha1] */
};
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_ObjectInfoInd
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_ObjectInfoInd
  \brief  the indexes of the 1:1 sorted relation pointing to Crypto_30_LibCv_ObjectInfo
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Crypto_30_LibCv_ObjectInfoIndType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_ObjectInfoInd[7] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     ObjectInfoInd      Referable Keys */
  /*     0 */             0u,  /* [AesDecrypt] */
  /*     1 */             1u,  /* [SHA512] */
  /*     2 */             1u,  /* [CmacAesVerify] */
  /*     3 */             1u,  /* [HmacSha1Verify] */
  /*     4 */             1u,  /* [RsaPkcs1VerifySha1] */
  /*     5 */             1u,  /* [RsaPssVerifySha256] */
  /*     6 */             1u   /* [Ed25519PhVerify] */
};
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_PartitionIdentifiers
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_PartitionIdentifiers
  \brief  the partition context in Config
  \details
  Element                 Description
  PartitionSNV        
  PCPartitionConfigIdx    the index of the 1:1 relation pointing to Crypto_30_LibCv_PCPartitionConfig
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Crypto_30_LibCv_PartitionIdentifiersType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_PartitionIdentifiers[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PartitionSNV                      PCPartitionConfigIdx */
  { /*     0 */ CRYPTO_30_LIBCV_SINGLE_PARTITION,                   0u }
};
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_PartitionInfo
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_PartitionInfo
  \details
  Element             Description
  DefaultRandomKey    Holds default random key ref
  MaskedBits          contains bitcoded the boolean data of Crypto_30_LibCv_AesOfPartitionInfo, Crypto_30_LibCv_HashOfPartitionInfo
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Crypto_30_LibCv_PartitionInfoType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_PartitionInfo[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    DefaultRandomKey                       MaskedBits */
  { /*     0 */ CRYPTO_30_LIBCV_NO_DEFAULT_RANDOM_KEY,      0x00u }
};
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_PrimitiveFct
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_PrimitiveFct
  \details
  Element                  Description
  ObjectInfoIndEndIdx      the end index of the 0:n relation pointing to Crypto_30_LibCv_ObjectInfoInd
  ObjectInfoIndStartIdx    the start index of the 0:n relation pointing to Crypto_30_LibCv_ObjectInfoInd
  Dispatch             
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Crypto_30_LibCv_PrimitiveFctType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_PrimitiveFct[7] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    ObjectInfoIndEndIdx  ObjectInfoIndStartIdx  Dispatch                                       Referable Keys */
  { /*     0 */                  1u,                    0u, Crypto_30_LibCv_Dispatch_AesDecrypt     },  /* [AesDecrypt] */
  { /*     1 */                  2u,                    1u, Crypto_30_LibCv_Dispatch_Hash           },  /* [SHA512] */
  { /*     2 */                  3u,                    2u, Crypto_30_LibCv_Dispatch_CmacAesVerify  },  /* [CmacAesVerify] */
  { /*     3 */                  4u,                    3u, Crypto_30_LibCv_Dispatch_HmacSha1Verify },  /* [HmacSha1Verify] */
  { /*     4 */                  5u,                    4u, Crypto_30_LibCv_Dispatch_RsaPkcs1Verify },  /* [RsaPkcs1VerifySha1] */
  { /*     5 */                  6u,                    5u, Crypto_30_LibCv_Dispatch_RsaPssVerify   },  /* [RsaPssVerifySha256] */
  { /*     6 */                  7u,                    6u, Crypto_30_LibCv_Dispatch_Ed25519Verify  }   /* [Ed25519PhVerify] */
};
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_PrimitiveInfo
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_PrimitiveInfo
  \details
  Element            Description
  Combined       
  MaskedBits         contains bitcoded the boolean data of Crypto_30_LibCv_ContextOfPrimitiveInfo, Crypto_30_LibCv_DefaultRandomSourceOfPrimitiveInfo
  PrimitiveFctIdx    the index of the 1:1 relation pointing to Crypto_30_LibCv_PrimitiveFct
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Crypto_30_LibCv_PrimitiveInfoType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_PrimitiveInfo[18] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Combined                                                                                                                                                                                        MaskedBits  PrimitiveFctIdx        Referable Keys */
  { /*     0 */ ((((uint32)CRYPTO_DECRYPT) << 24) | (((uint32)CRYPTO_ALGOFAM_AES) << 16) | (((uint32)CRYPTO_ALGOMODE_ECB) << 8) | ((uint32)CRYPTO_ALGOFAM_NOT_SET))                                           ,      0x00u,              0u },  /* [CRYPTO_DECRYPT] */
  { /*     1 */ ((((uint32)CRYPTO_DECRYPT) << 24) | (((uint32)CRYPTO_ALGOFAM_AES) << 16) | (((uint32)CRYPTO_ALGOMODE_ECB) << 8) | ((uint32)CRYPTO_ALGOFAM_CUSTOM_CRYPTO_30_LIBCV_PADDING_PKCS7))              ,      0x00u,              0u },  /* [CRYPTO_DECRYPT] */
  { /*     2 */ ((((uint32)CRYPTO_DECRYPT) << 24) | (((uint32)CRYPTO_ALGOFAM_AES) << 16) | (((uint32)CRYPTO_ALGOMODE_ECB) << 8) | ((uint32)CRYPTO_ALGOFAM_PADDING_ONEWITHZEROS))                              ,      0x00u,              0u },  /* [CRYPTO_DECRYPT] */
  { /*     3 */ ((((uint32)CRYPTO_DECRYPT) << 24) | (((uint32)CRYPTO_ALGOFAM_AES) << 16) | (((uint32)CRYPTO_ALGOMODE_ECB) << 8) | ((uint32)CRYPTO_ALGOFAM_PADDING_PKCS7))                                     ,      0x00u,              0u },  /* [CRYPTO_DECRYPT] */
  { /*     4 */ ((((uint32)CRYPTO_DECRYPT) << 24) | (((uint32)CRYPTO_ALGOFAM_AES) << 16) | (((uint32)CRYPTO_ALGOMODE_CBC) << 8) | ((uint32)CRYPTO_ALGOFAM_NOT_SET))                                           ,      0x00u,              0u },  /* [CRYPTO_DECRYPT] */
  { /*     5 */ ((((uint32)CRYPTO_DECRYPT) << 24) | (((uint32)CRYPTO_ALGOFAM_AES) << 16) | (((uint32)CRYPTO_ALGOMODE_CBC) << 8) | ((uint32)CRYPTO_ALGOFAM_CUSTOM_CRYPTO_30_LIBCV_PADDING_PKCS7))              ,      0x00u,              0u },  /* [CRYPTO_DECRYPT] */
  { /*     6 */ ((((uint32)CRYPTO_DECRYPT) << 24) | (((uint32)CRYPTO_ALGOFAM_AES) << 16) | (((uint32)CRYPTO_ALGOMODE_CBC) << 8) | ((uint32)CRYPTO_ALGOFAM_PADDING_ONEWITHZEROS))                              ,      0x00u,              0u },  /* [CRYPTO_DECRYPT] */
  { /*     7 */ ((((uint32)CRYPTO_DECRYPT) << 24) | (((uint32)CRYPTO_ALGOFAM_AES) << 16) | (((uint32)CRYPTO_ALGOMODE_CBC) << 8) | ((uint32)CRYPTO_ALGOFAM_PADDING_PKCS7))                                     ,      0x00u,              0u },  /* [CRYPTO_DECRYPT] */
  { /*     8 */ ((((uint32)CRYPTO_DECRYPT) << 24) | (((uint32)CRYPTO_ALGOFAM_AES) << 16) | (((uint32)CRYPTO_ALGOMODE_CTR) << 8) | ((uint32)CRYPTO_ALGOFAM_NOT_SET))                                           ,      0x00u,              0u },  /* [CRYPTO_DECRYPT] */
  { /*     9 */ ((((uint32)CRYPTO_DECRYPT) << 24) | (((uint32)CRYPTO_ALGOFAM_AES) << 16) | (((uint32)CRYPTO_ALGOMODE_CTR) << 8) | ((uint32)CRYPTO_ALGOFAM_CUSTOM_CRYPTO_30_LIBCV_PADDING_PKCS7))              ,      0x00u,              0u },  /* [CRYPTO_DECRYPT] */
  { /*    10 */ ((((uint32)CRYPTO_DECRYPT) << 24) | (((uint32)CRYPTO_ALGOFAM_AES) << 16) | (((uint32)CRYPTO_ALGOMODE_CTR) << 8) | ((uint32)CRYPTO_ALGOFAM_PADDING_ONEWITHZEROS))                              ,      0x00u,              0u },  /* [CRYPTO_DECRYPT] */
  { /*    11 */ ((((uint32)CRYPTO_DECRYPT) << 24) | (((uint32)CRYPTO_ALGOFAM_AES) << 16) | (((uint32)CRYPTO_ALGOMODE_CTR) << 8) | ((uint32)CRYPTO_ALGOFAM_PADDING_PKCS7))                                     ,      0x00u,              0u },  /* [CRYPTO_DECRYPT] */
  { /*    12 */ ((((uint32)CRYPTO_HASH) << 24) | (((uint32)CRYPTO_ALGOFAM_SHA2_512) << 16) | (((uint32)CRYPTO_ALGOMODE_NOT_SET) << 8) | ((uint32)CRYPTO_ALGOFAM_NOT_SET))                                     ,      0x00u,              1u },  /* [CRYPTO_HASH] */
  { /*    13 */ ((((uint32)CRYPTO_MACVERIFY) << 24) | (((uint32)CRYPTO_ALGOFAM_AES) << 16) | (((uint32)CRYPTO_ALGOMODE_CMAC) << 8) | ((uint32)CRYPTO_ALGOFAM_NOT_SET))                                        ,      0x00u,              2u },  /* [CRYPTO_MACVERIFY] */
  { /*    14 */ ((((uint32)CRYPTO_MACVERIFY) << 24) | (((uint32)CRYPTO_ALGOFAM_SHA1) << 16) | (((uint32)CRYPTO_ALGOMODE_HMAC) << 8) | ((uint32)CRYPTO_ALGOFAM_NOT_SET))                                       ,      0x00u,              3u },  /* [CRYPTO_MACVERIFY] */
  { /*    15 */ ((((uint32)CRYPTO_SIGNATUREVERIFY) << 24) | (((uint32)CRYPTO_ALGOFAM_RSA) << 16) | (((uint32)CRYPTO_ALGOMODE_RSASSA_PKCS1_v1_5) << 8) | ((uint32)CRYPTO_ALGOFAM_SHA1))                        ,      0x00u,              4u },  /* [CRYPTO_SIGNATUREVERIFY] */
  { /*    16 */ ((((uint32)CRYPTO_SIGNATUREVERIFY) << 24) | (((uint32)CRYPTO_ALGOFAM_RSA) << 16) | (((uint32)CRYPTO_ALGOMODE_RSASSA_PSS) << 8) | ((uint32)CRYPTO_ALGOFAM_SHA2_256))                           ,      0x00u,              5u },  /* [CRYPTO_SIGNATUREVERIFY] */
  { /*    17 */ ((((uint32)CRYPTO_SIGNATUREVERIFY) << 24) | (((uint32)CRYPTO_ALGOFAM_ED25519) << 16) | (((uint32)CRYPTO_ALGOMODE_CUSTOM_CRYPTO_30_LIBCV_ED25519_PH) << 8) | ((uint32)CRYPTO_ALGOFAM_SHA2_512)),      0x00u,              6u }   /* [CRYPTO_SIGNATUREVERIFY] */
};
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_PrimitiveServiceInfo
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_PrimitiveServiceInfo
  \details
  Element                  Description
  PrimitiveInfoEndIdx      the end index of the 0:n relation pointing to Crypto_30_LibCv_PrimitiveInfo
  PrimitiveInfoStartIdx    the start index of the 0:n relation pointing to Crypto_30_LibCv_PrimitiveInfo
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Crypto_30_LibCv_PrimitiveServiceInfoType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_PrimitiveServiceInfo[24] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PrimitiveInfoEndIdx                                           PrimitiveInfoStartIdx                                                 Referable Keys */
  { /*     0 */                                                          13u,                                                            12u },  /* [CRYPTO_HASH] */
  { /*     1 */ CRYPTO_30_LIBCV_NO_PRIMITIVEINFOENDIDXOFPRIMITIVESERVICEINFO, CRYPTO_30_LIBCV_NO_PRIMITIVEINFOSTARTIDXOFPRIMITIVESERVICEINFO },  /* [CRYPTO_MACGENERATE] */
  { /*     2 */                                                          15u,                                                            13u },  /* [CRYPTO_MACVERIFY] */
  { /*     3 */ CRYPTO_30_LIBCV_NO_PRIMITIVEINFOENDIDXOFPRIMITIVESERVICEINFO, CRYPTO_30_LIBCV_NO_PRIMITIVEINFOSTARTIDXOFPRIMITIVESERVICEINFO },  /* [CRYPTO_ENCRYPT] */
  { /*     4 */                                                          12u,                                                             0u },  /* [CRYPTO_DECRYPT] */
  { /*     5 */ CRYPTO_30_LIBCV_NO_PRIMITIVEINFOENDIDXOFPRIMITIVESERVICEINFO, CRYPTO_30_LIBCV_NO_PRIMITIVEINFOSTARTIDXOFPRIMITIVESERVICEINFO },  /* [CRYPTO_AEADENCRYPT] */
  { /*     6 */ CRYPTO_30_LIBCV_NO_PRIMITIVEINFOENDIDXOFPRIMITIVESERVICEINFO, CRYPTO_30_LIBCV_NO_PRIMITIVEINFOSTARTIDXOFPRIMITIVESERVICEINFO },  /* [CRYPTO_AEADDECRYPT] */
  { /*     7 */ CRYPTO_30_LIBCV_NO_PRIMITIVEINFOENDIDXOFPRIMITIVESERVICEINFO, CRYPTO_30_LIBCV_NO_PRIMITIVEINFOSTARTIDXOFPRIMITIVESERVICEINFO },  /* [CRYPTO_SIGNATUREGENERATE] */
  { /*     8 */                                                          18u,                                                            15u },  /* [CRYPTO_SIGNATUREVERIFY] */
  { /*     9 */ CRYPTO_30_LIBCV_NO_PRIMITIVEINFOENDIDXOFPRIMITIVESERVICEINFO, CRYPTO_30_LIBCV_NO_PRIMITIVEINFOSTARTIDXOFPRIMITIVESERVICEINFO },  /* [CRYPTO_SECCOUNTERINCREMENT] */
  { /*    10 */ CRYPTO_30_LIBCV_NO_PRIMITIVEINFOENDIDXOFPRIMITIVESERVICEINFO, CRYPTO_30_LIBCV_NO_PRIMITIVEINFOSTARTIDXOFPRIMITIVESERVICEINFO },  /* [CRYPTO_SECCOUNTERREAD] */
  { /*    11 */ CRYPTO_30_LIBCV_NO_PRIMITIVEINFOENDIDXOFPRIMITIVESERVICEINFO, CRYPTO_30_LIBCV_NO_PRIMITIVEINFOSTARTIDXOFPRIMITIVESERVICEINFO },  /* [CRYPTO_RANDOMGENERATE] */
  { /*    12 */ CRYPTO_30_LIBCV_NO_PRIMITIVEINFOENDIDXOFPRIMITIVESERVICEINFO, CRYPTO_30_LIBCV_NO_PRIMITIVEINFOSTARTIDXOFPRIMITIVESERVICEINFO },  /* [CRYPTO_RANDOMSEED] */
  { /*    13 */ CRYPTO_30_LIBCV_NO_PRIMITIVEINFOENDIDXOFPRIMITIVESERVICEINFO, CRYPTO_30_LIBCV_NO_PRIMITIVEINFOSTARTIDXOFPRIMITIVESERVICEINFO },  /* [CRYPTO_KEYGENERATE] */
  { /*    14 */ CRYPTO_30_LIBCV_NO_PRIMITIVEINFOENDIDXOFPRIMITIVESERVICEINFO, CRYPTO_30_LIBCV_NO_PRIMITIVEINFOSTARTIDXOFPRIMITIVESERVICEINFO },  /* [CRYPTO_KEYDERIVE] */
  { /*    15 */ CRYPTO_30_LIBCV_NO_PRIMITIVEINFOENDIDXOFPRIMITIVESERVICEINFO, CRYPTO_30_LIBCV_NO_PRIMITIVEINFOSTARTIDXOFPRIMITIVESERVICEINFO },  /* [CRYPTO_KEYEXCHANGECALCPUBVAL] */
  { /*    16 */ CRYPTO_30_LIBCV_NO_PRIMITIVEINFOENDIDXOFPRIMITIVESERVICEINFO, CRYPTO_30_LIBCV_NO_PRIMITIVEINFOSTARTIDXOFPRIMITIVESERVICEINFO },  /* [CRYPTO_KEYEXCHANGECALCSECRET] */
  { /*    17 */ CRYPTO_30_LIBCV_NO_PRIMITIVEINFOENDIDXOFPRIMITIVESERVICEINFO, CRYPTO_30_LIBCV_NO_PRIMITIVEINFOSTARTIDXOFPRIMITIVESERVICEINFO },  /* [CRYPTO_CERTIFICATEPARSE] */
  { /*    18 */ CRYPTO_30_LIBCV_NO_PRIMITIVEINFOENDIDXOFPRIMITIVESERVICEINFO, CRYPTO_30_LIBCV_NO_PRIMITIVEINFOSTARTIDXOFPRIMITIVESERVICEINFO },  /* [CRYPTO_CERTIFICATEVERIFY] */
  { /*    19 */ CRYPTO_30_LIBCV_NO_PRIMITIVEINFOENDIDXOFPRIMITIVESERVICEINFO, CRYPTO_30_LIBCV_NO_PRIMITIVEINFOSTARTIDXOFPRIMITIVESERVICEINFO },  /* [CRYPTO_KEYSETVALID] */
  { /*    20 */ CRYPTO_30_LIBCV_NO_PRIMITIVEINFOENDIDXOFPRIMITIVESERVICEINFO, CRYPTO_30_LIBCV_NO_PRIMITIVEINFOSTARTIDXOFPRIMITIVESERVICEINFO },  /* [CRYPTO_KEYSETINVALID] */
  { /*    21 */ CRYPTO_30_LIBCV_NO_PRIMITIVEINFOENDIDXOFPRIMITIVESERVICEINFO, CRYPTO_30_LIBCV_NO_PRIMITIVEINFOSTARTIDXOFPRIMITIVESERVICEINFO },  /* [CRYPTO_DUMMY] */
  { /*    22 */ CRYPTO_30_LIBCV_NO_PRIMITIVEINFOENDIDXOFPRIMITIVESERVICEINFO, CRYPTO_30_LIBCV_NO_PRIMITIVEINFOSTARTIDXOFPRIMITIVESERVICEINFO },  /* [CRYPTO_KEYWRAP] */
  { /*    23 */ CRYPTO_30_LIBCV_NO_PRIMITIVEINFOENDIDXOFPRIMITIVESERVICEINFO, CRYPTO_30_LIBCV_NO_PRIMITIVEINFOSTARTIDXOFPRIMITIVESERVICEINFO }   /* [CRYPTO_KEYUNWRAP] */
};
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_RsaPkcs1Verify
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_RsaPkcs1Verify
  \details
  Element      Description
  Workspace
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Crypto_30_LibCv_RsaPkcs1VerifyType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_RsaPkcs1Verify[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Workspace                                                                                                          Referable Keys */
  { /*     0 */ &Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv[0].DataOfStructUnionWS_Crypto_30_LibCv.primWS.RsaPkcs1Verify }   /* [/ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv] */
};
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_RsaPssVerify
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_RsaPssVerify
  \details
  Element      Description
  Workspace
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Crypto_30_LibCv_RsaPssVerifyType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_RsaPssVerify[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Workspace                                                                                                        Referable Keys */
  { /*     0 */ &Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv[0].DataOfStructUnionWS_Crypto_30_LibCv.primWS.RsaPssVerify }   /* [/ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv] */
};
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_BufferLength
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_BufferLength
  \brief  Buffer which holds the current seed of the Fips186 algorithm to restore the needed workspace.
*/ 
#define CRYPTO_30_LIBCV_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Crypto_30_LibCv_BufferLengthType, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_BufferLength[2];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv_Aes, AesDecrypt] */
  /*     1 */  /* [/ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv, SHA512, CmacAesVerify, HmacSha1Verify, Ed25519PhVerify, RsaPssVerifySha256, RsaPkcs1VerifySha1] */

#define CRYPTO_30_LIBCV_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_Dispatch_QueuePrimitiveInfoIdx
**********************************************************************************************************************/
#define CRYPTO_30_LIBCV_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Crypto_30_LibCv_SizeOfPrimitiveInfoType, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_Dispatch_QueuePrimitiveInfoIdx[2];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv_Aes, AesDecrypt] */
  /*     1 */  /* [/ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv, SHA512, CmacAesVerify, HmacSha1Verify, Ed25519PhVerify, RsaPssVerifySha256, RsaPkcs1VerifySha1] */

#define CRYPTO_30_LIBCV_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_DriverObjectState
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_DriverObjectState
  \brief  State of the current workspace usage.
*/ 
#define CRYPTO_30_LIBCV_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Crypto_30_LibCv_DriverObjectStateType, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_DriverObjectState[2];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv_Aes, AesDecrypt] */
  /*     1 */  /* [/ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv, SHA512, CmacAesVerify, HmacSha1Verify, Ed25519PhVerify, RsaPssVerifySha256, RsaPkcs1VerifySha1] */

#define CRYPTO_30_LIBCV_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_KeyLock
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_KeyLock
  \brief  Stores locking counter of each key
*/ 
#define CRYPTO_30_LIBCV_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Crypto_30_LibCv_KeyLockUType, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_KeyLock;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Crypto/CryptoKeys/CryptoKey_Fbl_Decrypt_Aes128] */
  /*     1 */  /* [/ActiveEcuC/Crypto/CryptoKeys/CryptoKey_Fbl_Signature_Class_C] */
  /*     2 */  /* [/ActiveEcuC/Crypto/CryptoKeys/CryptoKey_Fbl_Signature_Ed25519] */
  /*     3 */  /* [/ActiveEcuC/Crypto/CryptoKeys/CryptoKey_Fbl_Signature_Rsa1024] */
  /*     4 */  /* [/ActiveEcuC/Crypto/CryptoKeys/CryptoKey_Fbl_Signature_Rsa2048] */
  /*     5 */  /* [/ActiveEcuC/Crypto/CryptoKeys/CryptoKey_Fbl_Signature_Rsa3072] */
  /*     6 */  /* [/ActiveEcuC/Crypto/CryptoKeys/CryptoKey_Fbl_HashDummy] */

#define CRYPTO_30_LIBCV_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_KeyStorage
**********************************************************************************************************************/
#define CRYPTO_30_LIBCV_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Crypto_30_LibCv_KeyStorageType, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_KeyStorage[924];  /* PRQA S 1514, 1533, 0612, 0613 */  /* MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_BigStructure, MD_CSL_BigStructure */
  /* Index        Referable Keys */
  /*     0 */  /* [CryptoKey_Fbl_Decrypt_Aes128__Crypto_30_LibCv_Fbl_Decrypt_Aes128_Key__WrittenLength__, RAM_KEY] */
  /*     1 */  /* [CryptoKey_Fbl_Decrypt_Aes128__Crypto_30_LibCv_Fbl_Decrypt_Aes128_Key__WrittenLength__, RAM_KEY] */
  /*     2 */  /* [CryptoKey_Fbl_Decrypt_Aes128__Crypto_30_LibCv_Fbl_Decrypt_Aes128_Key__Valid__, RAM_KEY] */
  /*     3 */  /* [CryptoKey_Fbl_Decrypt_Aes128__Crypto_30_LibCv_Fbl_Decrypt_Aes128_Key__Extension__, RAM_KEY] */
  /*     4 */  /* [CryptoKey_Fbl_Decrypt_Aes128__Crypto_30_LibCv_Fbl_Decrypt_Aes128_Key__Data__, RAM_KEY] */
  /*   ... */  /* [CryptoKey_Fbl_Decrypt_Aes128__Crypto_30_LibCv_Fbl_Decrypt_Aes128_Key__Data__, RAM_KEY] */
  /*    19 */  /* [CryptoKey_Fbl_Decrypt_Aes128__Crypto_30_LibCv_Fbl_Decrypt_Aes128_Key__Data__, RAM_KEY] */
  /*    20 */  /* [CryptoKey_Fbl_Decrypt_Aes128__Crypto_30_LibCv_Fbl_Decrypt_Aes128_IV__WrittenLength__, RAM_KEY] */
  /*    21 */  /* [CryptoKey_Fbl_Decrypt_Aes128__Crypto_30_LibCv_Fbl_Decrypt_Aes128_IV__WrittenLength__, RAM_KEY] */
  /*    22 */  /* [CryptoKey_Fbl_Decrypt_Aes128__Crypto_30_LibCv_Fbl_Decrypt_Aes128_IV__Valid__, RAM_KEY] */
  /*    23 */  /* [CryptoKey_Fbl_Decrypt_Aes128__Crypto_30_LibCv_Fbl_Decrypt_Aes128_IV__Extension__, RAM_KEY] */
  /*    24 */  /* [CryptoKey_Fbl_Decrypt_Aes128__Crypto_30_LibCv_Fbl_Decrypt_Aes128_IV__Data__, RAM_KEY] */
  /*   ... */  /* [CryptoKey_Fbl_Decrypt_Aes128__Crypto_30_LibCv_Fbl_Decrypt_Aes128_IV__Data__, RAM_KEY] */
  /*    39 */  /* [CryptoKey_Fbl_Decrypt_Aes128__Crypto_30_LibCv_Fbl_Decrypt_Aes128_IV__Data__, RAM_KEY] */
  /*    40 */  /* [CryptoKey_Fbl_Signature_Class_C__Crypto_30_LibCv_Fbl_Signature_ClassC__WrittenLength__, RAM_KEY] */
  /*    41 */  /* [CryptoKey_Fbl_Signature_Class_C__Crypto_30_LibCv_Fbl_Signature_ClassC__WrittenLength__, RAM_KEY] */
  /*    42 */  /* [CryptoKey_Fbl_Signature_Class_C__Crypto_30_LibCv_Fbl_Signature_ClassC__Valid__, RAM_KEY] */
  /*    43 */  /* [CryptoKey_Fbl_Signature_Class_C__Crypto_30_LibCv_Fbl_Signature_ClassC__Extension__, RAM_KEY] */
  /*    44 */  /* [CryptoKey_Fbl_Signature_Class_C__Crypto_30_LibCv_Fbl_Signature_ClassC__Data__, RAM_KEY] */
  /*   ... */  /* [CryptoKey_Fbl_Signature_Class_C__Crypto_30_LibCv_Fbl_Signature_ClassC__Data__, RAM_KEY] */
  /*    59 */  /* [CryptoKey_Fbl_Signature_Class_C__Crypto_30_LibCv_Fbl_Signature_ClassC__Data__, RAM_KEY] */
  /*    60 */  /* [CryptoKey_Fbl_Signature_Ed25519__Crypto_30_LibCv_Fbl_Signature_Ed25519__WrittenLength__, RAM_KEY] */
  /*    61 */  /* [CryptoKey_Fbl_Signature_Ed25519__Crypto_30_LibCv_Fbl_Signature_Ed25519__WrittenLength__, RAM_KEY] */
  /*    62 */  /* [CryptoKey_Fbl_Signature_Ed25519__Crypto_30_LibCv_Fbl_Signature_Ed25519__Valid__, RAM_KEY] */
  /*    63 */  /* [CryptoKey_Fbl_Signature_Ed25519__Crypto_30_LibCv_Fbl_Signature_Ed25519__Extension__, RAM_KEY] */
  /*    64 */  /* [CryptoKey_Fbl_Signature_Ed25519__Crypto_30_LibCv_Fbl_Signature_Ed25519__Data__, RAM_KEY] */
  /*   ... */  /* [CryptoKey_Fbl_Signature_Ed25519__Crypto_30_LibCv_Fbl_Signature_Ed25519__Data__, RAM_KEY] */
  /*    95 */  /* [CryptoKey_Fbl_Signature_Ed25519__Crypto_30_LibCv_Fbl_Signature_Ed25519__Data__, RAM_KEY] */
  /*    96 */  /* [CryptoKey_Fbl_Signature_Rsa1024__Crypto_30_LibCv_Fbl_Signature_Rsa1024_Mod__WrittenLength__, RAM_KEY] */
  /*    97 */  /* [CryptoKey_Fbl_Signature_Rsa1024__Crypto_30_LibCv_Fbl_Signature_Rsa1024_Mod__WrittenLength__, RAM_KEY] */
  /*    98 */  /* [CryptoKey_Fbl_Signature_Rsa1024__Crypto_30_LibCv_Fbl_Signature_Rsa1024_Mod__Valid__, RAM_KEY] */
  /*    99 */  /* [CryptoKey_Fbl_Signature_Rsa1024__Crypto_30_LibCv_Fbl_Signature_Rsa1024_Mod__Extension__, RAM_KEY] */
  /*   100 */  /* [CryptoKey_Fbl_Signature_Rsa1024__Crypto_30_LibCv_Fbl_Signature_Rsa1024_Mod__Data__, RAM_KEY] */
  /*   ... */  /* [CryptoKey_Fbl_Signature_Rsa1024__Crypto_30_LibCv_Fbl_Signature_Rsa1024_Mod__Data__, RAM_KEY] */
  /*   227 */  /* [CryptoKey_Fbl_Signature_Rsa1024__Crypto_30_LibCv_Fbl_Signature_Rsa1024_Mod__Data__, RAM_KEY] */
  /*   228 */  /* [CryptoKey_Fbl_Signature_Rsa1024__Crypto_30_LibCv_Fbl_Signature_Rsa1024_Exp__WrittenLength__, RAM_KEY] */
  /*   229 */  /* [CryptoKey_Fbl_Signature_Rsa1024__Crypto_30_LibCv_Fbl_Signature_Rsa1024_Exp__WrittenLength__, RAM_KEY] */
  /*   230 */  /* [CryptoKey_Fbl_Signature_Rsa1024__Crypto_30_LibCv_Fbl_Signature_Rsa1024_Exp__Valid__, RAM_KEY] */
  /*   231 */  /* [CryptoKey_Fbl_Signature_Rsa1024__Crypto_30_LibCv_Fbl_Signature_Rsa1024_Exp__Extension__, RAM_KEY] */
  /*   232 */  /* [CryptoKey_Fbl_Signature_Rsa1024__Crypto_30_LibCv_Fbl_Signature_Rsa1024_Exp__Data__, RAM_KEY] */
  /*   ... */  /* [CryptoKey_Fbl_Signature_Rsa1024__Crypto_30_LibCv_Fbl_Signature_Rsa1024_Exp__Data__, RAM_KEY] */
  /*   235 */  /* [CryptoKey_Fbl_Signature_Rsa1024__Crypto_30_LibCv_Fbl_Signature_Rsa1024_Exp__Data__, RAM_KEY] */
  /*   236 */  /* [CryptoKey_Fbl_Signature_Rsa2048__Crypto_30_LibCv_Fbl_Signature_Rsa2048_Mod__WrittenLength__, RAM_KEY] */
  /*   237 */  /* [CryptoKey_Fbl_Signature_Rsa2048__Crypto_30_LibCv_Fbl_Signature_Rsa2048_Mod__WrittenLength__, RAM_KEY] */
  /*   238 */  /* [CryptoKey_Fbl_Signature_Rsa2048__Crypto_30_LibCv_Fbl_Signature_Rsa2048_Mod__Valid__, RAM_KEY] */
  /*   239 */  /* [CryptoKey_Fbl_Signature_Rsa2048__Crypto_30_LibCv_Fbl_Signature_Rsa2048_Mod__Extension__, RAM_KEY] */
  /*   240 */  /* [CryptoKey_Fbl_Signature_Rsa2048__Crypto_30_LibCv_Fbl_Signature_Rsa2048_Mod__Data__, RAM_KEY] */
  /*   ... */  /* [CryptoKey_Fbl_Signature_Rsa2048__Crypto_30_LibCv_Fbl_Signature_Rsa2048_Mod__Data__, RAM_KEY] */
  /*   495 */  /* [CryptoKey_Fbl_Signature_Rsa2048__Crypto_30_LibCv_Fbl_Signature_Rsa2048_Mod__Data__, RAM_KEY] */
  /*   496 */  /* [CryptoKey_Fbl_Signature_Rsa2048__Crypto_30_LibCv_Fbl_Signature_Rsa2048_Exp__WrittenLength__, RAM_KEY] */
  /*   497 */  /* [CryptoKey_Fbl_Signature_Rsa2048__Crypto_30_LibCv_Fbl_Signature_Rsa2048_Exp__WrittenLength__, RAM_KEY] */
  /* Index        Referable Keys */
  /*   498 */  /* [CryptoKey_Fbl_Signature_Rsa2048__Crypto_30_LibCv_Fbl_Signature_Rsa2048_Exp__Valid__, RAM_KEY] */
  /*   499 */  /* [CryptoKey_Fbl_Signature_Rsa2048__Crypto_30_LibCv_Fbl_Signature_Rsa2048_Exp__Extension__, RAM_KEY] */
  /*   500 */  /* [CryptoKey_Fbl_Signature_Rsa2048__Crypto_30_LibCv_Fbl_Signature_Rsa2048_Exp__Data__, RAM_KEY] */
  /*   ... */  /* [CryptoKey_Fbl_Signature_Rsa2048__Crypto_30_LibCv_Fbl_Signature_Rsa2048_Exp__Data__, RAM_KEY] */
  /*   503 */  /* [CryptoKey_Fbl_Signature_Rsa2048__Crypto_30_LibCv_Fbl_Signature_Rsa2048_Exp__Data__, RAM_KEY] */
  /*   504 */  /* [CryptoKey_Fbl_Signature_Rsa3072__Crypto_30_LibCv_Fbl_Signature_Rsa3072_Mod__WrittenLength__, RAM_KEY] */
  /*   505 */  /* [CryptoKey_Fbl_Signature_Rsa3072__Crypto_30_LibCv_Fbl_Signature_Rsa3072_Mod__WrittenLength__, RAM_KEY] */
  /*   506 */  /* [CryptoKey_Fbl_Signature_Rsa3072__Crypto_30_LibCv_Fbl_Signature_Rsa3072_Mod__Valid__, RAM_KEY] */
  /*   507 */  /* [CryptoKey_Fbl_Signature_Rsa3072__Crypto_30_LibCv_Fbl_Signature_Rsa3072_Mod__Extension__, RAM_KEY] */
  /*   508 */  /* [CryptoKey_Fbl_Signature_Rsa3072__Crypto_30_LibCv_Fbl_Signature_Rsa3072_Mod__Data__, RAM_KEY] */
  /*   ... */  /* [CryptoKey_Fbl_Signature_Rsa3072__Crypto_30_LibCv_Fbl_Signature_Rsa3072_Mod__Data__, RAM_KEY] */
  /*   891 */  /* [CryptoKey_Fbl_Signature_Rsa3072__Crypto_30_LibCv_Fbl_Signature_Rsa3072_Mod__Data__, RAM_KEY] */
  /*   892 */  /* [CryptoKey_Fbl_Signature_Rsa3072__Crypto_30_LibCv_Fbl_Signature_Rsa3072_Exp__WrittenLength__, RAM_KEY] */
  /*   893 */  /* [CryptoKey_Fbl_Signature_Rsa3072__Crypto_30_LibCv_Fbl_Signature_Rsa3072_Exp__WrittenLength__, RAM_KEY] */
  /*   894 */  /* [CryptoKey_Fbl_Signature_Rsa3072__Crypto_30_LibCv_Fbl_Signature_Rsa3072_Exp__Valid__, RAM_KEY] */
  /*   895 */  /* [CryptoKey_Fbl_Signature_Rsa3072__Crypto_30_LibCv_Fbl_Signature_Rsa3072_Exp__Extension__, RAM_KEY] */
  /*   896 */  /* [CryptoKey_Fbl_Signature_Rsa3072__Crypto_30_LibCv_Fbl_Signature_Rsa3072_Exp__Data__, RAM_KEY] */
  /*   ... */  /* [CryptoKey_Fbl_Signature_Rsa3072__Crypto_30_LibCv_Fbl_Signature_Rsa3072_Exp__Data__, RAM_KEY] */
  /*   899 */  /* [CryptoKey_Fbl_Signature_Rsa3072__Crypto_30_LibCv_Fbl_Signature_Rsa3072_Exp__Data__, RAM_KEY] */
  /*   900 */  /* [CryptoKey_Fbl_HashDummy__Crypto_30_LibCv_Hash_Result__WrittenLength__, RAM_KEY] */
  /*   901 */  /* [CryptoKey_Fbl_HashDummy__Crypto_30_LibCv_Hash_Result__WrittenLength__, RAM_KEY] */
  /*   902 */  /* [CryptoKey_Fbl_HashDummy__Crypto_30_LibCv_Hash_Result__Valid__, RAM_KEY] */
  /*   903 */  /* [CryptoKey_Fbl_HashDummy__Crypto_30_LibCv_Hash_Result__Extension__, RAM_KEY] */
  /*   904 */  /* [CryptoKey_Fbl_HashDummy__Crypto_30_LibCv_Hash_Result__Data__, RAM_KEY] */
  /*   ... */  /* [CryptoKey_Fbl_HashDummy__Crypto_30_LibCv_Hash_Result__Data__, RAM_KEY] */
  /*   923 */  /* [CryptoKey_Fbl_HashDummy__Crypto_30_LibCv_Hash_Result__Data__, RAM_KEY] */

#define CRYPTO_30_LIBCV_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_Lock
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_Lock
  \brief  Id of job that currently occupies the workspace
*/ 
#define CRYPTO_30_LIBCV_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Crypto_30_LibCv_LockType, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_Lock[2];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv_Aes, AesDecrypt] */
  /*     1 */  /* [/ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv, SHA512, CmacAesVerify, HmacSha1Verify, Ed25519PhVerify, RsaPssVerifySha256, RsaPkcs1VerifySha1] */

#define CRYPTO_30_LIBCV_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_PartitionInitialized
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_PartitionInitialized
  \brief  Tracks which partition has already been initialized
*/ 
#define CRYPTO_30_LIBCV_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Crypto_30_LibCv_PartitionInitializedType, CRYPTO_30_LIBCV_VAR_ZERO_INIT) Crypto_30_LibCv_PartitionInitialized = 0u;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define CRYPTO_30_LIBCV_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_ProcessJob_Trigger_Write
**********************************************************************************************************************/
#define CRYPTO_30_LIBCV_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Crypto_30_LibCv_ProcessJob_Trigger_WriteType, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_ProcessJob_Trigger_Write[2];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv_Aes, AesDecrypt] */
  /*     1 */  /* [/ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv, SHA512, CmacAesVerify, HmacSha1Verify, Ed25519PhVerify, RsaPssVerifySha256, RsaPkcs1VerifySha1] */

#define CRYPTO_30_LIBCV_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_Queue
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_Queue
  \brief  Acts as job queue for all driver objects.
*/ 
#define CRYPTO_30_LIBCV_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Crypto_30_LibCv_QueueUType, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_Queue;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv_Aes] */
  /*     1 */  /* [/ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv] */

#define CRYPTO_30_LIBCV_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_Redirect_Buffer
**********************************************************************************************************************/
#define CRYPTO_30_LIBCV_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Crypto_30_LibCv_Redirect_Type, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_Redirect_Buffer[2];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv_Aes, AesDecrypt] */
  /*     1 */  /* [/ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv, SHA512, CmacAesVerify, HmacSha1Verify, Ed25519PhVerify, RsaPssVerifySha256, RsaPkcs1VerifySha1] */

#define CRYPTO_30_LIBCV_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv
  \brief  Struct which holds the Union variable which acts as workspace for driver object /ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv.
  \details
  Element    Description
  Data       Union variable which acts as workspace for driver object /ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv.
*/ 
#define CRYPTO_30_LIBCV_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCvType, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define CRYPTO_30_LIBCV_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv_Aes
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv_Aes
  \brief  Struct which holds the Union variable which acts as workspace for driver object /ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv_Aes.
  \details
  Element    Description
  Data       Union variable which acts as workspace for driver object /ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv_Aes.
*/ 
#define CRYPTO_30_LIBCV_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv_AesType, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv_Aes[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define CRYPTO_30_LIBCV_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_WrittenLength
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_WrittenLength
  \brief  Holds the length which needs to be written in a next step for some algorithms.
*/ 
#define CRYPTO_30_LIBCV_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Crypto_30_LibCv_WrittenLengthType, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_WrittenLength[2];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv_Aes, AesDecrypt] */
  /*     1 */  /* [/ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv, SHA512, CmacAesVerify, HmacSha1Verify, Ed25519PhVerify, RsaPssVerifySha256, RsaPkcs1VerifySha1] */

#define CRYPTO_30_LIBCV_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */





/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/



 
/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


#define CRYPTO_30_LIBCV_START_SEC_CODE
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
/***********************************************************************************************************************
 *  Function Group MainFunctionGroup
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  Crypto_30_LibCv_MainFunction
 **********************************************************************************************************************/
FUNC(void, CRYPTO_30_LIBCV_CODE) Crypto_30_LibCv_MainFunction(void)
{
    /* Call the main function handler */
    Crypto_30_LibCv_MainFunctionHandler(Crypto_30_LibCv_PartitionIndexOfCSLForCRYPTO_30_LIBCV_SINGLE_PARTITION);
}

/***********************************************************************************************************************
 *  Function Group InitMemoryFunctionGroup
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  Crypto_30_LibCv_InitMemory
 **********************************************************************************************************************/
FUNC(void, CRYPTO_30_LIBCV_CODE) Crypto_30_LibCv_InitMemory(void)
{
    /* Call the InitMemory function handler */
    Crypto_30_LibCv_InitMemoryHandler(Crypto_30_LibCv_PartitionIndexOfCSLForCRYPTO_30_LIBCV_SINGLE_PARTITION); /*lint !e522 */
}

#define CRYPTO_30_LIBCV_STOP_SEC_CODE
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/**********************************************************************************************************************
 *  END OF FILE: Crypto_30_LibCv_Cfg.c
 *********************************************************************************************************************/
