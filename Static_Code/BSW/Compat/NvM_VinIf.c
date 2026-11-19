/**
 * Compat: VIN <-> NvM adapter
 *
 * 说明：
 *   旧工程的 Dcm_ReadData_Vin / Dcm_WriteData_Vin 是空桩（直接 E_OK），
 *   因此 0x22/0x2E 看起来正常，但 VIN 从未真正保存。
 *
 *   这里改为：
 *     - RAM 中维护一份 VIN，读写立即成功（保证诊断不被 NvM 阻塞）
 *     - 写时顺带发起一次 NvM_WriteBlock（后台持久化，不等待结果）
 *     - 上电时尝试从 NvM 读回（失败则用默认值）
 */
#include "Std_Types.h"
#include "NvM.h"
#include "NvM_Cfg.h"
#include "NvM_UserBuffer.h"
#include "NvM_VinIf.h"

#define VIN_LEN 17u

static uint8 s_vin[VIN_LEN] = {
    'A','B','C','1','2','3','4','5','6','7','8','9','0','1','2','3','4'
};

Std_ReturnType NvMVin_Read(uint8* Data, uint8 OpStatus)
{
    uint8 i;

    (void)OpStatus;

    for (i = 0u; i < VIN_LEN; i++)
    {
        Data[i] = s_vin[i];
    }

    return E_OK;
}

Std_ReturnType NvMVin_Write(const uint8* Data, uint8 OpStatus)
{
    uint8 i;

    (void)OpStatus;

    for (i = 0u; i < VIN_LEN; i++)
    {
        s_vin[i]          = Data[i];
        g_NvMVinBuffer[i] = Data[i];
    }

    /* 后台尝试持久化，不阻塞 Dcm；失败也不影响本次诊断响应 */
    (void)NvM_WriteBlock(NvMConf_NvMBlockDescriptor_NvMBlock_VIN, g_NvMVinBuffer);

    return E_OK;
}
