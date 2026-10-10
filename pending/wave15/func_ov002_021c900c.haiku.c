#include "ffc/types.h"

void func_ov002_021c900c(uint32_t *dst, uint8_t *base, uint32_t idx) {
    uint32_t *src = (uint32_t *)(base + (idx << 3));
    dst[0] = src[4];
    dst[1] = src[5];
}
