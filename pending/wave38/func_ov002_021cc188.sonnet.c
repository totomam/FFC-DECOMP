#include "ffc/types.h"

typedef struct { uint32_t v; int32_t k; } Elem;
typedef struct { Elem *p; Elem *q; } It;
typedef struct { It cur; It end; } Rng;
static inline Elem *cpa(Elem *d, Elem *e, Elem *f) {
    while (e != f) { e--; d--; d->v = e->v; d->k = e->k; }
    return d;
}

static inline Elem *cpy(Elem *d, It e, It f) {
    Rng r;
    r.cur = e; r.end = f;
    while (r.cur.p != f.p) { r.cur.p--; d--; d->v = r.cur.p->v; d->k = r.cur.p->k; }
    return d;
}

void func_ov002_021cc188(Elem **out, It a, It b, It c, Elem *dst) {
    Elem *d;
    Elem *ap = a.q, *bp;
    if (a.p == a.q) {
        *out = cpy(dst, c, b);
        return;
    }
    if (b.p == c.p) {
        *out = cpa(dst, a.q, a.p);
        return;
    }
    d = dst;
    ap--;
    bp = c.p - 1;
    for (;;) {
        if (bp->k <= ap->k) {
            d--;
            *d = *bp;
            if (bp == b.p) {
                { It t = c; t.p = ap + 1; d = cpy(d, t, a); }
                break;
            }
            bp--;
        } else {
            d--;
            *d = *ap;
            if (ap == a.p) {
                It t = c; t.p = bp + 1;
                d = cpy(d, t, b);
                break;
            }
            ap--;
        }
    }
    *out = d;
}
