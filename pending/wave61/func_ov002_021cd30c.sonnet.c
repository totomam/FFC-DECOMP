#include "ffc/types.h"
typedef struct { uint32_t k, v; } E;
typedef struct { E *p; } I;
typedef struct { uint32_t pad; uint32_t cnt; E *base; } Pool;
typedef struct { E *cur; Pool *pool; } It;
static inline void put(It *o, E *s) {
    It t; t.cur = o->cur; t.pool = o->pool;
    It *p = &t;
    if ((t.cur - t.pool->base) < (int)t.pool->cnt) { t.cur->k = s->k; t.cur->v = s->v; }
    else {
        if (t.cur != 0) { t.cur->k = s->k; t.cur->v = s->v; }
        p->pool->cnt++;
    }
}
static inline It cpy(E *f, E *l, It o) {
    It *po = &o; It r; r.cur = po->cur; r.pool = po->pool;
    int ne = 1; if (f == l) ne = 0;
    if (ne) { do { put(&r, f); f++; r.cur++; } while (f != l); }
    return r;
}
static inline void inc(I *p) { p->p += 1; }
static inline int both(E *a, E *ae, E *b, E *be) { int c = 0; if (a != ae && b != be) c = 1; return c; }
It func_ov002_021cd30c(I a, I ae, I b, I be, It o) {
    while (both(a.p, ae.p, b.p, be.p)) {
        if (b.p->k > a.p->k) { put(&o, b.p); inc(&b); }
        else { put(&o, a.p); inc(&a); }
        o.cur++;
    }
    if (a.p == ae.p) return cpy(b.p, be.p, o);
    return cpy(a.p, ae.p, o);
}
