#include "ffc/types.h"

typedef struct Vt {
    void *f0;
    void *f1;
    void *f2;
    void *f3;
    int (*f4)(void *, void *);
} Vt;

typedef struct Obj {
    Vt *vt;
} Obj;

typedef struct Outer {
    char pad[0x1c];
    Obj *o;
} Outer;

int func_02068604(void *a, Outer *b)
{
    Obj *o = b->o;
    return o->vt->f4(a, o);
}
