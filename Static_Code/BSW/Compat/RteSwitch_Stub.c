/**
 * RTE 模式切换函数桩（临时适配层）
 *
 * Dcm 的服务实现里会调用 Rte_Switch_*：向应用（SWC）通知
 * 会话/安全/复位/DTC 设置/通信控制的变化。
 * 本工程未生成 RTE，这里提供空实现（返回 E_OK）。
 *
 * 等集成 RTE 后，删除本文件即可。
 */
#include "Std_Types.h"

volatile uint8 g_EcuResetRequest = 0u;   /* 0x11 reset request flag (handled by 10ms task) */

Std_ReturnType Rte_Switch_DiagnosticSessionControlModeSwitchInterface_diagnosticSession_Dcm(uint8 mode)
{
    (void)mode;
    return E_OK;
}

Std_ReturnType Rte_Switch_EcuResetModeSwitchInterface_ecuReset_Dcm(uint8 mode)
{
    if ((1u == mode) || (3u == mode))
    {
        g_EcuResetRequest = mode;
    }
    return E_OK;
}

Std_ReturnType Rte_Switch_ModeRapidPowerShutDownModeSwitchInterface_modeRapidPowerShutDown_Dcm(uint8 mode)
{
    (void)mode;
    return E_OK;
}

Std_ReturnType Rte_Switch_ControlDTCSettingModeSwitchInterface_controlDTCSetting_Dcm(uint8 mode)
{
    (void)mode;
    return E_OK;
}

Std_ReturnType Rte_Switch_SecurityAccessModeSwitchInterface_securityAccess_Dcm(uint8 mode)
{
    (void)mode;
    return E_OK;
}

Std_ReturnType Rte_Switch_CommunicationControlModeSwitchInterface_ComMChannel_CAN0_communicationControl(uint8 mode)
{
    (void)mode;
    return E_OK;
}
