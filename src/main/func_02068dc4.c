#include "ffc/types.h"

typedef struct Vtbl {
    uint32_t pad[12];
    void (*slot_30)(void *self);
} Vtbl;

typedef struct Obj {
    const Vtbl *vtbl;
} Obj;

typedef struct Ctx {
    uint8_t pad[0x1c];
    Obj *obj;
} Ctx;

void func_02068dc4(Ctx *ctx)
{
    Obj *o = ctx->obj;
    o->vtbl->slot_30(o);
}
