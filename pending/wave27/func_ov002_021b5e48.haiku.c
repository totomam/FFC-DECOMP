#include "ffc/types.h"

typedef void (*VFunc)(void *self, uint32_t arg);

typedef struct Obj {
    VFunc *vt;
} Obj;

void func_ov002_021b5e48(uint8_t *self, uint32_t arg) {
    Obj *p;

    p = *(Obj **)(self + 0x80);
    p->vt[8](p, arg);

    p = *(Obj **)(self + 0x8c);
    p->vt[8](p, arg);

    p = *(Obj **)(self + 0x88);
    p->vt[8](p, arg);

    p = *(Obj **)(self + 0x84);
    if (p != 0) {
        p->vt[8](p, arg);
    }
}
