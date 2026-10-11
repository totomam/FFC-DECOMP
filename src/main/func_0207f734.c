#include "ffc/types.h"
typedef struct { uint32_t f0,f1,f2,f3,f4,f5,f6,f7,f8,f9,f10,f11,f12,f13; } S;
extern uint32_t func_0207f4bc(S *s, uint32_t a, uint32_t b);
uint32_t func_0207f734(uint32_t a, S *s, uint32_t x)
{
    uint32_t *q = &s->f12;
    uint32_t r;
    q[1] = x;
    q[0] = a;
    r = func_0207f4bc(s, 6, 1);
    if (r == 0) {
        s->f3 = (s->f3 | 0x10) & ~0x20u;
        s->f2 = a;
        s->f1 = (uint32_t)&s->f8;
    }
    return r;
}
