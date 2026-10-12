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

Iter func_ov009_021a5b30(uint32_t *first, uint32_t *last, uint32_t *dst, Cont *c, void *ctx)
{
    uint32_t *orig = dst;
    uint32_t *cur = dst;
    uint32_t *src = first;
    Iter it;

    if (first != last) {
        if ((int32_t)(cur - c->base) < c->cnt) {
            *cur = *src;
        } else {
            if (cur != 0) {
                *cur = *src;
            }
            c->cnt++;
        }
        src++;
        cur++;
        while (src != last) {
            uint32_t *p = cur;
            uint32_t *q = cur;
            int r7 = 0;
            if (q != orig) {
                q--;
                r7 = (func_ov009_021a5cdc(ctx, src, q) != 0);
            }
            while (r7) {
                if ((int32_t)(p - c->base) < c->cnt) {
                    *p = *q;
                } else {
                    if (p != 0) {
                        *p = *q;
                    }
                    c->cnt++;
                }
                p--;
                r7 = 0;
                if (q != orig) {
                    q--;
                    r7 = (func_ov009_021a5cdc(ctx, src, q) != 0);
                }
            }
            if ((int32_t)(p - c->base) < c->cnt) {
                *p = *src;
            } else {
                if (p != 0) {
                    *p = *src;
                }
                c->cnt++;
            }
            src++;
            cur++;
        }
    }
    it.p = cur;
    it.c = c;
    return it;
}
