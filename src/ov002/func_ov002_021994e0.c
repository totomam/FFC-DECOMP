#include "ffc/types.h"

void func_ov002_021994e0(uint8_t *p, uint32_t mask) {
    uint32_t *q = (uint32_t *)(p + 0xdc);
    *q = *q & ~mask;
}
