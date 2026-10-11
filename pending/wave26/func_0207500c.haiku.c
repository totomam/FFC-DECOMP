#include "ffc/types.h"

typedef struct Obj {
    void *vt;
    uint32_t a;
    uint32_t b;
    int32_t flag;
} Obj;

typedef struct Owner {
    uint8_t pad[0x28];
    Obj *c28;
    Obj *c2c;
} Owner;

void func_0207500c(Owner *s)
{
    Obj *o = s->c2c;
    if (o != 0 && (int8_t)o->flag == 0) {
        ((void (*)(Obj *))((void **)o->vt)[2])(o);
    }
    o = s->c28;
    if (o != 0 && (int8_t)o->flag == 0) {
        ((void (*)(Obj *))((void **)o->vt)[2])(o);
    }
}
