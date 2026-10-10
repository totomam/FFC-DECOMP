#include "ffc/types.h"

typedef struct Vtbl {
    void (*slot_00)(void *self);
} Vtbl;

typedef struct Obj {
    const Vtbl *vtbl;
} Obj;

typedef struct Ctx {
    uint8_t pad[0x18];
    Obj *obj;
} Ctx;

void func_0200b9a0(Ctx *ctx)
{
    Obj *o = ctx->obj;
    o->vtbl->slot_00(o);
}
