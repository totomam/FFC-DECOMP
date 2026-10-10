#include "ffc/types.h"

typedef struct Vt {
    void *slot[8];
    void (*m8)(void *, void *);
} Vt;

typedef struct Obj {
    Vt *vt;
} Obj;

typedef struct Outer {
    uint8_t pad[0x80];
    Obj *obj;
} Outer;

void func_ov005_02197230(Outer *a, void *b) {
    Obj *o = a->obj;
    o->vt->m8(o, b);
}
