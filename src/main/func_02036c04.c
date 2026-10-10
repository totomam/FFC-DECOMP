#include "ffc/types.h"
#define CONST_FIELD(type, object, offset) (*(const type *)((const uint8_t *)(object) + (offset)))
uint32_t func_02036c04(const void *object) { return CONST_FIELD(uint32_t, object, 4) << 16 >> 16; }
