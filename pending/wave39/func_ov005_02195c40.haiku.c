#include "ffc/types.h"

typedef struct Pt {
    int32_t x;
    int32_t y;
} Pt;

typedef struct V3 {
    int32_t x;
    int32_t y;
    int32_t z;
} V3;

typedef struct Ctx {
    char pad[0x24];
    void *a;
    void *b;
    int32_t c;
    int32_t d;
    int32_t e;
    int32_t f;
    int32_t g;
    int32_t h;
    int32_t i;
} Ctx;

int func_ov005_02195c40(Ctx *ctx, V3 v)
{
    Pt s;
    Pt t;
    void **vt;

    ctx->e += v.x - ctx->c;
    ctx->f += v.y - ctx->d;
    ctx->d = v.y;
    ctx->c = v.x;

    s.x = v.x;
    s.y = v.y;
    t.x = v.x;
    t.y = v.y;
    vt = *(void ***)ctx->a;
    ((void (*)(void *, Pt))vt[3])(ctx->a, t);

    if (ctx->i != 2) {
        s.x = ctx->c;
        s.y = ctx->d;
        vt = *(void ***)ctx->b;
        ((void (*)(void *, Pt))vt[3])(ctx->b, s);
    }
    ctx->h = 0;
    return s.x;
}
