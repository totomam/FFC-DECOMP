#include "ffc/types.h"
typedef struct Pt { int32_t x; int32_t y; } Pt;
typedef struct Ctx {
    char pad[0x24];
    void *a; void *b;
    int32_t c, d, e, f, g, h, i;
} Ctx;
void func_ov005_02195c40(Ctx *ctx, Pt v)
{
    Pt t;
    Pt s;
    volatile Pt w;
    ctx->e += v.x - ctx->c;
    ctx->f += v.y - ctx->d;
    t.y = v.y;
    ctx->d = v.y;
    ctx->c = v.x;
    w.x = v.x;
    w.y = v.y;
    t.x = v.x;
    (*(void (***)(void *, Pt))ctx->a)[3](ctx->a, t);
    if (ctx->i != 2) {
        s.x = ctx->c;
        s.y = ctx->d;
        (*(void (***)(void *, Pt))ctx->b)[3](ctx->b, s);
    }
    ctx->h = 0;
}
