#include "ffc/types.h"
typedef struct { uint32_t *a, *b, *c; } S;
void func_ov009_021a542c(uint32_t **out, volatile S s) {
    uint32_t *first, *mid, *next, *last, x, y;
    first = s.a; mid = s.b;
    if (first == mid) { *out = s.c; return; }
    last = s.c;
    if (mid == last) { *out = first; return; }
    next = mid;
    for (;;) {
        x = *next; y = *first; *first++ = x; *next++ = y;
        if (next == last) break;
        if (first == mid) mid = next;
    }
    {
        uint32_t *ret = first;
        if (first != mid) {
            uint32_t *n2 = mid, *l2 = s.c, p, q;
            for (;;) {
                p = *n2; q = *first; *first++ = p; *n2++ = q;
                if (n2 == l2) {
                    if (first == mid) break;
                    n2 = mid;
                } else if (first == mid) mid = n2;
            }
        }
        *out = ret;
    }
}
