#include "ffc/types.h"

void func_ov002_021c8f30(uint32_t *dst, uint8_t *base, uint32_t idx) {
    uint32_t *src = (uint32_t *)(base + (idx << 3));
    dst[0] = src[0xe];
    dst[1] = src[0xf];
}
