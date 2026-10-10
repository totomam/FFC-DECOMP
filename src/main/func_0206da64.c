#include "ffc/overlay_02.h"
#define CONST_FIELD(type, object, offset) (*(const type *)((const uint8_t *)(object) + (offset)))

uint32_t func_0206da64(const void *object) { return CONST_FIELD(uint32_t, object, 0x240); }
