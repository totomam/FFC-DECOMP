#include "ffc/types.h"

void func_02036dbc(void *object, uint32_t value) {
    uint32_t *field = (uint32_t *)((uint8_t *)object + 0x8);
    uint32_t mask = 0xffffc000U;
    *field = (*field & mask) | (value & (mask >> 18));
}
