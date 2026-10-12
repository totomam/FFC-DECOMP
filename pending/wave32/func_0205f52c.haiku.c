#include "ffc/types.h"

typedef struct {
    uint8_t _0[0x10];
    uint32_t x;
    uint32_t y;
    uint8_t _1[0x8];
    uint32_t w;
    uint8_t _2[0x4];
} Elem;

typedef struct {
    uint8_t _0[4];
    Elem *base;
    uint8_t _1[8];
    uint32_t count;
} Ctx;

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_0205f52c(Ctx *p, Pair s)
{
    Pair t;
    uint32_t n;
    Elem *e;
    uint32_t v;
    n = p->count;
    e = p->base;
    if (n == 0) {
        return;
    }
    t = s;
    if (n == 0) {
        return;
    }
    v = ((0x7fff - t.b) << 16) >> 2;
    do {
        e->x = t.a;
        e->y = t.b;
        e->w = (e->w & 0xc0003fff) | v;
        e++;

    } while (--n != 0);
}
