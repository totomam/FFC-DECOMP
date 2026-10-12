#include "ffc/types.h"

extern uint8_t data_020ad770[];
extern void func_0202f62c(void);
extern uint32_t func_0203c2e4(void);
extern void func_02059b2c(uint32_t a, uint32_t b);
extern void func_020235ac(uint32_t *out, uint32_t *base, uint32_t *a, uint32_t *b);

uint32_t func_020229ac(uint8_t *p)
{
    uint32_t loc[3];
    uint32_t *s;
    uint32_t *w;
    uint32_t *o;

    w = (uint32_t *)p;
    w[0] = (uint32_t)data_020ad770;
    func_0202f62c();
    o = (uint32_t *)w[0x87];
    if (o != 0) {
        if (o != 0) {
            ((void (*)(void *))((uint32_t *)o[0])[1])(o);
        }
        w[0x87] = 0;
    }
    func_02059b2c(func_0203c2e4(), w[0x23]);
    s = (uint32_t *)(p + 0x4c);
    loc[2] = (uint32_t)&s[1];
    loc[1] = s[2];
    func_020235ac(&loc[0], s, &loc[1], &loc[2]);
    return (uint32_t)p;
}
