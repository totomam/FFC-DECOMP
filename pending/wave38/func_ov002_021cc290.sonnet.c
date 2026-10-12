#include "ffc/types.h"

typedef struct { uint32_t v; int32_t k; } Elem;
typedef struct { Elem *end; uint32_t y; Elem *cur; uint32_t x; } Span;

void func_ov002_021cc290(Elem **out, Elem *a, uint32_t x, Elem *aend, uint32_t y, Elem *b, Elem *bend, Elem *dst) {
    Elem **pa = &a;
    Elem **pb = &b;
    Elem **pd = &dst;
    while (a != aend && b != bend) {
        if (b->k > a->k) {
            **pd = **pb;
            (*pb)++;
        } else {
            **pd = **pa;
            (*pa)++;
        }
        (*pd)++;
    }
    if (a == aend) {
        Elem *p = b, *q = dst;
        while (p != bend) { *q = *p; p++; q++; }
        *out = q;
    } else {
        Span s;
        s.end = aend; s.y = y; s.cur = a; s.x = x;
        Span *ps = &s;
        while (ps->cur != ps->end) {
            *dst = *ps->cur;
            ps->cur++;
            dst++;
        }
        *out = dst;
    }
}
