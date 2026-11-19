/**
 * COPYRIGHT
 * ---------------------------------------------------------------------------------------------------------------------
 * Copyright (c) iSOFT INFRASTRUCTURE SOFTWARE CO., LTD. This software is proprietary to
 * iSOFT INFRASTRUCTURE SOFTWARE CO., LTD., and all rights are reserved by iSOFT INFRASTRUCTURE SOFTWARE CO., LTD.
 * Without the express written permission of the company, no organization or individual may copy, install, trial,
 * distribute, or reverse engineer this software. For terms of use and further details, please refer to the End User
 * License Agreement (EULA) or contact us business@i-soft.com.cn for more assistance.
 *
 * This file contains code from EasyXMen, which is licensed under the LGPL-2.1. However, due to a special exception,
 * you are not required to comply with the provisions of section 6a of LGPL-2.1. Specifically, you may distribute
 * your software, including this file, under terms of your choice, including proprietary licenses, without needing to
 * provide the source code or object code as specified in section 6a. For more details, please refer to the project's
 * LICENSE and EXCEPTION files and the specific exception statement.
 * ---------------------------------------------------------------------------------------------------------------------
 * FILE DESCRIPTION
 * ---------------------------------------------------------------------------------------------------------------------
 * @MCU         : S32K148
 * @file        : PduR_PBcfg.c
 * @licence     : 
 * @date        : 2026-11-19 22:11:05
 * @customer    : EasyXMen
 * @description : Configuration parameter of PduR
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
/* PRQA S 6520 EOF */ /* VL_MTR_PduR_STVAR */
/* =================================================== inclusions =================================================== */
#include "PduR.h"
#include "CanIf.h"
#include "Com_Cbk.h"
#include "CanTp.h"
#include "Dcm.h"
/* ===================================================== macros ===================================================== */

/* ================================================ type definitions ================================================ */

/* ============================================ internal data definition ============================================ */
/* PRQA S 3120,3132 ++ */ /* VL_QAC_MagicNum */

#define PDUR_START_SEC_CONFIG_DATA_16
#include "PduR_MemMap.h"
static const PduIdType PduR_PduRSrcPduIdRef[] =
{
    PduRConf_PduRSrcPdu_SrcPdu_CanIfRx_Can0_0x120,    /* 0 DestPdu_ComRx_Can0_0x120 */
    PduRConf_PduRSrcPdu_SrcPdu_ComTx_Can0_0x123,    /* 1 DestPdu_CanIfTx_Can0_0x123 */
    PduRConf_PduRSrcPdu_SrcPdu_CanTpRx_Can0_0x7E0,    /* 2 DestPdu_DcmRx_Can0 */
    PduRConf_PduRSrcPdu_SrcPdu_DcmTx_Can0,    /* 3 DestPdu_CanTpTx_Can0_0x7E8 */
    PduRConf_PduRSrcPdu_SrcPdu_ComTx_Can2_0x101,    /* 4 DestPdu_CanIfTx_Can2_0x101 */
    PduRConf_PduRSrcPdu_SrcPdu_CanIfRx_Can0_0x120,    /* 5 DestPdu_CanIfTx_Can1_0x123 */
    PduRConf_PduRSrcPdu_SrcPdu_CanIfRx_Can0_0x120,    /* 6 DestPdu_CanIfTx_Can2_0x123 */
    PduRConf_PduRSrcPdu_SrcPdu_CanIfRx_Can1_0x200,    /* 7 DestPdu_ComRx_Can1_0x200 */
    PduRConf_PduRSrcPdu_SrcPdu_CanIfRx_Can1_0x210,    /* 8 DestPdu_ComRx_Can1_0x210 */
    PduRConf_PduRSrcPdu_SrcPdu_CanIfRx_Can2_0x100,    /* 9 DestPdu_ComRx_Can2_0x100 */
    PduRConf_PduRSrcPdu_SrcPdu_CanIfRx_Can2_0x110,    /* 10 DestPdu_ComRx_Can2_0x110 */
    PduRConf_PduRSrcPdu_SrcPdu_ComTx_Can1_0x201,    /* 11 DestPdu_CanIfTx_Can1_0x201 */
};
#define PDUR_STOP_SEC_CONFIG_DATA_16
#include "PduR_MemMap.h"

#define PDUR_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "PduR_MemMap.h"
static const PduR_DestPduType PduR_DestPduConfigData[PDUR_DEST_PDU_SUM] =
{
    {
        /* 0 DestPdu_ComRx_Can0_0x120 */
        PDUR_COM,    /* BswModuleIndex */
        TRUE,  /* TransmissionConfirmation */
        1u, /* PduSrcSum */
        &PduR_PduRSrcPduIdRef[0u], /* PduRSrcPduRef */
        ComConf_ComIPdu_ComIPdu_Rx_0x120,  /* PduRDestModulePduIndex */
        8u,    /* ConfiguredLength */
        PDUR_ROUTE_IF_RX_NOBUFFERED,    /* RouteType */
        PDUR_DIRECT,  /* PduRDestPduDataProvision */
    },
    {
        /* 1 DestPdu_CanIfTx_Can0_0x123 */
        PDUR_CANIF,    /* BswModuleIndex */
        TRUE,  /* TransmissionConfirmation */
        1u, /* PduSrcSum */
        &PduR_PduRSrcPduIdRef[1u], /* PduRSrcPduRef */
        CanIfConf_CanIfTxPduCfg_CanIfTxPdu_Can0_0x123,  /* PduRDestModulePduIndex */
        8u,    /* ConfiguredLength */
        PDUR_ROUTE_IF_TX_NOBUFFERED,    /* RouteType */
        PDUR_DIRECT,  /* PduRDestPduDataProvision */
    },
    {
        /* 2 DestPdu_DcmRx_Can0 */
        PDUR_DCM,    /* BswModuleIndex */
        TRUE,  /* TransmissionConfirmation */
        1u, /* PduSrcSum */
        &PduR_PduRSrcPduIdRef[2u], /* PduRSrcPduRef */
        DcmConf_DcmDslProtocolRx_DcmDslProtocolRx_0,  /* PduRDestModulePduIndex */
        1024u,    /* ConfiguredLength */
        PDUR_ROUTE_TP_RX_NOBUFFERED,    /* RouteType */
        PDUR_DIRECT,  /* PduRDestPduDataProvision */
    },
    {
        /* 3 DestPdu_CanTpTx_Can0_0x7E8 */
        PDUR_CANTP,    /* BswModuleIndex */
        TRUE,  /* TransmissionConfirmation */
        1u, /* PduSrcSum */
        &PduR_PduRSrcPduIdRef[3u], /* PduRSrcPduRef */
        CanTpConf_CanTpTxNSdu_CanTpTxNSdu_Diag,  /* PduRDestModulePduIndex */
        8u,    /* ConfiguredLength */
        PDUR_ROUTE_TP_TX_NOBUFFERED_UNICAST,    /* RouteType */
        PDUR_DIRECT,  /* PduRDestPduDataProvision */
    },
    {
        /* 4 DestPdu_CanIfTx_Can2_0x101 */
        PDUR_CANIF,    /* BswModuleIndex */
        TRUE,  /* TransmissionConfirmation */
        1u, /* PduSrcSum */
        &PduR_PduRSrcPduIdRef[4u], /* PduRSrcPduRef */
        CanIfConf_CanIfTxPduCfg_CanIfTxPdu_Can2_0x101,  /* PduRDestModulePduIndex */
        8u,    /* ConfiguredLength */
        PDUR_ROUTE_IF_TX_NOBUFFERED,    /* RouteType */
        PDUR_DIRECT,  /* PduRDestPduDataProvision */
    },
    {
        /* 5 DestPdu_CanIfTx_Can1_0x123 */
        PDUR_CANIF,    /* BswModuleIndex */
        TRUE,  /* TransmissionConfirmation */
        1u, /* PduSrcSum */
        &PduR_PduRSrcPduIdRef[5u], /* PduRSrcPduRef */
        CanIfConf_CanIfTxPduCfg_CanIfTxPdu_Can1_0x123,  /* PduRDestModulePduIndex */
        8u,    /* ConfiguredLength */
        PDUR_ROUTE_IF_GW_NOBUFFERED,    /* RouteType */
        PDUR_DIRECT,  /* PduRDestPduDataProvision */
    },
    {
        /* 6 DestPdu_CanIfTx_Can2_0x123 */
        PDUR_CANIF,    /* BswModuleIndex */
        TRUE,  /* TransmissionConfirmation */
        1u, /* PduSrcSum */
        &PduR_PduRSrcPduIdRef[6u], /* PduRSrcPduRef */
        CanIfConf_CanIfTxPduCfg_CanIfTxPdu_Can2_0x123,  /* PduRDestModulePduIndex */
        8u,    /* ConfiguredLength */
        PDUR_ROUTE_IF_GW_NOBUFFERED,    /* RouteType */
        PDUR_DIRECT,  /* PduRDestPduDataProvision */
    },
    {
        /* 7 DestPdu_ComRx_Can1_0x200 */
        PDUR_COM,    /* BswModuleIndex */
        TRUE,  /* TransmissionConfirmation */
        1u, /* PduSrcSum */
        &PduR_PduRSrcPduIdRef[7u], /* PduRSrcPduRef */
        ComConf_ComIPdu_ComIPdu_Rx_PT_Status_Can1_0x200,  /* PduRDestModulePduIndex */
        8u,    /* ConfiguredLength */
        PDUR_ROUTE_IF_RX_NOBUFFERED,    /* RouteType */
        PDUR_DIRECT,  /* PduRDestPduDataProvision */
    },
    {
        /* 8 DestPdu_ComRx_Can1_0x210 */
        PDUR_COM,    /* BswModuleIndex */
        TRUE,  /* TransmissionConfirmation */
        1u, /* PduSrcSum */
        &PduR_PduRSrcPduIdRef[8u], /* PduRSrcPduRef */
        ComConf_ComIPdu_ComIPdu_Rx_PT_Torque_Can1_0x210,  /* PduRDestModulePduIndex */
        8u,    /* ConfiguredLength */
        PDUR_ROUTE_IF_RX_NOBUFFERED,    /* RouteType */
        PDUR_DIRECT,  /* PduRDestPduDataProvision */
    },
    {
        /* 9 DestPdu_ComRx_Can2_0x100 */
        PDUR_COM,    /* BswModuleIndex */
        TRUE,  /* TransmissionConfirmation */
        1u, /* PduSrcSum */
        &PduR_PduRSrcPduIdRef[9u], /* PduRSrcPduRef */
        ComConf_ComIPdu_ComIPdu_Rx_Body_Status_Can2_0x100,  /* PduRDestModulePduIndex */
        8u,    /* ConfiguredLength */
        PDUR_ROUTE_IF_RX_NOBUFFERED,    /* RouteType */
        PDUR_DIRECT,  /* PduRDestPduDataProvision */
    },
    {
        /* 10 DestPdu_ComRx_Can2_0x110 */
        PDUR_COM,    /* BswModuleIndex */
        TRUE,  /* TransmissionConfirmation */
        1u, /* PduSrcSum */
        &PduR_PduRSrcPduIdRef[10u], /* PduRSrcPduRef */
        ComConf_ComIPdu_ComIPdu_Rx_Light_Cmd_Can2_0x110,  /* PduRDestModulePduIndex */
        8u,    /* ConfiguredLength */
        PDUR_ROUTE_IF_RX_NOBUFFERED,    /* RouteType */
        PDUR_DIRECT,  /* PduRDestPduDataProvision */
    },
    {
        /* 11 DestPdu_CanIfTx_Can1_0x201 */
        PDUR_CANIF,    /* BswModuleIndex */
        TRUE,  /* TransmissionConfirmation */
        1u, /* PduSrcSum */
        &PduR_PduRSrcPduIdRef[11u], /* PduRSrcPduRef */
        CanIfConf_CanIfTxPduCfg_CanIfTxPdu_Can1_0x201,  /* PduRDestModulePduIndex */
        8u,    /* ConfiguredLength */
        PDUR_ROUTE_IF_TX_NOBUFFERED,    /* RouteType */
        PDUR_DIRECT,  /* PduRDestPduDataProvision */
    },
};
#define PDUR_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "PduR_MemMap.h"

#define PDUR_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "PduR_MemMap.h"
static const PduR_SrcPduType PduR_SrcPduConfigData[PDUR_SRC_PDU_SUM] =
{
    {
        /* 0 SrcPdu_ComTx_Can0_0x123 */
        TRUE, /* PduRSrcPduUpTxConf */
        PDUR_COM,    /* BswModuleIndex */
        ComConf_ComIPdu_ComIPdu_Tx_0x123,    /* PduRSrcModulePduIndex */
    },
    {
        /* 1 SrcPdu_CanIfRx_Can0_0x120 */
        TRUE, /* PduRSrcPduUpTxConf */
        PDUR_CANIF,    /* BswModuleIndex */
        CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can0_0x120,    /* PduRSrcModulePduIndex */
    },
    {
        /* 2 SrcPdu_CanTpRx_Can0_0x7E0 */
        TRUE, /* PduRSrcPduUpTxConf */
        PDUR_CANTP,    /* BswModuleIndex */
        CanTpConf_CanTpRxNSdu_CanTpRxNSdu_Diag,    /* PduRSrcModulePduIndex */
    },
    {
        /* 3 SrcPdu_DcmTx_Can0 */
        TRUE, /* PduRSrcPduUpTxConf */
        PDUR_DCM,    /* BswModuleIndex */
        DcmConf_DcmDslProtocolTx_DcmDslProtocolTx_0,    /* PduRSrcModulePduIndex */
    },
    {
        /* 4 SrcPdu_CanIfRx_Can1_0x200 */
        TRUE, /* PduRSrcPduUpTxConf */
        PDUR_CANIF,    /* BswModuleIndex */
        CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can1_0x200,    /* PduRSrcModulePduIndex */
    },
    {
        /* 5 SrcPdu_CanIfRx_Can1_0x210 */
        TRUE, /* PduRSrcPduUpTxConf */
        PDUR_CANIF,    /* BswModuleIndex */
        CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can1_0x210,    /* PduRSrcModulePduIndex */
    },
    {
        /* 6 SrcPdu_CanIfRx_Can2_0x100 */
        TRUE, /* PduRSrcPduUpTxConf */
        PDUR_CANIF,    /* BswModuleIndex */
        CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can2_0x100,    /* PduRSrcModulePduIndex */
    },
    {
        /* 7 SrcPdu_CanIfRx_Can2_0x110 */
        TRUE, /* PduRSrcPduUpTxConf */
        PDUR_CANIF,    /* BswModuleIndex */
        CanIfConf_CanIfRxPduCfg_CanIfRxPdu_Can2_0x110,    /* PduRSrcModulePduIndex */
    },
    {
        /* 8 SrcPdu_ComTx_Can1_0x201 */
        TRUE, /* PduRSrcPduUpTxConf */
        PDUR_COM,    /* BswModuleIndex */
        ComConf_ComIPdu_ComIPdu_Tx_PT_Cmd_Can1_0x201,    /* PduRSrcModulePduIndex */
    },
    {
        /* 9 SrcPdu_ComTx_Can2_0x101 */
        TRUE, /* PduRSrcPduUpTxConf */
        PDUR_COM,    /* BswModuleIndex */
        ComConf_ComIPdu_ComIPdu_Tx_Body_GwStatus_Can2_0x101,    /* PduRSrcModulePduIndex */
    },
};
#define PDUR_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "PduR_MemMap.h"

#define PDUR_START_SEC_CONFIG_DATA_16
#include "PduR_MemMap.h"
static const PduIdType PduR_PduRDestPduIdRef[] =
{
    PduRConf_PduRDestPdu_DestPdu_CanIfTx_Can0_0x123,    /* 0 SrcPdu_ComTx_Can0_0x123 */
    PduRConf_PduRDestPdu_DestPdu_ComRx_Can0_0x120,    /* 1 SrcPdu_CanIfRx_Can0_0x120 */
    PduRConf_PduRDestPdu_DestPdu_CanIfTx_Can1_0x123,    /* 1 SrcPdu_CanIfRx_Can0_0x120 */
    PduRConf_PduRDestPdu_DestPdu_CanIfTx_Can2_0x123,    /* 1 SrcPdu_CanIfRx_Can0_0x120 */
    PduRConf_PduRDestPdu_DestPdu_DcmRx_Can0,    /* 2 SrcPdu_CanTpRx_Can0_0x7E0 */
    PduRConf_PduRDestPdu_DestPdu_CanTpTx_Can0_0x7E8,    /* 3 SrcPdu_DcmTx_Can0 */
    PduRConf_PduRDestPdu_DestPdu_ComRx_Can1_0x200,    /* 4 SrcPdu_CanIfRx_Can1_0x200 */
    PduRConf_PduRDestPdu_DestPdu_ComRx_Can1_0x210,    /* 5 SrcPdu_CanIfRx_Can1_0x210 */
    PduRConf_PduRDestPdu_DestPdu_ComRx_Can2_0x100,    /* 6 SrcPdu_CanIfRx_Can2_0x100 */
    PduRConf_PduRDestPdu_DestPdu_ComRx_Can2_0x110,    /* 7 SrcPdu_CanIfRx_Can2_0x110 */
    PduRConf_PduRDestPdu_DestPdu_CanIfTx_Can1_0x201,    /* 8 SrcPdu_ComTx_Can1_0x201 */
    PduRConf_PduRDestPdu_DestPdu_CanIfTx_Can2_0x101,    /* 9 SrcPdu_ComTx_Can2_0x101 */
};
#define PDUR_STOP_SEC_CONFIG_DATA_16
#include "PduR_MemMap.h"

#define PDUR_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "PduR_MemMap.h"
static const PduR_RoutingPathType PduR_RoutingPathConfigData0[PDUR_SRC_PDU_SUM] =
{
    {
        /* 0 SrcPdu_ComTx_Can0_0x123 */
        1u,    /* PduDestSum */
        FALSE,  /* TpRoute */
        &PduR_PduRDestPduIdRef[0u],    /* PduRDestPduIdRef */
    },
    {
        /* 1 SrcPdu_CanIfRx_Can0_0x120 */
        3u,    /* PduDestSum */
        FALSE,  /* TpRoute */
        &PduR_PduRDestPduIdRef[1u],    /* PduRDestPduIdRef */
    },
    {
        /* 2 SrcPdu_CanTpRx_Can0_0x7E0 */
        1u,    /* PduDestSum */
        TRUE,   /* TpRoute */
        &PduR_PduRDestPduIdRef[4u],    /* PduRDestPduIdRef */
    },
    {
        /* 3 SrcPdu_DcmTx_Can0 */
        1u,    /* PduDestSum */
        TRUE,   /* TpRoute */
        &PduR_PduRDestPduIdRef[5u],    /* PduRDestPduIdRef */
    },
    {
        /* 4 SrcPdu_CanIfRx_Can1_0x200 */
        1u,    /* PduDestSum */
        FALSE,  /* TpRoute */
        &PduR_PduRDestPduIdRef[6u],    /* PduRDestPduIdRef */
    },
    {
        /* 5 SrcPdu_CanIfRx_Can1_0x210 */
        1u,    /* PduDestSum */
        FALSE,  /* TpRoute */
        &PduR_PduRDestPduIdRef[7u],    /* PduRDestPduIdRef */
    },
    {
        /* 6 SrcPdu_CanIfRx_Can2_0x100 */
        1u,    /* PduDestSum */
        FALSE,  /* TpRoute */
        &PduR_PduRDestPduIdRef[8u],    /* PduRDestPduIdRef */
    },
    {
        /* 7 SrcPdu_CanIfRx_Can2_0x110 */
        1u,    /* PduDestSum */
        FALSE,  /* TpRoute */
        &PduR_PduRDestPduIdRef[9u],    /* PduRDestPduIdRef */
    },
    {
        /* 8 SrcPdu_ComTx_Can1_0x201 */
        1u,    /* PduDestSum */
        FALSE,  /* TpRoute */
        &PduR_PduRDestPduIdRef[10u],    /* PduRDestPduIdRef */
    },
    {
        /* 9 SrcPdu_ComTx_Can2_0x101 */
        1u,    /* PduDestSum */
        FALSE,  /* TpRoute */
        &PduR_PduRDestPduIdRef[11u],    /* PduRDestPduIdRef */
    },
};
#define PDUR_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "PduR_MemMap.h"

#define PDUR_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "PduR_MemMap.h"
static const PduR_RoutingTableType PduR_RoutingTableConfigData[1u] =
{
   {
      PduR_RoutingPathConfigData0
   }
};
#define PDUR_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "PduR_MemMap.h"
/* ============================================ external data definition ============================================ */

#define PDUR_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "PduR_MemMap.h"
const struct PduR_PBConfigTypeTag PduR_Config = /* PRQA S 1531 */ /* VL_QAC_OneRefSymbol */
{
    0u, /* PduRConfigId */
    PDUR_ROUTING_PATH_GROUP_SUM,    /* RoutingPathGroupCnt */
    PDUR_SRC_PDU_SUM,   /* PduRSrcPduNum */
    PDUR_DEST_PDU_SUM,  /* PduRRoutingPathNum */
    NULL_PTR,    /* PduRRoutingPathGroupRef */
    PduR_RoutingTableConfigData,    /* PduRRoutingTableRef */
    PduR_SrcPduConfigData,  /* PduRSrcPduRef */
    PduR_DestPduConfigData, /* PduRDestPduRef */
};
#define PDUR_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "PduR_MemMap.h"
/* PRQA S 3120,3132 -- */ /* VL_QAC_MagicNum */
/* ========================================= internal function declarations ========================================= */

/* ========================================== external function definition ========================================== */

/* ========================================== internal function definition ========================================== */
