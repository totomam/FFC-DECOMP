#include "ffc/types.h"

typedef struct Vt {
    void *slot[16];
} Vt;

typedef struct Obj {
    Vt *vt;
} Obj;

typedef struct Top {
    uint8_t pad[0xe4];
    Obj *obj;
} Top;

void func_ov011_021c5520(Top *p)
{
    Obj *o = p->obj;
    if (((int (*)(Obj *))o->vt->slot[12])(o) != 0) {
        Obj *o2 = p->obj;
        ((void (*)(Obj *))o2->vt->slot[10])(o2);
    }
}
