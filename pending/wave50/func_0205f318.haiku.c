#include "ffc/types.h"

extern uint32_t data_020b11b4[];

typedef struct {
    uint32_t ctrl;
    uint32_t w[5];
    uint32_t a;
    uint32_t b;
    uint32_t pad[7];
} Elem;

typedef struct {
    uint32_t pad0;
    Elem *elems;
    uint32_t pad1[2];
    uint32_t count;
} Obj;

void func_0205f318(Obj *o, uint32_t mode) {
    uint32_t count = o->count;
    Elem *e;
    if (count == 0) return;
    e = o->elems;
    do {
        uint32_t c;
        uint32_t idx;
        e->ctrl = (e->ctrl & 0xfffffcffu) | ((mode & 3u) << 8);
        c = e->ctrl;
        idx = ((c >> 16) & 3u) | ((c >> 30) << 2);
        if (mode == 3) {
            e->a = data_020b11b4[idx * 2] << 1;
            e->b = data_020b11b4[idx * 2 + 1] << 1;
        } else {
            e->a = data_020b11b4[idx * 2];
            e->b = data_020b11b4[idx * 2 + 1];
        }
        count--;
        e++;
    } while (count != 0);
}
