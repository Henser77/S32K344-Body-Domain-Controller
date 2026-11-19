/**
 * Compat: VIN <-> NvM block adapter (asynchronous, retries when NvM is busy)
 */
#include "Std_Types.h"
#include "NvM.h"
#include "NvM_Cfg.h"
#include "NvM_UserBuffer.h"
#include "NvM_VinIf.h"

#define VIN_IF_INITIAL      0u
#define VIN_IF_PENDING      1u
#define VIN_IF_CANCEL       2u
#define VIN_IF_E_PENDING    10u
#define VIN_LEN             17u

static uint8 s_readStarted  = 0u;
static uint8 s_writeStarted = 0u;

Std_ReturnType NvMVin_Read(uint8* Data, uint8 OpStatus)
{
    NvM_RequestResultType res = NVM_REQ_PENDING;
    uint8 i;

    if (VIN_IF_CANCEL == OpStatus)
    {
        s_readStarted = 0u;
        return E_NOT_OK;
    }

    if ((VIN_IF_INITIAL == OpStatus) || (0u == s_readStarted))
    {
        s_readStarted = 0u;
        if (E_OK == NvM_ReadBlock(NvMConf_NvMBlockDescriptor_NvMBlock_VIN, g_NvMVinBuffer))
        {
            s_readStarted = 1u;
        }
        return (Std_ReturnType)VIN_IF_E_PENDING;   /* retry if busy */
    }

    (void)NvM_GetErrorStatus(NvMConf_NvMBlockDescriptor_NvMBlock_VIN, &res);

    if (NVM_REQ_PENDING == res)
    {
        return (Std_ReturnType)VIN_IF_E_PENDING;
    }

    s_readStarted = 0u;

    if ((NVM_REQ_OK == res) || (NVM_REQ_RESTORED_FROM_ROM == res))
    {
        for (i = 0u; i < VIN_LEN; i++)
        {
            Data[i] = g_NvMVinBuffer[i];
        }
        return E_OK;
    }

    return E_NOT_OK;
}

Std_ReturnType NvMVin_Write(const uint8* Data, uint8 OpStatus)
{
    NvM_RequestResultType res = NVM_REQ_PENDING;
    uint8 i;

    if (VIN_IF_CANCEL == OpStatus)
    {
        s_writeStarted = 0u;
        return E_NOT_OK;
    }

    if (VIN_IF_INITIAL == OpStatus)
    {
        for (i = 0u; i < VIN_LEN; i++)
        {
            g_NvMVinBuffer[i] = Data[i];
        }
        s_writeStarted = 0u;
    }

    if (0u == s_writeStarted)
    {
        if (E_OK == NvM_WriteBlock(NvMConf_NvMBlockDescriptor_NvMBlock_VIN, g_NvMVinBuffer))
        {
            s_writeStarted = 1u;
        }
        return (Std_ReturnType)VIN_IF_E_PENDING;   /* retry if busy */
    }

    (void)NvM_GetErrorStatus(NvMConf_NvMBlockDescriptor_NvMBlock_VIN, &res);

    if (NVM_REQ_PENDING == res)
    {
        return (Std_ReturnType)VIN_IF_E_PENDING;
    }

    s_writeStarted = 0u;

    return ((NVM_REQ_OK == res) || (NVM_REQ_RESTORED_FROM_ROM == res)) ? E_OK : E_NOT_OK;
}
