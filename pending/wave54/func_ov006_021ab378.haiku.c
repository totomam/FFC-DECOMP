#include "ffc/types.h"

typedef struct Inner { uint32_t pad0, pad4, a8, ac, b10; } Inner;
typedef struct Outer { uint32_t pad0, pad4; Inner *p8; } Outer;

extern void func_ov006_021a3b88(void *obj, void (*fn)(void));
extern void *func_ov006_021a3b48(void *p);
extern uint32_t func_ov006_021b3888(void *p, int x, int y);
extern void func_ov006_021af444(uint32_t v);
extern void func_ov006_021af4a4(void);
extern uint8_t data_ov006_021b8758[];
extern uint8_t data_ov006_021b8728[];
extern uint8_t data_ov006_021b8740[];
extern uint8_t data_ov006_021b95ec[];
extern uint8_t data_ov006_021b9600[];
extern uint8_t data_ov006_021b9618[];
extern uint8_t data_ov006_021b9630[];
extern void func_0208243c(void);
extern void func_02082ac0(void);
extern void func_02082a68(void);
extern void func_02082364(void);
extern void func_02082894(void);
extern Outer data_ov006_021bc78c;

void func_ov006_021ab378(void)
{
    uint8_t c[0x17];
    uint8_t b[0x15];
    uint8_t a[0x16];
    uint32_t n;
    const uint8_t *s;
    uint8_t *d;
    uint16_t *r5;
    uint16_t *r3;
    uint16_t *r0;
    Outer *o;

    {
        uint32_t n1 = 0x17;
        uint8_t *d1 = c;
        const uint8_t *s1 = data_ov006_021b8758;
        do {
            uint8_t v = *s1++;
            *d1++ = v;
        } while (--n1);
    }
    {
        uint32_t n2 = 0x15;
        uint8_t *d2 = b;
        const uint8_t *s2 = data_ov006_021b8728;
        do {
            uint8_t v = *s2++;
            *d2++ = v;
        } while (--n2);
    }
    {
        uint32_t n3 = 0x16;
        uint8_t *d3 = a;
        const uint8_t *s3 = data_ov006_021b8740;
        do {
            uint8_t v = *s3++;
            *d3++ = v;
        } while (--n3);
    }

    r5 = (uint16_t *)0x400000c;
    *r5 = (*r5 & 0x43) | 0xe18;

    func_ov006_021a3b88(data_ov006_021b95ec, func_0208243c);
    func_ov006_021a3b88(data_ov006_021b9600, func_02082ac0);
    func_ov006_021a3b88(data_ov006_021b9618, func_02082a68);
    func_ov006_021a3b88(b, func_02082364);
    func_ov006_021a3b88(data_ov006_021b9630, func_02082894);

    o = &data_ov006_021bc78c;
    o->p8->a8 = func_ov006_021b3888(func_ov006_021a3b48(c), 0, 4);
    func_ov006_021af444(o->p8->a8);
    func_ov006_021af4a4();
    o->p8->ac = func_ov006_021b3888(func_ov006_021a3b48(b), 0, 4);
    o->p8->b10 = func_ov006_021b3888(func_ov006_021a3b48(a), 0, 4);

    r3 = (uint16_t *)0x4001008;
    r3[0] = (r3[0] & ~3) | 3;
    r3[1] = (r3[1] & ~3) | 3;

    r0 = (uint16_t *)0x4000008;
    r0[0] = (r0[0] & ~3) | 3;
    r0[1] = (r0[1] & ~3) | 2;
    r5[0] = (r5[0] & ~3) | 3;
    r5[1] = (r5[1] & ~3) | 2;
}
