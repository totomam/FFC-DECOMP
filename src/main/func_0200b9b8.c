#include "ffc/types.h"

typedef struct Vt {
    void *f0;
    int (*f1)(void *, void *);
} Vt;

typedef struct Obj {
    Vt *vt;
} Obj;

typedef struct Outer {
    char pad[0x18];
    Obj *o;
} Outer;

int func_0200b9b8(void *a, Outer *b)
{
    Obj *o = b->o;
    return o->vt->f1(a, o);
}
