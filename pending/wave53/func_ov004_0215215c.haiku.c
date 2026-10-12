#include "ffc/types.h"

extern int func_0209a76c(int a, int b);

typedef struct Elem {
    uint32_t w[4];
    uint16_t h;
    uint32_t t;
} Elem;

typedef struct Q {
    Elem *base;
    uint32_t count;
    uint32_t f8;
    uint32_t f12;
    uint32_t start;
} Q;

Elem *func_ov004_0215215c(Q *a, Q *b, Elem *c)
{
    Q *pa = a;
    Elem *ab = pa->base;
    int idx = func_0209a76c((int)c - (int)ab, 0x18);
    Elem *end = ab + pa->count;
    Elem *dst = b->base + b->start + b->count;

    for (; c < end; c++, dst++) {
        if (dst) {
            *dst = *c;
        }
        b->count++;
    }

    if (c > pa->base) {
        Elem *p = c;
        Elem *d = b->base + b->start;
        do {
            p--;
            d--;
            if (d) {
                *d = *p;
            }
            b->start--;
            b->count++;
        } while (p > pa->base);
    }

    pa->count = 0;
    {
        uint32_t t = pa->f8;
        pa->f8 = b->f8;
        b->f8 = t;
    }
    {
        Elem *tb = pa->base;
        pa->base = b->base;
        b->base = tb;
    }
    {
        uint32_t tc = pa->count;
        pa->count = b->count;
        b->count = tc;
    }
    return pa->base + idx;
}
