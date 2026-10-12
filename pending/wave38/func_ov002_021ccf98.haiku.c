#include "ffc/types.h"

typedef struct { uint32_t k; uint32_t v; } Elem;

static inline void copy_one(Elem **dst, Elem **src)
{
    (*dst)->k = (*src)->k;
    (*dst)->v = (*src)->v;
    (*dst)++;
    (*src)++;
}

void func_ov002_021ccf98(Elem **outp, Elem *a, uint32_t u2, Elem *aend, Elem *b, Elem *bend, uint32_t u5, Elem *out)
{
    Elem *o = out;
    while (a != aend && b != bend) {
        if (b->k <= a->k) {
            copy_one(&o, &a);
        } else {
            copy_one(&o, &b);
        }
    }
    if (a == aend) {
        while (b != bend) {
            copy_one(&o, &b);
        }
    } else {
        while (a != aend) {
            copy_one(&o, &a);
        }
    }
    *outp = o;
}
