#include "ffc/types.h"

extern void func_020694ac(void *obj, uint32_t a, uint32_t b);
extern void func_02053234(void *object);
extern uint8_t data_ov008_021a8b90[];

void *func_ov008_021a1770(void *self, uint32_t p1, uint8_t p2)
{
    uint8_t *s = (uint8_t *)self;
    uint8_t *o;
    uint32_t *q1;
    uint32_t *q2;

    func_020694ac(self, 0, 0);
    *(uint8_t **)s = data_ov008_021a8b90;
    o = s + 0xbc;
    func_02053234(o);
    *(uint32_t *)(o + 4) = 0;
    *(uint8_t *)(o + 0xc) = 0;

    q1 = (uint32_t *)(s + 0x104);
    q1[0] = 0;
    q1[1] = 0;
    q1[2] = 0;

    q2 = (uint32_t *)(s + 0x124);
    *(uint32_t *)(s + 0x124) = 0;
    q2[1] = 0;
    q2[2] = 0;

    *(uint8_t *)(s + 0x130) = 0;
    *(uint8_t *)(s + 0x131) = 0;
    *(uint32_t *)(s + 0x138) = 0;
    *(uint8_t *)(s + 0x13c) = 0;
    *(uint8_t *)(s + 0x13d) = 0;
    *(uint8_t *)(s + 0x13e) = 0;
    *(uint8_t *)(s + 0x144) = p2;
    *(uint32_t *)(s + 0x148) = p1;
    return s;
}
