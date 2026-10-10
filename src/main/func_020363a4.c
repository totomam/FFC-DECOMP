#include "ffc/types.h"
#define CONST_FIELD(type, object, offset) (*(const type *)((const uint8_t *)(object) + (offset)))
uint32_t func_020363a4(const void *object) { return CONST_FIELD(uint32_t, object, 88) << 1 >> 29; }
