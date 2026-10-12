#include "ffc/types.h"

extern void func_02077c50(uint32_t *out, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_02077c6c(uint8_t *p, uint32_t a1, uint32_t a2, uint32_t a3);
extern uint32_t func_02077c88(uint8_t *p, uint16_t *reg, uint32_t v);
extern uint16_t *func_02077ca8(void *p, uint32_t id, uint32_t a, uint32_t b, ...);
extern void func_020849e0(uint32_t v);

uint32_t func_02077d10(uint8_t *p, uint32_t a1, uint32_t a2, uint32_t a3, uint16_t w)
{
    uint32_t q, t;
    uint32_t s[2];
    uint32_t r7, flags;
    uint16_t *reg;
    uint16_t h;

    func_02077c50(s, a1, a2, a3);
    t = s[1];
    q = a3 + a2;
    s[1] = a2 - 16;
    r7 = func_02077c6c(p, a1, a2, a3);

    if (s[1] - s[0] < 0x14) {
        s[1] = s[0];
    } else {
        reg = func_02077ca8(s, 0x4652, a2, a3);
        r7 = func_02077c88(p, reg, r7);
    }

    if (t - q < 0x14) {
        q = t;
    } else {
        reg = func_02077ca8(&q, 0x4652, a2, a3);
        r7 = func_02077c88(p, reg, r7);
    }

    flags = *(uint32_t *)(p - 4) & 0xff;
    if (flags & 1) {
        func_020849e0(0);
    }

    reg = func_02077ca8(&t, 0x5544, q - s[1], flags, a2 - 16, q);
    h = reg[1] & 0x7fff;
    h = h | ((w & 1) << 15);
    reg[1] = h;
    h = reg[1] & 0x80ff;
    h = h | (((uint32_t)reg - s[1]) & 0x7f) << 8;
    reg[1] = h;
    h = (reg[1] & 0xff00) | (*(uint16_t *)(p + 0x10) & 0xff);
    reg[1] = h;

    func_02077c88(p + 8, reg, *(uint32_t *)(p + 0xc));
    return a2;
}
