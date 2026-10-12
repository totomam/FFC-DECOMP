#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    Pair *last;
    Pair *first;
} Range;

void func_ov002_021cc970(Pair **out, Range r) {
    Pair *d;
    Pair *n;
    Pair *s;
    Pair tmp;

    d = r.first;
    if (d != r.last) {
        n = d + 1;
        while (n != r.last) {
            if (d->a == n->a) {
                goto found;
            }
            d = n;
            n++;
        }
    }
    d = r.last;
found:
    if (d != r.last) {
        s = d + 2;
        while (s != r.last) {
            if (d->a != s->a) {
                d++;
                tmp = *s;
                *d = tmp;
            }
            s++;
        }
        d++;
    }
    *out = d;
}
