#include "ffc/types.h"
typedef struct { uint32_t *cur; uint32_t x; uint32_t *end; uint32_t y; } It;
typedef struct { uint32_t *end; uint32_t y; uint32_t *cur; uint32_t x; } Rg;
typedef struct { uint32_t *p; } Out;
extern int func_ov009_021a5cdc(void *ctx, uint32_t *b, uint32_t *a);
static inline void cp(Rg t, Out *o)
{
    while (t.cur != t.end) { *o->p = *t.cur; t.cur++; o->p++; }
}
void func_ov009_021a56fc(uint32_t **out, It a, It b, Out o, void *ctx)
{
    while (a.cur != a.end && b.cur != b.end) {
        if (func_ov009_021a5cdc(ctx, b.cur, a.cur)) {
            *o.p = *b.cur; b.cur++; o.p++;
        } else {
            *o.p = *a.cur; a.cur++; o.p++;
        }
    }
    if (a.cur == a.end) {
        cp((Rg){b.end, b.y, b.cur, b.x}, &o);
    } else {
        cp((Rg){a.end, a.y, a.cur, a.x}, &o);
    }
    *out = o.p;
}
