#include "ffc/types.h"

typedef struct Vt {
    void *slot[16];
} Vt;

typedef struct Inner {
    Vt *vt;
} Inner;

void func_ov011_021bd618(uint8_t *a, int b, int c)
{
    if (b) {
        Inner *p = *(Inner **)(a + 0x94);
        ((void (*)(Inner *, int, int))p->vt->slot[14])(p, 2, 0);
        p = *(Inner **)(a + 0x94);
        ((void (*)(Inner *))p->vt->slot[10])(p);
    } else {
        Inner *p = *(Inner **)(a + 0x94);
        ((void (*)(Inner *, int, int))p->vt->slot[14])(p, 1, 0);
        if (c) {
            p = *(Inner **)(a + 0x94);
            ((void (*)(Inner *))p->vt->slot[10])(p);
        } else {
            p = *(Inner **)(a + 0x94);
            ((void (*)(Inner *))p->vt->slot[11])(p);
        }
    }
}
