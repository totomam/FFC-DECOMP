#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Elem;

typedef struct {
    Elem *first;
    Elem *middle;
    Elem *last;
} Range;

void func_ov002_021cc07c(Elem **out, Range r) {
    Elem *first = r.first;
    Elem *middle = r.middle;
    Elem *last = r.last;
    Elem *next;
    Elem *ret;
    uint32_t t;

    if (first == middle) {
        *out = last;
        return;
    }
    if (middle == last) {
        *out = first;
        return;
    }

    next = middle;
    for (;;) {
        t = first->a; first->a = next->a; next->a = t;
        t = first->b; first->b = next->b; next->b = t;
        first++;
        next++;
        if (next == last) {
            break;
        }
        if (first == middle) {
            middle = next;
        }
    }

    ret = first;
    if (first != middle) {
        next = middle;
        for (;;) {
            t = first->a; first->a = next->a; next->a = t;
            t = first->b; first->b = next->b; next->b = t;
            first++;
            next++;
            if (next == last) {
                if (first == middle) {
                    break;
                }
                next = middle;
            } else if (first == middle) {
                middle = next;
            }
        }
    }

    *out = ret;
}
