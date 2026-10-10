#include "ffc/types.h"

void func_0201cff8(uint8_t *p, uint32_t idx, uint32_t *src) {
    uint32_t *base = *(uint32_t **)(p + 0x40);
    uint8_t *dst = (uint8_t *)base + (idx << 4);
    ((uint32_t *)dst)[0] = src[0];
    ((uint32_t *)dst)[1] = src[1];
    ((uint32_t *)dst)[2] = src[2];
    ((uint32_t *)dst)[3] = src[3];
}
