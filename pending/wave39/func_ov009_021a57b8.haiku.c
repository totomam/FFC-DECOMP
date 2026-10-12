#include "ffc/types.h"

typedef struct Blk {
    uint32_t *f0;
    int32_t f4;
    uint32_t *f8;
} Blk;

typedef struct Seg {
    uint32_t *a;
    uint32_t *b;
    uint32_t *c;
    Blk *d;
} Seg;

typedef struct Pair {
    uint32_t *p;
    Blk *b;
} Pair;

extern int32_t func_ov009_021a5cdc(void *e, uint32_t *a, uint32_t *b);
extern void func_ov009_021a5b30(void *ret, uint32_t *first, uint32_t *last, uint32_t *dst, Blk *blk, void *e);
extern void func_ov009_021a5060(uint32_t *a, uint32_t *b, uint32_t *c, Blk *d, uint32_t *e1, Blk *d2, void *e);
extern void func_ov009_021a59ac(void *ret, uint32_t *a, uint32_t *b, uint32_t *c, uint32_t *d, uint32_t *e1, Blk *f, void *e);

#define INS_ONE(pr, src) do { \
    uint32_t *t_ = (pr)->p; \
    Blk *bk_ = (pr)->b; \
    if ((int32_t)(t_ - bk_->f8) < bk_->f4) { *t_ = *(src); } \
    else { if (t_) { *t_ = *(src); } bk_->f4++; } \
} while (0)

void func_ov009_021a57b8(Seg s, void *e)
{
    uint32_t *first = s.a;
    uint32_t *last = s.b;
    uint32_t *dst = s.c;
    Blk *blk = s.d;
    int32_t n = last - first;
    uint32_t tmp[25];
    Pair pr;
    Pair *pp = &pr;

    if (n <= 0) {
        return;
    }
    if (n == 1) {
        pp->p = dst;
        pp->b = blk;
        INS_ONE(pp, first);
        return;
    }
    if (n == 2) {
        if (func_ov009_021a5cdc(e, last - 1, first)) {
            uint32_t *s2 = last;
            pp->p = dst;
            pp->b = blk;
            do {
                s2--;
                INS_ONE(pp, s2);
                pp->p++;
            } while (s2 != first);
        } else {
            uint32_t *s2 = first;
            pp->p = dst;
            pp->b = blk;
            do {
                INS_ONE(pp, s2);
                pp->p++;
                s2++;
            } while (s2 != last);
        }
        return;
    }
    if (n <= 20) {
        func_ov009_021a5b30(tmp, first, last, dst, blk, e);
        return;
    }
    {
        int32_t h = n - n / 2;
        uint32_t *mid = first + h;
        func_ov009_021a5060(first, mid, dst, blk, dst + h, blk, e);
        func_ov009_021a5060(mid, last, dst + h, blk, dst + n, blk, e);
        func_ov009_021a59ac(tmp, first, mid, mid, last, dst, blk, e);
    }
}
