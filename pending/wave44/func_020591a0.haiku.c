#include "ffc/types.h"

typedef struct VTbl {
    void *slot0;
    void (*fn4)(void *);
} VTbl;

typedef struct Obj {
    const VTbl *vt;
    void *w1[3];
    void *f10;
    void *w2[8];
    void *f34;
    void *arr[4];
} Obj;

extern char data_020b0d84[];
extern int32_t func_02057db4(void *);
extern void func_02088f30(void);
extern void func_02056844(void *);

Obj *func_020591a0(Obj *self) {
    uint32_t i;
    self->vt = (const VTbl *)data_020b0d84;
    if (func_02057db4(self->f10) == 0) {
        func_02088f30();
    }
    for (i = 0; i < 4; i++) {
        Obj *o = (Obj *)self->arr[i];
        if (o != 0) {
            o->vt->fn4(o);
        }
    }
    if (self->f10 != 0) {
        ((Obj *)self->f10)->vt->fn4(self->f10);
    }
    if (self->f34 != 0) {
        ((Obj *)self->f34)->vt->fn4(self->f34);
    }
    func_02056844(self);
    return self;
}
