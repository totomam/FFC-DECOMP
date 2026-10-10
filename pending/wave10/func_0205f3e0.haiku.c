#include "ffc/types.h"

typedef struct Elem {
    uint32_t w0;
    uint32_t w1;
    uint32_t rest[8];
} Elem;

typedef struct Obj {
    uint32_t w0;
    Elem *elems;
    uint32_t w8;
    uint32_t wc;
    uint32_t count;
} Obj;

Elem *func_0205f3e0(Obj *o, uint32_t v)
{
    uint32_t bits;
    uint32_t n = o->count;
    Elem *e = o->elems;

    if (n == 0) {
        return e;
    }
    bits = (v << 30) >> 20;
    do {
        uint32_t w = e->w1;
        n--;
        e->w1 = (w & 0xfffff3ffu) | bits;
        e++;
    } while (n != 0);
    return e;
}
