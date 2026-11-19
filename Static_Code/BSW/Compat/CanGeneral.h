/**
 * CanGeneral —— CanIf 与 NXP Can_43_FLEXCAN 之间的适配层。
 *
 * 生成代码 Config\BSW\CanIf_Cfg.c 的 Can_DriverApi[] 通过本文件调用 CAN 驱动。
 * 当前 CanIf 配置为 CANIF_CAN_AUTOSAR_R431，CanIf 传入的
 * Can_ControllerStateType 与 NXP 驱动枚举完全一致，直接透传。
 */
#ifndef CANGENERAL_H
#define CANGENERAL_H

#include "Std_Types.h"
#include "Can_GeneralTypes.h"
#include "Os_Types.h"

/* 生成的 CanIf_Cfg.c 引用了 CanSM 回调但没有自行 include，这里补上声明 */
#include "CanSM_CanIf.h"

Std_ReturnType CanGeneral_Write(Can_HwHandleType Hth, const Can_PduType* PduInfo);

Std_ReturnType CanGeneral_SetControllerMode(uint8 Controller, Can_ControllerStateType Transition);

Std_ReturnType CanGeneral_GetControllerErrorState(uint8 ControllerId, Can_ErrorStateType* ErrorStatePtr);

Std_ReturnType CanGeneral_SetBaudrate(uint8 Controller, uint16 Baudrate);

Std_ReturnType CanGeneral_CheckWakeup(uint8 Controller);

#endif /* CANGENERAL_H */
