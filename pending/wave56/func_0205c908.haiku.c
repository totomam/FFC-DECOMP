#include "ffc/types.h"

typedef struct {
    uint32_t w[4];
} V4;

typedef struct {
    uint32_t *base;
    uint32_t a;
    uint32_t b;
    uint32_t n;
} Buf;

extern uint64_t func_0209a978(uint32_t a, uint32_t b);
extern int32_t func_0205cafc(void *b, void *a);
extern uint32_t *func_0205cac8(void *v);
extern void func_0205c9e4(V4 a, V4 b, uint32_t *c);

void func_0205c908(Buf *p, V4 *a, V4 *b)
{
    uint32_t *cur;
    int32_t n, m, k;
    V4 t1, t2;
    V4 r1, r2;

    cur = p->base;
    if (cur == 0) {
        return;
    }
    cur += (uint32_t)(func_0209a978(p->a + p->b, p->n) >> 32);
    n = func_0205cafc(b, a);
    m = (int32_t)(((uint32_t)p->base + (p->n << 2)) - (uint32_t)cur) / 4;
    k = (n < m) ? n : m;
    p->b += n;
    t1 = *a;
    r1 = *(V4 *)func_0205cac8(&t1);
    func_0205c9e4(*a, r1, cur);
    n -= k;
    if (n == 0) {
        return;
    }
    t2 = *a;
    r2 = *(V4 *)func_0205cac8(&t2);
    func_0205c9e4(r2, *b, p->base);
}
