/* cflags: -lang c++ */
#include "ffc/types.h"

typedef struct {
    uint32_t w0, w1, w2, w3;
} V4;

typedef struct {
    uint32_t *base;
    uint32_t a;
    uint32_t b;
    uint32_t n;
} Buf;

extern "C" uint64_t func_0209a978(uint32_t a, uint32_t b);
extern "C" int32_t func_0205cafc(void *b, void *a);
extern "C" uint32_t *func_0205cac8(void *v);
extern "C" void func_0205c9e4(V4 a, V4 b, uint32_t *c);

inline const int32_t &mn(const int32_t &x, const int32_t &y) { return x < y ? x : y; }

extern "C" void func_0205c908(Buf *p, V4 *a, V4 *b)
{
    uint32_t *cur;
    V4 r1, r2, t1, t2;
    int32_t n, m;

    cur = p->base;
    if (cur == 0) {
        return;
    }
    cur += (uint32_t)(func_0209a978(p->a + p->b, p->n) >> 32);
    n = func_0205cafc(b, a);
    m = (p->base + p->n) - cur;
    m = mn(n, m);
    p->b += n;
    t1.w0 = a->w0; t1.w1 = a->w1; t1.w2 = a->w2; t1.w3 = a->w3;
    V4 *q1 = (V4 *)func_0205cac8(&t1);
    r1.w0 = q1->w0; r1.w1 = q1->w1; r1.w2 = q1->w2; r1.w3 = q1->w3;
    func_0205c9e4(*a, r1, cur);
    n -= m;
    if (n == 0) {
        return;
    }
    t2.w0 = a->w0; t2.w1 = a->w1; t2.w2 = a->w2; t2.w3 = a->w3;
    V4 *q2 = (V4 *)func_0205cac8(&t2);
    r2.w0 = q2->w0; r2.w1 = q2->w1; r2.w2 = q2->w2; r2.w3 = q2->w3;
    func_0205c9e4(r2, *b, p->base);
}
