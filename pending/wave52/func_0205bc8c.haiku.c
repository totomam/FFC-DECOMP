#include "ffc/types.h"

extern void func_0205c66c(void *dst, uint32_t idx, uint32_t v);
extern void func_0205c650(void *dst);
extern void func_0205c764(void *a, void *b, void *c);
extern void func_0209a978(uint32_t p, uint32_t n);

typedef struct {
    uint32_t *base;
    uint32_t f1;
    uint32_t f2;
    uint32_t count;
} Q;

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
    Q *ref;
} S;

void func_0205bc8c(Q *q, uint32_t idx)
{
    uint32_t n;
    S s;
    uint32_t *arr[9];
    uint32_t *base;
    uint32_t cnt;
    uint8_t z;

    if (q->count == 0) {
        n = 0;
    } else {
        n = q->count - 1;
    }
    if (idx <= n) {
        return;
    }

    s.a = 0;
    s.b = 0;
    s.c = 0;
    s.d = 0;
    s.ref = (Q *)&q->count;
    z = 0;
    func_0205c66c(&s, idx, z);

    cnt = 0;
    if (q->count != 0) {
        func_0209a978(q->f1 + q->f2, q->count);
        cnt = q->count;
    }

    base = q->base;
    arr[4] = base + q->count;
    arr[0] = base + q->f1;
    arr[1] = base;
    arr[2] = base + q->f1;
    arr[3] = base + q->count;
    z = 0;
    func_0205c764(&s, &arr[0], &arr[4]);

    q->count = 0;
    {
        uint32_t t0 = s.a;
        uint32_t t1 = (uint32_t)q->base;
        uint32_t t2 = q->f1;
        q->base = (uint32_t *)t0;
        s.a = t1;
        q->f1 = s.b;
        s.b = t2;
        q->f2 = s.c;
        s.c = 0;
        q->count = s.d;
        s.d = cnt;
    }
    func_0205c650(&s);
}
