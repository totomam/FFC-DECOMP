#include "ffc/overlay_02.h"
#define CONST_FIELD(type, object, offset) (*(const type *)((const uint8_t *)(object) + (offset)))

uint32_t func_ov002_021a18c4(const void *object, uint32_t index) {
    const uint32_t *values = (const uint32_t *)(uintptr_t)CONST_FIELD(uint32_t, object, 0x11C);
    return values[index];
}
