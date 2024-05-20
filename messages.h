#ifndef __MESSAGES_H__
#define __MESSAGES_H__

#include <stdint.h>

typedef struct __attribute__((packed)) {
  uint32_t mid;
  uint8_t button;
  uint8_t edge;
} MSGButtonPress_t;
#define MSGButtonPress_MID (0x1)
#define MSGButtonPress_LEN (sizeof(MSGButtonPress_t))

typedef struct __attribute__((packed)) {
  uint32_t mid;
  float sensitivity_iso;
  float shutter_speed;
} MSGSensorSettings_t;
#define MSGSensorSettings_MID (0x2)
#define MSGSensorSettings_LEN (sizeof(MSGSensorSettings_t))

typedef struct __attribute__((packed)) {
  uint32_t mid;
  uint32_t action;
} MSGGUIActions_t;
#define MSGGUIActions_MID (0x3)
#define MSGGUIActions_LEN (sizeof(MSGGUIActions_t))

typedef struct __attribute__((packed)) {
  uint32_t mid;
  uint32_t time;
} MSGTick_t;
#define MSGTick_MID (0x4)
#define MSGTick_LEN (sizeof(MSGTick_t))

typedef struct __attribute__((packed)) {
  uint32_t mid;
  float voltage;
  float current;
  float soc;
} MSGBatteryStats_t;
#define MSGBatteryStats_MID (0x5)
#define MSGBatteryStats_LEN (sizeof(MSGBatteryStats_t))

#endif
