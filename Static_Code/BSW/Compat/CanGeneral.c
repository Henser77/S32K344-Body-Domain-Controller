/**
 * CanGeneral 实现：把 小满 CanIf 的调用翻译到 NXP Can_43_FLEXCAN 的 API。
 */
#include "CanGeneral.h"
#include "Can_43_FLEXCAN.h"

Std_ReturnType CanGeneral_Write(Can_HwHandleType Hth, const Can_PduType* PduInfo)
{
    return Can_43_FLEXCAN_Write(Hth, PduInfo);
}

Std_ReturnType CanGeneral_SetControllerMode(uint8 Controller, Can_ControllerStateType Transition)
{
    /* R431：CAN_CS_UNINIT/STARTED/STOPPED/SLEEP 与 NXP 枚举一一对应，直接透传 */
    return Can_43_FLEXCAN_SetControllerMode(Controller, Transition);
}

Std_ReturnType CanGeneral_GetControllerErrorState(uint8 ControllerId, Can_ErrorStateType* ErrorStatePtr)
{
    return Can_43_FLEXCAN_GetControllerErrorState(ControllerId, ErrorStatePtr);
}

Std_ReturnType CanGeneral_SetBaudrate(uint8 Controller, uint16 Baudrate)
{
    (void)Controller;
    (void)Baudrate;
    return E_NOT_OK;
}

Std_ReturnType CanGeneral_CheckWakeup(uint8 Controller)
{
    (void)Controller;
    /* 当前工程不支持 Can_CheckWakeup 硬件查询；唤醒由 Can_MainFunction_Wakeup 轮询处理 */
    return E_NOT_OK;
}
