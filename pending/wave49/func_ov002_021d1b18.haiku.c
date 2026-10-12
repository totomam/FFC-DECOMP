#include "ffc/types.h"

typedef struct Elem {
    uint32_t a[5];
    int32_t v[6];
    uint32_t b;
} Elem;

typedef struct Span {
    Elem *begin;
    uint32_t x;
    Elem *end;
    uint32_t y;
} Span;

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

void func_ov002_021d1b18(Elem **out, Span sa, Elem *b, Elem *bEnd, Elem *dst)
{
    Span *sp = &sa;
    Elem **pb = &b;
    Elem **pd = &dst;

    while (sp->begin != sp->end && *pb != bEnd) {
        if (sum6(*pb) > sum6(sp->begin)) {
            copy_elem(*pd, *pb);
            (*pb)++;
        } else {
            copy_elem(*pd, sp->begin);
            sp->begin++;
        }
        (*pd)++;
    }
    if (sp->begin == sp->end) {
        while (*pb != bEnd) {
            copy_elem(*pd, *pb);
            (*pb)++;
            (*pd)++;
        }
    } else {
        while (sp->begin != sp->end) {
            copy_elem(*pd, sp->begin);
            sp->begin++;
            (*pd)++;
        }
    }
    *out = dst;
}
