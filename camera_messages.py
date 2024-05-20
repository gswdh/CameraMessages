import ctypes

from message_base import CStructBase

class MSGButtonPress(CStructBase):
    fields = [
        ("mid", ctypes.c_uint32),
        ("button", ctypes.c_uint8),
        ("edge", ctypes.c_uint8)
    ]
    def __init__(self, button, edge):
        self.button = button
        self.edge = edge

class MSGSensorSettings(CStructBase):
    fields = [
        ("mid", ctypes.c_uint32),
        ("sensitivity_iso", ctypes.c_float), 
        ("shutter_speed", ctypes.c_float)
    ]
    def __init__(self, sensitivity_iso, shutter_speed):
        self.sensitivity_iso = sensitivity_iso
        self.shutter_speed = shutter_speed

class MSGGUIActions(CStructBase):
    fields = [
        ("mid", ctypes.c_uint32),
        ("action", ctypes.c_uint32)
    ]
    def __init__(self, action):
        self.action = action

class MSGTick(CStructBase):
    fields = [
        ("mid", ctypes.c_uint32),
        ("time", ctypes.c_uint32)
    ]
    def __init__(self, time):
        self.time = time

MSGS = {
    0x01:MSGButtonPress,
    0x02:MSGSensorSettings,
    0x03:MSGGUIActions,
    0x04:MSGTick,
}
