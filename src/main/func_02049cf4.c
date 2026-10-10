#include "ffc/types.h"

void func_02049cf4(uint8_t *p, uint32_t v) {
    uint32_t t = p[0x12];
    t &= ~0xffu;
    t |= (uint8_t)v;
    p[0x12] = (uint8_t)t;
}
