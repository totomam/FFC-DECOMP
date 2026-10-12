#include "ffc/types.h"

extern int func_020375bc(int);
extern uint32_t data_ov001_02194660[];
extern uint32_t data_ov001_02194668[];

typedef struct Pair {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct Obj {
    void **vt;
    uint8_t pad0[0xf0 - 4];
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint8_t pad1[0x6b4 - 0xf8 - 4];
    uint32_t f6b4;
    uint32_t f6b8;
    uint32_t f6bc;
    uint32_t f6c0;
} Obj;

void func_ov001_0218ade0(Obj *self) {
    Pair *d;
    uint32_t a, b;
    int r;

    self->f0 = 2;
    r = ((int (*)(Obj *))self->vt[0x34 / 4])(self);
    if (r != 0) {
        d = (Pair *)data_ov001_02194660;
        a = d->a;
        b = d->b;
        self->f4 = a;
        self->f8 = b;
        return;
    }
    func_020375bc(8);
    if (self->f6b4 == 0) {
        self->f6bc++;
    } else {
        self->f6c0++;
    }
    r = 1;
    if (self->f6b4 != 0) {
        r = 0;
    }
    ((void (*)(Obj *, int))self->vt[0x54 / 4])(self, r);
    d = (Pair *)data_ov001_02194668;
    a = d->a;
    b = d->b;
    self->f4 = a;
    self->f8 = b;
}
