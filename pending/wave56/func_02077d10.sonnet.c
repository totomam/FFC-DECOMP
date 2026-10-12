#include "ffc/types.h"

extern void func_02077c50(uint32_t *out, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_02077c6c(uint8_t *p, uint32_t a1);
extern uint32_t func_02077c88(uint8_t *p, uint16_t *reg, uint32_t v);
extern uint16_t *func_02077ca8(void *p, uint32_t id);
extern void func_020849e0(uint32_t v, uint32_t a, uint32_t b, uint32_t c);

typedef struct { uint16_t x; uint16_t a:8; uint16_t b:7; uint16_t c:1; } R;

uint32_t func_02077d10(uint8_t *p, uint32_t a1, uint32_t a2, uint32_t a3, uint16_t w)
{
    uint32_t s[2], e[2], u[2];
    uint32_t v, r7; uint16_t flags; uint32_t d; uint16_t f8;
    uint16_t *reg;

    func_02077c50(s, a1, a2, a3);
    e[1] = s[1];
    e[0] = a3 + a2;
    v = a2 - 16;
    s[1] = v;
    r7 = func_02077c6c(p, a1);

    if (s[1] - s[0] < 0x14) {
        s[1] = s[0];
    } else {
        reg = func_02077ca8(s, 0x4652);
        r7 = func_02077c88(p, reg, r7);
    }

    if (e[1] - e[0] < 0x14) {
        e[0] = e[1];
    } else {
        reg = func_02077ca8(e, 0x4652);
        r7 = func_02077c88(p, reg, r7);
    }

    d = e[0] - s[1];
    f8 = (uint8_t)*(uint32_t *)(p - 4);
    flags = f8;
    if (flags & 1) {
        func_020849e0(0, s[1], d, flags);
    }

    u[0] = v;
    u[1] = e[0];
    reg = func_02077ca8(u, 0x5544);
    uint32_t h;
    h = reg[1] & ~0x8000;
    reg[1] = h;
    h |= (w & 1) << 15;
    reg[1] = h;
    h = reg[1] & ~0x7f00;
    reg[1] = h;
    h |= (((uint16_t)((uint32_t)reg - s[1])) & 0x7f) << 8;
    reg[1] = h;
    reg[1] = reg[1] & ~0xff;
    reg[1] = reg[1] | (uint8_t)*(uint16_t *)(p + 0x10);

    func_02077c88(p + 8, reg, *(uint32_t *)(p + 0xc));
    return a2;
}
