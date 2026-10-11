#include "ffc/types.h"

typedef struct Vtbl {
    uint32_t pad[9];
    void (*slot_24)(void *self);
} Vtbl;

typedef struct Obj {
    const Vtbl *vtbl;
} Obj;

typedef struct Ctx {
    uint8_t pad[0x14];
    Obj *obj;
} Ctx;

void func_02032350(Ctx *ctx)
{
    Obj *o = ctx->obj;
    o->vtbl->slot_24(o);
}
