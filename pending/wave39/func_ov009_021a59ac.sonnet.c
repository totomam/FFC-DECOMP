#include "ffc/types.h"

extern int32_t func_ov009_021a5cdc(void *ctx, uint32_t *b, uint32_t *a);

typedef struct { uint32_t *dst; void *list; } Out;
typedef struct { uint32_t *unk0; int32_t count; uint32_t *base; } ListHdr;
typedef struct { uint32_t *cur; uint32_t *end; } Rng;

static inline void put(Out *p, uint32_t *src)
{
    ListHdr *l = (ListHdr *)p->list;
    if (p->dst - l->base < l->count) {
        *p->dst = *src;
    } else {
        if (p->dst != 0) *p->dst = *src;
        ((ListHdr *)p->list)->count++;
    }
}

void func_ov009_021a59ac(Out *out, Rng a, Rng b, Out o, void *ctx)
{
    uint32_t *pa = a.cur, *pb = b.cur;
    while (pa != a.end && pb != b.end) {
        if (func_ov009_021a5cdc(ctx, pb, pa)) {
            Out t = o;
            put(&t, pb);
            pb++; b.cur = pb;
        } else {
            Out t = o;
            put(&t, pa);
            pa++; a.cur = pa;
        }
        o.dst++;
    }
    if (a.cur != a.end) {
        Out it = o;
        uint32_t *q = a.cur, *qe = b.end;
        while (a.cur != a.end) {
            Out t = it;
            put(&t, a.cur);
            a.cur++;
            it.dst++;
        }
        *out = it;
    } else {
        Out it = o;
        while (b.cur != b.end) {
            Out t = it;
            put(&t, b.cur);
            b.cur++;
            it.dst++;
        }
        *out = it;
    }
}
