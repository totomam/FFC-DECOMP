#include "ffc/types.h"

typedef struct { uint32_t v; int32_t k; } Elem;

void func_ov002_021cc188(Elem **out, Elem *a0, Elem *a1, Elem *b0, Elem *s1, Elem *b1, Elem *s3, Elem *dst) {
    Elem *d = dst;
    Elem *ap, *bp, *e;
    if (a0 == a1) {
        e = b1;
        while (e != b0) { e--; d--; *d = *e; }
        *out = d;
        return;
    }
    if (b0 == b1) {
        e = a1;
        while (e != a0) { e--; d--; *d = *e; }
        *out = d;
        return;
    }
    ap = a1 - 1;
    bp = b1 - 1;
    for (;;) {
        if (bp->k <= ap->k) {
            d--;
            *d = *bp;
            if (bp == b0) {
                e = ap + 1;
                while (e != a0) { e--; d--; *d = *e; }
                break;
            }
            bp--;
        } else {
            d--;
            *d = *ap;
            if (ap == a0) {
                e = bp + 1;
                while (e != b0) { e--; d--; *d = *e; }
                break;
            }
            ap--;
        }
    }
    *out = d;
}
