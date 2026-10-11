#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint32_t f1;
    uint32_t f2;
    uint32_t f3;
    uint32_t f4;
    uint32_t f5;
    uint32_t f6;
    uint32_t f7;
    uint32_t f8;
    uint32_t f9;
    uint32_t f10;
    uint32_t f11;
    uint32_t f12;
    uint32_t f13;
} S;

extern uint32_t func_0207f4bc(S *s, uint32_t a, uint32_t b);

void func_0207f734(uint32_t a, S *s, uint32_t x)
{
    uint32_t *q = &s->f12;
    q[1] = x;
    q[0] = a;
    if (func_0207f4bc(s, 6, 1) == 0) {
        s->f3 = (s->f3 | 0x10) & ~0x20u;
        s->f2 = a;
        s->f1 = (uint32_t)&s->f8;
    }
}
