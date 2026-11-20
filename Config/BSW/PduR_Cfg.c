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
 * @file        : PduR_Cfg.c
 * @licence     : 
 * @date        : 2026-11-20 13:51:01
 * @customer    : EasyXMen
 * @description : Pre-compile parameter definition of PduR
 * @generator   : AUTOSAR classic Platform R23-11
 * @toolVersion : 3.0.2
 **********************************************************************************************************************/
/* =================================================== inclusions =================================================== */
#include "PduR.h"
#include "PduR_Internal.h"
#include "CanIf.h"
#include "Com_Cbk.h"
#include "CanTp.h"
#include "Dcm.h"
/* ===================================================== macros ===================================================== */

/* ================================================ type definitions ================================================ */

/* ============================================ internal data definition ============================================ */

/* ============================================ external data definition ============================================ */
 
/* PRQA S 3120,3132 ++ */ /* VL_QAC_MagicNum */
#define PDUR_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "PduR_MemMap.h"
const PduR_BswModuleType PduR_BswModuleConfigData[PDUR_BSW_MODULE_SUM] = /* PRQA S 1531,3408 */ /* VL_QAC_OneRefSymbol,VL_PduR_ConfigDesign */
{
/* PRQA S 1334 ++ */ /* VL_PduR_1334 */
    {
        /* CanIf */
        NULL_PTR,   /* CancelReceiveApi */
        NULL_PTR,   /* IfCancelTransmitApi */
        NULL_PTR,   /* TpCancelTransmitApi */
        NULL_PTR,   /* TriggertransmitApi */
        CanIf_Transmit,   /* IfTransmitApi */
        NULL_PTR,   /* TxConfirmationApi */
        NULL_PTR,   /* IfRxIndicationApi */
        NULL_PTR,   /* TpTransmitApi */
        NULL_PTR,   /* CopyTxDataApi */
        NULL_PTR,   /* TpTxConfirmationApi */
        NULL_PTR,   /* StartOfReceptionApi */
        NULL_PTR,   /* CopyRxDataApi */
        NULL_PTR,   /* TpRxIndicationApi */
    },
    {
        /* Com */
        NULL_PTR,   /* CancelReceiveApi */
        NULL_PTR,   /* IfCancelTransmitApi */
        NULL_PTR,   /* TpCancelTransmitApi */
        Com_TriggerTransmit,    /* TriggertransmitApi */
        NULL_PTR,   /* IfTransmitApi */
        Com_TxConfirmation,    /* TxConfirmationApi */
        Com_RxIndication,    /* IfRxIndicationApi */
        NULL_PTR,   /* TpTransmitApi */
        NULL_PTR,   /* CopyTxDataApi */
        NULL_PTR,   /* TpTxConfirmationApi */
        NULL_PTR,   /* StartOfReceptionApi */
        NULL_PTR,   /* CopyRxDataApi */
        NULL_PTR,   /* TpRxIndicationApi */
    },
    {
        /* CanTp */
        CanTp_CancelReceive,    /* CancelReceiveApi */
        NULL_PTR,   /* IfCancelTransmitApi */
        CanTp_CancelTransmit,   /* TpCancelTransmitApi */
        NULL_PTR,   /* TriggertransmitApi */
        NULL_PTR,   /* IfTransmitApi */
        NULL_PTR,   /* TxConfirmationApi */
        NULL_PTR,   /* IfRxIndicationApi */
        CanTp_Transmit,   /* TpTransmitApi */
        NULL_PTR,   /* CopyTxDataApi */
        NULL_PTR,   /* TpTxConfirmationApi */
        NULL_PTR,   /* StartOfReceptionApi */
        NULL_PTR,   /* CopyRxDataApi */
        NULL_PTR,   /* TpRxIndicationApi */
    },
    {
        /* Dcm */
        NULL_PTR,   /* CancelReceiveApi */
        NULL_PTR,   /* IfCancelTransmitApi */
        NULL_PTR,   /* TpCancelTransmitApi */
        NULL_PTR,   /* TriggertransmitApi */
        NULL_PTR,   /* IfTransmitApi */
        Dcm_TxConfirmation,    /* TxConfirmationApi */
        NULL_PTR,   /* IfRxIndicationApi */
        NULL_PTR,   /* TpTransmitApi */
        Dcm_CopyTxData,    /* CopyTxDataApi */
        Dcm_TpTxConfirmation,    /* TpTxConfirmationApi */
        Dcm_StartOfReception,    /* StartOfReceptionApi */
        Dcm_CopyRxData,    /* CopyRxDataApi */
        Dcm_TpRxIndication,    /* TpRxIndicationApi */
    },
/* PRQA S 1334 -- */
};
#define PDUR_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "PduR_MemMap.h"

/* PRQA S 3120,3132 -- */ /* VL_QAC_MagicNum */
/* ========================================= internal function declarations ========================================= */

/* ========================================== external function definition ========================================== */

/* ========================================== internal function definition ========================================== */




