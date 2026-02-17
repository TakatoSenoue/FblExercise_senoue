/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/** \file
 *  \brief        MemMap section definition to locate (link) data or code in memory
 *  \details      This file contains compiler specific section definition for every segment that can be mapped
 *                within the Flash Bootloader to a specific location.
 *
 *  \note
 *                Please note, that this file contains a collection of definitions to be used with the Flash Bootloader.
 *                This code may influence the behavior of the Bootloader in principle. Therefore, great care
 *                must be taken to verify the correctness of the implementation.
 *
 *                The contents of the originally delivered files are only examples resp. implementation proposals.
 *                With regard to the fact that these definitions are meant for demonstration purposes only,
 *                Vector Informatik's liability shall be expressly excluded in cases of ordinary negligence, to the
 *                extent admissible by law or statute.
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \par Copyright
 *  \verbatim
 *  Copyright (c) 2026 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  THIS IS A GENERATED FILE
 *  Generator version : 01.10.02
 *********************************************************************************************************************/

/* PRQA S 0841 EOF */ /* MD_MSR_Undef */
/* PRQA S 0883 EOF */ /* MD_MemMap_0883 */
/* PRQA S 3116 EOF */ /* MD_MSR_Pragma */

#define FBL_MEMMAP_ERROR

#if defined( ADC_DMA_DB_START_SEC_VAR_NOINIT_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_DMA_DB_START_SEC_VAR_NOINIT_32BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_DMA_DB_STOP_SEC_VAR_NOINIT_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_DMA_DB_STOP_SEC_VAR_NOINIT_32BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_DMA_DB_START_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_DMA_DB_START_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_DMA_DB_STOP_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_DMA_DB_STOP_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_DMA_START_SEC_VAR_NOINIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_DMA_START_SEC_VAR_NOINIT_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_DMA_STOP_SEC_VAR_NOINIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_DMA_STOP_SEC_VAR_NOINIT_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_DMA_START_SEC_VAR_NOINIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_DMA_START_SEC_VAR_NOINIT_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_DMA_STOP_SEC_VAR_NOINIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_DMA_STOP_SEC_VAR_NOINIT_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_DMA_START_SEC_VAR_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_DMA_START_SEC_VAR_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_DMA_STOP_SEC_VAR_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_DMA_STOP_SEC_VAR_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_DMA_START_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_DMA_START_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_DMA_STOP_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_DMA_STOP_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_APPL_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_APPL_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_CALLOUT_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_CALLOUT_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_CALLOUT_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_CALLOUT_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_CALLOUT_CODE_ASIL_B )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_CALLOUT_CODE_ASIL_B
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_CALLOUT_CODE_ASIL_B )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_CALLOUT_CODE_ASIL_B
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_CODE_ASIL_B )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_CODE_ASIL_B
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_CODE_ASIL_B )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_CODE_ASIL_B
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_CODE_FAST )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_CODE_FAST
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_CODE_FAST )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_CODE_FAST
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_CODE_FAST_ASIL_B )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_CODE_FAST_ASIL_B
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_CODE_FAST_ASIL_B )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_CODE_FAST_ASIL_B
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_CONFIG_DATA_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_CONFIG_DATA_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_CONFIG_DATA_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_CONFIG_DATA_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_CONFIG_DATA_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_CONFIG_DATA_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_CONFIG_DATA_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_CONFIG_DATA_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_CONFIG_DATA_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_CONFIG_DATA_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_CONFIG_DATA_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_CONFIG_DATA_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_CONFIG_DATA_ASIL_B_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_CONFIG_DATA_ASIL_B_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_CONFIG_DATA_ASIL_B_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_CONFIG_DATA_ASIL_B_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_CONFIG_DATA_ASIL_B_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_CONFIG_DATA_ASIL_B_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_CONFIG_DATA_ASIL_B_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_CONFIG_DATA_ASIL_B_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_CONFIG_DATA_ASIL_B_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_CONFIG_DATA_ASIL_B_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_CONFIG_DATA_ASIL_B_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_CONFIG_DATA_ASIL_B_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_CONFIG_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_CONFIG_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_CONST_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_CONST_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_CONST_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_CONST_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_CONST_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_CONST_32BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_CONST_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_CONST_32BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_CONST_ASIL_B_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_CONST_ASIL_B_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_CONST_ASIL_B_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_CONST_ASIL_B_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_CONST_ASIL_B_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_CONST_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_CONST_ASIL_B_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_CONST_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_CONST_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_CONST_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_DB_VAR_NOINIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_DB_VAR_NOINIT_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_DB_VAR_NOINIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_DB_VAR_NOINIT_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_DB_VAR_NOINIT_ASIL_B_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_DB_VAR_NOINIT_ASIL_B_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_DB_VAR_NOINIT_ASIL_B_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_DB_VAR_NOINIT_ASIL_B_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_VAR_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_VAR_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_VAR_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_VAR_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_VAR_DMA_DB_NOINIT_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_VAR_DMA_DB_NOINIT_32BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_VAR_DMA_DB_NOINIT_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_VAR_DMA_DB_NOINIT_32BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_VAR_DMA_DB_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_VAR_DMA_DB_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_VAR_DMA_DB_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_VAR_DMA_DB_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_VAR_DMA_DB_NO_INIT_ASIL_B_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_VAR_DMA_DB_NO_INIT_ASIL_B_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_VAR_DMA_DB_NO_INIT_ASIL_B_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_VAR_DMA_DB_NO_INIT_ASIL_B_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_VAR_DMA_NOINIT_16BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_VAR_DMA_NOINIT_16BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_VAR_DMA_NOINIT_16BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_VAR_DMA_NOINIT_16BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_VAR_DMA_NOINIT_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_VAR_DMA_NOINIT_32BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_VAR_DMA_NOINIT_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_VAR_DMA_NOINIT_32BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_VAR_DMA_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_VAR_DMA_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_VAR_DMA_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_VAR_DMA_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_VAR_DMA_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_VAR_DMA_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_VAR_DMA_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_VAR_DMA_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_VAR_DMA_NO_INIT_ASIL_B_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_VAR_DMA_NO_INIT_ASIL_B_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_VAR_DMA_NO_INIT_ASIL_B_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_VAR_DMA_NO_INIT_ASIL_B_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_VAR_DMA_NO_INIT_ASIL_B_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_VAR_DMA_NO_INIT_ASIL_B_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_VAR_DMA_NO_INIT_ASIL_B_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_VAR_DMA_NO_INIT_ASIL_B_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_VAR_INIT_ASIL_B_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_VAR_INIT_ASIL_B_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_VAR_INIT_ASIL_B_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_VAR_INIT_ASIL_B_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_VAR_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_VAR_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_VAR_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_VAR_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_VAR_NOINIT_16BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_VAR_NOINIT_16BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_VAR_NOINIT_16BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_VAR_NOINIT_16BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_VAR_NOINIT_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_VAR_NOINIT_32BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_VAR_NOINIT_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_VAR_NOINIT_32BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_VAR_NOINIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_VAR_NOINIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_VAR_NOINIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_VAR_NOINIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_VAR_NOINIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_VAR_NOINIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_VAR_NOINIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_VAR_NOINIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_VAR_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_VAR_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_VAR_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_VAR_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_VAR_NO_INIT_ASIL_B_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_VAR_NO_INIT_ASIL_B_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_VAR_NO_INIT_ASIL_B_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_VAR_NO_INIT_ASIL_B_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_VAR_NO_INIT_ASIL_B_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_VAR_NO_INIT_ASIL_B_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_VAR_NO_INIT_ASIL_B_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_VAR_NO_INIT_ASIL_B_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_VAR_NO_INIT_ASIL_B_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_VAR_NO_INIT_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_VAR_NO_INIT_ASIL_B_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_VAR_NO_INIT_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_VAR_NO_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_VAR_NO_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_VAR_NO_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_VAR_NO_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ADC_START_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_START_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ADC_STOP_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ADC_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CANIF_START_SEC_CODE )
//#pragma ghs section text=".RamCodeSection"
# undef CANIF_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CANIF_STOP_SEC_CODE )
#pragma ghs section text=default
# undef CANIF_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CANIF_START_SEC_CONST_UNSPECIFIED )
#pragma ghs startdata
#pragma ghs section rodata=".RamConstSection"
# undef CANIF_START_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CANIF_STOP_SEC_CONST_UNSPECIFIED )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef CANIF_STOP_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CANIF_START_SEC_VAR_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CANIF_START_SEC_VAR_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CANIF_STOP_SEC_VAR_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CANIF_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CANTP_START_SEC_CODE )
#pragma ghs section text=".RamCodeSection"
# undef CANTP_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CANTP_STOP_SEC_CODE )
#pragma ghs section text=default
# undef CANTP_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CANTP_START_SEC_VAR_CLEARED_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef CANTP_START_SEC_VAR_CLEARED_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CANTP_STOP_SEC_VAR_CLEARED_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef CANTP_STOP_SEC_VAR_CLEARED_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CANTP_START_SEC_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef CANTP_START_SEC_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CANTP_STOP_SEC_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef CANTP_STOP_SEC_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CAN_RSCAN_START_SEC_APPL_CODE )
#pragma ghs section text=".RamCodeSection"
# undef CAN_RSCAN_START_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CAN_RSCAN_STOP_SEC_APPL_CODE )
#pragma ghs section text=default
# undef CAN_RSCAN_STOP_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CAN_RSCAN_START_SEC_CODE_FAST )
#pragma ghs section text=".RamCodeSection"
# undef CAN_RSCAN_START_SEC_CODE_FAST
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CAN_RSCAN_STOP_SEC_CODE_FAST )
#pragma ghs section text=default
# undef CAN_RSCAN_STOP_SEC_CODE_FAST
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CAN_RSCAN_START_SEC_CONFIG_DATA_8 )
#pragma ghs startdata
#pragma ghs section rodata=".RamConstSection"
# undef CAN_RSCAN_START_SEC_CONFIG_DATA_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CAN_RSCAN_STOP_SEC_CONFIG_DATA_8 )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef CAN_RSCAN_STOP_SEC_CONFIG_DATA_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CAN_RSCAN_START_SEC_CONFIG_DATA_UNSPECIFIED )
#pragma ghs startdata
#pragma ghs section rodata=".RamConstSection"
# undef CAN_RSCAN_START_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CAN_RSCAN_STOP_SEC_CONFIG_DATA_UNSPECIFIED )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef CAN_RSCAN_STOP_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CAN_RSCAN_START_SEC_CONST_8 )
#pragma ghs startdata
#pragma ghs section rodata=".RamConstSection"
# undef CAN_RSCAN_START_SEC_CONST_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CAN_RSCAN_STOP_SEC_CONST_8 )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef CAN_RSCAN_STOP_SEC_CONST_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CAN_RSCAN_START_SEC_DBTOC_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CAN_RSCAN_START_SEC_DBTOC_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CAN_RSCAN_STOP_SEC_DBTOC_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CAN_RSCAN_STOP_SEC_DBTOC_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CAN_RSCAN_START_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef CAN_RSCAN_START_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CAN_RSCAN_STOP_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef CAN_RSCAN_STOP_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CAN_RSCAN_START_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef CAN_RSCAN_START_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CAN_RSCAN_STOP_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef CAN_RSCAN_STOP_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CAN_RSCAN_START_SEC_VAR_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef CAN_RSCAN_START_SEC_VAR_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CAN_RSCAN_STOP_SEC_VAR_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef CAN_RSCAN_STOP_SEC_VAR_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CAN_RSCAN_START_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef CAN_RSCAN_START_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CAN_RSCAN_STOP_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef CAN_RSCAN_STOP_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CAN_RSCAN_START_SEC_VAR_NO_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef CAN_RSCAN_START_SEC_VAR_NO_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CAN_RSCAN_STOP_SEC_VAR_NO_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef CAN_RSCAN_STOP_SEC_VAR_NO_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CAN_RSCAN_START_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CAN_RSCAN_START_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CAN_RSCAN_STOP_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CAN_RSCAN_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CAN_START_SEC_CODE )
#pragma ghs section text=".RamCodeSection"
# undef CAN_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CAN_STOP_SEC_CODE )
#pragma ghs section text=default
# undef CAN_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CAN_START_SEC_CODE_APPL )
#pragma ghs section text=".RamCodeSection"
# undef CAN_START_SEC_CODE_APPL
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CAN_STOP_SEC_CODE_APPL )
#pragma ghs section text=default
# undef CAN_STOP_SEC_CODE_APPL
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CAN_START_SEC_CONST_16BIT )
#pragma ghs startdata
#pragma ghs section rodata=".RamConstSection"
# undef CAN_START_SEC_CONST_16BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CAN_STOP_SEC_CONST_16BIT )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef CAN_STOP_SEC_CONST_16BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CAN_START_SEC_CONST_32BIT )
#pragma ghs startdata
#pragma ghs section rodata=".RamConstSection"
# undef CAN_START_SEC_CONST_32BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CAN_STOP_SEC_CONST_32BIT )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef CAN_STOP_SEC_CONST_32BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CAN_START_SEC_CONST_8BIT )
#pragma ghs startdata
#pragma ghs section rodata=".RamConstSection"
# undef CAN_START_SEC_CONST_8BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CAN_STOP_SEC_CONST_8BIT )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef CAN_STOP_SEC_CONST_8BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CAN_START_SEC_CONST_UNSPECIFIED )
#pragma ghs startdata
#pragma ghs section rodata=".RamConstSection"
# undef CAN_START_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CAN_STOP_SEC_CONST_UNSPECIFIED )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef CAN_STOP_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CAN_START_SEC_PBCFG )
#pragma ghs startdata
#pragma ghs section rodata=".RamConstSection"
# undef CAN_START_SEC_PBCFG
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CAN_STOP_SEC_PBCFG )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef CAN_STOP_SEC_PBCFG
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CAN_START_SEC_PBCFG_ROOT )
#pragma ghs startdata
#pragma ghs section rodata=".RamConstSection"
# undef CAN_START_SEC_PBCFG_ROOT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CAN_STOP_SEC_PBCFG_ROOT )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef CAN_STOP_SEC_PBCFG_ROOT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CAN_START_SEC_STATIC_CODE )
#pragma ghs section text=".RamCodeSection"
# undef CAN_START_SEC_STATIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CAN_STOP_SEC_STATIC_CODE )
#pragma ghs section text=default
# undef CAN_STOP_SEC_STATIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CAN_START_SEC_VAR_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CAN_START_SEC_VAR_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CAN_STOP_SEC_VAR_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CAN_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CAN_START_SEC_VAR_NOINIT_16BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CAN_START_SEC_VAR_NOINIT_16BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CAN_STOP_SEC_VAR_NOINIT_16BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CAN_STOP_SEC_VAR_NOINIT_16BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CAN_START_SEC_VAR_NOINIT_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CAN_START_SEC_VAR_NOINIT_32BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CAN_STOP_SEC_VAR_NOINIT_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CAN_STOP_SEC_VAR_NOINIT_32BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CAN_START_SEC_VAR_NOINIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CAN_START_SEC_VAR_NOINIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CAN_STOP_SEC_VAR_NOINIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CAN_STOP_SEC_VAR_NOINIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CAN_START_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CAN_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CAN_START_SEC_VAR_PBCFG )
   /* #pragma <enter your compiler specific pragma> */
# undef CAN_START_SEC_VAR_PBCFG
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CAN_STOP_SEC_VAR_PBCFG )
   /* #pragma <enter your compiler specific pragma> */
# undef CAN_STOP_SEC_VAR_PBCFG
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CORTST_START_SEC_APPL_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef CORTST_START_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CORTST_STOP_SEC_APPL_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef CORTST_STOP_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CORTST_START_SEC_BUFFER_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef CORTST_START_SEC_BUFFER_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CORTST_STOP_SEC_BUFFER_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef CORTST_STOP_SEC_BUFFER_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CORTST_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef CORTST_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CORTST_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef CORTST_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CORTST_START_SEC_CODE_FAST )
   /* #pragma <enter your compiler specific pragma> */
# undef CORTST_START_SEC_CODE_FAST
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CORTST_STOP_SEC_CODE_FAST )
   /* #pragma <enter your compiler specific pragma> */
# undef CORTST_STOP_SEC_CODE_FAST
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CORTST_START_SEC_CONFIG_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CORTST_START_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CORTST_STOP_SEC_CONFIG_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CORTST_STOP_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CORTST_START_SEC_CONST_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CORTST_START_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CORTST_STOP_SEC_CONST_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CORTST_STOP_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CORTST_START_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef CORTST_START_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CORTST_STOP_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef CORTST_STOP_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CORTST_START_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef CORTST_START_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CORTST_STOP_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef CORTST_STOP_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CORTST_START_SEC_VAR_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef CORTST_START_SEC_VAR_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CORTST_STOP_SEC_VAR_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef CORTST_STOP_SEC_VAR_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CORTST_START_SEC_VAR_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CORTST_START_SEC_VAR_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CORTST_STOP_SEC_VAR_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CORTST_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CORTST_START_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CORTST_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CORTST_STOP_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CORTST_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CORTST_START_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CORTST_START_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CORTST_STOP_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CORTST_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CORTST_START_SEC_VAR_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CORTST_START_SEC_VAR_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CORTST_STOP_SEC_VAR_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CORTST_STOP_SEC_VAR_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CRYIF_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYIF_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CRYIF_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYIF_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CRYPTO_30_CRYWRAPPER_START_SEC_APPL_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_CRYWRAPPER_START_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CRYPTO_30_CRYWRAPPER_STOP_SEC_APPL_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_CRYWRAPPER_STOP_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CRYPTO_30_CRYWRAPPER_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_CRYWRAPPER_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CRYPTO_30_CRYWRAPPER_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_CRYWRAPPER_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CRYPTO_30_CRYWRAPPER_START_SEC_CONST_16BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_CRYWRAPPER_START_SEC_CONST_16BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CRYPTO_30_CRYWRAPPER_STOP_SEC_CONST_16BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_CRYWRAPPER_STOP_SEC_CONST_16BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CRYPTO_30_CRYWRAPPER_START_SEC_CONST_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_CRYWRAPPER_START_SEC_CONST_32BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CRYPTO_30_CRYWRAPPER_STOP_SEC_CONST_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_CRYWRAPPER_STOP_SEC_CONST_32BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CRYPTO_30_CRYWRAPPER_START_SEC_CONST_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_CRYWRAPPER_START_SEC_CONST_8BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CRYPTO_30_CRYWRAPPER_STOP_SEC_CONST_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_CRYWRAPPER_STOP_SEC_CONST_8BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CRYPTO_30_CRYWRAPPER_START_SEC_CONST_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_CRYWRAPPER_START_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CRYPTO_30_CRYWRAPPER_STOP_SEC_CONST_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_CRYWRAPPER_STOP_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CRYPTO_30_CRYWRAPPER_START_SEC_VAR_NOINIT_16BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_CRYWRAPPER_START_SEC_VAR_NOINIT_16BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CRYPTO_30_CRYWRAPPER_STOP_SEC_VAR_NOINIT_16BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_CRYWRAPPER_STOP_SEC_VAR_NOINIT_16BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CRYPTO_30_CRYWRAPPER_START_SEC_VAR_NOINIT_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_CRYWRAPPER_START_SEC_VAR_NOINIT_32BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CRYPTO_30_CRYWRAPPER_STOP_SEC_VAR_NOINIT_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_CRYWRAPPER_STOP_SEC_VAR_NOINIT_32BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CRYPTO_30_CRYWRAPPER_START_SEC_VAR_NOINIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_CRYWRAPPER_START_SEC_VAR_NOINIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CRYPTO_30_CRYWRAPPER_STOP_SEC_VAR_NOINIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_CRYWRAPPER_STOP_SEC_VAR_NOINIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CRYPTO_30_CRYWRAPPER_START_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_CRYWRAPPER_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CRYPTO_30_CRYWRAPPER_STOP_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_CRYWRAPPER_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CRYPTO_30_CRYWRAPPER_START_SEC_VAR_ZERO_INIT_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_CRYWRAPPER_START_SEC_VAR_ZERO_INIT_32BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CRYPTO_30_CRYWRAPPER_STOP_SEC_VAR_ZERO_INIT_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_CRYWRAPPER_STOP_SEC_VAR_ZERO_INIT_32BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CRYPTO_30_CRYWRAPPER_START_SEC_VAR_ZERO_INIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_CRYWRAPPER_START_SEC_VAR_ZERO_INIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CRYPTO_30_CRYWRAPPER_STOP_SEC_VAR_ZERO_INIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_CRYWRAPPER_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CRYPTO_30_LIBCV_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_LIBCV_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CRYPTO_30_LIBCV_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_LIBCV_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CRYPTO_30_LIBCV_START_SEC_CONST_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_LIBCV_START_SEC_CONST_8BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CRYPTO_30_LIBCV_STOP_SEC_CONST_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_LIBCV_STOP_SEC_CONST_8BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CRYPTO_30_LIBCV_START_SEC_VAR_NOINIT_16BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_LIBCV_START_SEC_VAR_NOINIT_16BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CRYPTO_30_LIBCV_STOP_SEC_VAR_NOINIT_16BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_LIBCV_STOP_SEC_VAR_NOINIT_16BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CRYPTO_30_LIBCV_START_SEC_VAR_NOINIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_LIBCV_START_SEC_VAR_NOINIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CRYPTO_30_LIBCV_STOP_SEC_VAR_NOINIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_LIBCV_STOP_SEC_VAR_NOINIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CRYPTO_30_LIBCV_START_SEC_VAR_ZERO_INIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_LIBCV_START_SEC_VAR_ZERO_INIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CRYPTO_30_LIBCV_STOP_SEC_VAR_ZERO_INIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CRYPTO_30_LIBCV_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CSM_START_SEC_APPL_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef CSM_START_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CSM_STOP_SEC_APPL_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef CSM_STOP_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CSM_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef CSM_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CSM_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef CSM_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CSM_START_SEC_CONST_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CSM_START_SEC_CONST_8BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CSM_STOP_SEC_CONST_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CSM_STOP_SEC_CONST_8BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CSM_START_SEC_CONST_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CSM_START_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CSM_STOP_SEC_CONST_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CSM_STOP_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CSM_START_SEC_VAR_NOINIT_16BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CSM_START_SEC_VAR_NOINIT_16BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CSM_STOP_SEC_VAR_NOINIT_16BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CSM_STOP_SEC_VAR_NOINIT_16BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CSM_START_SEC_VAR_NOINIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CSM_START_SEC_VAR_NOINIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CSM_STOP_SEC_VAR_NOINIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CSM_STOP_SEC_VAR_NOINIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CSM_START_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CSM_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CSM_STOP_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef CSM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CSM_START_SEC_VAR_ZERO_INIT_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CSM_START_SEC_VAR_ZERO_INIT_32BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CSM_STOP_SEC_VAR_ZERO_INIT_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CSM_STOP_SEC_VAR_ZERO_INIT_32BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( CSM_START_SEC_VAR_ZERO_INIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CSM_START_SEC_VAR_ZERO_INIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( CSM_STOP_SEC_VAR_ZERO_INIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef CSM_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( DET_START_SEC_CODE )
#pragma ghs section text=".RamCodeSection"
# undef DET_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( DET_STOP_SEC_CODE )
#pragma ghs section text=default
# undef DET_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( DET_START_SEC_CONST_UNSPECIFIED )
#pragma ghs startdata
#pragma ghs section rodata=".RamConstSection"
# undef DET_START_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( DET_STOP_SEC_CONST_UNSPECIFIED )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef DET_STOP_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( DET_START_SEC_VAR_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef DET_START_SEC_VAR_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( DET_STOP_SEC_VAR_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef DET_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( DET_START_SEC_VAR_NOINIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef DET_START_SEC_VAR_NOINIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( DET_STOP_SEC_VAR_NOINIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef DET_STOP_SEC_VAR_NOINIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( DET_START_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef DET_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( DET_STOP_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef DET_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( DIO_START_SEC_CODE )
#pragma ghs section text=".RamCodeSection"
# undef DIO_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( DIO_STOP_SEC_CODE )
#pragma ghs section text=default
# undef DIO_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( DIO_START_SEC_CODE_ASIL_B )
#pragma ghs section text=".RamCodeSection"
# undef DIO_START_SEC_CODE_ASIL_B
# undef FBL_MEMMAP_ERROR
#endif

#if defined( DIO_STOP_SEC_CODE_ASIL_B )
#pragma ghs section text=default
# undef DIO_STOP_SEC_CODE_ASIL_B
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( DIO_START_SEC_CODE_ASIL_B_LOCAL )
#pragma ghs section text=".RamCodeSection"
# undef DIO_START_SEC_CODE_ASIL_B_LOCAL
# undef FBL_MEMMAP_ERROR
#endif

#if defined( DIO_STOP_SEC_CODE_ASIL_B_LOCAL )
#pragma ghs section text=default
# undef DIO_STOP_SEC_CODE_ASIL_B_LOCAL
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( DIO_START_SEC_CODE_LOCAL )
#pragma ghs section text=".RamCodeSection"
# undef DIO_START_SEC_CODE_LOCAL
# undef FBL_MEMMAP_ERROR
#endif

#if defined( DIO_STOP_SEC_CODE_LOCAL )
#pragma ghs section text=default
# undef DIO_STOP_SEC_CODE_LOCAL
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( DIO_START_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED )
#pragma ghs startdata
#pragma ghs section rodata=".RamConstSection"
# undef DIO_START_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( DIO_STOP_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef DIO_STOP_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( DIO_START_SEC_CONFIG_DATA_UNSPECIFIED )
#pragma ghs startdata
#pragma ghs section rodata=".RamConstSection"
# undef DIO_START_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( DIO_STOP_SEC_CONFIG_DATA_UNSPECIFIED )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef DIO_STOP_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( DIO_START_SEC_CONST_32 )
#pragma ghs startdata
#pragma ghs section rodata=".RamConstSection"
# undef DIO_START_SEC_CONST_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( DIO_STOP_SEC_CONST_32 )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef DIO_STOP_SEC_CONST_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( DIO_START_SEC_CONST_ASIL_B_32 )
#pragma ghs startdata
#pragma ghs section rodata=".RamConstSection"
# undef DIO_START_SEC_CONST_ASIL_B_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( DIO_STOP_SEC_CONST_ASIL_B_32 )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef DIO_STOP_SEC_CONST_ASIL_B_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( DIO_START_SEC_CONST_UNSPECIFIED )
#pragma ghs startdata
#pragma ghs section rodata=".RamConstSection"
# undef DIO_START_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( DIO_STOP_SEC_CONST_UNSPECIFIED )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef DIO_STOP_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( DIO_START_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef DIO_START_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( DIO_STOP_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef DIO_STOP_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( DIO_START_SEC_VAR_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef DIO_START_SEC_VAR_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( DIO_STOP_SEC_VAR_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef DIO_STOP_SEC_VAR_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( DIO_START_SEC_VAR_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef DIO_START_SEC_VAR_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( DIO_STOP_SEC_VAR_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef DIO_STOP_SEC_VAR_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( DIO_START_SEC_VAR_INIT_ASIL_B_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef DIO_START_SEC_VAR_INIT_ASIL_B_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( DIO_STOP_SEC_VAR_INIT_ASIL_B_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef DIO_STOP_SEC_VAR_INIT_ASIL_B_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( DIO_START_SEC_VAR_INIT_ASIL_B_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef DIO_START_SEC_VAR_INIT_ASIL_B_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( DIO_STOP_SEC_VAR_INIT_ASIL_B_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef DIO_STOP_SEC_VAR_INIT_ASIL_B_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( DIO_START_SEC_VAR_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef DIO_START_SEC_VAR_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( DIO_STOP_SEC_VAR_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef DIO_STOP_SEC_VAR_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( DIO_START_SEC_VAR_NOINIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef DIO_START_SEC_VAR_NOINIT_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( DIO_STOP_SEC_VAR_NOINIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef DIO_STOP_SEC_VAR_NOINIT_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( DIO_START_SEC_VAR_NOINIT_16BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef DIO_START_SEC_VAR_NOINIT_16BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( DIO_STOP_SEC_VAR_NOINIT_16BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef DIO_STOP_SEC_VAR_NOINIT_16BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( DIO_START_SEC_VAR_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef DIO_START_SEC_VAR_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( DIO_STOP_SEC_VAR_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef DIO_STOP_SEC_VAR_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( DIO_START_SEC_VAR_NO_INIT_ASIL_B_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef DIO_START_SEC_VAR_NO_INIT_ASIL_B_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( DIO_STOP_SEC_VAR_NO_INIT_ASIL_B_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef DIO_STOP_SEC_VAR_NO_INIT_ASIL_B_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( DIO_START_SEC_VAR_NO_INIT_ASIL_B_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef DIO_START_SEC_VAR_NO_INIT_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( DIO_STOP_SEC_VAR_NO_INIT_ASIL_B_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef DIO_STOP_SEC_VAR_NO_INIT_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( DIO_START_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef DIO_START_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( DIO_STOP_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef DIO_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( EEPDUMMY_FULL_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef EEPDUMMY_FULL_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( EEPDUMMY_FULL_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef EEPDUMMY_FULL_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( EEPDUMMY_START_SEC_VAR )
#pragma ghs startdata
#pragma ghs section bss=".EepDummySection"
# undef EEPDUMMY_START_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

#if defined( EEPDUMMY_STOP_SEC_VAR )
#pragma ghs section bss=default
#pragma ghs enddata
# undef EEPDUMMY_STOP_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ETH_59_RENESAS_START_SEC_CODE_FAST )
   /* #pragma <enter your compiler specific pragma> */
# undef ETH_59_RENESAS_START_SEC_CODE_FAST
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ETH_59_RENESAS_STOP_SEC_CODE_FAST )
   /* #pragma <enter your compiler specific pragma> */
# undef ETH_59_RENESAS_STOP_SEC_CODE_FAST
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ETH_59_RENESAS_START_SEC_CONST_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ETH_59_RENESAS_START_SEC_CONST_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ETH_59_RENESAS_STOP_SEC_CONST_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ETH_59_RENESAS_STOP_SEC_CONST_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ETH_59_RENESAS_START_SEC_DBTOC_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ETH_59_RENESAS_START_SEC_DBTOC_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ETH_59_RENESAS_STOP_SEC_DBTOC_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ETH_59_RENESAS_STOP_SEC_DBTOC_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ETH_59_RENESAS_START_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef ETH_59_RENESAS_START_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ETH_59_RENESAS_STOP_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef ETH_59_RENESAS_STOP_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ETH_59_RENESAS_START_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef ETH_59_RENESAS_START_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ETH_59_RENESAS_STOP_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef ETH_59_RENESAS_STOP_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ETH_59_RENESAS_START_SEC_VAR_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ETH_59_RENESAS_START_SEC_VAR_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ETH_59_RENESAS_STOP_SEC_VAR_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ETH_59_RENESAS_STOP_SEC_VAR_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ETH_59_RENESAS_START_SEC_VAR_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef ETH_59_RENESAS_START_SEC_VAR_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ETH_59_RENESAS_STOP_SEC_VAR_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef ETH_59_RENESAS_STOP_SEC_VAR_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ETH_59_RENESAS_START_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ETH_59_RENESAS_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ETH_59_RENESAS_STOP_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ETH_59_RENESAS_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ETH_59_RENESAS_START_SEC_VAR_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ETH_59_RENESAS_START_SEC_VAR_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ETH_59_RENESAS_STOP_SEC_VAR_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ETH_59_RENESAS_STOP_SEC_VAR_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLAP_RAMCODE_START_SEC_CODE ) || \
    defined( FBLAP_RAMCODE_START_SEC_CODE_EXPORT )
#pragma ghs section text=".RamCodeSection"
# undef FBLAP_RAMCODE_START_SEC_CODE
# undef FBLAP_RAMCODE_START_SEC_CODE_EXPORT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLAP_RAMCODE_STOP_SEC_CODE ) || \
    defined( FBLAP_RAMCODE_STOP_SEC_CODE_EXPORT )
#pragma ghs section text=default
# undef FBLAP_RAMCODE_STOP_SEC_CODE
# undef FBLAP_RAMCODE_STOP_SEC_CODE_EXPORT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLASRSTUBS_COMM_START_SEC_CODE )
#pragma ghs section text=".RamCodeSection"
# undef FBLASRSTUBS_COMM_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLASRSTUBS_COMM_STOP_SEC_CODE )
#pragma ghs section text=default
# undef FBLASRSTUBS_COMM_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLASRSTUBS_DEM_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLASRSTUBS_DEM_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLASRSTUBS_DEM_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLASRSTUBS_DEM_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLBMAP_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLBMAP_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLBMAP_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLBMAP_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLBMAP_START_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLBMAP_START_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLBMAP_STOP_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLBMAP_STOP_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLBMHDR_BMHEADER_IMAGE_START_SEC_CONST )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLBMHDR_BMHEADER_IMAGE_START_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLBMHDR_BMHEADER_IMAGE_STOP_SEC_CONST )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLBMHDR_BMHEADER_IMAGE_STOP_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLBMHDR_BMHEADER_START_SEC_CONST )
#pragma ghs startdata
#pragma ghs section rodata=".BmHdrHeaderSection"
# undef FBLBMHDR_BMHEADER_START_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLBMHDR_BMHEADER_STOP_SEC_CONST )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef FBLBMHDR_BMHEADER_STOP_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLBMHDR_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLBMHDR_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLBMHDR_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLBMHDR_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLBMHDR_START_SEC_CONST )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLBMHDR_START_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLBMHDR_STOP_SEC_CONST )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLBMHDR_STOP_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLBM_APPLSTART_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLBM_APPLSTART_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLBM_APPLSTART_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLBM_APPLSTART_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLBM_FBLSTART_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLBM_FBLSTART_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLBM_FBLSTART_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLBM_FBLSTART_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLBM_HEADER_START_SEC_CONST )
#pragma ghs startdata
#pragma ghs section rodata=".BmHeaderSection"
# undef FBLBM_HEADER_START_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLBM_HEADER_STOP_SEC_CONST )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef FBLBM_HEADER_STOP_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLBM_MAIN_APPLSTART_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLBM_MAIN_APPLSTART_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLBM_MAIN_APPLSTART_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLBM_MAIN_APPLSTART_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLBM_MAIN_FBLSTART_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLBM_MAIN_FBLSTART_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLBM_MAIN_FBLSTART_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLBM_MAIN_FBLSTART_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLBM_MAIN_MAGICFLAG_START_SEC_VAR_NOINIT )
#pragma ghs startdata
#pragma ghs section bss=".MagicFlagSection"
# undef FBLBM_MAIN_MAGICFLAG_START_SEC_VAR_NOINIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLBM_MAIN_MAGICFLAG_STOP_SEC_VAR_NOINIT )
#pragma ghs section bss=default
#pragma ghs enddata
# undef FBLBM_MAIN_MAGICFLAG_STOP_SEC_VAR_NOINIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLBM_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLBM_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLBM_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLBM_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLBM_START_SEC_CONST )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLBM_START_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLBM_STOP_SEC_CONST )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLBM_STOP_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLBM_START_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLBM_START_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLBM_STOP_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLBM_STOP_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLCW_CAN_START_SEC_CODE )
#pragma ghs section text=".RamCodeSection"
# undef FBLCW_CAN_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLCW_CAN_STOP_SEC_CODE )
#pragma ghs section text=default
# undef FBLCW_CAN_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLCW_FR_START_SEC_CODE )
#pragma ghs section text=".RamCodeSection"
# undef FBLCW_FR_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLCW_FR_STOP_SEC_CODE )
#pragma ghs section text=default
# undef FBLCW_FR_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLCW_LIN_START_SEC_CODE )
#pragma ghs section text=".RamCodeSection"
# undef FBLCW_LIN_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLCW_LIN_STOP_SEC_CODE )
#pragma ghs section text=default
# undef FBLCW_LIN_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLCW_START_SEC_APPL_CODE )
#pragma ghs section text=".RamCodeSection"
# undef FBLCW_START_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLCW_STOP_SEC_APPL_CODE )
#pragma ghs section text=default
# undef FBLCW_STOP_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLCW_START_SEC_CODE )
#pragma ghs section text=".RamCodeSection"
# undef FBLCW_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLCW_STOP_SEC_CODE )
#pragma ghs section text=default
# undef FBLCW_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLCW_START_SEC_CONST_16 )
#pragma ghs startdata
#pragma ghs section rodata=".RamConstSection"
# undef FBLCW_START_SEC_CONST_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLCW_STOP_SEC_CONST_16 )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef FBLCW_STOP_SEC_CONST_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLCW_START_SEC_CONST_32 )
#pragma ghs startdata
#pragma ghs section rodata=".RamConstSection"
# undef FBLCW_START_SEC_CONST_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLCW_STOP_SEC_CONST_32 )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef FBLCW_STOP_SEC_CONST_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLCW_START_SEC_CONST_64 )
#pragma ghs startdata
#pragma ghs section rodata=".RamConstSection"
# undef FBLCW_START_SEC_CONST_64
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLCW_STOP_SEC_CONST_64 )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef FBLCW_STOP_SEC_CONST_64
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLCW_START_SEC_CONST_8 )
#pragma ghs startdata
#pragma ghs section rodata=".RamConstSection"
# undef FBLCW_START_SEC_CONST_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLCW_STOP_SEC_CONST_8 )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef FBLCW_STOP_SEC_CONST_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLCW_START_SEC_CONST_UNSPECIFIED )
#pragma ghs startdata
#pragma ghs section rodata=".RamConstSection"
# undef FBLCW_START_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLCW_STOP_SEC_CONST_UNSPECIFIED )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef FBLCW_STOP_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLCW_START_SEC_PBCFG )
#pragma ghs startdata
#pragma ghs section rodata=".RamConstSection"
# undef FBLCW_START_SEC_PBCFG
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLCW_STOP_SEC_PBCFG )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef FBLCW_STOP_SEC_PBCFG
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLCW_START_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLCW_START_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLCW_STOP_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLCW_STOP_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLCW_START_SEC_VAR_CLEARED_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLCW_START_SEC_VAR_CLEARED_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLCW_STOP_SEC_VAR_CLEARED_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLCW_STOP_SEC_VAR_CLEARED_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLCW_START_SEC_VAR_CLEARED_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLCW_START_SEC_VAR_CLEARED_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLCW_STOP_SEC_VAR_CLEARED_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLCW_STOP_SEC_VAR_CLEARED_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLCW_START_SEC_VAR_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLCW_START_SEC_VAR_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLCW_STOP_SEC_VAR_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLCW_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLCW_START_SEC_VAR_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLCW_START_SEC_VAR_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLCW_STOP_SEC_VAR_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLCW_STOP_SEC_VAR_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLCW_START_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLCW_START_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLCW_STOP_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLCW_STOP_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLCW_START_SEC_VAR_NO_INIT_64 )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLCW_START_SEC_VAR_NO_INIT_64
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLCW_STOP_SEC_VAR_NO_INIT_64 )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLCW_STOP_SEC_VAR_NO_INIT_64
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLCW_START_SEC_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLCW_START_SEC_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLCW_STOP_SEC_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLCW_STOP_SEC_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLCW_START_SEC_VAR_NO_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLCW_START_SEC_VAR_NO_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLCW_STOP_SEC_VAR_NO_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLCW_STOP_SEC_VAR_NO_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLCW_START_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLCW_START_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLCW_STOP_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLCW_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLCW_START_SEC_VAR_PBCFG )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLCW_START_SEC_VAR_PBCFG
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLCW_STOP_SEC_VAR_PBCFG )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLCW_STOP_SEC_VAR_PBCFG
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLDIAG_RAMCODE_START_SEC_CODE )
#pragma ghs section text=".RamCodeSection"
# undef FBLDIAG_RAMCODE_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLDIAG_RAMCODE_STOP_SEC_CODE )
#pragma ghs section text=default
# undef FBLDIAG_RAMCODE_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLDIAG_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLDIAG_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLDIAG_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLDIAG_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLDIAG_START_SEC_CONST )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLDIAG_START_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLDIAG_STOP_SEC_CONST )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLDIAG_STOP_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLDIAG_START_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLDIAG_START_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLDIAG_STOP_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLDIAG_STOP_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLFLIO_RAMCODE_START_SEC_CODE )
#pragma ghs section text=".RamCodeSection"
# undef FBLFLIO_RAMCODE_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLFLIO_RAMCODE_STOP_SEC_CODE )
#pragma ghs section text=default
# undef FBLFLIO_RAMCODE_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLFLIO_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLFLIO_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLFLIO_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLFLIO_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLFLIO_START_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLFLIO_START_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLFLIO_STOP_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLFLIO_STOP_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLFSM_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLFSM_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLFSM_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLFSM_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLFSM_START_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLFSM_START_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLFSM_STOP_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLFSM_STOP_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLHEADER_START_SEC_CONST )
#pragma ghs startdata
#pragma ghs section rodata=".FblHeaderSection"
# undef FBLHEADER_START_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLHEADER_STOP_SEC_CONST )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef FBLHEADER_STOP_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLHW_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLHW_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLHW_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLHW_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLLBT_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLLBT_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLLBT_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLLBT_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLLBT_START_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLLBT_START_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLLBT_STOP_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLLBT_STOP_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLLIB_MEM_RAMCODE_START_SEC_CODE ) || \
    defined( FBLLIB_MEM_RAMCODE_START_SEC_CODE_EXPORT )
#pragma ghs section text=".RamCodeSection"
# undef FBLLIB_MEM_RAMCODE_START_SEC_CODE
# undef FBLLIB_MEM_RAMCODE_START_SEC_CODE_EXPORT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLLIB_MEM_RAMCODE_STOP_SEC_CODE ) || \
    defined( FBLLIB_MEM_RAMCODE_STOP_SEC_CODE_EXPORT )
#pragma ghs section text=default
# undef FBLLIB_MEM_RAMCODE_STOP_SEC_CODE
# undef FBLLIB_MEM_RAMCODE_STOP_SEC_CODE_EXPORT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLLIB_MEM_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLLIB_MEM_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLLIB_MEM_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLLIB_MEM_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLLIB_MEM_START_SEC_CONST )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLLIB_MEM_START_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLLIB_MEM_STOP_SEC_CONST )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLLIB_MEM_STOP_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLLIB_MEM_START_SEC_VAR ) || \
    defined( FBLLIB_MEM_START_SEC_VAR_EXPORT )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLLIB_MEM_START_SEC_VAR
# undef FBLLIB_MEM_START_SEC_VAR_EXPORT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLLIB_MEM_STOP_SEC_VAR ) || \
    defined( FBLLIB_MEM_STOP_SEC_VAR_EXPORT )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLLIB_MEM_STOP_SEC_VAR
# undef FBLLIB_MEM_STOP_SEC_VAR_EXPORT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLMAIN_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLMAIN_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLMAIN_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLMAIN_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLMAIN_START_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLMAIN_START_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLMAIN_STOP_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLMAIN_STOP_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLMIO_START_SEC_CODE )
#pragma ghs section text=".RamCodeSection"
# undef FBLMIO_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLMIO_STOP_SEC_CODE )
#pragma ghs section text=default
# undef FBLMIO_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLMIO_START_SEC_CONST )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLMIO_START_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLMIO_STOP_SEC_CONST )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLMIO_STOP_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLMIO_START_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLMIO_START_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLMIO_STOP_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLMIO_STOP_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLNVPATTERN_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLNVPATTERN_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLNVPATTERN_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLNVPATTERN_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLNVPATTERN_START_SEC_CONST )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLNVPATTERN_START_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLNVPATTERN_STOP_SEC_CONST )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLNVPATTERN_STOP_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLNVPATTERN_START_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLNVPATTERN_START_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLNVPATTERN_STOP_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLNVPATTERN_STOP_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLVIRTUALIO_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLVIRTUALIO_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLVIRTUALIO_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLVIRTUALIO_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLVIRTUALIO_START_SEC_CONST )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLVIRTUALIO_START_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLVIRTUALIO_STOP_SEC_CONST )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLVIRTUALIO_STOP_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLWD_INIT_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLWD_INIT_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLWD_INIT_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLWD_INIT_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLWD_RAMCODE_START_SEC_CODE )
#pragma ghs section text=".RamCodeSection"
# undef FBLWD_RAMCODE_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLWD_RAMCODE_STOP_SEC_CODE )
#pragma ghs section text=default
# undef FBLWD_RAMCODE_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBLWD_START_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLWD_START_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBLWD_STOP_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef FBLWD_STOP_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBL_APPLVECT_START_SEC_CONST )
#pragma ghs startdata
#pragma ghs section rodata=".ApplVectSection"
# undef FBL_APPLVECT_START_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FBL_APPLVECT_STOP_SEC_CONST )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef FBL_APPLVECT_STOP_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FEE_30_FLEXNOR_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FEE_30_FLEXNOR_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FEE_30_FLEXNOR_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FEE_30_FLEXNOR_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FEE_30_FLEXNOR_START_SEC_CONST_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FEE_30_FLEXNOR_START_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FEE_30_FLEXNOR_STOP_SEC_CONST_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FEE_30_FLEXNOR_STOP_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FEE_30_FLEXNOR_START_SEC_VAR_CLEARED_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FEE_30_FLEXNOR_START_SEC_VAR_CLEARED_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FEE_30_FLEXNOR_STOP_SEC_VAR_CLEARED_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FEE_30_FLEXNOR_STOP_SEC_VAR_CLEARED_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FEE_30_FLEXNOR_START_SEC_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef FEE_30_FLEXNOR_START_SEC_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FEE_30_FLEXNOR_STOP_SEC_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef FEE_30_FLEXNOR_STOP_SEC_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FEE_30_SMALLSECTOR_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FEE_30_SMALLSECTOR_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FEE_30_SMALLSECTOR_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FEE_30_SMALLSECTOR_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FEE_30_SMALLSECTOR_START_SEC_CONST_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef FEE_30_SMALLSECTOR_START_SEC_CONST_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FEE_30_SMALLSECTOR_STOP_SEC_CONST_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef FEE_30_SMALLSECTOR_STOP_SEC_CONST_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FEE_30_SMALLSECTOR_START_SEC_VAR_FAST_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FEE_30_SMALLSECTOR_START_SEC_VAR_FAST_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FEE_30_SMALLSECTOR_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FEE_30_SMALLSECTOR_STOP_SEC_VAR_FAST_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FEE_30_SMALLSECTOR_START_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FEE_30_SMALLSECTOR_START_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FEE_30_SMALLSECTOR_STOP_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FEE_30_SMALLSECTOR_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLASHCODE_START_SEC_VAR )
#pragma ghs startdata
#pragma ghs section bss=".FblFlashDrvSection"
# undef FLASHCODE_START_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLASHCODE_STOP_SEC_VAR )
#pragma ghs section bss=default
#pragma ghs enddata
# undef FLASHCODE_STOP_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLASH_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FLASH_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLASH_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FLASH_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLASH_START_SEC_FLASH_DRIVER_HEADER )
#pragma ghs startdata
#pragma ghs section rodata=".FlashDrvHeaderSection"
# undef FLASH_START_SEC_FLASH_DRIVER_HEADER
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLASH_STOP_SEC_FLASH_DRIVER_HEADER )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef FLASH_STOP_SEC_FLASH_DRIVER_HEADER
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLASH_START_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef FLASH_START_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLASH_STOP_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef FLASH_STOP_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLSTST_START_SEC_APPL_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_START_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLSTST_STOP_SEC_APPL_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_STOP_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLSTST_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLSTST_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLSTST_START_SEC_CONFIG_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_START_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLSTST_STOP_SEC_CONFIG_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_STOP_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLSTST_START_SEC_DBTOC_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_START_SEC_DBTOC_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLSTST_STOP_SEC_DBTOC_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_STOP_SEC_DBTOC_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLSTST_START_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_START_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLSTST_STOP_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_STOP_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLSTST_START_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_START_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLSTST_STOP_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_STOP_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLSTST_START_SEC_VAR_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_START_SEC_VAR_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLSTST_STOP_SEC_VAR_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_STOP_SEC_VAR_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLSTST_START_SEC_VAR_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_START_SEC_VAR_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLSTST_STOP_SEC_VAR_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_STOP_SEC_VAR_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLSTST_START_SEC_VAR_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_START_SEC_VAR_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLSTST_STOP_SEC_VAR_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_STOP_SEC_VAR_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLSTST_START_SEC_VAR_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_START_SEC_VAR_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLSTST_STOP_SEC_VAR_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLSTST_START_SEC_VAR_NOINIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_START_SEC_VAR_NOINIT_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLSTST_STOP_SEC_VAR_NOINIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_STOP_SEC_VAR_NOINIT_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLSTST_START_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLSTST_STOP_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLSTST_START_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_START_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLSTST_STOP_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_STOP_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLSTST_START_SEC_VAR_NO_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_START_SEC_VAR_NO_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLSTST_STOP_SEC_VAR_NO_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_STOP_SEC_VAR_NO_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLSTST_START_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_START_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLSTST_STOP_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLSTST_START_SEC_VAR_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_START_SEC_VAR_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLSTST_STOP_SEC_VAR_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FLSTST_STOP_SEC_VAR_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLS_START_SEC_APPL_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_START_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLS_STOP_SEC_APPL_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_STOP_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLS_START_SEC_BUFFER_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_START_SEC_BUFFER_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLS_STOP_SEC_BUFFER_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_STOP_SEC_BUFFER_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLS_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLS_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLS_START_SEC_CODE_FAST )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_START_SEC_CODE_FAST
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLS_STOP_SEC_CODE_FAST )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_STOP_SEC_CODE_FAST
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLS_START_SEC_CONFIG_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_START_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLS_STOP_SEC_CONFIG_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_STOP_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLS_START_SEC_DBTOC_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_START_SEC_DBTOC_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLS_STOP_SEC_DBTOC_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_STOP_SEC_DBTOC_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLS_START_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_START_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLS_STOP_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_STOP_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLS_START_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_START_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLS_STOP_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_STOP_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLS_START_SEC_VAR_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_START_SEC_VAR_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLS_STOP_SEC_VAR_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_STOP_SEC_VAR_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLS_START_SEC_VAR_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_START_SEC_VAR_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLS_STOP_SEC_VAR_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_STOP_SEC_VAR_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLS_START_SEC_VAR_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_START_SEC_VAR_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLS_STOP_SEC_VAR_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLS_START_SEC_VAR_NOINIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_START_SEC_VAR_NOINIT_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLS_STOP_SEC_VAR_NOINIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_STOP_SEC_VAR_NOINIT_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLS_START_SEC_VAR_NOINIT_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_START_SEC_VAR_NOINIT_32BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLS_STOP_SEC_VAR_NOINIT_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_STOP_SEC_VAR_NOINIT_32BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLS_START_SEC_VAR_NOINIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_START_SEC_VAR_NOINIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLS_STOP_SEC_VAR_NOINIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_STOP_SEC_VAR_NOINIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLS_START_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLS_STOP_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLS_START_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_START_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLS_STOP_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_STOP_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLS_START_SEC_VAR_NO_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_START_SEC_VAR_NO_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLS_STOP_SEC_VAR_NO_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_STOP_SEC_VAR_NO_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLS_START_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_START_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLS_STOP_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FLS_START_SEC_VAR_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_START_SEC_VAR_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FLS_STOP_SEC_VAR_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FLS_STOP_SEC_VAR_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FR_59_RENESAS_START_SEC_CONFIG_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FR_59_RENESAS_START_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FR_59_RENESAS_STOP_SEC_CONFIG_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FR_59_RENESAS_STOP_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FR_59_RENESAS_START_SEC_DBTOC_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FR_59_RENESAS_START_SEC_DBTOC_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FR_59_RENESAS_STOP_SEC_DBTOC_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FR_59_RENESAS_STOP_SEC_DBTOC_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FR_59_RENESAS_START_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FR_59_RENESAS_START_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FR_59_RENESAS_STOP_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FR_59_RENESAS_STOP_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FR_59_RENESAS_START_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FR_59_RENESAS_START_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FR_59_RENESAS_STOP_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef FR_59_RENESAS_STOP_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FR_59_RENESAS_START_SEC_VAR_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef FR_59_RENESAS_START_SEC_VAR_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FR_59_RENESAS_STOP_SEC_VAR_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef FR_59_RENESAS_STOP_SEC_VAR_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FR_59_RENESAS_START_SEC_VAR_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef FR_59_RENESAS_START_SEC_VAR_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FR_59_RENESAS_STOP_SEC_VAR_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef FR_59_RENESAS_STOP_SEC_VAR_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FR_59_RENESAS_START_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FR_59_RENESAS_START_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( FR_59_RENESAS_STOP_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef FR_59_RENESAS_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( GPT_START_SEC_APPL_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_START_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( GPT_STOP_SEC_APPL_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_STOP_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( GPT_START_SEC_CALLOUT_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_START_SEC_CALLOUT_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( GPT_STOP_SEC_CALLOUT_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_STOP_SEC_CALLOUT_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( GPT_START_SEC_CALLOUT_CODE_ASIL_B )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_START_SEC_CALLOUT_CODE_ASIL_B
# undef FBL_MEMMAP_ERROR
#endif

#if defined( GPT_STOP_SEC_CALLOUT_CODE_ASIL_B )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_STOP_SEC_CALLOUT_CODE_ASIL_B
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( GPT_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( GPT_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( GPT_START_SEC_CODE_ASIL_B )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_START_SEC_CODE_ASIL_B
# undef FBL_MEMMAP_ERROR
#endif

#if defined( GPT_STOP_SEC_CODE_ASIL_B )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_STOP_SEC_CODE_ASIL_B
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( GPT_START_SEC_CODE_FAST )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_START_SEC_CODE_FAST
# undef FBL_MEMMAP_ERROR
#endif

#if defined( GPT_STOP_SEC_CODE_FAST )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_STOP_SEC_CODE_FAST
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( GPT_START_SEC_CODE_FAST_ASIL_B )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_START_SEC_CODE_FAST_ASIL_B
# undef FBL_MEMMAP_ERROR
#endif

#if defined( GPT_STOP_SEC_CODE_FAST_ASIL_B )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_STOP_SEC_CODE_FAST_ASIL_B
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( GPT_START_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_START_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( GPT_STOP_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_STOP_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( GPT_START_SEC_CONFIG_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_START_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( GPT_STOP_SEC_CONFIG_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( GPT_START_SEC_CONFIG_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_START_SEC_CONFIG_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( GPT_STOP_SEC_CONFIG_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_STOP_SEC_CONFIG_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( GPT_START_SEC_CONST_ASIL_B_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_START_SEC_CONST_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( GPT_STOP_SEC_CONST_ASIL_B_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_STOP_SEC_CONST_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( GPT_START_SEC_CONST_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_START_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( GPT_STOP_SEC_CONST_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_STOP_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( GPT_START_SEC_DBTOC_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_START_SEC_DBTOC_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( GPT_STOP_SEC_DBTOC_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_STOP_SEC_DBTOC_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( GPT_START_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_START_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( GPT_STOP_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_STOP_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( GPT_START_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_START_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( GPT_STOP_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_STOP_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( GPT_START_SEC_VAR_1BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_START_SEC_VAR_1BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( GPT_STOP_SEC_VAR_1BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_STOP_SEC_VAR_1BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( GPT_START_SEC_VAR_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_START_SEC_VAR_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( GPT_STOP_SEC_VAR_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_STOP_SEC_VAR_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( GPT_START_SEC_VAR_INIT_ASIL_B_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_START_SEC_VAR_INIT_ASIL_B_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( GPT_STOP_SEC_VAR_INIT_ASIL_B_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_STOP_SEC_VAR_INIT_ASIL_B_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( GPT_START_SEC_VAR_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_START_SEC_VAR_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( GPT_STOP_SEC_VAR_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_STOP_SEC_VAR_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( GPT_START_SEC_VAR_NOINIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_START_SEC_VAR_NOINIT_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( GPT_STOP_SEC_VAR_NOINIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_STOP_SEC_VAR_NOINIT_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( GPT_START_SEC_VAR_NOINIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_START_SEC_VAR_NOINIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( GPT_STOP_SEC_VAR_NOINIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_STOP_SEC_VAR_NOINIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( GPT_START_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( GPT_STOP_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( GPT_START_SEC_VAR_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_START_SEC_VAR_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( GPT_STOP_SEC_VAR_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_STOP_SEC_VAR_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( GPT_START_SEC_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_START_SEC_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( GPT_STOP_SEC_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_STOP_SEC_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( GPT_START_SEC_VAR_NO_INIT_ASIL_B_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_START_SEC_VAR_NO_INIT_ASIL_B_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( GPT_STOP_SEC_VAR_NO_INIT_ASIL_B_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_STOP_SEC_VAR_NO_INIT_ASIL_B_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( GPT_START_SEC_VAR_NO_INIT_ASIL_B_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_START_SEC_VAR_NO_INIT_ASIL_B_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( GPT_STOP_SEC_VAR_NO_INIT_ASIL_B_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_STOP_SEC_VAR_NO_INIT_ASIL_B_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( GPT_START_SEC_VAR_NO_INIT_ASIL_B_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_START_SEC_VAR_NO_INIT_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( GPT_STOP_SEC_VAR_NO_INIT_ASIL_B_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_STOP_SEC_VAR_NO_INIT_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( GPT_START_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_START_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( GPT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef GPT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ICU_START_SEC_APPL_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_START_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ICU_STOP_SEC_APPL_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_STOP_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ICU_START_SEC_CODE_FAST )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_START_SEC_CODE_FAST
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ICU_STOP_SEC_CODE_FAST )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_STOP_SEC_CODE_FAST
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ICU_START_SEC_CONFIG_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_START_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ICU_STOP_SEC_CONFIG_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ICU_START_SEC_CONFIG_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_START_SEC_CONFIG_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ICU_STOP_SEC_CONFIG_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_STOP_SEC_CONFIG_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ICU_START_SEC_DBTOC_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_START_SEC_DBTOC_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ICU_STOP_SEC_DBTOC_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_STOP_SEC_DBTOC_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ICU_START_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_START_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ICU_STOP_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_STOP_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ICU_START_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_START_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ICU_STOP_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_STOP_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ICU_START_SEC_VAR_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_START_SEC_VAR_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ICU_STOP_SEC_VAR_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_STOP_SEC_VAR_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ICU_START_SEC_VAR_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_START_SEC_VAR_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ICU_STOP_SEC_VAR_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_STOP_SEC_VAR_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ICU_START_SEC_VAR_NOINIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_START_SEC_VAR_NOINIT_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ICU_STOP_SEC_VAR_NOINIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_STOP_SEC_VAR_NOINIT_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ICU_START_SEC_VAR_NOINIT_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_START_SEC_VAR_NOINIT_32BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ICU_STOP_SEC_VAR_NOINIT_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_STOP_SEC_VAR_NOINIT_32BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ICU_START_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ICU_STOP_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ICU_START_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_START_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ICU_STOP_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_STOP_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ICU_START_SEC_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_START_SEC_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ICU_STOP_SEC_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_STOP_SEC_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( ICU_START_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_START_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( ICU_STOP_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef ICU_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( LIN_START_SEC_CODE )
#pragma ghs section text=".RamCodeSection"
# undef LIN_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( LIN_STOP_SEC_CODE )
#pragma ghs section text=default
# undef LIN_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( LIN_START_SEC_CODE_FAST )
#pragma ghs section text=".RamCodeSection"
# undef LIN_START_SEC_CODE_FAST
# undef FBL_MEMMAP_ERROR
#endif

#if defined( LIN_STOP_SEC_CODE_FAST )
#pragma ghs section text=default
# undef LIN_STOP_SEC_CODE_FAST
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( LIN_START_SEC_CONFIG_DATA_UNSPECIFIED )
#pragma ghs startdata
#pragma ghs section rodata=".RamConstSection"
# undef LIN_START_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( LIN_STOP_SEC_CONFIG_DATA_UNSPECIFIED )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef LIN_STOP_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( LIN_START_SEC_CONST_UNSPECIFIED )
#pragma ghs startdata
#pragma ghs section rodata=".RamConstSection"
# undef LIN_START_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( LIN_STOP_SEC_CONST_UNSPECIFIED )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef LIN_STOP_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( LIN_START_SEC_VAR_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef LIN_START_SEC_VAR_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( LIN_STOP_SEC_VAR_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef LIN_STOP_SEC_VAR_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( LIN_START_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef LIN_START_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( LIN_STOP_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef LIN_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MCU_START_SEC_APPL_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_START_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MCU_STOP_SEC_APPL_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_STOP_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MCU_START_SEC_BURAM_VAR_NOINIT_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_START_SEC_BURAM_VAR_NOINIT_32BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MCU_STOP_SEC_BURAM_VAR_NOINIT_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_STOP_SEC_BURAM_VAR_NOINIT_32BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MCU_START_SEC_BURAM_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_START_SEC_BURAM_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MCU_STOP_SEC_BURAM_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_STOP_SEC_BURAM_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MCU_START_SEC_BURAM_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_START_SEC_BURAM_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MCU_STOP_SEC_BURAM_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_STOP_SEC_BURAM_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MCU_START_SEC_BURAM_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_START_SEC_BURAM_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MCU_STOP_SEC_BURAM_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_STOP_SEC_BURAM_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MCU_START_SEC_CODE_FAST )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_START_SEC_CODE_FAST
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MCU_STOP_SEC_CODE_FAST )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_STOP_SEC_CODE_FAST
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MCU_START_SEC_CONFIG_DATA_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_START_SEC_CONFIG_DATA_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MCU_STOP_SEC_CONFIG_DATA_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_STOP_SEC_CONFIG_DATA_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MCU_START_SEC_CONFIG_DATA_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_START_SEC_CONFIG_DATA_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MCU_STOP_SEC_CONFIG_DATA_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_STOP_SEC_CONFIG_DATA_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MCU_START_SEC_CONFIG_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_START_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MCU_START_SEC_CONST_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_START_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MCU_STOP_SEC_CONST_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_STOP_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MCU_START_SEC_DBTOC_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_START_SEC_DBTOC_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MCU_STOP_SEC_DBTOC_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_STOP_SEC_DBTOC_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MCU_START_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_START_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MCU_STOP_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_STOP_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MCU_START_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_START_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MCU_STOP_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_STOP_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MCU_START_SEC_RRAM_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_START_SEC_RRAM_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MCU_STOP_SEC_RRAM_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_STOP_SEC_RRAM_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MCU_START_SEC_RRAM_ROM_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_START_SEC_RRAM_ROM_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MCU_STOP_SEC_RRAM_ROM_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_STOP_SEC_RRAM_ROM_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MCU_START_SEC_VAR_1BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_START_SEC_VAR_1BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MCU_STOP_SEC_VAR_1BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_STOP_SEC_VAR_1BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MCU_START_SEC_VAR_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_START_SEC_VAR_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MCU_STOP_SEC_VAR_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_STOP_SEC_VAR_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MCU_START_SEC_VAR_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_START_SEC_VAR_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MCU_STOP_SEC_VAR_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_STOP_SEC_VAR_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MCU_START_SEC_VAR_NOINIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_START_SEC_VAR_NOINIT_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MCU_STOP_SEC_VAR_NOINIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_STOP_SEC_VAR_NOINIT_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MCU_START_SEC_VAR_NOINIT_16BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_START_SEC_VAR_NOINIT_16BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MCU_STOP_SEC_VAR_NOINIT_16BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_STOP_SEC_VAR_NOINIT_16BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MCU_START_SEC_VAR_NOINIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_START_SEC_VAR_NOINIT_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MCU_STOP_SEC_VAR_NOINIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_STOP_SEC_VAR_NOINIT_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MCU_START_SEC_VAR_NOINIT_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_START_SEC_VAR_NOINIT_32BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MCU_STOP_SEC_VAR_NOINIT_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_STOP_SEC_VAR_NOINIT_32BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MCU_START_SEC_VAR_NOINIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_START_SEC_VAR_NOINIT_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MCU_STOP_SEC_VAR_NOINIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_STOP_SEC_VAR_NOINIT_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MCU_START_SEC_VAR_NOINIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_START_SEC_VAR_NOINIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MCU_STOP_SEC_VAR_NOINIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_STOP_SEC_VAR_NOINIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MCU_START_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MCU_STOP_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MCU_START_SEC_VAR_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_START_SEC_VAR_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MCU_STOP_SEC_VAR_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_STOP_SEC_VAR_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MCU_START_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_START_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MCU_STOP_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_STOP_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MCU_START_SEC_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_START_SEC_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MCU_STOP_SEC_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_STOP_SEC_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MCU_START_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_START_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MCU_STOP_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef MCU_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MEMCPY_START_SEC_CODE )
#pragma ghs section text=".RamCodeSection"
# undef MEMCPY_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MEMCPY_STOP_SEC_CODE )
#pragma ghs section text=default
# undef MEMCPY_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MEM_30_FBLHIS_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef MEM_30_FBLHIS_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MEM_30_FBLHIS_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef MEM_30_FBLHIS_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MEM_30_FBLHIS_START_SEC_CONST )
   /* #pragma <enter your compiler specific pragma> */
# undef MEM_30_FBLHIS_START_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MEM_30_FBLHIS_STOP_SEC_CONST )
   /* #pragma <enter your compiler specific pragma> */
# undef MEM_30_FBLHIS_STOP_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( MEM_30_FBLHIS_START_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef MEM_30_FBLHIS_START_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

#if defined( MEM_30_FBLHIS_STOP_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef MEM_30_FBLHIS_STOP_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PDUR_START_SEC_CODE )
#pragma ghs section text=".RamCodeSection"
# undef PDUR_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PDUR_STOP_SEC_CODE )
#pragma ghs section text=default
# undef PDUR_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PORT_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PORT_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PORT_START_SEC_CODE_ASIL_B )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_START_SEC_CODE_ASIL_B
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PORT_STOP_SEC_CODE_ASIL_B )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_STOP_SEC_CODE_ASIL_B
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PORT_START_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_START_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PORT_STOP_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_STOP_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PORT_START_SEC_CONFIG_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PORT_START_SEC_CONST_ASIL_B_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_START_SEC_CONST_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PORT_STOP_SEC_CONST_ASIL_B_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_STOP_SEC_CONST_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PORT_START_SEC_CONST_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_START_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PORT_STOP_SEC_CONST_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_STOP_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PORT_START_SEC_DBTOC_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_START_SEC_DBTOC_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PORT_STOP_SEC_DBTOC_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_STOP_SEC_DBTOC_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PORT_START_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_START_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PORT_STOP_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_STOP_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PORT_START_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_START_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PORT_STOP_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_STOP_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PORT_START_SEC_VAR_1BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_START_SEC_VAR_1BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PORT_STOP_SEC_VAR_1BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_STOP_SEC_VAR_1BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PORT_START_SEC_VAR_ASIL_B_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_START_SEC_VAR_ASIL_B_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PORT_STOP_SEC_VAR_ASIL_B_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_STOP_SEC_VAR_ASIL_B_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PORT_START_SEC_VAR_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_START_SEC_VAR_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PORT_STOP_SEC_VAR_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_STOP_SEC_VAR_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PORT_START_SEC_VAR_INIT_ASIL_B_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_START_SEC_VAR_INIT_ASIL_B_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PORT_STOP_SEC_VAR_INIT_ASIL_B_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_STOP_SEC_VAR_INIT_ASIL_B_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PORT_START_SEC_VAR_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_START_SEC_VAR_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PORT_STOP_SEC_VAR_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_STOP_SEC_VAR_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PORT_START_SEC_VAR_NOINIT_16BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_START_SEC_VAR_NOINIT_16BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PORT_STOP_SEC_VAR_NOINIT_16BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_STOP_SEC_VAR_NOINIT_16BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PORT_START_SEC_VAR_NOINIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_START_SEC_VAR_NOINIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PORT_STOP_SEC_VAR_NOINIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_STOP_SEC_VAR_NOINIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PORT_START_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PORT_STOP_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PORT_START_SEC_VAR_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_START_SEC_VAR_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PORT_STOP_SEC_VAR_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_STOP_SEC_VAR_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PORT_START_SEC_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_START_SEC_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PORT_STOP_SEC_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_STOP_SEC_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PORT_START_SEC_VAR_NO_INIT_ASIL_B_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_START_SEC_VAR_NO_INIT_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PORT_STOP_SEC_VAR_NO_INIT_ASIL_B_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_STOP_SEC_VAR_NO_INIT_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_START_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef PORT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PWM_START_SEC_APPL_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_START_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PWM_STOP_SEC_APPL_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_STOP_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PWM_START_SEC_CODE_FAST )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_START_SEC_CODE_FAST
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PWM_STOP_SEC_CODE_FAST )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_STOP_SEC_CODE_FAST
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PWM_START_SEC_CONFIG_DATA_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_START_SEC_CONFIG_DATA_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PWM_STOP_SEC_CONFIG_DATA_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_STOP_SEC_CONFIG_DATA_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PWM_START_SEC_CONFIG_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_START_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PWM_STOP_SEC_CONFIG_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PWM_START_SEC_CONFIG_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_START_SEC_CONFIG_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PWM_STOP_SEC_CONFIG_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_STOP_SEC_CONFIG_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PWM_START_SEC_DBTOC_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_START_SEC_DBTOC_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PWM_STOP_SEC_DBTOC_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_STOP_SEC_DBTOC_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PWM_START_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_START_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PWM_STOP_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_STOP_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PWM_START_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_START_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PWM_STOP_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_STOP_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PWM_START_SEC_VAR_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_START_SEC_VAR_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PWM_STOP_SEC_VAR_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_STOP_SEC_VAR_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PWM_START_SEC_VAR_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_START_SEC_VAR_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PWM_STOP_SEC_VAR_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_STOP_SEC_VAR_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PWM_START_SEC_VAR_NOINIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_START_SEC_VAR_NOINIT_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PWM_STOP_SEC_VAR_NOINIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_STOP_SEC_VAR_NOINIT_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PWM_START_SEC_VAR_NOINIT_16BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_START_SEC_VAR_NOINIT_16BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PWM_STOP_SEC_VAR_NOINIT_16BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_STOP_SEC_VAR_NOINIT_16BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PWM_START_SEC_VAR_NOINIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_START_SEC_VAR_NOINIT_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PWM_STOP_SEC_VAR_NOINIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_STOP_SEC_VAR_NOINIT_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PWM_START_SEC_VAR_NOINIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_START_SEC_VAR_NOINIT_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PWM_STOP_SEC_VAR_NOINIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_STOP_SEC_VAR_NOINIT_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PWM_START_SEC_VAR_NOINIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_START_SEC_VAR_NOINIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PWM_STOP_SEC_VAR_NOINIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_STOP_SEC_VAR_NOINIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PWM_START_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PWM_START_SEC_VAR_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_START_SEC_VAR_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PWM_STOP_SEC_VAR_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_STOP_SEC_VAR_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PWM_START_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_START_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PWM_STOP_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_STOP_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PWM_START_SEC_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_START_SEC_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PWM_STOP_SEC_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_STOP_SEC_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( PWM_START_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_START_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( PWM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef PWM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( RAMTST_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( RAMTST_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( RAMTST_START_SEC_CODE_ASIL_B )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_START_SEC_CODE_ASIL_B
# undef FBL_MEMMAP_ERROR
#endif

#if defined( RAMTST_STOP_SEC_CODE_ASIL_B )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_STOP_SEC_CODE_ASIL_B
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( RAMTST_START_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_START_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( RAMTST_STOP_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_STOP_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( RAMTST_START_SEC_CONFIG_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_START_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( RAMTST_STOP_SEC_CONFIG_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_STOP_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( RAMTST_START_SEC_CONST_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_START_SEC_CONST_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( RAMTST_STOP_SEC_CONST_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_STOP_SEC_CONST_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( RAMTST_START_SEC_CONST_ASIL_B_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_START_SEC_CONST_ASIL_B_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( RAMTST_STOP_SEC_CONST_ASIL_B_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_STOP_SEC_CONST_ASIL_B_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( RAMTST_START_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_START_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( RAMTST_STOP_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_STOP_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( RAMTST_START_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_START_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( RAMTST_STOP_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_STOP_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( RAMTST_START_SEC_VAR_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_START_SEC_VAR_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( RAMTST_STOP_SEC_VAR_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_STOP_SEC_VAR_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( RAMTST_START_SEC_VAR_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_START_SEC_VAR_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( RAMTST_STOP_SEC_VAR_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_STOP_SEC_VAR_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( RAMTST_START_SEC_VAR_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_START_SEC_VAR_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( RAMTST_STOP_SEC_VAR_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_STOP_SEC_VAR_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( RAMTST_START_SEC_VAR_INIT_ASIL_B_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_START_SEC_VAR_INIT_ASIL_B_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( RAMTST_STOP_SEC_VAR_INIT_ASIL_B_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_STOP_SEC_VAR_INIT_ASIL_B_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( RAMTST_START_SEC_VAR_INIT_ASIL_B_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_START_SEC_VAR_INIT_ASIL_B_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( RAMTST_STOP_SEC_VAR_INIT_ASIL_B_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_STOP_SEC_VAR_INIT_ASIL_B_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( RAMTST_START_SEC_VAR_INIT_ASIL_B_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_START_SEC_VAR_INIT_ASIL_B_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( RAMTST_STOP_SEC_VAR_INIT_ASIL_B_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_STOP_SEC_VAR_INIT_ASIL_B_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( RAMTST_START_SEC_VAR_INIT_ASIL_B_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_START_SEC_VAR_INIT_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( RAMTST_STOP_SEC_VAR_INIT_ASIL_B_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_STOP_SEC_VAR_INIT_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( RAMTST_START_SEC_VAR_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_START_SEC_VAR_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( RAMTST_STOP_SEC_VAR_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( RAMTST_START_SEC_VAR_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_START_SEC_VAR_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( RAMTST_STOP_SEC_VAR_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_STOP_SEC_VAR_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( RAMTST_START_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_START_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( RAMTST_STOP_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_STOP_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( RAMTST_START_SEC_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_START_SEC_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( RAMTST_STOP_SEC_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_STOP_SEC_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( RAMTST_START_SEC_VAR_NO_INIT_ASIL_B_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_START_SEC_VAR_NO_INIT_ASIL_B_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( RAMTST_STOP_SEC_VAR_NO_INIT_ASIL_B_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_STOP_SEC_VAR_NO_INIT_ASIL_B_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( RAMTST_START_SEC_VAR_NO_INIT_ASIL_B_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_START_SEC_VAR_NO_INIT_ASIL_B_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( RAMTST_STOP_SEC_VAR_NO_INIT_ASIL_B_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_STOP_SEC_VAR_NO_INIT_ASIL_B_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( RAMTST_START_SEC_VAR_NO_INIT_ASIL_B_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_START_SEC_VAR_NO_INIT_ASIL_B_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( RAMTST_STOP_SEC_VAR_NO_INIT_ASIL_B_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_STOP_SEC_VAR_NO_INIT_ASIL_B_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( RAMTST_START_SEC_VAR_NO_INIT_ASIL_B_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_START_SEC_VAR_NO_INIT_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( RAMTST_STOP_SEC_VAR_NO_INIT_ASIL_B_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_STOP_SEC_VAR_NO_INIT_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( RAMTST_START_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_START_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( RAMTST_STOP_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( RAMTST_START_SEC_VAR_POWER_ON_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_START_SEC_VAR_POWER_ON_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( RAMTST_STOP_SEC_VAR_POWER_ON_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_STOP_SEC_VAR_POWER_ON_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( RAMTST_START_SEC_VAR_POWER_ON_INIT_ASIL_B_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_START_SEC_VAR_POWER_ON_INIT_ASIL_B_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( RAMTST_STOP_SEC_VAR_POWER_ON_INIT_ASIL_B_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_STOP_SEC_VAR_POWER_ON_INIT_ASIL_B_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( RAMTST_START_SEC_VAR_POWER_ON_INIT_ASIL_B_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_START_SEC_VAR_POWER_ON_INIT_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( RAMTST_STOP_SEC_VAR_POWER_ON_INIT_ASIL_B_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_STOP_SEC_VAR_POWER_ON_INIT_ASIL_B_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( RAMTST_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( RAMTST_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef RAMTST_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( R_FDL_START_SEC_CODERAM )
   /* #pragma <enter your compiler specific pragma> */
# undef R_FDL_START_SEC_CODERAM
# undef FBL_MEMMAP_ERROR
#endif

#if defined( R_FDL_STOP_SEC_CODERAM )
   /* #pragma <enter your compiler specific pragma> */
# undef R_FDL_STOP_SEC_CODERAM
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( R_FDL_START_SEC_CONST )
   /* #pragma <enter your compiler specific pragma> */
# undef R_FDL_START_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

#if defined( R_FDL_STOP_SEC_CONST )
   /* #pragma <enter your compiler specific pragma> */
# undef R_FDL_STOP_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( R_FDL_START_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef R_FDL_START_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( R_FDL_STOP_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef R_FDL_STOP_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( R_FDL_START_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef R_FDL_START_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

#if defined( R_FDL_STOP_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef R_FDL_STOP_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SECMPAR_START_SEC_DATA )
   /* #pragma <enter your compiler specific pragma> */
# undef SECMPAR_START_SEC_DATA
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SECMPAR_STOP_SEC_DATA )
   /* #pragma <enter your compiler specific pragma> */
# undef SECMPAR_STOP_SEC_DATA
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SECM_RAMCODE_START_SEC_CODE )
#pragma ghs section text=".RamCodeSection"
# undef SECM_RAMCODE_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SECM_RAMCODE_STOP_SEC_CODE )
#pragma ghs section text=default
# undef SECM_RAMCODE_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SECM_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef SECM_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SECM_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef SECM_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SECM_START_SEC_CONST )
   /* #pragma <enter your compiler specific pragma> */
# undef SECM_START_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SECM_STOP_SEC_CONST )
   /* #pragma <enter your compiler specific pragma> */
# undef SECM_STOP_SEC_CONST
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SECM_START_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef SECM_START_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SECM_STOP_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef SECM_STOP_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_APPL_CODE )
#pragma ghs section text=".RamCodeSection"
# undef SPI_START_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_APPL_CODE )
#pragma ghs section text=default
# undef SPI_STOP_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_BUFFER_VAR_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_BUFFER_VAR_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_BUFFER_VAR_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_BUFFER_VAR_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_BUFFER_VAR_INIT_16BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_BUFFER_VAR_INIT_16BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_BUFFER_VAR_INIT_16BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_BUFFER_VAR_INIT_16BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_BUFFER_VAR_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_BUFFER_VAR_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_BUFFER_VAR_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_BUFFER_VAR_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_CODE )
#pragma ghs section text=".RamCodeSection"
# undef SPI_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_CODE )
#pragma ghs section text=default
# undef SPI_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_CODE_FAST )
#pragma ghs section text=".RamCodeSection"
# undef SPI_START_SEC_CODE_FAST
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_CODE_FAST )
#pragma ghs section text=default
# undef SPI_STOP_SEC_CODE_FAST
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_CONFIG_DATA_UNSPECIFIED )
#pragma ghs startdata
#pragma ghs section rodata=".RamConstSection"
# undef SPI_START_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef SPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_CONFIG_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_CONFIG_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_CONFIG_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_CONFIG_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_CONFIG_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_CONFIG_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_CONFIG_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_CONFIG_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_CONST_8 )
#pragma ghs startdata
#pragma ghs section rodata=".RamConstSection"
# undef SPI_START_SEC_CONST_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_CONST_8 )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef SPI_STOP_SEC_CONST_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_CONST_UNSPECIFIED )
#pragma ghs startdata
#pragma ghs section rodata=".RamConstSection"
# undef SPI_START_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_CONST_UNSPECIFIED )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef SPI_STOP_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_DATA_BUFF_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_DATA_BUFF_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_DATA_BUFF_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_DATA_BUFF_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_DATA_BUFF_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_DATA_BUFF_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_DATA_BUFF_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_DATA_BUFF_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_DATA_LOC_RAM1 )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_DATA_LOC_RAM1
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_DATA_LOC_RAM1 )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_DATA_LOC_RAM1
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_DBTOC_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_DBTOC_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_DBTOC_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_DBTOC_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_VAR_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_VAR_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_VAR_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_VAR_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_VAR_DMA_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_VAR_DMA_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_VAR_DMA_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_VAR_DMA_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_VAR_DMA_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_VAR_DMA_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_VAR_DMA_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_VAR_DMA_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_VAR_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_VAR_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_VAR_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_VAR_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_VAR_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_VAR_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_VAR_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_VAR_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_VAR_INIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_VAR_INIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_VAR_INIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_VAR_INIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_VAR_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_VAR_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_VAR_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_VAR_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_VAR_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_VAR_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_VAR_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_VAR_NOINIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_VAR_NOINIT_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_VAR_NOINIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_VAR_NOINIT_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_VAR_NOINIT_16BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_VAR_NOINIT_16BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_VAR_NOINIT_16BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_VAR_NOINIT_16BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_VAR_NOINIT_1BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_VAR_NOINIT_1BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_VAR_NOINIT_1BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_VAR_NOINIT_1BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_VAR_NOINIT_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_VAR_NOINIT_32BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_VAR_NOINIT_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_VAR_NOINIT_32BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_VAR_NOINIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_VAR_NOINIT_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_VAR_NOINIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_VAR_NOINIT_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_VAR_NOINIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_VAR_NOINIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_VAR_NOINIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_VAR_NOINIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_VAR_NOINIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_VAR_NOINIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_VAR_NOINIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_VAR_NOINIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_VAR_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_VAR_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_VAR_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_VAR_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_VAR_NO_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_VAR_NO_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_VAR_NO_INIT_BOOLEAN )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_VAR_NO_INIT_BOOLEAN
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( SPI_START_SEC_VAR_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_START_SEC_VAR_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( SPI_STOP_SEC_VAR_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef SPI_STOP_SEC_VAR_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( START_SEC_VAR_NOINIT_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef START_SEC_VAR_NOINIT_8BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( START_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef START_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( START_SEC_VAR_ZERO_INIT_16BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef START_SEC_VAR_ZERO_INIT_16BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( STOP_SEC_VAR )
   /* #pragma <enter your compiler specific pragma> */
# undef STOP_SEC_VAR
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( VSECPRIM_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef VSECPRIM_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( VSECPRIM_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef VSECPRIM_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( VSECPRIM_START_SEC_CONST_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef VSECPRIM_START_SEC_CONST_32BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( VSECPRIM_STOP_SEC_CONST_32BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef VSECPRIM_STOP_SEC_CONST_32BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( VSECPRIM_START_SEC_CONST_64BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef VSECPRIM_START_SEC_CONST_64BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( VSECPRIM_STOP_SEC_CONST_64BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef VSECPRIM_STOP_SEC_CONST_64BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( VSECPRIM_START_SEC_CONST_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef VSECPRIM_START_SEC_CONST_8BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( VSECPRIM_STOP_SEC_CONST_8BIT )
   /* #pragma <enter your compiler specific pragma> */
# undef VSECPRIM_STOP_SEC_CONST_8BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( VSECPRIM_START_SEC_CONST_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef VSECPRIM_START_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( VSECPRIM_STOP_SEC_CONST_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef VSECPRIM_STOP_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( VSTDLIB_START_SEC_CODE )
#pragma ghs section text=".RamCodeSection"
# undef VSTDLIB_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( VSTDLIB_STOP_SEC_CODE )
#pragma ghs section text=default
# undef VSTDLIB_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( VSTDLIB_START_SEC_CONST_8BIT )
#pragma ghs startdata
#pragma ghs section rodata=".RamConstSection"
# undef VSTDLIB_START_SEC_CONST_8BIT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( VSTDLIB_STOP_SEC_CONST_8BIT )
#pragma ghs section rodata=default
#pragma ghs enddata
# undef VSTDLIB_STOP_SEC_CONST_8BIT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERA_START_SEC_APPL_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_START_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERA_STOP_SEC_APPL_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_STOP_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERA_START_SEC_CODE_FAST )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_START_SEC_CODE_FAST
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERA_STOP_SEC_CODE_FAST )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_STOP_SEC_CODE_FAST
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERA_START_SEC_CONFIG_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_START_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERA_STOP_SEC_CONFIG_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_STOP_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERA_START_SEC_DBTOC_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_START_SEC_DBTOC_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERA_STOP_SEC_DBTOC_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_STOP_SEC_DBTOC_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERA_START_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_START_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERA_STOP_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_STOP_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERA_START_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_START_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERA_STOP_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_STOP_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERA_START_SEC_VAR_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_START_SEC_VAR_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERA_STOP_SEC_VAR_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_STOP_SEC_VAR_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERA_START_SEC_VAR_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_START_SEC_VAR_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERA_STOP_SEC_VAR_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERA_START_SEC_VAR_NOINIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_START_SEC_VAR_NOINIT_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERA_STOP_SEC_VAR_NOINIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_STOP_SEC_VAR_NOINIT_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERA_START_SEC_VAR_NOINIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_START_SEC_VAR_NOINIT_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERA_STOP_SEC_VAR_NOINIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_STOP_SEC_VAR_NOINIT_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERA_START_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERA_STOP_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERA_START_SEC_VAR_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_START_SEC_VAR_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERA_STOP_SEC_VAR_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_STOP_SEC_VAR_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERA_START_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_START_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERA_STOP_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_STOP_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERA_START_SEC_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_START_SEC_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERA_STOP_SEC_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_STOP_SEC_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERA_START_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_START_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERA_STOP_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERA_START_SEC_VAR_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_START_SEC_VAR_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERA_STOP_SEC_VAR_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERA_STOP_SEC_VAR_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERB_START_SEC_APPL_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERB_START_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERB_STOP_SEC_APPL_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERB_STOP_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERB_START_SEC_CODE_FAST )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERB_START_SEC_CODE_FAST
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERB_STOP_SEC_CODE_FAST )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERB_STOP_SEC_CODE_FAST
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERB_START_SEC_CONFIG_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERB_START_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERB_STOP_SEC_CONFIG_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERB_STOP_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERB_START_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERB_START_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERB_STOP_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERB_STOP_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERB_START_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERB_START_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERB_STOP_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERB_STOP_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERB_START_SEC_VAR_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERB_START_SEC_VAR_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERB_STOP_SEC_VAR_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERB_STOP_SEC_VAR_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERB_START_SEC_VAR_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERB_START_SEC_VAR_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERB_STOP_SEC_VAR_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERB_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERB_START_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERB_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERB_STOP_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERB_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERB_START_SEC_VAR_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERB_START_SEC_VAR_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERB_STOP_SEC_VAR_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERB_STOP_SEC_VAR_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERB_START_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERB_START_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERB_STOP_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERB_STOP_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERB_START_SEC_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERB_START_SEC_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERB_STOP_SEC_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERB_STOP_SEC_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERB_START_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERB_START_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERB_STOP_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERB_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERB_START_SEC_VAR_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERB_START_SEC_VAR_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERB_STOP_SEC_VAR_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERB_STOP_SEC_VAR_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERC_START_SEC_APPL_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERC_START_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERC_STOP_SEC_APPL_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERC_STOP_SEC_APPL_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERC_START_SEC_CODE_FAST )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERC_START_SEC_CODE_FAST
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERC_STOP_SEC_CODE_FAST )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERC_STOP_SEC_CODE_FAST
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERC_START_SEC_CONFIG_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERC_START_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERC_STOP_SEC_CONFIG_DATA_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERC_START_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERC_START_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERC_STOP_SEC_PRIVATE_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERC_STOP_SEC_PRIVATE_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERC_START_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERC_START_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERC_STOP_SEC_PUBLIC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERC_STOP_SEC_PUBLIC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERC_START_SEC_VAR_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERC_START_SEC_VAR_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERC_STOP_SEC_VAR_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERC_STOP_SEC_VAR_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERC_START_SEC_VAR_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERC_START_SEC_VAR_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERC_STOP_SEC_VAR_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERC_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERC_START_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERC_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERC_STOP_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERC_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERC_START_SEC_VAR_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERC_START_SEC_VAR_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERC_STOP_SEC_VAR_NO_INIT_16 )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERC_STOP_SEC_VAR_NO_INIT_16
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERC_START_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERC_START_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERC_STOP_SEC_VAR_NO_INIT_32 )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERC_STOP_SEC_VAR_NO_INIT_32
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERC_START_SEC_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERC_START_SEC_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERC_STOP_SEC_VAR_NO_INIT_8 )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERC_STOP_SEC_VAR_NO_INIT_8
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERC_START_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERC_START_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERC_STOP_SEC_VAR_NO_INIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERC_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDG_59_DRIVERC_START_SEC_VAR_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERC_START_SEC_VAR_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDG_59_DRIVERC_STOP_SEC_VAR_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WDG_59_DRIVERC_STOP_SEC_VAR_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WDTRIGGER_START_SEC_CODE ) || \
    defined( WDTRIGGER_START_SEC_CODE_EXPORT )
#pragma ghs section text=".RamCodeSection"
# undef WDTRIGGER_START_SEC_CODE
# undef WDTRIGGER_START_SEC_CODE_EXPORT
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WDTRIGGER_STOP_SEC_CODE ) || \
    defined( WDTRIGGER_STOP_SEC_CODE_EXPORT )
#pragma ghs section text=default
# undef WDTRIGGER_STOP_SEC_CODE
# undef WDTRIGGER_STOP_SEC_CODE_EXPORT
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WRAPNV_START_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef WRAPNV_START_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WRAPNV_STOP_SEC_CODE )
   /* #pragma <enter your compiler specific pragma> */
# undef WRAPNV_STOP_SEC_CODE
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WRAPNV_START_SEC_CONST_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WRAPNV_START_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WRAPNV_STOP_SEC_CONST_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WRAPNV_STOP_SEC_CONST_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( WRAPNV_START_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WRAPNV_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

#if defined( WRAPNV_STOP_SEC_VAR_NOINIT_UNSPECIFIED )
   /* #pragma <enter your compiler specific pragma> */
# undef WRAPNV_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef FBL_MEMMAP_ERROR
#endif

/* ----------------------------------------------------------------------------------------------------------------- */

#if defined( FBL_MEMMAP_ERROR )
# error "Error in MemMap.h: MemMap section is not included!"
#endif

/* Module specific MISRA deviations:

   MD_MemMap_0883:
      Reason:     This file has to be included multiple times explicitly, due to the memory mapping mechanism.
      Risk:       No risk due to the undef pragmas and error pragma.
      Prevention: No prevention.

*/

/**********************************************************************************************************************
 *  END OF FILE: MEMMAP.H
 *********************************************************************************************************************/
