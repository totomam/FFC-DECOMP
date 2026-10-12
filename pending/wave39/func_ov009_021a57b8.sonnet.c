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
extern Pair func_ov009_021a5b30(uint32_t *first, uint32_t *last, Pair d, void *e);
extern void func_ov009_021a5060(uint32_t *a, uint32_t *b, Pair p1, Pair p2, void *e);
extern Pair func_ov009_021a59ac(uint32_t *a, uint32_t *b, uint32_t *c, uint32_t *d, Pair p, void *e);

static inline int neq(uint32_t *a, uint32_t *b) { return !(a == b); }

static inline void ins(Pair it, uint32_t *src)
{
    uint32_t *t_ = it.p;
    Blk *bk_ = it.b;
    if ((int32_t)(t_ - bk_->f8) < bk_->f4) { *t_ = *src; }
    else { if (t_) { *t_ = *src; } bk_->f4++; }
}

void func_ov009_021a57b8(Seg s, void *e)
{
    uint32_t *first = s.a;
    uint32_t *last = s.b;
    int32_t n = last - first;
    Pair d;
    d.p = s.c; d.b = s.d;

    if (n <= 0) {
        return;
    }
    if (n == 1) {
        ins(d, first);
        return;
    }
    if (n == 2) {
        if (func_ov009_021a5cdc(e, last - 1, first)) {
            uint32_t *s2 = last;
            Pair cur = d;
            if (neq(first, s2)) {
                do {
                    s2--;
                    ins(cur, s2);
                    cur.p++;
                } while (neq(first, s2));
            }
        } else {
            uint32_t *s2 = first;
            Pair cur = d;
            if (neq(s2, last)) {
                do {
                    ins(cur, s2);
                    cur.p++;
                    s2++;
                } while (neq(s2, last));
            }
        }
        return;
    }
    if (n <= 20) {
        func_ov009_021a5b30(first, last, d, e);
        return;
    }
    {
        int32_t h = n - n / 2;
        uint32_t *mid = first + h;
        Pair p1, p2;
        p1.p = d.p + h; p1.b = d.b;
        p2.p = d.p + n; p2.b = d.b;
        func_ov009_021a5060(first, mid, d, p1, e);
        func_ov009_021a5060(mid, last, p1, p2, e);
        func_ov009_021a59ac(first, mid, mid, last, d, e);
    }
}
