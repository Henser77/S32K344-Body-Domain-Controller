# 简历与面试材料

---

## 一、项目一句话

基于 NXP S32K344 的车身域控制器：MCAL 用 EB tresos 配置，BSW 用开源小满
（EasyXMen）配置，FreeRTOS 调度，实现三路 CAN 网关、信号级处理、UDS 诊断与网络管理。

---

## 二、简历项目条目（可直接用）

**基于 S32K344 的车身域控制器（三路 CAN 网关）**  
*EB tresos + 开源小满 EasyXMen + FreeRTOS*

- 使用 EB tresos 配置 S32K344 三路 CAN 控制器（500k/500k/125k）与 18 个
  硬件对象（HOH），完成位定时、过滤器与收发邮箱配置。
- 基于小满配置 CanIf / PduR / Com / CanTp / Dcm / Dem / NvM / Fee / CanSM /
  ComM / CanNm / Nm，实现三通道独立通信与网络管理。
- 实现**报文级网关**：CAN0 收到 0x120 后经 PduR 转发到 CAN1/CAN2 的 0x123。
- 实现**信号级网关**：将动力网 0x200 车速、车身网 0x100 车门状态、0x110 灯光命令
  解包后重新打包为 0x101；将 0x210 电机温度换算为物理值后输出扭矩限制 0x201。
- 实现 **UDS 诊断**：0x10 / 0x11 / 0x22 / 0x27 / 0x2E / 0x3E，通过
  CanTp 支持多帧，VIN 写入 NvM 并持久化。
- 实现**三通道网络管理**：CanNm 周期 NM 报文、ComM 模式管理、CanSM 控制器状态机，
  完成本地睡眠（Ready Sleep → Prepare Bus-Sleep → Bus-Sleep）与唤醒
  （Repeat Message 连发 3 帧）验证。
- 为所有接收信号配置 0.5s 超时与无效值替换，避免用旧数据做控制决策。

---

## 三、技术栈关键词

```
MCU:        NXP S32K344 (Cortex-M7)
AUTOSAR:    EB tresos (MCAL), 小满 EasyXMen (BSW), AUTOSAR CP
通信:       CAN / CAN FD 基础, CanIf, PduR, Com, CanTp, CanNm, Nm
诊断:       UDS (ISO 14229), Dcm, Dem, CanTp 多帧
存储:       NvM, Fee, MemAcc, Mem_43_INFLS, D-Flash
模式管理:   EcuM, BswM, ComM, CanSM
OS:         FreeRTOS
工具:       S32DS, J-Link, USB-CAN, Python (python-can/ctypes)
```

---

## 四、面试讲述（STAR）

### S（背景）

```
整车电子电气架构从分布式 ECU 走向域控制器。
车身域控制器需要同时连接动力网、车身网和诊断网，
既要转发报文，也要理解信号并做本地决策。
```

### T（任务）

```
在 S32K344 上搭一套可运行的 AUTOSAR CP 最小系统：
三路 CAN、网关、诊断、网络管理，并验证真实总线行为。
```

### A（行动）

```
1. EB 配置 MCAL：三路 CAN、位定时、HOH、过滤器
2. 小满配置 BSW：CanIf/PduR/Com/CanTp/Dcm/NvM/CanSM/ComM/CanNm
3. 应用层实现信号解包、扭矩保护、状态汇总
4. 用 Python 写双通道子网模拟器，模拟动力/车身节点
5. 逐项验证：报文转发、信号重组、超时、睡眠唤醒、UDS
```

### R（结果）

```
- 三路 CAN 全部正常收发
- 报文网关与信号网关均验证通过
- UDS 多帧写 VIN 成功并持久化
- 三通道 NM 睡眠/唤醒验证通过
```

---

## 五、面试高频问题与回答要点

### Q1：域控制器和普通网关的区别？

```
普通网关只做报文转发（CanIf→PduR→CanIf）。
域控制器还要把信号解包、做决策、再重新打包：
  0x200 车速 + 0x100 车门 + 0x110 灯光 → 0x101
  0x210 温度 → 扭矩限制 0x201
```

### Q2：为什么接收信号要配超时？

```
控制决策必须基于最新状态。
信号丢失后如果继续用旧值，可能误判：
  车速丢失仍按 80km/h 判断 → 不落锁
  温度丢失仍按 60℃ → 不降扭
超时后替换为无效值，应用进入安全默认。
```

### Q3：Com 的超时是怎么实现的？

```
Rx IPdu 加入 Com IPdu 组；
组启动后调用 Com_EnableReceptionDM；
Com_MainFunctionRx 每 10ms 递减 DM 计数；
到 0 后按 signal 配置替换为无效值。
```

### Q4：0x2E 写 VIN 为什么一开始会卡死？

```
旧工程里 VIN 读写是空桩，直接返回 E_OK，从未真正走 NvM。
接入真实 NvM 后，第一次写就暴露了存储栈没初始化：
Mem_43_INFLS_Init 要求传 NULL_PTR，
传了配置指针会触发 DET 并跳过硬件初始化，
导致 Fee 擦写永远不完成，Dcm 一直 pending。
```

### Q5：网络管理怎么保证整车一起睡？

```
ComM 释放所有用户 → CanNm 进入 Ready Sleep，停止发 NM
→ TimeoutTime 内收不到 NM → Prepare Bus-Sleep
→ WaitBusSleepTime 总线安静 → Bus-Sleep
→ CanSM 停控制器
任何一个节点没睡，总线就不会安静，整车暗电流就超标。
```

### Q6：车身子网 NM 有什么特殊？

```
- 节点多、125k 带宽低 → 总线负载降低（NM 周期放慢）
- 静态电流要求严 → 必须同步进入 Bus-Sleep
- 唤醒源多 → 主动唤醒位 + 快速连发
- 常配合部分网络（PNC），只唤醒需要的节点
- 网关场景需要 Nm Coordinator 协调动力网
```

### Q7：你遇到最难的问题？

```
Com_Init HardFault。
生成的 Com_PBcfg.c 初始化少了一个 IpduGroupRefPtr，
导致后面所有指针错位一格。
编译只有一条 incompatible pointer 警告，
最后靠补字段解决。
这件事让我养成了看编译警告和对比生成代码的习惯。
```

---

## 六、可以继续扩展（面试时体现规划）

- Bus-Off 故障注入与恢复
- Partial Networking（PNC）
- Nm Coordinator 多网协调
- Bootloader / OTA（0x34/36/37）
- DBC 正式通信矩阵
- 以太网 / LIN 网关扩展

---

## 七、投递方向建议

| 方向 | 匹配点 |
|---|---|
| 汽车电子 / 车身域控 | 项目直接对口 |
| AUTOSAR 基础软件 | BSW 配置与调试经验 |
| 车载网络 / 网关 | 三路 CAN、NM、诊断 |
| 嵌入式软件 | MCAL、FreeRTOS、调试能力 |
