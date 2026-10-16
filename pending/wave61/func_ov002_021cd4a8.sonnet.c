#include "ffc/types.h"
typedef struct { uint32_t k, v; } E;
typedef struct { int32_t a; int32_t lim; E *base; } C;
typedef struct { E *p; C *c; } R;
typedef R T;
#define PUT(t, d, s, c) do { T *tp = &t; t.p = (d); t.c = (c); \
  if (((int32_t)((char*)(d) - (char*)(c)->base)) / 8 < (c)->lim) { (d)->k = (s)->k; (d)->v = (s)->v; } \
  else { if ((d) != 0) { (d)->k = (s)->k; (d)->v = (s)->v; } tp->c->lim++; } } while (0)
typedef struct { E *f, *l, *d; } A;
R func_ov002_021cd4a8(A a, C *c) {
    T t1, t2, t3; A *ap = &a; E *first = a.f, *p = ap->d;
    if (first != ap->l) {
        PUT(t1, p, first, c);
        p++; first++;
        while (first != a.l) {
            E *q = p; E *h = p; int g;
            for (;;) {
                g = 0;
                if (h != ap->d) { h--; if (first->k > h->k) g = 1; }
                if (!g) break;
                PUT(t2, q, h, c);
                q--;
            }
            PUT(t3, q, first, c);
            p++; first++;
        }
    }
    t1.p = p; t1.c = c;
    return t1;
}
