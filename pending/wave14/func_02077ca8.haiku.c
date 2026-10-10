#include "ffc/types.h"

struct Blk {
    uint16_t a;
    uint16_t b;
    uint32_t c;
    uint32_t d;
    uint32_t e;
};

struct Ctx {
    struct Blk *p;
    uint32_t end;
};

struct Blk *func_02077ca8(struct Ctx *ctx, uint16_t v)
{
    struct Blk *p = ctx->p;
    uint16_t zero = 0;
    uint32_t end;
    p->a = v;
    p->b = zero;
    end = ctx->end;
    p->c = end - (uint32_t)(p + 1);
    p->d = 0;
    p->e = 0;
    return p;
}
