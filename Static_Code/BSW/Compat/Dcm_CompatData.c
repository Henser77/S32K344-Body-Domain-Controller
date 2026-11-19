/**
 * Dcm 业务数据（适配层）
 *
 * 提供给 Dcm_Callout.c 的 USERBLOCK 调用：
 *   - 安全访问：种子生成 / 密钥校验（level 1，4 字节）
 *   - VIN：读写 RAM 缓冲（掉电丢失，仅演示）
 *
 * 这样生成文件里的回调只做“转调”，逻辑都放在这里，
 * 重新生成代码时不会丢。
 */
#include "Std_Types.h"

#define DCM_COMPAT_SEED_LEN   4U
#define DCM_COMPAT_VIN_LEN    17U

static uint8 DcmCompat_Seed[DCM_COMPAT_SEED_LEN];
static uint8 DcmCompat_Vin[DCM_COMPAT_VIN_LEN] = {
    'L', 'S', 'V', 'N', 'F', '2', '1', '8', '0',
    '1', '2', '3', '4', '5', '6', '7', '8'
};

/* ================== 安全访问 ================== */

void DcmCompat_GetSeed(uint8* Seed)
{
    uint8 i;

    for (i = 0U; i < DCM_COMPAT_SEED_LEN; i++)
    {
        /* 简单可预测的种子，方便测试 */
        DcmCompat_Seed[i] = (uint8)(0xA1U + i);
        Seed[i] = DcmCompat_Seed[i];
    }
}

boolean DcmCompat_CheckKey(const uint8* Key)
{
    uint8 i;

    for (i = 0U; i < DCM_COMPAT_SEED_LEN; i++)
    {
        if (Key[i] != (uint8)(DcmCompat_Seed[i] ^ 0x5AU))
        {
            return FALSE;
        }
    }
    return TRUE;
}

/* ================== VIN ================== */

void DcmCompat_ReadVin(uint8* Data)
{
    uint8 i;

    for (i = 0U; i < DCM_COMPAT_VIN_LEN; i++)
    {
        Data[i] = DcmCompat_Vin[i];
    }
}

void DcmCompat_WriteVin(const uint8* Data)
{
    uint8 i;

    for (i = 0U; i < DCM_COMPAT_VIN_LEN; i++)
    {
        DcmCompat_Vin[i] = Data[i];
    }
}
