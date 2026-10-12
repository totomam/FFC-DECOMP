#include "ffc/types.h"

extern uint32_t func_ov000_0214e984(uint8_t *p);

int func_ov000_0214eef4(uint8_t *a, uint8_t *b) {
    uint32_t t;
    uint32_t v;
    uint16_t w;
    uint32_t r;
    if (a == 0) {
        return -39;
    }
    r = func_ov000_0214e984(a);
    if (a != 0) {
        t = *(uint16_t *)(a + 0xb0);
    } else {
        t = 0;
    }
    v = (uint16_t)t;
    if (r == 0) {
        v = 0;
    }
    w = (uint16_t)v;
    b[0] = 8;
    b[1] = 2;
    *(uint16_t *)(b + 2) = (uint16_t)(((w >> 8) & 0xff) | ((w << 8) & 0xff00));
    *(uint32_t *)(b + 4) = (r >> 24) | ((r >> 8) & 0xff00) | ((r << 8) & 0xff0000) | (r << 24);
    return 0;
}
