#include "ffc/types.h"

typedef struct {
    uint32_t k;
    uint32_t v;
} Elem;

void func_ov002_021cce94(Elem **out, Elem *b, Elem *bend, Elem *a, uint32_t p4, Elem *aend, uint32_t p6, Elem *dst)
{
    if (b == bend) {
        while (aend != a) {
            aend--;
            dst--;
            *dst = *aend;
        }
    } else if (a == aend) {
        while (bend != b) {
            bend--;
            dst--;
            *dst = *bend;
        }
    } else {
        Elem *ap = aend - 1;
        Elem *bp = bend - 1;
        for (;;) {
            if (ap->k <= bp->k) {
                dst--;
                *dst = *ap;
                if (ap == a) {
                    do {
                        dst--;
                        *dst = *bp;
                    } while (bp-- != b);
                    break;
                }
                ap--;
            } else {
                dst--;
                *dst = *bp;
                if (bp == b) {
                    do {
                        dst--;
                        *dst = *ap;
                    } while (ap-- != a);
                    break;
                }
                bp--;
            }
        }
    }
    *out = dst;
}
