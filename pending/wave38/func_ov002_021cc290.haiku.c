#include "ffc/types.h"

typedef struct { uint32_t v; int32_t k; } Elem;
typedef struct { Elem *beg; uint32_t x; Elem *end; uint32_t y; } Span;

void func_ov002_021cc290(Elem **out, Span s, Elem *b, Elem *bend, Elem *dst) {
    Elem *a = s.beg;
    Elem *aend = s.end;
    Elem *d = dst;
    Elem **pa = &a;
    Elem **pb = &b;
    Elem **pd = &d;
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
        while (b != bend) {
            *d++ = *b++;
        }
    } else {
        while (a != aend) {
            *d++ = *a++;
        }
    }
    *out = d;
}
