#include "ffc/types.h"

extern void func_02056c4c(void *arg);

typedef struct Obj {
    void **vt;
} Obj;

void func_ov007_021a0a80(uint8_t *p, int flag)
{
    int i;
    Obj *o;

    if (flag != 0) {
        o = *(Obj **)(p + 0x98);
        ((void (*)(Obj *, int, int))o->vt[0x38 / 4])(o, 1, 0);

        o = *(Obj **)(p + 0x98);
        ((void (*)(Obj *))o->vt[0x28 / 4])(o);

        o = *(Obj **)(p + 0xa0);
        ((void (*)(Obj *, int, int))o->vt[0x38 / 4])(o, 2, 0);

        o = *(Obj **)(p + 0xa4);
        ((void (*)(Obj *, int, int))o->vt[0x38 / 4])(o, 4, 0);
    } else {
        o = *(Obj **)(p + 0x98);
        ((void (*)(Obj *))o->vt[0x2c / 4])(o);

        o = *(Obj **)(p + 0xa0);
        ((void (*)(Obj *, int, int))o->vt[0x38 / 4])(o, 1, 0);

        o = *(Obj **)(p + 0xa4);
        ((void (*)(Obj *, int, int))o->vt[0x38 / 4])(o, 3, 0);
    }

    for (i = 0; i < 0x40; i++) {
        *(uint8_t *)(p + 0xb8 + i) = 0;
    }

    func_02056c4c(*(void **)(p + 0xac));

    o = *(Obj **)(p + 0xa8);
    ((void (*)(Obj *, int, int))o->vt[0x38 / 4])(o, 1, 1);

    o = *(Obj **)(p + 0xa8);
    ((void (*)(Obj *))o->vt[0x2c / 4])(o);
}
