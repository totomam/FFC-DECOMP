#include "ffc/types.h"

extern uint32_t func_ov000_02166b94(uint32_t a, uint16_t b, uint32_t *c);
extern uint8_t *func_02092b00(void *p, const void *d);
extern int func_02092a04(void *p, const void *d, uint32_t n);
extern int func_ov001_0217ed8c(void *p, const void *d, void *out, uint32_t n);
extern uint32_t func_02093b18(void *p);
extern int func_02086ad4(void *obj, const void *first, ...);
extern uint32_t func_02092864(const uint8_t *text);
extern void func_ov000_021695c8(uint8_t *a, uint32_t b, void *c);
extern int func_02092948(void *a, void *b);
extern void func_ov001_02178324(void *a, void *b, const void *c);
extern void func_ov001_0217870c(void *a, uint32_t b, uint16_t c, void *d, uint32_t *e, uint32_t f);

extern const uint8_t data_ov001_02190f94[];
extern const uint8_t data_ov001_02190f74[];
extern const uint8_t data_ov001_02190f7c[];
extern const uint8_t data_ov001_02190f84[];
extern const uint8_t data_ov001_02190f8c[];
extern const uint8_t data_ov001_02190ff0[];
extern const uint8_t data_ov001_02190f9c[];
extern const uint8_t data_ov001_02190fc8[];

typedef struct St {
    uint32_t state;
    uint32_t f4;
    uint32_t f8;
    uint16_t f12;
    uint16_t f14;
    uint32_t f16;
    uint32_t f18;
    uint32_t f20;
    uint8_t *f1c;
    uint32_t f20x;
    uint32_t f24;
} St;

int func_ov001_0217bb10(void *a, void *b)
{
    St *s = (St *)b;
    uint8_t *p7 = *(uint8_t **)a;
    uint8_t fr[0x17c];
    uint8_t *p;
    uint8_t *h;
    uint32_t r6;

    if (s->state != 0x68) {
        return 3;
    }
    func_ov000_02166b94(s->f8, s->f12, (uint32_t *)(fr + 0x4));
    if (*(uint32_t *)(fr + 0x4) == 3) {
        s->state = 0x6a;
        return 0;
    }
    p = func_02092b00(s->f1c, data_ov001_02190f94);
    if (p != 0) {
        *p = 0;
        h = s->f1c;
        if (func_02092a04(h, data_ov001_02190f74, 6) == 0) {
            if (func_ov001_0217ed8c(h, data_ov001_02190f7c, fr + 0x69, 0x10) == 0) {
                s->state = 0x6a;
                return 0;
            }
            r6 = func_02093b18(fr + 0x69);
            if (func_ov001_0217ed8c(s->f1c, data_ov001_02190f84, fr + 0x4a, 0x1f) == 0) {
                s->state = 0x6a;
                return 0;
            }
            if (func_ov001_0217ed8c(s->f1c, data_ov001_02190f8c, fr + 0x29, 0x21) == 0) {
                s->state = 0x6a;
                return 0;
            }
            func_02086ad4(fr + 0x79, data_ov001_02190ff0, p7 + 0x177, *(uint32_t *)(p7 + 0x1a0), r6);
            func_ov000_021695c8(fr + 0x79, func_02092864(fr + 0x79), fr + 0x8);
            if (func_02092948(fr + 0x29, fr + 0x8) != 0) {
                func_ov001_02178324(a, (uint8_t *)s + 0x2c, data_ov001_02190f9c);
                func_ov001_02178324(a, (uint8_t *)s + 0x2c, data_ov001_02190f94);
                func_ov001_0217870c(a, s->f8, s->f12, (uint8_t *)s + 0x2c, (uint32_t *)(fr + 0), 1);
                s->state = 0x6a;
                return 0;
            }
            func_ov001_02178324(a, (uint8_t *)s + 0x2c, data_ov001_02190fc8);
            func_ov001_02178324(a, (uint8_t *)s + 0x2c, data_ov001_02190f94);
            s->state = 0x69;
            s->f16 = r6;
            s->f24 = 0;
        }
        s->state = 0x6a;
        return 0;
    }
    return 0;
}
