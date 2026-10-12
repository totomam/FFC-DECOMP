#include "ffc/types.h"

typedef struct { uint32_t k; uint32_t v; } Elem;
typedef struct { Elem *cur; uint32_t n; Elem *end; uint32_t m; } Range;

void func_ov002_021cd048(Elem **ret, Range a, Range b, Elem *out) {
    Range *pa = &a;
    Range *pb = &b;
    while (pa->cur != pa->end && pb->cur != pb->end) {
        if (pb->cur->k > pa->cur->k) {
            *out = *pb->cur;
            pb->cur++;
        } else {
            *out = *pa->cur;
            pa->cur++;
        }
        out++;
    }
    if (pa->cur != pa->end) {
        Range t = *pa;
        if (t.cur != t.end) {
            do {
                *out = *t.cur;
                t.cur++;
                out++;
            } while (t.cur != t.end);
        }
    } else {
        Range t = *pb;
        if (t.cur != t.end) {
            do {
                *out = *t.cur;
                t.cur++;
                out++;
            } while (t.cur != t.end);
        }
    }
    *ret = out;
}
