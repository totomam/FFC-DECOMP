#include "ffc/types.h"

#define CONST_FIELD(type, object, offset) (*(const type *)((const uint8_t *)(object) + (offset)))

uint32_t func_0201b924(const void *object) {
    const void *nested = (const void *)(uintptr_t)CONST_FIELD(uint32_t, object, 0x3C);
    return (CONST_FIELD(uint32_t, nested, 0x3c) << 26) >> 30;
}
