#include "ffc/types.h"

typedef struct Vt {
    void *slot[7];
    void (*m7)(void *, void *);
} Vt;

typedef struct Obj {
    Vt *vt;
} Obj;

typedef struct Outer {
    uint8_t pad[0x98];
    Obj *obj;
} Outer;

void func_ov010_021c93a8(void *a, Outer *b) {
    Obj *o = b->obj; o->vt->m7(a, o);
}
