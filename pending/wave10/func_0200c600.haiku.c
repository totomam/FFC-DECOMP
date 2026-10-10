#include "ffc/types.h"

extern int func_0200cedc(void *a, void *b);

typedef union {
    struct {
        uint32_t flag : 1;
        uint32_t rest : 31;
    } w;
    struct {
        uint8_t flag : 1;
        uint8_t small : 7;
    } b;
} Hdr;

typedef struct {
    Hdr h;
    uint32_t big;
} Obj;

int func_0200c600(Obj *a, Obj *b)
{
    int r = 0;
    uint32_t va;
    uint32_t vb;

    if (b->h.w.flag == 0) {
        vb = b->h.b.small;
    } else {
        vb = b->big;
    }
    if (a->h.w.flag == 0) {
        va = a->h.b.small;
    } else {
        va = a->big;
    }
    if (va == vb) {
        if (func_0200cedc(a, b) == 0) {
            r = 1;
        }
    }
    return r;
}
