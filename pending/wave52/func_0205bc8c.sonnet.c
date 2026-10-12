#include "ffc/types.h"

typedef struct { uint8_t v; } B;
typedef struct { uint32_t *cur, *base, *head, *end; } It;
typedef struct { uint32_t *base; uint32_t f1; uint32_t f2; uint32_t count; } Q;
typedef struct { uint32_t a, b, c, d; uint32_t *ref; } S;

extern void func_0205c66c(S *s, uint32_t idx, B z);
extern void func_0205c650(S *s);
extern void func_0205c764(S *s, It *a, It *b, B z);
extern uint64_t func_0209a978(uint32_t p, uint32_t n);

void func_0205bc8c(Q *q, uint32_t idx)
{
    uint32_t n;
    S s;
    It b, a;
    B zz[3];
    uint32_t *base;

    n = q->count == 0 ? 0 : q->count - 1;
    if (idx <= n) return;
    uint32_t r = 0;
    zz[2].v = 0;
    s.ref = &q->count;
    s.a = 0; s.b = 0; s.c = 0; s.d = 0;
    func_0205c66c(&s, idx, zz[2]);
    if (q->count != 0) {
        r = (uint32_t)(func_0209a978(q->f1 + q->f2, q->count) >> 32);
    }
    base = q->base;
    a.cur = base + r;
    a.base = base;
    a.head = base + q->f1;
    a.end = base + q->count;
    b.cur = base + q->f1;
    b.base = base;
    b.head = base + q->f1;
    b.end = base + q->count;
    zz[1].v = 0;
    func_0205c764(&s, &b, &a, zz[1]);
    q->f2 = 0;
    {
        uint32_t t;
        t = (uint32_t)q->base; q->base = (uint32_t*)s.a; s.a = t;
        t = q->f1; q->f1 = s.b; s.b = t;
        t = q->f2; q->f2 = s.c; s.c = t;
        t = q->count; q->count = s.d; s.d = t;
    }
    func_0205c650(&s);
}
