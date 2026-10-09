#include "ffc/types.h"

typedef struct Vtbl {
    uint32_t pad[11];
    void (*slot_2c)(void *self);
} Vtbl;

typedef struct Obj {
    const Vtbl *vtbl;
} Obj;

typedef struct Ctx {
    uint8_t pad[0x14];
    Obj *obj;
} Ctx;

void func_02031de0(Ctx *ctx)
{
    Obj *o = ctx->obj;
    o->vtbl->slot_2c(o);
}
