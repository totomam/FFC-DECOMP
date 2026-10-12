#include "ffc/types.h"

typedef struct { uint32_t k; uint32_t v; } Elem;
typedef struct { Elem *p; uint32_t x; } It;
typedef struct { It last; It first; } R;
typedef struct { uint32_t w[4]; } Q;

static inline void dec(It *i) { i->p--; }
static inline void inc(It *i) { i->p++; }

void func_ov002_021cce94(Elem **out, Q q, Elem *b, Elem *bend, It a, It aend, Elem *dst)
{
    if (b == bend) {
        R r; r.last = aend; r.first = a;
        while (r.last.p != r.first.p) {
            dec(&r.last);
            dst--;
            *dst = *r.last.p;
        }
    } else if (a.p == aend.p) {
        while (bend != b) {
            bend--;
            dst--;
            *dst = *bend;
        }
    } else {
        Elem *bp = bend - 1;
        dec(&aend);
        for (;;) {
            if (aend.p->k <= bp->k) {
                dst--;
                *dst = *aend.p;
                if (aend.p == a.p) {
                    do {
                        dst--;
                        *dst = *bp;
                    } while (bp-- != b);
                    break;
                }
                dec(&aend);
            } else {
                dst--;
                *dst = *bp;
                if (bp == b) {
                    R r; r.last = aend; inc(&r.last); r.first = a;
                    while (r.last.p != r.first.p) {
                        dec(&r.last); dst--; *dst = *r.last.p;
                    }
                    break;
                }
                bp--;
            }
        }
    }
    *out = dst;
}
