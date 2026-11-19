/**
 * 兼容补丁：Dcm_UDS_FindDid
 *
 * 背景：小满 的静态代码里，Dcm_UDS_FindDid() 只在
 *   0x2E / 0x2F / 0x86 / 0x24 / 0x2C / 0x2A 任一服务使能时才编译出来，
 *   但 Dcm_UDS0x22.c 无条件调用它。
 *   我们只配了 0x22，所以链接时报 undefined reference。
 *
 * 这里在“只使能 0x22”的情况下补一个实现。
 * 一旦配置里启用了上面任一服务，这个文件会自动失效（避免重复定义）。
 */
#include "Dcm_Internal.h"

#if ((STD_ON == DCM_UDS_0X22) && (STD_OFF == DCM_UDS_0X2E) && (STD_OFF == DCM_UDS_0X2F) && \
     (STD_OFF == DCM_UDS_0X24) && (STD_OFF == DCM_UDS_0X2C) && (STD_OFF == DCM_UDS_0X2A))

Std_ReturnType Dcm_UDS_FindDid(uint16 Did,
                               Dcm_DidType* didType,
                               uint16* DidIndex,
                               Dcm_NegativeResponseCodeType* ErrorCode)
{
    Std_ReturnType result = E_NOT_OK;
    uint16 index;

    if (NULL_PTR != didType)
    {
        *didType = DCM_REGULAR_DID;
    }

#if (DCM_DID_NUM > 0)
    for (index = 0U; index < DCM_DID_NUM; index++)
    {
        if ((TRUE == Dcm_CfgPtr->DidUsed[index]) && (Did == Dcm_DspDid[index].DidIdentifier))
        {
            if (NULL_PTR != DidIndex)
            {
                *DidIndex = index;
            }
            if (NULL_PTR != ErrorCode)
            {
                *ErrorCode = DCM_POS_RESP;
            }
            result = E_OK;
            break;
        }
    }
#endif

    return result;
}

#endif /* 只使能 0x22 时提供实现 */
