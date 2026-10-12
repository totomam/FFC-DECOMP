#include "ffc/types.h"

extern void func_02056bf4(uint32_t a, uint32_t b);

typedef struct Obj {
    void (**vt)(struct Obj *);
} Obj;

void func_ov003_0214bdfc(uint8_t *p, int b)
{
    uint32_t *w = (uint32_t *)p;
    uint32_t r4;
    uint32_t off;
    uint32_t *r7;

    if (b) {
        r4 = w[0x77];
    } else {
        r4 = w[0x76];
    }
    if (b) {
        off = 0x79 << 2;
    } else {
        off = 0x1e << 4;
    }
    r7 = (uint32_t *)(p + off);

    if (r4 != 0) {
        func_02056bf4(w[0x62], r4);
        if (r4 != 0) {
            Obj *o = (Obj *)r4;
            o->vt[1](o);
        }
        *r7 = 0;
        if (b) {
            w[0x77] = 0;
        } else {
            w[0x76] = 0;
        }
    }
}
