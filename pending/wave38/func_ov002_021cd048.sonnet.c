#include "ffc/types.h"

typedef struct { uint32_t k; uint32_t v; } Elem;
typedef struct { Elem *cur; uint32_t n; Elem *end; uint32_t m; } Range;
typedef struct { Elem *end; uint32_t m; Elem *cur; uint32_t n; } T;

static inline int more(Range *a, Range *b) {
    int r = 0;
    if (a->cur != a->end && b->cur != b->end) r = 1;
    return r;
}
static inline void step(Elem **po, Elem **pc) {
    Elem *o = *po;
    Elem *c = *pc;
    *o = *c;
    *pc = c + 1;
    *po = o + 1;
}

void func_ov002_021cd048(Elem **ret, Range a, Range b, Elem *out) {
    while (more(&a, &b)) {
        if (b.cur->k > a.cur->k) step(&out, &b.cur);
        else step(&out, &a.cur);
    }
    if (a.cur != a.end) {
        T t; t.end=a.end; t.m=a.m; t.cur=a.cur; t.n=a.n;
        while (t.cur != t.end) step(&out, &t.cur);
    } else {
        T t; t.end=b.end; t.m=b.m; t.cur=b.cur; t.n=b.n;
        while (t.cur != t.end) step(&out, &t.cur);
    }
    *ret = out;
}
