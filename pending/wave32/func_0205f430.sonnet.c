#include "ffc/types.h"

typedef struct Elem {
    uint32_t w0;
    uint16_t h4;
    uint16_t pad6;
    uint32_t w8;
    uint32_t wc;
    uint32_t w10;
    uint32_t w14;
    uint32_t w18;
    uint32_t w1c;
    uint32_t w20;
    uint32_t rest[1];
} Elem;

typedef struct Outer {
    uint32_t a;
    Elem *base;
    uint32_t b;
    uint32_t c;
    uint32_t count;
} Outer;

void func_0205f430(Outer *p) {
    uint32_t n = p->count;
    Elem *e;
    if (n != 0) {
        uint32_t m = 0xfffffcff;
        uint32_t z = 0; uint32_t t = 0;
        e = p->base;
        do {
            t &= m;
            t |= 8 << 6;
            e->w0 = t;
            e->h4 = z;
            e->w8 = z;
            e->wc = z;
            e->w10 = z;
            e->w14 = z;
            e->w18 = 8;
            e->w1c = 8;
            e->w20 &= m >> 22;
            e++;
            n--;
        } while (n != 0);
    }
}
