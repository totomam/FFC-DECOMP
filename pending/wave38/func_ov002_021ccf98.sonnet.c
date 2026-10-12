#include "ffc/types.h"

typedef struct { uint32_t k; uint32_t v; } Elem;

static inline void cp(Elem **d, Elem **s)
{
    (*d)->k = (*s)->k;
    (*d)->v = (*s)->v;
    (*d)++;
    (*s)++;
}

void func_ov002_021ccf98(Elem **outp, Elem *a, uint32_t u2, Elem *aend, uint32_t u3, Elem *b, Elem *bend, Elem *out)
{
    Elem **pa = &a, **pb = &b, **po = &out;
    while (*pa != aend && *pb != bend) {
        if ((*pb)->k > (*pa)->k) cp(po, pb);
        else cp(po, pa);
    }
    if (*pa == aend) {
        while (*pb != bend) cp(po, pb);
    } else {
        while (*pa != aend) cp(po, pa);
    }
    *outp = *po;
}
