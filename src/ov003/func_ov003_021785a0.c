#include "ffc/types.h"

typedef struct Vtbl {
    uint32_t pad0;
    uint32_t pad1;
    void (*slot_08)(void *self);
} Vtbl;

typedef struct Obj {
    const Vtbl *vtbl;
} Obj;

typedef struct Ctx {
    uint8_t pad[0x20];
    Obj *obj;
} Ctx;

void func_ov003_021785a0(Ctx *ctx)
{
    Obj *o = ctx->obj;
    o->vtbl->slot_08(o);
}
