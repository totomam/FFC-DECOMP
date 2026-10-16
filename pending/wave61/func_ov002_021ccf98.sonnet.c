#include "ffc/types.h"
typedef struct { uint32_t k, v; } E;
typedef struct { E *p; uint32_t x; } It;
typedef struct { E *f, *l, *o; } T;
typedef struct { E *p; uint32_t y; } R;
static inline int more(It *a, It *b, T *t)
{
    int c = 0;
    if (a->p != b->p && t->f != t->l) c = 1;
    return c;
}
R func_ov002_021ccf98(It a, It b, T t)
{
    R r;
    while (more(&a, &b, &t)) {
        if (t.f->k > a.p->k) { t.o->k = t.f->k; t.o->v = t.f->v; t.f++; }
        else { t.o->k = a.p->k; t.o->v = a.p->v; a.p++; }
        t.o++;
    }
    if (a.p == b.p) {
        while (t.f != t.l) { t.o->k = t.f->k; t.o->v = t.f->v; t.f++; t.o++; }
    } else {
        It c = b, d = a;
        E *o = t.o;
        while (d.p != c.p) { o->k = d.p->k; o->v = d.p->v; d.p++; o++; }
        t.o = o;
    }
    r.p = t.o;
    return r;
}
