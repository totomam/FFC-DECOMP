#include "ffc/types.h"

typedef void (*vfn_t)(void *self, uint32_t arg);

typedef struct Obj {
    vfn_t *vt;
} Obj;

typedef struct Parent {
    uint8_t pad[0x80];
    Obj *a;
    Obj *b;
    Obj *c;
    Obj *d;
} Parent;

void func_ov007_021ab7d0(Parent *p, uint32_t arg)
{
    Obj *o;
    o = p->a;
    o->vt[8](o, arg);
    o = p->b;
    o->vt[8](o, arg);
    o = p->c;
    o->vt[8](o, arg);
    o = p->d;
    o->vt[8](o, arg);
}
