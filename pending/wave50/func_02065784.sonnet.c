#include "ffc/types.h"

typedef struct { uint32_t *bits; uint32_t n; uint32_t cap; } S;
typedef struct { uint32_t *p; uint32_t mask; } Pair;
typedef struct { uint32_t a; uint32_t b; } V;

extern uint32_t func_0206583c(S *s, uint32_t d);
extern void func_020657e4(S *s, uint32_t v);
extern void func_02065888(Pair *r, uint32_t d, V *v);

void func_02065784(S *s, uint32_t n, V v) {
    if (n > s->n) {
        if (n > (s->cap << 5)) {
            uint32_t x = func_0206583c(s, n - (s->cap << 5));
            func_020657e4(s, x);
        }
        {
            uint32_t old = s->n;
            Pair pr;
            pr.mask = 1u << (old & 31);
            pr.p = s->bits + (old >> 5);
            s->n = n;
            func_02065888(&pr, n - old, &v);
        }
        return;
    }
    s->n = n;
}
