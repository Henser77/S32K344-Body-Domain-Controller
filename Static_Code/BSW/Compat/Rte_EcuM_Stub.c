/**
 * 临时兼容实现 (bring-up shim)：EcuM 模式切换所需的 RTE 接口。
 * 接入真正的 RTE 后删除本文件。
 */
#include "Rte.h"
#include "Rte_EcuM.h"

Std_ReturnType Rte_Switch_currentMode_currentMode_EcuM(uint8 mode)
{
    (void)mode;
    return RTE_E_OK;
}

Std_ReturnType Rte_SwitchAck_currentMode_currentMode_EcuM(void)
{
    return RTE_E_OK;
}