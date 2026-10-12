#include "ffc/types.h"

extern int func_ov009_021a5cdc(void *ctx, uint32_t *a, uint32_t *b);

typedef struct Cont {
    uint32_t pad;
    int32_t cnt;
    uint32_t *base;
} Cont;

typedef struct Iter {
    uint32_t *p;
    Cont *c;
} Iter;
typedef struct P { uint32_t *p; } P;

#define PUT(DST, SRC) do { \
    Iter t; Iter *tp = &t; t.p = (DST); t.c = c; \
    if ((int32_t)((DST) - c->base) < c->cnt) { *(DST) = *(SRC); } \
    else { if ((DST) != 0) { *(DST) = *(SRC); } tp->c->cnt++; } \
} while (0)

void func_ov009_021a5b30(Iter *out, P f, P l, P d, Cont *c, void *ctx)
{
    uint32_t *last=l.p, *src, *cur; cur=d.p; src=f.p;
    uint32_t *orig = cur;

    if (src != last) {
        PUT(cur, src);
        src++;
        cur++;
        while ((src != last) ? 1 : 0) {
            uint32_t *orig = d.p; uint32_t *p = cur;
            uint32_t *q = cur;
            int r7 = 0;
            if (q != orig) {
                q--;
                r7 = (func_ov009_021a5cdc(ctx, src, q) != 0);
            }
            while (r7) {
                PUT(p, q);
                p--;
                r7 = 0;
                if (q != orig) {
                    q--;
                    r7 = (func_ov009_021a5cdc(ctx, src, q) != 0);
                }
            }
            PUT(p, src);
            src++;
            cur++;
        }
    }
    out->p = cur; out->c = c;
}
