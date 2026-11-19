/* Compat: Dcm 配置引用的 RTE 模式切换函数（RTE 未集成，提供空实现） */
#ifndef RTESWITCH_STUB_H
#define RTESWITCH_STUB_H
#include "Std_Types.h"
Std_ReturnType Rte_Switch_CommunicationControlModeSwitchInterface_ComMChannel_CAN0_communicationControl(uint8 mode);
#endif