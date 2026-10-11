#include "ffc/types.h"

typedef struct Ent {
    uint32_t pad[8];
    uint32_t w;
    uint32_t pad2;
} Ent;

typedef struct Outer {
    uint32_t x;
    Ent *e;
    uint32_t pad[2];
    uint32_t n;
} Outer;

void func_0205f408(Outer *o, uint32_t v) {
    Ent *e = o->e;
    uint32_t n = o->n;
    if (n != 0) {
        do {
            n--;
            e->w = (e->w & 0x3fffffff) | (v << 30);
            e++;
        } while (n != 0);
    }
}
