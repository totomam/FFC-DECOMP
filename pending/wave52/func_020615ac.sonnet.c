#include "ffc/types.h"

extern uint32_t func_0206156c(void *a, uint32_t v);
extern uint32_t func_0206157c(void *a);

typedef struct Tbl {
    uint8_t p0[0xc];
    uint32_t stride;
    uint8_t p1[4];
    uint32_t count;
    uint8_t p2[0x1c];
    uint32_t off;
} Tbl;

typedef struct A {
    uint8_t p0[0x18];
    Tbl *t;
    uint32_t f1c;
    uint32_t f20;
} A;

uint32_t func_020615ac(A *a, uint32_t key) {
    uint32_t *o1 = &a->f1c;
    uint32_t *o2 = &a->f20;
    uint32_t lo, hi, stride;
    uint8_t *base;

    if (a->f1c == key) {
        return *o2;
    }
    if (key < func_0206156c(a, a->f1c) || key > func_0206157c(a)) {
        return 0;
    }
    {
        Tbl *t = a->t;
        base = (uint8_t *)t + t->off;
        stride = t->stride;
        lo = 0;
        hi = t->count;
    }
    while (lo < hi) {
        uint32_t mid = (lo + hi) >> 1;
        uint32_t off = mid * stride;
        uint8_t *p = base + off;
        uint32_t k = ((uint32_t)base[off] << 8) | p[1];
        if (k == key) {
            *o1 = key;
            *o2 = (uint32_t)(p + 2);
            return (uint32_t)(p + 2);
        }
        if (k < key) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
    *o1 = 0;
    *o2 = 0;
    return 0;
}
