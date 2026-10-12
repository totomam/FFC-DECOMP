#include "ffc/types.h"

typedef struct {
    uint32_t pad;
    uint32_t *b;
} Outer;

extern void func_ov006_021a3b88(void *a, void *b);
extern uint32_t func_ov006_021a3b48(void *p);
extern uint32_t func_ov006_021b3888(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov006_021af444(uint32_t x);
extern void func_ov006_021af4a4(void);
extern void func_02082894(void);
extern uint8_t data_ov006_021b85dc[];
extern uint8_t data_ov006_021b85c4[];
extern uint8_t data_ov006_021b94a4[];
extern Outer data_ov006_021bc778;

void func_ov006_021a91c0(void)
{
    uint8_t buf[0x30];
    Outer *o;
    const uint8_t *s = data_ov006_021b85dc;
    uint8_t *d = buf + 0x16;
    uint32_t n = 0x19;

    do {
        uint8_t c = *s++;
        *d++ = c;
    } while (--n != 0);

    s = data_ov006_021b85c4;
    d = buf;
    n = 0x16;
    do {
        uint8_t c = *s++;
        *d++ = c;
    } while (--n != 0);

    func_ov006_021a3b88(data_ov006_021b94a4, func_02082894);
    o = &data_ov006_021bc778;
    o->b[1] = func_ov006_021b3888(func_ov006_021a3b48(buf + 0x16), 0, 4);
    func_ov006_021af444(o->b[1]);
    func_ov006_021af4a4();
    o->b[2] = func_ov006_021b3888(func_ov006_021a3b48(buf), 0, 4);

    {
        volatile uint16_t *r = (volatile uint16_t *)0x04001008;
        uint16_t v;
        v = r[0];
        r[0] = (v & ~3) | 3;
        v = r[1];
        r[1] = (v & ~3) | 3;
    }
    {
        volatile uint16_t *r = (volatile uint16_t *)0x04000008;
        uint16_t v;
        v = r[0];
        r[0] = (v & ~3) | 3;
        v = r[1];
        r[1] = (v & ~3) | 2;
        v = r[2];
        r[2] = (v & ~3) | 3;
        v = r[3];
        r[3] = (v & ~3) | 2;
    }
}
