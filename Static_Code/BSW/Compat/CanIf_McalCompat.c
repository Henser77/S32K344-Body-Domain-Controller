/**
 * MCAL CAN 驱动（Can_43_FLEXCAN）在 ERROR_INTERRUPT 模式下会调用
 *   CanIf_ControllerErrorStatePassive()
 *   CanIf_ErrorNotification()
 * 这两个是 AUTOSAR R23 新增的 CanIf 接口，当前 小满 CanIf 版本没有实现。
 * 这里给空实现保证链接通过（不影响正常收发，只影响错误帧上报）。
 * 以后若 小满 版本支持，或关闭 EB 的 "Can error interrupt"，可删除本文件。
 */
#include "Std_Types.h"
#include "Can_GeneralTypes.h"

void CanIf_ControllerErrorStatePassive(uint8 ControllerId, uint16 RxErrorCounter, uint16 TxErrorCounter)
{
    (void)ControllerId;
    (void)RxErrorCounter;
    (void)TxErrorCounter;
}

void CanIf_ErrorNotification(uint8 ControllerId, Can_ErrorType ErrorType)
{
    (void)ControllerId;
    (void)ErrorType;
}
