/**
 * 临时兼容实现 (bring-up shim)：SchM（BSW 调度器）空实现。
 */
#include "SchM_EcuM.h"

void SchM_Init(const SchM_ConfigType* ConfigPtr)
{
    (void)ConfigPtr;
}

void SchM_Deinit(void)
{
}

void SchM_Start(void)
{
}

void SchM_StartTiming(void)
{
}