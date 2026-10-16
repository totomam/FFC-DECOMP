/* cflags: -noO4,p -O4 -inline auto */
#include "ffc/types.h"
typedef struct { uint32_t a, b; } P;
typedef struct { P l, f; } Q;
typedef struct { uint32_t *p; uint32_t q; } R;
typedef struct { uint32_t k, v; } E;
static inline E *cb(Q *q, E *out) {
    while (q->l.a != q->f.a) { q->l.a -= 8; out--; *out = *(E*)q->l.a; }
    return out;
}
static inline E *cb2(Q *q, E *out) {
    while (q->l.a != q->f.a) { q->l.a -= 8; out--; *out = *(E*)q->l.a; }
    return out;
}
R func_ov002_021cce94(P x, P y, P z, E *out) {
    E *f1 = (E*)x.a, *l1 = (E*)x.b, *f2 = (E*)y.a, *l2 = (E*)z.a;
    R r;
    Q q;
    if (f1 == l1) {
        q.l = z; q.f = y;
        r.p = (uint32_t*)cb(&q, out); return r;
    }
    if (f2 == l2) {
        while (l1 != f1) { l1--; out--; *out = *l1; }
        r.p = (uint32_t*)out; return r;
    }
    l1--; l2--;
    for (;;) {
        if (l2->k > l1->k) {
            out--; *out = *l1;
            if (f1 == l1) {
                z.a = (uint32_t)(l2 + 1);
                q.l = z; q.f = y;
                r.p = (uint32_t*)cb2(&q, out); return r;
            }
            l1--;
        } else {
            out--; *out = *l2;
            if (f2 == l2) {
                E *s = l1 + 1;
                while (s != f1) { s--; out--; *out = *s; }
                r.p = (uint32_t*)out; return r;
            }
            l2--;
        }
    }
}
