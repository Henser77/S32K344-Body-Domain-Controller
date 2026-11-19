/**
 * 临时兼容实现 (bring-up shim)：把 AUTOSAR OS 的启动接口映射到 FreeRTOS。
 * 真正接入 AUTOSAR OS 后删除本文件。
 */
#include "Os.h"
#include "FreeRTOS.h"
#include "task.h"

void StartOS(AppModeType Mode)
{
    (void)Mode;
    vTaskStartScheduler();   /* 不返回 */
}

void ShutdownOS(StatusType Error)
{
    (void)Error;
    taskDISABLE_INTERRUPTS();
    for (;;)
    {
    }
}

void DisableAllInterrupts(void)
{
    __asm__ volatile ("cpsid i" ::: "memory");
}

void EnableAllInterrupts(void)
{
    __asm__ volatile ("cpsie i" ::: "memory");
}

CoreIdType GetCoreID(void)
{
    return (CoreIdType)0U;
}
