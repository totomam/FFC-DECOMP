#include "ffc/types.h"

void func_02064e10(uint8_t *p, uint32_t i, uint32_t v) {
    uint32_t off = i * 0x1c;
    *(uint32_t *)(*(uint8_t **)(p + 0x60) + off + 0x10) = v;
    uint32_t k = *(uint32_t *)(*(uint8_t **)(p + 0x60) + off + 0xc);
    uint32_t s = *(uint32_t *)(p + 0x5c) + v;
    uint8_t *e = *(uint8_t **)(p + 0x24) + k * 0x28;
    *(uint32_t *)(e + 0x10) = *(uint32_t *)(p + 0x58);
    *(uint32_t *)(e + 0x14) = s;
    uint32_t f = *(uint32_t *)(e + 0x20);
    f &= 0xc0003fff;
    *(uint32_t *)(e + 0x20) = f | (((0x7fffu - s) << 16) >> 2);
}
