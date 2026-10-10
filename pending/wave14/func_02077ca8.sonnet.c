#include "ffc/types.h"
struct Blk { uint16_t a; uint16_t b; int32_t c; uint32_t d; uint32_t e; };
struct Ctx { struct Blk *p; int32_t end; };
struct Blk *func_02077ca8(struct Ctx *ctx, uint16_t v)
{
    struct Blk *p = ctx->p;
    p->a = v;
    p->b = 0;
    p->c = ctx->end - (int32_t)(p + 1);
    p->d = 0;
    p->e = 0;
    return p;
}
