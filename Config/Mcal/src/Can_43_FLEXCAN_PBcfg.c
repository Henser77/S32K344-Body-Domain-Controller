/*==================================================================================================
*   Project              : RTD AUTOSAR 4.9
*   Platform             : CORTEXM
*   Peripheral           : FLEXCAN
*   Dependencies         :
*
*   Autosar Version      : 4.9.0
*   Autosar Revision     : ASR_REL_4_9_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 7.0.1
*   Build Version        : S32K3_RTD_7_0_1_D2602_ASR_REL_4_9_REV_0000_20260206
*
*   Copyright 2020 - 2026 NXP
*
*   NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/
/*==================================================================================================
==================================================================================================*/

/**
*   @file    Can_43_FLEXCAN_PBcfg.c
*   @version 7.0.1
*
*   @brief   AUTOSAR Can_43_FLEXCAN - module interface
*   @details Configuration Structures for PostBuild
*
*   @addtogroup CAN_43_FLEXCAN_DRIVER
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.1, External identifiers shall be distinct.
* The used compilers use more than 31 chars for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.2, Identifiers declared in the same scope and name space shall be distinct.
* The used compilers use more than 31 chars for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.4, Macro identifiers shall be distinct.
* The used compilers use more than 31 chars for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.5, Identifiers shall be distinct from macro names.
* The used compilers use more than 31 chars for identifiers.
*
* @section Can_43_FLEXCAN_PBcfg_c_REF_1
* Violates MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents
* of a header file being included more than once
* This violation is not fixed since the inclusion of <MA>_MemMap.h is as per AUTOSAR requirement [SWS_MemMap_00003].
*
* @section Can_43_FLEXCAN_PBcfg_c_REF_2
* Violates MISRA 2012 Advisory Rule 20.1, #include directives should only be preceded by preprocessor directives or comments.
* AUTOSAR imposes the specification of the sections in which certain parts of the driver must be placed.
*
* @section Can_43_FLEXCAN_PBcfg_c_REF_3
* Violates MISRA 2012 Advisory Rule 8.7, Function and objects should not be defined with external linkage if they
* are referenced in only one translation unit.
* This constant variable will be called by higher layer.
*
* @section Can_43_FLEXCAN_PBcfg_c_REF_4
* Violates MISRA 2012 Advisory Rule 8.9, An object should be defined at block scope if identifier only appears in a single function.
* These objects are used when Precompile is supported.
*
* @section Can_43_FLEXCAN_PBcfg_c_REF_5
* Violates MISRA 2012 Required Rule 8.4, A compatible declaration shall be visible when an object or function with external linkage is defined.
*
*/

/*
    (CAN078) The code file structure shall not be defined within this specification completely.
            At this point it shall be pointed out that the code-file structure shall include the following file named: Can_43_FLEXCAN_PBcfg.c.
            This file shall contain all post-build time configurable parameters.
    (CAN221) VariantPB: (Mix of precompile and Post Build multiple selectable configurable configurations.
*/
/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Can_43_FLEXCAN.h"
#include "Can_43_FLEXCAN_Ipw_Types.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CAN_43_FLEXCAN_VENDOR_ID_PBCFG_C                      43
#define CAN_43_FLEXCAN_AR_RELEASE_MAJOR_VERSION_PBCFG_C       4
#define CAN_43_FLEXCAN_AR_RELEASE_MINOR_VERSION_PBCFG_C       9
#define CAN_43_FLEXCAN_AR_RELEASE_REVISION_VERSION_PBCFG_C    0
#define CAN_43_FLEXCAN_SW_MAJOR_VERSION_PBCFG_C               7
#define CAN_43_FLEXCAN_SW_MINOR_VERSION_PBCFG_C               0
#define CAN_43_FLEXCAN_SW_PATCH_VERSION_PBCFG_C               1
/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and Can_43_FLEXCAN.h are of the same vendor */
#if (CAN_43_FLEXCAN_VENDOR_ID_PBCFG_C != CAN_43_FLEXCAN_VENDOR_ID)
    #error "Can_43_FLEXCAN_PBcfg.c and Can_43_FLEXCAN.h have different vendor ids"
#endif
/* Check if current file and Can_43_FLEXCAN.h are of the same Autosar version */
#if ((CAN_43_FLEXCAN_AR_RELEASE_MAJOR_VERSION_PBCFG_C != CAN_43_FLEXCAN_AR_RELEASE_MAJOR_VERSION) || \
     (CAN_43_FLEXCAN_AR_RELEASE_MINOR_VERSION_PBCFG_C != CAN_43_FLEXCAN_AR_RELEASE_MINOR_VERSION) || \
     (CAN_43_FLEXCAN_AR_RELEASE_REVISION_VERSION_PBCFG_C != CAN_43_FLEXCAN_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Can_43_FLEXCAN_PBcfg.c and Can_43_FLEXCAN.h are different"
#endif
/* Check if current file and Can_43_FLEXCAN.h are of the same Software version */
#if ((CAN_43_FLEXCAN_SW_MAJOR_VERSION_PBCFG_C != CAN_43_FLEXCAN_SW_MAJOR_VERSION) || \
     (CAN_43_FLEXCAN_SW_MINOR_VERSION_PBCFG_C != CAN_43_FLEXCAN_SW_MINOR_VERSION) || \
     (CAN_43_FLEXCAN_SW_PATCH_VERSION_PBCFG_C != CAN_43_FLEXCAN_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Can_43_FLEXCAN_PBcfg.c and Can_43_FLEXCAN.h are different"
#endif
/* Check if current file and Can_43_FLEXCAN_Ipw_Types.h are of the same vendor */
#if (CAN_43_FLEXCAN_VENDOR_ID_PBCFG_C != CAN_43_FLEXCAN_IPW_TYPES_VENDOR_ID_H)
    #error "Can_43_FLEXCAN_PBcfg.c and Can_43_FLEXCAN_Ipw_Types.h have different vendor ids"
#endif
/* Check if current file and Can_43_FLEXCAN_Ipw_Types.h are of the same Autosar version */
#if ((CAN_43_FLEXCAN_AR_RELEASE_MAJOR_VERSION_PBCFG_C != CAN_43_FLEXCAN_IPW_TYPES_AR_RELEASE_MAJOR_VERSION_H) || \
     (CAN_43_FLEXCAN_AR_RELEASE_MINOR_VERSION_PBCFG_C != CAN_43_FLEXCAN_IPW_TYPES_AR_RELEASE_MINOR_VERSION_H) || \
     (CAN_43_FLEXCAN_AR_RELEASE_REVISION_VERSION_PBCFG_C != CAN_43_FLEXCAN_IPW_TYPES_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Can_43_FLEXCAN_PBcfg.c and Can_43_FLEXCAN_Ipw_Types.h are different"
#endif
/* Check if current file and Can_43_FLEXCAN_Ipw_Types.h are of the same Software version */
#if ((CAN_43_FLEXCAN_SW_MAJOR_VERSION_PBCFG_C != CAN_43_FLEXCAN_IPW_TYPES_SW_MAJOR_VERSION_H) || \
     (CAN_43_FLEXCAN_SW_MINOR_VERSION_PBCFG_C != CAN_43_FLEXCAN_IPW_TYPES_SW_MINOR_VERSION_H) || \
     (CAN_43_FLEXCAN_SW_PATCH_VERSION_PBCFG_C != CAN_43_FLEXCAN_IPW_TYPES_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Can_43_FLEXCAN_PBcfg.c and Can_43_FLEXCAN_Ipw_Types.h are different"
#endif
/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
#if (CAN_43_FLEXCAN_FEATURE_HAS_DMA_ENABLE == STD_ON)
    /* CAN_43_FLEXCAN_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE */
    #define CAN_43_FLEXCAN_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
    #include "Can_43_FLEXCAN_MemMap.h"


    #define CAN_43_FLEXCAN_STOP_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
    #include "Can_43_FLEXCAN_MemMap.h"
    /* CAN_43_FLEXCAN_STOP_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE */
#endif /* (CAN_43_FLEXCAN_FEATURE_HAS_DMA_ENABLE == STD_ON) */
/*==================================================================================================
*                                   GLOBAL FUNCTION PROTOTYPES
==================================================================================================*/
#define CAN_43_FLEXCAN_START_SEC_CODE
/* @violates @ref Can_43_FLEXCAN_PBcfg_c_REF_1 MISRA 2012 Required Directive 4.10 */
#include "Can_43_FLEXCAN_MemMap.h"


#define CAN_43_FLEXCAN_STOP_SEC_CODE
/* @violates @ref Can_43_FLEXCAN_PBcfg_c_REF_1 MISRA 2012 Required Directive 4.10 */
/* @violates @ref Can_43_FLEXCAN_PBcfg_c_REF_2 MISRA 2012 Advisory Rule 20.1 */
#include "Can_43_FLEXCAN_MemMap.h"
/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/
#define CAN_43_FLEXCAN_START_SEC_CONFIG_DATA_32
#include "Can_43_FLEXCAN_MemMap.h"
/**
*   @brief  Hardware Buffer Address of CanController_0
*/
static const uint32 Can_au32HwBufferAddr_Ctrl0[6U]=
{
    (FLEXCAN_0_BASE + (uint32)0x0080U),
    (FLEXCAN_0_BASE + (uint32)0x00c8U),
    (FLEXCAN_0_BASE + (uint32)0x0110U),
    (FLEXCAN_0_BASE + (uint32)0x0158U),
    (FLEXCAN_0_BASE + (uint32)0x01a0U),
    (FLEXCAN_0_BASE + (uint32)0x01e8U)
};
/**
*   @brief  Hardware Buffer Address of CanController_1
*/
static const uint32 Can_au32HwBufferAddr_Ctrl1[6U]=
{
    (FLEXCAN_1_BASE + (uint32)0x0080U),
    (FLEXCAN_1_BASE + (uint32)0x0090U),
    (FLEXCAN_1_BASE + (uint32)0x00a0U),
    (FLEXCAN_1_BASE + (uint32)0x00b0U),
    (FLEXCAN_1_BASE + (uint32)0x00c0U),
    (FLEXCAN_1_BASE + (uint32)0x00d0U)
};
/**
*   @brief  Hardware Buffer Address of CanController_2
*/
static const uint32 Can_au32HwBufferAddr_Ctrl2[6U]=
{
    (FLEXCAN_2_BASE + (uint32)0x0080U),
    (FLEXCAN_2_BASE + (uint32)0x0090U),
    (FLEXCAN_2_BASE + (uint32)0x00a0U),
    (FLEXCAN_2_BASE + (uint32)0x00b0U),
    (FLEXCAN_2_BASE + (uint32)0x00c0U),
    (FLEXCAN_2_BASE + (uint32)0x00d0U)
};

/**
*   @brief  Hardware Filter of Can0_Rx_Com_0x120
*/
static const Can_43_FLEXCAN_HwFilterType Can_aHwFilter_Object0[1U]=
{
    /* ID Filter Element_0 of Rx MB with STANDARD Id */
    {
        (uint32)0x00000120U,
        (uint32)0xdffc0000U
    }
};

/**
*   @brief  Hardware Filter of Can0_Rx_Diag_0x7E0
*/
static const Can_43_FLEXCAN_HwFilterType Can_aHwFilter_Object1[1U]=
{
    /* ID Filter Element_0 of Rx MB with STANDARD Id */
    {
        (uint32)0x000007e0U,
        (uint32)0xdffc0000U
    }
};

/**
*   @brief  Hardware Filter of Can0_Rx_Nm_0x500
*/
static const Can_43_FLEXCAN_HwFilterType Can_aHwFilter_Object2[1U]=
{
    /* ID Filter Element_0 of Rx MB with STANDARD Id */
    {
        (uint32)0x00000500U,
        (uint32)0xdffc0000U
    }
};

/**
*   @brief  Hardware Filter of Can1_Rx_Veh_0x200
*/
static const Can_43_FLEXCAN_HwFilterType Can_aHwFilter_Object3[1U]=
{
    /* ID Filter Element_0 of Rx MB with STANDARD Id */
    {
        (uint32)0x00000200U,
        (uint32)0xdffc0000U
    }
};

/**
*   @brief  Hardware Filter of Can1_Rx_Tq_0x210
*/
static const Can_43_FLEXCAN_HwFilterType Can_aHwFilter_Object4[1U]=
{
    /* ID Filter Element_0 of Rx MB with STANDARD Id */
    {
        (uint32)0x00000210U,
        (uint32)0xdffc0000U
    }
};

/**
*   @brief  Hardware Filter of Can2_Rx_Body_0x100
*/
static const Can_43_FLEXCAN_HwFilterType Can_aHwFilter_Object5[1U]=
{
    /* ID Filter Element_0 of Rx MB with STANDARD Id */
    {
        (uint32)0x00000100U,
        (uint32)0xdffc0000U
    }
};

/**
*   @brief  Hardware Filter of Can2_Rx_Light_0x110
*/
static const Can_43_FLEXCAN_HwFilterType Can_aHwFilter_Object6[1U]=
{
    /* ID Filter Element_0 of Rx MB with STANDARD Id */
    {
        (uint32)0x00000110U,
        (uint32)0xdffc0000U
    }
};

/**
*   @brief  Hardware Filter of Can1_Rx_Nm_0x500
*/
static const Can_43_FLEXCAN_HwFilterType Can_aHwFilter_Object7[1U]=
{
    /* ID Filter Element_0 of Rx MB with STANDARD Id */
    {
        (uint32)0x00000500U,
        (uint32)0xdffc0000U
    }
};

/**
*   @brief  Hardware Filter of Can2_Rx_Nm_0x500
*/
static const Can_43_FLEXCAN_HwFilterType Can_aHwFilter_Object8[1U]=
{
    /* ID Filter Element_0 of Rx MB with STANDARD Id */
    {
        (uint32)0x00000500U,
        (uint32)0xdffc0000U
    }
};

#define CAN_43_FLEXCAN_STOP_SEC_CONFIG_DATA_32
#include "Can_43_FLEXCAN_MemMap.h"

#define CAN_43_FLEXCAN_START_SEC_CONFIG_DATA_8
#include "Can_43_FLEXCAN_MemMap.h"
/**
*   @brief  Hardware Buffer Index of CanController_0
*/
static const uint8 Can_au8HwBufferIndex_Ctrl0[6U]=
{
    (uint8)0U,
    (uint8)1U,
    (uint8)2U,
    (uint8)3U,
    (uint8)4U,
    (uint8)5U
};
/**
*   @brief  Hardware Buffer Index of CanController_1
*/
static const uint8 Can_au8HwBufferIndex_Ctrl1[6U]=
{
    (uint8)0U,
    (uint8)1U,
    (uint8)2U,
    (uint8)3U,
    (uint8)4U,
    (uint8)5U
};
/**
*   @brief  Hardware Buffer Index of CanController_2
*/
static const uint8 Can_au8HwBufferIndex_Ctrl2[6U]=
{
    (uint8)0U,
    (uint8)1U,
    (uint8)2U,
    (uint8)3U,
    (uint8)4U,
    (uint8)5U
};

/**
*   @brief  Mapping Controller ID to Controller hardware offset
*/
static const uint8 Can_aCtrlOffsetToCtrlIDMap[CAN_43_FLEXCAN_HWCONTROLLER_SUPPORT]=
{
    (uint8)0U,
    (uint8)1U,
    (uint8)2U,
    (uint8)CAN_43_FLEXCAN_CONTROLLER_UNUSED,
    (uint8)CAN_43_FLEXCAN_CONTROLLER_UNUSED,
    (uint8)CAN_43_FLEXCAN_CONTROLLER_UNUSED
};

/**
*   @brief  Mapping Controller ID to Hardware Object ID
*/
static const uint8 Can_aHwObjIDToCtrlIDMap[CAN_43_FLEXCAN_HWOBJECT_CONFIG_COUNT]=
{
    (uint8)0U,
    (uint8)0U,
    (uint8)0U,
    (uint8)1U,
    (uint8)1U,
    (uint8)2U,
    (uint8)2U,
    (uint8)1U,
    (uint8)2U,
    (uint8)0U,
    (uint8)0U,
    (uint8)0U,
    (uint8)1U,
    (uint8)1U,
    (uint8)2U,
    (uint8)2U,
    (uint8)1U,
    (uint8)2U
};

#define CAN_43_FLEXCAN_STOP_SEC_CONFIG_DATA_8
#include "Can_43_FLEXCAN_MemMap.h"

#define CAN_43_FLEXCAN_START_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Can_43_FLEXCAN_PBcfg_c_REF_1 MISRA 2012 Required Directive 4.10 */
/* @violates @ref Can_43_FLEXCAN_PBcfg_c_REF_2 MISRA 2012 Advisory Rule 20.1 */
#include "Can_43_FLEXCAN_MemMap.h"

/**
*   @brief  Can Hardware Object Config
*/
/* @violates @ref Can_43_FLEXCAN_PBcfg_c_REF_5 MISRA 2012 Required Rule 8.4*/
static const Can_43_FLEXCAN_HwObjectConfigType Can_aHwObjectConfig[CAN_43_FLEXCAN_HWOBJECT_CONFIG_COUNT]=
{
    /* Can0_Rx_Com_0x120 of CanController_0*/
    {
        /* Hardware Object ID */
        (Can_HwHandleType)0U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_RECEIVE,
        /* ID Message type */
        CAN_43_FLEXCAN_STANDARD,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)64U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)1U,
        /* Hw Filter Config */
        Can_aHwFilter_Object0,
        /* Message Buffer is Rx normal */
        CAN_43_FLEXCAN_RX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl0[0U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl0[0U]
    },
    /* Can0_Rx_Diag_0x7E0 of CanController_0*/
    {
        /* Hardware Object ID */
        (Can_HwHandleType)1U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_RECEIVE,
        /* ID Message type */
        CAN_43_FLEXCAN_STANDARD,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)64U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)1U,
        /* Hw Filter Config */
        Can_aHwFilter_Object1,
        /* Message Buffer is Rx normal */
        CAN_43_FLEXCAN_RX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl0[1U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl0[1U]
    },
    /* Can0_Rx_Nm_0x500 of CanController_0*/
    {
        /* Hardware Object ID */
        (Can_HwHandleType)2U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_RECEIVE,
        /* ID Message type */
        CAN_43_FLEXCAN_STANDARD,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)64U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)1U,
        /* Hw Filter Config */
        Can_aHwFilter_Object2,
        /* Message Buffer is Rx normal */
        CAN_43_FLEXCAN_RX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl0[2U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl0[2U]
    },
    /* Can1_Rx_Veh_0x200 of CanController_1*/
    {
        /* Hardware Object ID */
        (Can_HwHandleType)3U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_RECEIVE,
        /* ID Message type */
        CAN_43_FLEXCAN_STANDARD,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)1U,
        /* Hw Filter Config */
        Can_aHwFilter_Object3,
        /* Message Buffer is Rx normal */
        CAN_43_FLEXCAN_RX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl1[0U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl1[0U]
    },
    /* Can1_Rx_Tq_0x210 of CanController_1*/
    {
        /* Hardware Object ID */
        (Can_HwHandleType)4U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_RECEIVE,
        /* ID Message type */
        CAN_43_FLEXCAN_STANDARD,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)1U,
        /* Hw Filter Config */
        Can_aHwFilter_Object4,
        /* Message Buffer is Rx normal */
        CAN_43_FLEXCAN_RX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl1[1U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl1[1U]
    },
    /* Can2_Rx_Body_0x100 of CanController_2*/
    {
        /* Hardware Object ID */
        (Can_HwHandleType)5U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_RECEIVE,
        /* ID Message type */
        CAN_43_FLEXCAN_STANDARD,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)1U,
        /* Hw Filter Config */
        Can_aHwFilter_Object5,
        /* Message Buffer is Rx normal */
        CAN_43_FLEXCAN_RX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl2[0U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl2[0U]
    },
    /* Can2_Rx_Light_0x110 of CanController_2*/
    {
        /* Hardware Object ID */
        (Can_HwHandleType)6U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_RECEIVE,
        /* ID Message type */
        CAN_43_FLEXCAN_STANDARD,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)1U,
        /* Hw Filter Config */
        Can_aHwFilter_Object6,
        /* Message Buffer is Rx normal */
        CAN_43_FLEXCAN_RX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl2[1U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl2[1U]
    },
    /* Can1_Rx_Nm_0x500 of CanController_1*/
    {
        /* Hardware Object ID */
        (Can_HwHandleType)7U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_RECEIVE,
        /* ID Message type */
        CAN_43_FLEXCAN_STANDARD,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)1U,
        /* Hw Filter Config */
        Can_aHwFilter_Object7,
        /* Message Buffer is Rx normal */
        CAN_43_FLEXCAN_RX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl1[2U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl1[2U]
    },
    /* Can2_Rx_Nm_0x500 of CanController_2*/
    {
        /* Hardware Object ID */
        (Can_HwHandleType)8U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_RECEIVE,
        /* ID Message type */
        CAN_43_FLEXCAN_STANDARD,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)1U,
        /* Hw Filter Config */
        Can_aHwFilter_Object8,
        /* Message Buffer is Rx normal */
        CAN_43_FLEXCAN_RX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl2[2U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl2[2U]
    },
    /* Can0_Tx_Com_0x123 of CanController_0*/
    {
        /* Hardware Object ID */
        (Can_HwHandleType)9U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_TRANSMIT,
        /* ID Message type */
        CAN_43_FLEXCAN_STANDARD,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)64U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)0U,
        /* Hw Filter Config */
        NULL_PTR,
        /* Message Buffer is Tx normal */
        CAN_43_FLEXCAN_TX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl0[3U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl0[3U]
    },
    /* Can0_Tx_Diag_0x7E8 of CanController_0*/
    {
        /* Hardware Object ID */
        (Can_HwHandleType)10U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_TRANSMIT,
        /* ID Message type */
        CAN_43_FLEXCAN_STANDARD,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)64U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)0U,
        /* Hw Filter Config */
        NULL_PTR,
        /* Message Buffer is Tx normal */
        CAN_43_FLEXCAN_TX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl0[4U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl0[4U]
    },
    /* Can0_Tx_Nm_0x500 of CanController_0*/
    {
        /* Hardware Object ID */
        (Can_HwHandleType)11U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_TRANSMIT,
        /* ID Message type */
        CAN_43_FLEXCAN_STANDARD,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)64U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)0U,
        /* Hw Filter Config */
        NULL_PTR,
        /* Message Buffer is Tx normal */
        CAN_43_FLEXCAN_TX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl0[5U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl0[5U]
    },
    /* Can1_Tx_Gw_0x123 of CanController_1*/
    {
        /* Hardware Object ID */
        (Can_HwHandleType)12U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_TRANSMIT,
        /* ID Message type */
        CAN_43_FLEXCAN_STANDARD,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)0U,
        /* Hw Filter Config */
        NULL_PTR,
        /* Message Buffer is Tx normal */
        CAN_43_FLEXCAN_TX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl1[3U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl1[3U]
    },
    /* Can1_Tx_Cmd_0x201 of CanController_1*/
    {
        /* Hardware Object ID */
        (Can_HwHandleType)13U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_TRANSMIT,
        /* ID Message type */
        CAN_43_FLEXCAN_STANDARD,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)0U,
        /* Hw Filter Config */
        NULL_PTR,
        /* Message Buffer is Tx normal */
        CAN_43_FLEXCAN_TX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl1[4U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl1[4U]
    },
    /* Can2_Tx_Gw_0x123 of CanController_2*/
    {
        /* Hardware Object ID */
        (Can_HwHandleType)14U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_TRANSMIT,
        /* ID Message type */
        CAN_43_FLEXCAN_STANDARD,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)0U,
        /* Hw Filter Config */
        NULL_PTR,
        /* Message Buffer is Tx normal */
        CAN_43_FLEXCAN_TX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl2[3U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl2[3U]
    },
    /* Can2_Tx_Body_0x101 of CanController_2*/
    {
        /* Hardware Object ID */
        (Can_HwHandleType)15U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_TRANSMIT,
        /* ID Message type */
        CAN_43_FLEXCAN_STANDARD,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)0U,
        /* Hw Filter Config */
        NULL_PTR,
        /* Message Buffer is Tx normal */
        CAN_43_FLEXCAN_TX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl2[4U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl2[4U]
    },
    /* Can1_Tx_Nm_0x500 of CanController_1*/
    {
        /* Hardware Object ID */
        (Can_HwHandleType)16U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_TRANSMIT,
        /* ID Message type */
        CAN_43_FLEXCAN_STANDARD,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)0U,
        /* Hw Filter Config */
        NULL_PTR,
        /* Message Buffer is Tx normal */
        CAN_43_FLEXCAN_TX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl1[5U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl1[5U]
    },
    /* Can2_Tx_Nm_0x500 of CanController_2*/
    {
        /* Hardware Object ID */
        (Can_HwHandleType)17U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_TRANSMIT,
        /* ID Message type */
        CAN_43_FLEXCAN_STANDARD,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)0U,
        /* Hw Filter Config */
        NULL_PTR,
        /* Message Buffer is Tx normal */
        CAN_43_FLEXCAN_TX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl2[5U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl2[5U]
    }
};

/**
*   @brief  Can Baudrate Config of CanController_0
*/
static const Can_43_FLEXCAN_BaudrateConfigType Can_aBaudrateConfig_Ctrl0[1U]=
{
    {
        /*Can_bEnhanceCBTEnable*/
        (boolean)TRUE,
        /* Tx Bit Rate Switch */
        (boolean)TRUE,
        /* FD enable */
        (boolean)TRUE,
        /* Nominal bit rate */
        {
            (uint8)3U,
            (uint8)10U,
            (uint8)3U,
            (uint16)7U,
            #if (CAN_43_FLEXCAN_DUAL_CLOCK_MODE == STD_ON)
            /* Alternative Baudrate Nominal Prescaler */
            (uint16)9U,
            #endif
            (uint8)2U
        },
        
        /* Data bit rate */
        {
            (uint8)16U,
            (uint8)14U,
            (uint8)7U,
            (uint16)0U,
            #if (CAN_43_FLEXCAN_DUAL_CLOCK_MODE == STD_ON)
            /* Alternative Baudrate Data Prescaler */
            (uint16)9U,
            #endif
            (uint8)3U
        },
        
        /* Tx Arbitration Start delay */
        (uint8)12U,
        /* Tranceiver Delay Enable */
        (boolean)TRUE,
        /* Tranceiver Delay Compensation Offset */
        (uint8)16U
    }
};

/**
*   @brief  HwObject's pointer structure of CanController_0
*/
static const Can_43_FLEXCAN_HwObjectConfigType * const Can_apHwObject_Ctrl0[6U]=
{
    &Can_aHwObjectConfig[0U],
    &Can_aHwObjectConfig[1U],
    &Can_aHwObjectConfig[2U],
    &Can_aHwObjectConfig[9U],
    &Can_aHwObjectConfig[10U],
    &Can_aHwObjectConfig[11U]
};
/**
*   @brief  Can Baudrate Config of CanController_1
*/
static const Can_43_FLEXCAN_BaudrateConfigType Can_aBaudrateConfig_Ctrl1[1U]=
{
    {
        /*Can_bEnhanceCBTEnable*/
        (boolean)TRUE,
        /* Tx Bit Rate Switch */
        (boolean)FALSE,
        /* FD enable */
        (boolean)FALSE,
        /* Nominal bit rate */
        {
            (uint8)3U,
            (uint8)10U,
            (uint8)3U,
            (uint16)7U,
            #if (CAN_43_FLEXCAN_DUAL_CLOCK_MODE == STD_ON)
            /* Alternative Baudrate Nominal Prescaler */
            (uint16)9U,
            #endif
            (uint8)2U
        },
        
        /* Data bit rate */
        {
            (uint8)0U,
            (uint8)0U,
            (uint8)0U,
            (uint16)0U,
            #if (CAN_43_FLEXCAN_DUAL_CLOCK_MODE == STD_ON)
            (uint16)0U,
            #endif
            (uint8)0U
        },
        
        /* Tx Arbitration Start delay */
        (uint8)12U,
        (boolean)FALSE,
        (uint8)0U
    }
};

/**
*   @brief  HwObject's pointer structure of CanController_1
*/
static const Can_43_FLEXCAN_HwObjectConfigType * const Can_apHwObject_Ctrl1[6U]=
{
    &Can_aHwObjectConfig[3U],
    &Can_aHwObjectConfig[4U],
    &Can_aHwObjectConfig[7U],
    &Can_aHwObjectConfig[12U],
    &Can_aHwObjectConfig[13U],
    &Can_aHwObjectConfig[16U]
};
/**
*   @brief  Can Baudrate Config of CanController_2
*/
static const Can_43_FLEXCAN_BaudrateConfigType Can_aBaudrateConfig_Ctrl2[1U]=
{
    {
        /*Can_bEnhanceCBTEnable*/
        (boolean)TRUE,
        /* Tx Bit Rate Switch */
        (boolean)FALSE,
        /* FD enable */
        (boolean)FALSE,
        /* Nominal bit rate */
        {
            (uint8)3U,
            (uint8)10U,
            (uint8)3U,
            (uint16)31U,
            #if (CAN_43_FLEXCAN_DUAL_CLOCK_MODE == STD_ON)
            /* Alternative Baudrate Nominal Prescaler */
            (uint16)9U,
            #endif
            (uint8)3U
        },
        
        /* Data bit rate */
        {
            (uint8)0U,
            (uint8)0U,
            (uint8)0U,
            (uint16)0U,
            #if (CAN_43_FLEXCAN_DUAL_CLOCK_MODE == STD_ON)
            (uint16)0U,
            #endif
            (uint8)0U
        },
        
        /* Tx Arbitration Start delay */
        (uint8)12U,
        (boolean)FALSE,
        (uint8)0U
    }
};

/**
*   @brief  HwObject's pointer structure of CanController_2
*/
static const Can_43_FLEXCAN_HwObjectConfigType * const Can_apHwObject_Ctrl2[6U]=
{
    &Can_aHwObjectConfig[5U],
    &Can_aHwObjectConfig[6U],
    &Can_aHwObjectConfig[8U],
    &Can_aHwObjectConfig[14U],
    &Can_aHwObjectConfig[15U],
    &Can_aHwObjectConfig[17U]
};
/* Inport external structure defined by IPW */
CAN_43_FLEXCAN_IPW_EXT
/**
*   @brief  Can Controller Config
*/
static const Can_43_FLEXCAN_ControllerConfigType Can_aControllerConfig[CAN_43_FLEXCAN_CONTROLLER_CONFIG_COUNT]=
{
    {
        /* Abstracted CanIf Controller ID */
        (uint8)0U,
        /* Controller ID */
        (uint8)0U,
        /* Controller Offset */
        (uint8)0U,
        /* Controller Base Address */
        FLEXCAN_0_BASE,
        /* Controller Activation */
        (boolean)TRUE,
        /* Bus Off uses polling */
        (boolean)FALSE,
        /* Wakeup uses Polling */
        (boolean)TRUE,
        /* --- Default values when Legacy FIFO is not available --- */
        /* Global mask of Legacy FIFO */
        (uint32)0xFFFFFFFFU,
        /* ID Acceptance Mode */
        CAN_43_FLEXCAN_LEGACY_FIFO_FORMAT_A,
        /* Legacy FIFO Warning Notification */
        NULL_PTR,
        /* Legacy FIFO Overflow Notification */
        NULL_PTR,
        /* Enhanced FIFO Overflow Notification */
        NULL_PTR,
        #if (CAN_43_FLEXCAN_FEATURE_HAS_DMA_ENABLE == STD_ON)
        /* FIFO Dma Error Notification is not used */
        NULL_PTR,
        /* DMA is not enabled */
        NULL_PTR,
        #endif /* (CAN_43_FLEXCAN_FEATURE_HAS_DMA_ENABLE == STD_ON) */
        /* Default Baudrate ID */
        (uint16)0U,
        /* Baudrate config Count*/
        (uint16)1U,
        /* Baudrate config Pointer Structure */
        Can_aBaudrateConfig_Ctrl0,
        /* Pointer to IPW structure to IP config */
        &Can_43_FLEXCANIpwHwChannelConfig0,
        /* Hw Object reference count */
        (uint8)6U,
        /* Pointer point to Group of Hw Object that refer to Controller */
        Can_apHwObject_Ctrl0
        #if (CAN_43_FLEXCAN_TIMESTAMP_ENABLE == STD_ON)
        ,(boolean)FALSE
        #endif /* (CAN_43_FLEXCAN_TIMESTAMP_ENABLE == STD_ON) */
    },
    {
        /* Abstracted CanIf Controller ID */
        (uint8)1U,
        /* Controller ID */
        (uint8)1U,
        /* Controller Offset */
        (uint8)1U,
        /* Controller Base Address */
        FLEXCAN_1_BASE,
        /* Controller Activation */
        (boolean)TRUE,
        /* Bus Off uses polling */
        (boolean)FALSE,
        /* Wakeup uses Polling */
        (boolean)TRUE,
        /* --- Default values when Legacy FIFO is not available --- */
        /* Global mask of Legacy FIFO */
        (uint32)0xFFFFFFFFU,
        /* ID Acceptance Mode */
        CAN_43_FLEXCAN_LEGACY_FIFO_FORMAT_A,
        /* Legacy FIFO Warning Notification */
        NULL_PTR,
        /* Legacy FIFO Overflow Notification */
        NULL_PTR,
        /* Enhanced FIFO Overflow Notification */
        NULL_PTR,
        #if (CAN_43_FLEXCAN_FEATURE_HAS_DMA_ENABLE == STD_ON)
        /* FIFO Dma Error Notification is not used */
        NULL_PTR,
        /* DMA is not enabled */
        NULL_PTR,
        #endif /* (CAN_43_FLEXCAN_FEATURE_HAS_DMA_ENABLE == STD_ON) */
        /* Default Baudrate ID */
        (uint16)0U,
        /* Baudrate config Count*/
        (uint16)1U,
        /* Baudrate config Pointer Structure */
        Can_aBaudrateConfig_Ctrl1,
        /* Pointer to IPW structure to IP config */
        &Can_43_FLEXCANIpwHwChannelConfig1,
        /* Hw Object reference count */
        (uint8)6U,
        /* Pointer point to Group of Hw Object that refer to Controller */
        Can_apHwObject_Ctrl1
        #if (CAN_43_FLEXCAN_TIMESTAMP_ENABLE == STD_ON)
        ,(boolean)FALSE
        #endif /* (CAN_43_FLEXCAN_TIMESTAMP_ENABLE == STD_ON) */
    },
    {
        /* Abstracted CanIf Controller ID */
        (uint8)2U,
        /* Controller ID */
        (uint8)2U,
        /* Controller Offset */
        (uint8)2U,
        /* Controller Base Address */
        FLEXCAN_2_BASE,
        /* Controller Activation */
        (boolean)TRUE,
        /* Bus Off uses polling */
        (boolean)FALSE,
        /* Wakeup uses Polling */
        (boolean)TRUE,
        /* --- Default values when Legacy FIFO is not available --- */
        /* Global mask of Legacy FIFO */
        (uint32)0xFFFFFFFFU,
        /* ID Acceptance Mode */
        CAN_43_FLEXCAN_LEGACY_FIFO_FORMAT_A,
        /* Legacy FIFO Warning Notification */
        NULL_PTR,
        /* Legacy FIFO Overflow Notification */
        NULL_PTR,
        /* Enhanced FIFO Overflow Notification */
        NULL_PTR,
        #if (CAN_43_FLEXCAN_FEATURE_HAS_DMA_ENABLE == STD_ON)
        /* FIFO Dma Error Notification is not used */
        NULL_PTR,
        /* DMA is not enabled */
        NULL_PTR,
        #endif /* (CAN_43_FLEXCAN_FEATURE_HAS_DMA_ENABLE == STD_ON) */
        /* Default Baudrate ID */
        (uint16)0U,
        /* Baudrate config Count*/
        (uint16)1U,
        /* Baudrate config Pointer Structure */
        Can_aBaudrateConfig_Ctrl2,
        /* Pointer to IPW structure to IP config */
        &Can_43_FLEXCANIpwHwChannelConfig2,
        /* Hw Object reference count */
        (uint8)6U,
        /* Pointer point to Group of Hw Object that refer to Controller */
        Can_apHwObject_Ctrl2
        #if (CAN_43_FLEXCAN_TIMESTAMP_ENABLE == STD_ON)
        ,(boolean)FALSE
        #endif /* (CAN_43_FLEXCAN_TIMESTAMP_ENABLE == STD_ON) */
    }
};


/**
*   @brief  Can Controller Object's pointer structure
*/
static const Can_43_FLEXCAN_ControllerConfigType * const Can_apController[CAN_43_FLEXCAN_CONTROLLER_CONFIG_COUNT]=
{
    &Can_aControllerConfig[0U],
    &Can_aControllerConfig[1U],
    &Can_aControllerConfig[2U]
};
/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
/**
*   @brief  Top level structure contain all Can driver Config
*/

/* @violates @ref Can_43_FLEXCAN_PBcfg_c_REF_3 MISRA 2012 Advisory Rule 8.7 */
/* @violates @ref Can_43_FLEXCAN_PBcfg_c_REF_4 MISRA 2012 Advisory Rule 8.9 */
/* @violates @ref Can_43_FLEXCAN_PBcfg_c_REF_5 MISRA 2012 Required Rule 8.4 */
const Can_43_FLEXCAN_ConfigType Can_43_FLEXCAN_Config =
{
    /* Configuration Partition ID */
    (uint32)0U,
    /* The HTH first Index after HRH consecutive */
    (Can_HwHandleType)9U,
    /* Mapping Controller ID to Controller Hw Offset */
    Can_aCtrlOffsetToCtrlIDMap,
    /* Mapping Controller ID to Hardware Object ID */
    Can_aHwObjIDToCtrlIDMap,
    /* Pointer point to Can Hw Object Config */
    Can_aHwObjectConfig,
    /* Array of Pointer to Controller infomation have aligned by Controller ID */
    Can_apController
};


#define CAN_43_FLEXCAN_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Can_43_FLEXCAN_PBcfg_c_REF_1 MISRA 2012 Required Directive 4.10 */
/* @violates @ref Can_43_FLEXCAN_PBcfg_c_REF_2 MISRA 2012 Advisory Rule 20.1 */
#include "Can_43_FLEXCAN_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
