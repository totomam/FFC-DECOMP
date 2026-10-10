#include "ffc/types.h"

void func_02036eb8(void *object, uint32_t value) {
    uint32_t *field = (uint32_t *)((uint8_t *)object + 0x10);
    uint32_t mask = 0xffffe000U;
    *field = (*field & mask) | (value & (mask >> 19));
}
