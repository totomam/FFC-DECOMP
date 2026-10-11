#include "ffc/types.h"

void func_0201f0cc(uint8_t *self, int32_t idx, uint32_t *src) {
    uint8_t *base = *(uint8_t **)(self + 0x8c);
    uint32_t *dst = (uint32_t *)(base + idx * 0x18);
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    dst[4] = src[4];
    dst[5] = src[5];
}
