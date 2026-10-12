#include "ffc/types.h"

extern void func_020694ac(void *p, uint32_t a, uint32_t b, uint32_t c);
extern void func_020095b8(void *p, void *q);
extern void func_02036750(void *p);
extern uint32_t data_ov011_021cbc5c[];
extern uint32_t data_020ae644[];
extern uint32_t data_020ae654[];

typedef struct {
    uint8_t a;
    uint8_t pad0[3];
    uint32_t w;
    uint8_t b;
    uint8_t pad1[3];
    uint8_t c;
} StackArg;

void *func_ov011_021c6fd4(uint8_t *p, uint32_t b, uint8_t *c, uint32_t d,
                          uint32_t e0, uint32_t e1, uint32_t e2, uint32_t e3)
{
    uint8_t *r7;
    uint8_t *s;
    uint8_t *q;
    uint8_t *end;
    uint16_t *hs;
    uint16_t *hd;
    uint32_t i;
    uint32_t n;
    uint32_t n2;
    uint32_t *src;
    uint32_t *dst;
    uint32_t *lim;


    func_020694ac(p, 0, 0, d);
    *(uint32_t *)p = (uint32_t)data_ov011_021cbc5c;
    *(uint32_t *)(p + 0xe0) = 0;
    *(uint32_t *)(p + 0xe4) = 0;
    n = 0x49;
    n <<= 2;
    *(uint32_t *)(p + n) = 0;
    *(uint32_t *)(p + n + 4) = 0;
    *(uint32_t *)(p + n + 8) = 0;
    *(uint32_t *)(p + n + 0xc) = b;

    r7 = p + n + 0x10;
    func_020095b8(r7, c);

    n2 = 0x7b;
    n2 <<= 2;
    s = c + 0xc;
    q = r7 + 0xc;
    end = r7 + n2;
    do {
        *(uint32_t *)(q + 0x00) = *(uint32_t *)(s + 0x00);
        *(uint32_t *)(q + 0x04) = (uint32_t)data_020ae644;
        *(uint32_t *)(q + 0x08) = *(uint32_t *)(s + 0x08);
        *(uint32_t *)(q + 0x0c) = (uint32_t)data_020ae644;
        *(uint32_t *)(q + 0x10) = *(uint32_t *)(s + 0x10);
        *(uint32_t *)(q + 0x14) = (uint32_t)data_020ae644;
        *(uint32_t *)(q + 0x18) = *(uint32_t *)(s + 0x18);
        *(uint32_t *)(q + 0x1c) = (uint32_t)data_020ae644;
        *(uint32_t *)(q + 0x20) = *(uint32_t *)(s + 0x20);
        *(uint32_t *)(q + 0x24) = (uint32_t)data_020ae644;
        *(uint32_t *)(q + 0x28) = *(uint32_t *)(s + 0x28);
        *(uint32_t *)(q + 0x2c) = *(uint32_t *)(s + 0x2c);
        *(uint32_t *)(q + 0x24) = (uint32_t)data_020ae654;
        hs = (uint16_t *)(s + 0x30);
        hd = (uint16_t *)(q + 0x30);
        for (i = 0x11; i != 0; i--) {
            *hd++ = *hs++;
        }
        *(uint32_t *)(q + 0x54) = *(uint32_t *)(s + 0x54);
        *(uint32_t *)(q + 0x58) = *(uint32_t *)(s + 0x58);
        *(uint32_t *)(q + 0x5c) = *(uint32_t *)(s + 0x5c);
        s += 0x60;
        q += 0x60;
    } while (q < end);

    src = (uint32_t *)(c + n2);
    dst = (uint32_t *)end;
    lim = (uint32_t *)(r7 + n2 + 0x14);
    do {
        *dst++ = *src++;
    } while (dst < lim);

    p[0x334] = (d != 0) ? 1 : 0;
    p[0x335] = (d == 3 || d == 4) ? 0 : 1;
    p[0x336] = (d != 0) ? 1 : 0;
    *(uint32_t *)(p + 0x338) = d;

    func_02036750(p + 0x350);

    *(uint32_t *)(p + 0x3a8) = 0;
    *(uint32_t *)(p + 0x3ac) = 0;
    *(uint32_t *)(p + 0x3b0) = 6;
    p[0x3b4] = 0;
    p[0x3b5] = 0;
    p[0x3b6] = ((StackArg *)&e0)->a;
    *(uint32_t *)(p + 0x3b8) = ((StackArg *)&e0)->w;
    p[0x3bc] = 0;
    p[0x3bd] = ((StackArg *)&e0)->b;
    p[0x3be] = ((StackArg *)&e0)->c;
    *(uint32_t *)(p + 0x3c0) = 0;
    p[0x3c5] = 0;
    p[0x3c6] = 4;
    p[0x3d4] = 0;
    *(uint32_t *)(p + 0x3d8) = 0;

    for (i = 0; i < 5; i++) {
        *(uint32_t *)(p + 0xe8 + i * 4) = 0;
    }

    return p;
}
