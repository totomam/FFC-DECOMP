#include "ffc/types.h"

void func_020365ec(void *object, uint32_t value) {
    uint32_t *field = (uint32_t *)((uint8_t *)object + 0x5c);
    uint32_t mask = 0xFFFFFE00U;
    *field = (*field & mask) | (value & (mask >> 23));
}
