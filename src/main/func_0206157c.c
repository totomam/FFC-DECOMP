#include "ffc/types.h"

uint32_t func_0206157c(uint8_t *s) {
    uint8_t *r3 = *(uint8_t **)(s + 0x18);
    uint32_t off = *(uint32_t *)(r3 + 0x34);
    uint32_t stride = *(uint32_t *)(r3 + 0xc);
    uint8_t *base = r3 + off;
    uint32_t idx = stride * (*(uint32_t *)(r3 + 0x14) - 1);
    uint8_t *p = base + idx;
    uint32_t hi = base[idx] << 8;
    return hi | p[1];
}
