#include "ffc/types.h"

extern uint32_t func_ov000_02168768(uint32_t x);

typedef void (*fn6_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);

void func_ov001_02171e9c(uint32_t *p) {
    if (p[0x5e]) {
        uint32_t r = func_ov000_02168768(p[0x5a]);
        ((fn6_t)p[0x5e])(p[1], p[0x5c], p[0x5d], p[0x5b], r, p[0x13]);
    }
}
