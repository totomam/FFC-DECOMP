#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint64_t func_0209a978(uint32_t size, uint32_t tag);
extern void func_0205c820(uint32_t *arr, uint32_t v);

typedef struct {
    uint32_t *base;
    uint32_t n0;
    uint32_t flag;
    uint32_t n1;
} T;

typedef struct {
    uint32_t id;
    uint32_t pad;
    T t;
} P;

uint32_t func_0205c5d4(uint32_t *out, P *p, uint32_t x) {
    volatile uint32_t c[4];
    uint32_t a[8];
    uint32_t id = p->id;
    T *tp = &p->t;
    uint32_t *base = tp->base;
    uint32_t *e0 = base + tp->n0;
    uint32_t *e1 = base + tp->n1;

    a[0] = (uint32_t)e0;
    a[1] = (uint32_t)base;
    a[2] = (uint32_t)e0;
    a[3] = (uint32_t)e1;
    a[4] = (uint32_t)e0;
    a[5] = (uint32_t)base;
    a[6] = (uint32_t)e0;
    a[7] = (uint32_t)e1;

    func_0205c820(a, (uint32_t)func_0209a978(x + id, 0x55));

    c[0] = a[0];
    c[1] = a[1];
    c[2] = a[2];
    c[3] = a[3];

    uint32_t r4 = tp->flag != 0 ? *(uint32_t *)a[0] : 0;

    out[0] = c[0];
    out[1] = c[1];
    out[2] = c[2];
    out[3] = c[3];

    out[4] = r4 + 12 * (uint32_t)(func_0209a978(x + id, 0x55) >> 32);
    return 0;
}
