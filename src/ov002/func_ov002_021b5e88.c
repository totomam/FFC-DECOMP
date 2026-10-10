#include "ffc/types.h"

typedef struct Vt {
    void *slot[4];
    void (*m4)(void *, void *);
} Vt;

typedef struct Obj {
    Vt *vt;
} Obj;

typedef struct Outer {
    uint8_t pad[0x80];
    Obj *obj;
} Outer;

void func_ov002_021b5e88(void *a, Outer *b) {
    Obj *o = b->obj; o->vt->m4(a, o);
}
