#include "ffc/types.h"

void func_02036ee0(void *object, uint32_t value) {
    uint32_t *field = (uint32_t *)((uint8_t *)object + 0x14);
    uint32_t mask = 0xffffe000U;
    *field = (*field & mask) | (value & (mask >> 19));
}
