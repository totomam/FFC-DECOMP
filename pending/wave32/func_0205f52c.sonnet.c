#include "ffc/types.h"

typedef struct S {
    uint8_t _0[4];
    struct S *base;
    uint8_t _1[8];
    uint32_t x;
    uint32_t y;
    uint8_t _2[8];
    uint32_t w;
    uint8_t _3[4];
} S;

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_0205f52c(S *p, Pair s)
{
    Pair t;
    uint32_t n = p->x;
    uint32_t v;
    p = p->base;
    if (n == 0) return;
    t = s;
    if (n == 0) return;
    do {
        p->x = t.a;
        p->y = t.b;
        p->w = (p->w & 0xc0003fff) | (((0x7fff - t.b) << 16) >> 2);
        p++;
    } while (--n != 0);
}
