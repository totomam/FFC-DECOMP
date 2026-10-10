#include "ffc/types.h"
#define FIELD(type, object, offset) (*(type *)((uint8_t *)(object) + (offset)))

void func_02036e1c(void *object, uint32_t value) {
    FIELD(uint32_t, object, 0xc) = (FIELD(uint32_t, object, 0xc) & ~2U) | ((value & 1) << 1);
}
