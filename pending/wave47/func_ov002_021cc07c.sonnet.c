#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; } Elem;
typedef struct { Elem *first; Elem *middle; Elem *last; } Range;

static inline void swp(Elem *x, Elem *y) {
    uint32_t t;
    t = x->a; x->a = y->a; y->a = t;
    t = x->b; x->b = y->b; y->b = t;
}

static inline Elem *rot(Range r) {
    Elem *first = r.first, *middle = r.middle, *last = r.last;
    Elem *next;
    Elem *ret;
    if (first == middle) return last;
    if (middle == last) return first;
    next = middle;
    for (;;) {
        swp(first, next);
        first++; next++;
        if (next == last) break;
        if (first == middle) middle = next;
    }
    ret = first;
    if (first != middle) {
        next = middle;
        for (;;) {
            swp(first, next);
            first++; next++;
            if (next == last) {
                if (first == middle) break;
                next = middle;
            } else if (first == middle) middle = next;
        }
    }
    return ret;
}

void func_ov002_021cc07c(Elem **out, Range r) {
    *out = rot(r);
}
