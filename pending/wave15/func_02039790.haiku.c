#include "ffc/types.h"

typedef struct S64 {
    uint32_t a;
    uint32_t b;
} S64;

extern S64 data_020aea00;

typedef void (*vfn_t)(void *);

typedef struct Obj {
    void **vt;
    uint8_t pad[0x7c];
    S64 v80;
} Obj;

void func_02039790(Obj *self)
{
    vfn_t fn = (vfn_t)self->vt[4];
    fn(self);
    self->v80 = data_020aea00;
}
