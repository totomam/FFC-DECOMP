#include "ffc/types.h"

extern void func_02056858(void *p);

typedef struct Obj {
    void (**vtbl)(struct Obj *);
} Obj;

typedef struct Self {
    uint32_t pad[2];
    Obj *f8;
    Obj *fc;
    Obj *f10;
    Obj *f14;
    Obj *f18;
    void *f1c;
} Self;

void *func_020600b4(void *self)
{
    Self *s = (Self *)self;
    Obj *o;

    o = s->f10;
    if (o != 0) {
        o->vtbl[1](o);
    }
    o = s->fc;
    if (o != 0) {
        o->vtbl[1](o);
    }
    o = s->f8;
    if (o != 0) {
        o->vtbl[1](o);
    }
    o = s->f14;
    if (o != 0) {
        o->vtbl[1](o);
    }
    o = s->f18;
    if (o != 0) {
        o->vtbl[1](o);
    }
    func_02056858(s->f1c);
    return self;
}
