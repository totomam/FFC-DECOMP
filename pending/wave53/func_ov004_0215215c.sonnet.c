#include "ffc/types.h"

extern int func_0209a76c(int a, int b);

typedef struct Elem {
    uint32_t w[4];
    uint16_t h;
    uint32_t t;
} Elem;

typedef struct Q {
    Elem *base;
    int count;
    uint32_t f8;
    uint32_t f12;
    int start;
} Q;

Elem *func_ov004_0215215c(Q *a, Q *b, Elem *c)
{
    Elem *ab = a->base;
    int idx = func_0209a76c((int)c - (int)ab, 0x18);
    Elem *end = ab + a->count;
    Elem *dst;
    dst = b->base + (b->start + b->count);
    Elem *s0 = c;
    uint32_t t;
    Elem *tb;
    int tc;

    while (s0 < end) {
        if (dst) {
            *dst = *s0;
        }
        b->count++;
        s0++;
        dst++;
    }

    if (c > a->base) {
        Elem *d = &b->base[b->start];
        do {
            c--;
            d--;
            if (d) {
                *d = *c;
            }
            b->start--;
            b->count++;
        } while (c > a->base);
    }

    a->count = 0;
    t = a->f8; a->f8 = b->f8; b->f8 = t;
    tb = a->base; a->base = b->base; b->base = tb;
    tc = a->count; a->count = b->count; b->count = tc;
    return a->base + idx;
}
