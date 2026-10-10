#include "ffc/types.h"

typedef struct Vtbl {
    uint32_t pad[10];
    void (*slot_28)(void *self);
} Vtbl;

typedef struct Obj {
    const Vtbl *vtbl;
} Obj;

typedef struct Ctx {
    uint8_t pad[0x1c];
    Obj *obj;
} Ctx;

void func_02068634(Ctx *ctx)
{
    Obj *o = ctx->obj;
    o->vtbl->slot_28(o);
}
