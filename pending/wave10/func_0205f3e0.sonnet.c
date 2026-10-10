#include "ffc/types.h"

typedef struct Elem {
    uint32_t w0;
    uint32_t a : 10;
    uint32_t f : 2;
    uint32_t b : 20;
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
    uint32_t n = o->count;
    Elem *e = o->elems;

    if (n != 0) {
        do {
            n--;
            e->f = v;
            e++;
        } while (n != 0);
    }
    return e;
}
