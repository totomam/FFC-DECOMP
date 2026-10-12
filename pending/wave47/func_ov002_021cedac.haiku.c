#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_ov002_021cedac(Pair **outp, Pair *a, uint32_t p2, Pair *aend, uint32_t p4, Pair *b, Pair *bend, Pair *dst)
{
    while (a != aend && b != bend) {
        if (b->b < a->b) {
            *dst++ = *b++;
        } else {
            *dst++ = *a++;
        }
    }
    if (a != aend) {
        while (a != aend) {
            *dst++ = *a++;
        }
    } else {
        while (b != bend) {
            *dst++ = *b++;
        }
    }
    *outp = dst;
}
