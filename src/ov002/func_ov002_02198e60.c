#include "ffc/overlay_02.h"
#define CONST_FIELD(type, object, offset) (*(const type *)((const uint8_t *)(object) + (offset)))

uint8_t func_ov002_02198e60(const void *object) { return CONST_FIELD(uint8_t, object, 0x12c); }
