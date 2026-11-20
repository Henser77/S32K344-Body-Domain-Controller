#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
sim_subnet.py —— 动力/车身子网模拟器 + 网关输出监视

用法（必须用 32 位 Python）：
    D:\\tools\\python32\\python.exe D:\\tools\\sim_subnet.py

功能：
    CH1 (500k) 模拟 CAN1 动力子网：
        0x200  PT_Status  每 100ms：车速 60.00、转速 3000、档位 3、SOC 80
        0x210  PT_Torque  每 100ms：扭矩 0、上限 1000、电机温度 110℃、降额 100

    CH2 (125k) 模拟 CAN2 车身子网：
        0x100  Body_Status 每 100ms：车门 0x5、上锁 2、灯光 3、雨刮 1、电压 12.0V
        0x110  Light_Cmd   每 100ms：近光 2、亮度 80%

    同时接收并解析：
        0x101  Body_GwStatus（网关汇总输出，CAN2）
        0x201  PT_Cmd       （扭矩限制命令，CAN1）
        0x123  网关转发测试帧

注意：
    - 运行前关闭 USB_CAN Tool，否则设备被占用
    - Ctrl+C 退出
"""

import ctypes
import sys
import time

sys.path.insert(0, r"D:\tools")
import can_driver as cd

DEV_TYPE = 4
DEV_INDEX = 0
CH_CAN1 = 0          # CH1
CH_CAN2 = 1          # CH2
TIMING_500K = (0x00, 0x1C)
TIMING_125K = (0x03, 0x1C)
PERIOD_MS = 100


def le16(v):
    return [v & 0xFF, (v >> 8) & 0xFF]


def build_0x200(speed=6000, rpm=3000, gear=3, soc=80):
    d = [0] * 8
    d[0:2] = le16(speed)          # 车速 ×0.01
    d[2:4] = le16(rpm)            # 转速
    d[4] = gear & 0x0F            # 档位
    d[5] = soc & 0xFF             # SOC
    return d


def build_0x210(torque=0, limit=1000, temp_c=110, derate=100):
    d = [0] * 8
    d[0:2] = le16(torque)         # 实际扭矩 ×0.1
    d[2:4] = le16(limit)          # 扭矩上限 ×0.1
    d[4] = (temp_c + 40) & 0xFF   # 温度 raw = 温度 + 40
    d[5] = derate & 0xFF          # 降额系数
    return d


def build_0x100(door=0x5, lock=2, light=3, wiper=1, battery=120, ignition=1):
    d = [0] * 8
    d[0] = (door & 0x0F) | ((lock & 0x03) << 4)
    d[1] = (light & 0x0F) | ((wiper & 0x03) << 4)
    d[2] = battery & 0xFF
    d[3] = ignition & 0x01
    return d


def build_0x110(light_cmd=2, turn=0, flash=0, level=80):
    d = [0] * 8
    d[0] = (light_cmd & 0x07) | ((turn & 0x03) << 3) | ((flash & 0x01) << 5)
    d[1] = level & 0xFF
    return d


def decode_0x101(data):
    if len(data) < 4:
        return None
    speed = data[0] | (data[1] << 8)
    door = data[2] & 0x0F
    light = (data[2] >> 4) & 0x0F
    cnt = data[3] & 0x0F
    return speed, door, light, cnt


def decode_0x201(data):
    if len(data) < 2:
        return None
    return data[0] | (data[1] << 8)


def main():
    dll = cd.load_dll()

    if dll.VCI_OpenDevice(DEV_TYPE, DEV_INDEX, 0) != 1:
        print("打开设备失败：请先关闭 USB_CAN Tool")
        return 1

    cfg = cd.VCI_INIT_CONFIG()
    cfg.AccCode = 0
    cfg.AccMask = 0xFFFFFFFF
    cfg.Filter = 0
    cfg.Mode = 0

    cfg.Timing0, cfg.Timing1 = TIMING_500K
    if dll.VCI_InitCAN(DEV_TYPE, DEV_INDEX, CH_CAN1, ctypes.byref(cfg)) != 1:
        print("CH1 500k 初始化失败")
        dll.VCI_CloseDevice(DEV_TYPE, DEV_INDEX)
        return 1

    cfg.Timing0, cfg.Timing1 = TIMING_125K
    if dll.VCI_InitCAN(DEV_TYPE, DEV_INDEX, CH_CAN2, ctypes.byref(cfg)) != 1:
        print("CH2 125k 初始化失败")
        dll.VCI_CloseDevice(DEV_TYPE, DEV_INDEX)
        return 1

    dll.VCI_StartCAN(DEV_TYPE, DEV_INDEX, CH_CAN1)
    dll.VCI_StartCAN(DEV_TYPE, DEV_INDEX, CH_CAN2)
    dll.VCI_ClearBuffer(DEV_TYPE, DEV_INDEX, CH_CAN1)
    dll.VCI_ClearBuffer(DEV_TYPE, DEV_INDEX, CH_CAN2)

    print("模拟器已启动：")
    print("  CH1 500k : 发 0x200 / 0x210，收 0x201")
    print("  CH2 125k : 发 0x100 / 0x110，收 0x101")
    print("  Ctrl+C 退出\n")

    rx1 = (cd.VCI_CAN_OBJ * 256)()
    rx2 = (cd.VCI_CAN_OBJ * 256)()
    tx = cd.VCI_CAN_OBJ()

    def send(ch, can_id, data):
        tx.ID = can_id
        tx.SendType = 0
        tx.RemoteFlag = 0
        tx.ExternFlag = 0
        tx.DataLen = len(data)
        for i, v in enumerate(data):
            tx.Data[i] = v
        dll.VCI_Transmit(DEV_TYPE, DEV_INDEX, ch, ctypes.byref(tx), 1)

    def recv(ch, buf, timeout_ms):
        n = dll.VCI_Receive(DEV_TYPE, DEV_INDEX, ch, buf, 256, int(timeout_ms))
        out = []
        if n and n <= 256:
            for i in range(n):
                o = buf[i]
                out.append((o.ID, bytes(o.Data[:o.DataLen])))
        return out

    last_print = 0.0
    last_101 = None
    last_201 = None

    try:
        while True:
            send(CH_CAN1, 0x200, build_0x200())
            send(CH_CAN1, 0x210, build_0x210())
            send(CH_CAN2, 0x100, build_0x100())
            send(CH_CAN2, 0x110, build_0x110())

            for cid, data in recv(CH_CAN1, rx1, 0):
                if cid == 0x201:
                    last_201 = decode_0x201(data)
            for cid, data in recv(CH_CAN2, rx2, 0):
                if cid == 0x101:
                    last_101 = decode_0x101(data)

            now = time.time()
            if now - last_print >= 0.5:
                last_print = now
                if last_101:
                    sp, door, light, cnt = last_101
                    print("0x101  speed=%d.%02d km/h  door=0x%X  light=0x%X  cnt=%d"
                          % (sp // 100, sp % 100, door, light, cnt))
                else:
                    print("0x101  未收到")
                if last_201 is not None:
                    print("0x201  torque_limit=%d (%.1f%%)"
                          % (last_201, last_201 / 10.0))
                else:
                    print("0x201  未收到")
                print("-" * 60)

            time.sleep(PERIOD_MS / 1000.0)
    except KeyboardInterrupt:
        print("\n退出")
    finally:
        dll.VCI_CloseDevice(DEV_TYPE, DEV_INDEX)

    return 0


if __name__ == "__main__":
    sys.exit(main())
