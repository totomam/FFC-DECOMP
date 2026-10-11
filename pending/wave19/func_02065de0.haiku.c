#include "ffc/types.h"

typedef struct Vtbl {
    uint32_t pad[13];
    void (*slot_34)(void *self);
} Vtbl;

typedef struct Obj {
    const Vtbl *vtbl;
} Obj;

typedef struct Ctx {
    uint8_t pad[0x1c];
    Obj *obj;
} Ctx;

void func_02065de0(Ctx *ctx)
{
    Obj *o = ctx->obj;
    o->vtbl->slot_34(o);
}
