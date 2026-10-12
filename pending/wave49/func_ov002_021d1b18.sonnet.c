#include "ffc/types.h"

typedef struct Elem {
    uint32_t a[5];
    int32_t v[6];
    uint32_t b;
} Elem;

typedef struct Iter { Elem *p; uint32_t x; } Iter;
typedef struct Span { Iter first, last; } Span;


static inline void copy_elem(Elem *d, const Elem *s)
{
    d->a[0] = s->a[0];
    d->a[1] = s->a[1];
    d->a[2] = s->a[2];
    d->a[3] = s->a[3];
    d->a[4] = s->a[4];
    d->v[0] = s->v[0];
    d->v[1] = s->v[1];
    d->v[2] = s->v[2];
    d->v[3] = s->v[3];
    d->v[4] = s->v[4];
    d->v[5] = s->v[5];
    d->b = s->b;
}

static inline int32_t sum6(const Elem *e)
{
    int32_t s = 0;
    int32_t i;
    for (i = 0; i < 6; i++) {
        s += e->v[i];
    }
    return s;
}



typedef struct R { Elem *p; } R;

R func_ov002_021d1b18(Span sa, Elem *b, Elem *bEnd, Elem *dst)
{
    Span *sp = &sa;
    Elem **pb = &b;
    Elem **pd = &dst;

    while (sp->first.p != sp->last.p && *pb != bEnd) {
        if (sum6(*pb) > sum6(sp->first.p)) {
            copy_elem(*pd, *pb);
            (*pb)++;
        } else {
            copy_elem(*pd, sp->first.p);
            sp->first.p++;
        }
        (*pd)++;
    }
    if (sp->first.p == sp->last.p) {
        while (*pb != bEnd) {
            copy_elem(*pd, *pb);
            (*pb)++;
            (*pd)++;
        }
    } else {
        Iter l = sa.last;
        Iter f = sa.first;
        Elem *d = dst;
        Iter *pl = &l;
        Iter *pf = &f;
        while (pf->p != pl->p) {
            copy_elem(d, pf->p);
            pf->p++;
            d++;
        }
        dst = d;
    }
    R r; r.p = dst; return r;
}
