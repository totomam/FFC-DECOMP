#include "ffc/types.h"

extern void func_02056bf4(void *p);
extern void func_020692a4(void *object);

typedef struct Obj {
    void **vt;
} Obj;

typedef struct Wrap {
    char pad[0x98];
    Obj *inner;
} Wrap;

typedef struct Self {
    char a[0x48];
    char b[0x74];
    Obj *f_bc;
    Wrap *f_c0;
    Wrap *arr_c4[4];
    Obj *f_d4;
    Obj *arr_d8[4];
    char pad_e8[0x5c];
    Obj *f_144;
} Self;

void func_ov009_021ae5d0(Self *self)
{
    int i;
    Obj *o;

    if (self->f_bc) {
        func_02056bf4(self->b - 0x74 + 0x48 + 0 == 0 ? 0 : (void *)self->a + 0x48);
        o = self->f_bc;
        if (o) {
            ((void (*)(void *))o->vt[1])(o);
            self->f_bc = 0;
        }
    }

    func_020692a4(self->f_c0);
    o = self->f_c0->inner;
    ((void (*)(void *))o->vt[11])(o);

    for (i = 0; i < 4; i++) {
        func_020692a4(self->arr_c4[i]);
        o = self->arr_c4[i]->inner;
        ((void (*)(void *))o->vt[11])(o);
    }

    o = self->f_d4;
    ((void (*)(void *))o->vt[11])(o);

    for (i = 0; i < 4; i++) {
        o = self->arr_d8[i];
        ((void (*)(void *))o->vt[11])(o);
    }

    o = self->f_144;
    ((void (*)(void *))o->vt[11])(o);
}
