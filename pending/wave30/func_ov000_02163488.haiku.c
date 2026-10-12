#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(uint32_t a);

uint32_t func_ov000_02163488(uint32_t *p) {
    uint32_t *r4;
    uint32_t *d;
    uint8_t *o;
    uint32_t x;
    uint32_t y;
    uint32_t i;

    o = func_ov000_02163350((uint32_t)p);
    if (*(uint32_t *)(o + 0x50) == 0x20) {
        return 0;
    }
    r4 = (uint32_t *)func_ov000_02163350(*(uint32_t *)(o + 0x50));
    o = func_ov000_02163350((uint32_t)r4);
    d = (uint32_t *)((uint8_t *)r4 + *(uint32_t *)(o + 0x50) * 0x28 + 0x54);
    i = 5;
    do {
        x = p[0];
        y = p[1];
        p += 2;
        d[0] = x;
        d[1] = y;
        d += 2;
    } while (--i != 0);
    o = func_ov000_02163350(x);
    *(uint32_t *)(o + 0x50) += 1;
    return 1;
}
