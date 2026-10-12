#include "ffc/types.h"
typedef struct { uint32_t a; int32_t b; } E;
typedef struct { E *first; E *end; uint32_t p2; uint32_t p3; } Args;
static inline int step(E **cp, E *first, int32_t kb) {
    int r = 0;
    if (*cp != first) {
        (*cp)--;
        if (kb > (*cp)->b) r = 1;
    }
    return r;
}
void func_ov002_021cc8c8(Args s) {
    E *first = s.first;
    E *end = s.end;
    E *p;
    if (first == end) return;
    for (p = first + 1; p != end; p++) {
        E *c = p - 1;
        E *h = c;
        int32_t kb = p->b;
        if (kb > c->b) {
            uint32_t ka = p->a;
            p->a = c->a;
            p->b = c->b;
            while (step(&c, first, kb)) {
                h->a = c->a;
                h->b = c->b;
                h--;
            }
            h->a = ka;
            h->b = kb;
        }
    }
}
