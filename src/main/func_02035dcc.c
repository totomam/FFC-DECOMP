#include "ffc/types.h"

void func_02035dcc(uint32_t *p, uint32_t a) {
    uint32_t v = p[1];
    uint32_t lo = (uint8_t)v;
    p[1] = (v & ~0xffu) | (uint8_t)(lo + a);
}
