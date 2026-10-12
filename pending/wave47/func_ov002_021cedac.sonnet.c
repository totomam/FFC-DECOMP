#include "ffc/types.h"
typedef struct { int32_t a; int32_t b; } Pair;
typedef struct { Pair *p; uint32_t x; } It;
static inline Pair *cp(It f, It l, Pair *d)
{
    while (f.p != l.p) { *d++ = *f.p++; }
    return d;
}
void func_ov002_021cedac(Pair **outp, It a, It aend, Pair *b, Pair *bend, Pair *dst)
{
    while (a.p != aend.p && b != bend) {
        if (b->b < a.p->b) { *dst++ = *b++; }
        else { *dst++ = *a.p++; }
    }
    if (a.p == aend.p) dst = cp((It){b,0}, (It){bend,0}, dst);
    else dst = cp(a, aend, dst);
    *outp = dst;
}
