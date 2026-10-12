#include "ffc/types.h"

extern uint32_t func_0206da8c(void *obj, uint32_t idx);
extern void func_ov004_02153598(void *p, uint32_t a, uint32_t b);
extern void func_01ff8be8(void *p);

typedef struct Vt {
    void *slot[16];
} Vt;

typedef struct Obj {
    Vt *vt;
} Obj;

void func_ov004_02153924(void *self)
{
    uint8_t *p = (uint8_t *)self;
    uint32_t i;
    uint32_t n;
    Obj *o = *(Obj **)(p + 0x290);
    Obj *q;

    if (o != 0 && p[0x384] != 0) {
        i = 0;
        n = ((uint32_t (*)(Obj *))o->vt->slot[8])(o);
        if (n > i) {
            do {
                uint32_t r = func_0206da8c(*(void **)(p + 0x290), i);
                if (r != 0) {
                    func_ov004_02153598(p, r - 1, i);
                }
                i++;
                o = *(Obj **)(p + 0x290);
                n = ((uint32_t (*)(Obj *))o->vt->slot[8])(o);
            } while (i < n);
        }
    }

    if (p[0x220] == 0) {
        func_01ff8be8(p);
        return;
    }
    q = *(Obj **)(p + 0x23c);
    if ((int8_t)*(uint32_t *)((uint8_t *)q + 0xc) == 0) {
        ((void (*)(Obj *))q->vt->slot[2])(q);
    }
}
