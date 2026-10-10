#include "ffc/types.h"

typedef struct Vt {
    void *f0;
    void *f1;
    int (*f2)(void *, void *);
} Vt;

typedef struct Obj {
    Vt *vt;
} Obj;

typedef struct Outer {
    char pad[0x18];
    Obj *o;
} Outer;

int func_0200b9c4(void *a, Outer *b)
{
    Obj *o = b->o;
    return o->vt->f2(a, o);
}
