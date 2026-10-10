#include "ffc/types.h"

typedef struct Elem {
    uint32_t flags;
    uint8_t pad[0x24];
} Elem;

typedef struct Ctx {
    uint32_t a;
    Elem *elems;
    uint32_t b;
    uint32_t c;
    uint32_t count;
} Ctx;

void func_0205f498(Ctx *p) {
    Elem *e = p->elems;
    uint32_t n = p->count;
    while (n != 0) {
        n--;
        e->flags &= 0xfffffcff;
        e++;
    }
}
