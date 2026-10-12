/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern void func_020224fc(void *p, uint32_t a, uint32_t b);
extern void func_02090380(void *dst, const void *src, uint32_t len);
extern void *func_020903cc(void *obj, int c, uint32_t len);
extern void func_ov003_0216e6a0(void *p);
void func_ov003_0216e5a0(void *pp, uint32_t x);
}
struct Vec { uint32_t *data; uint32_t count; uint32_t cap; };
struct Num { int v; Num(int a) : v(a) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }
extern "C" void func_ov003_0216e5a0(void *pp, uint32_t x) {
    Vec *p = (Vec *)pp;
    volatile uint8_t b = 0; uint8_t rb = b;
    Vec t;
    t.data = 0; t.count = 0; t.cap = 0;
    func_020224fc(&t, x, rb);
    uint32_t *beg = p->data;
    uint32_t *end = beg + p->count;
    int n = diff((int)end, (int)beg) / 4;
    uint32_t bytes = n * 4;
    func_02090380(t.data + t.count, beg, bytes);
    func_020903cc(beg, 0, bytes);
    t.count += n;
    p->count = 0;
    uint32_t c = p->cap; p->cap = t.cap; t.cap = c;
    uint32_t *d = p->data; p->data = t.data; t.data = d;
    p->count = t.count;
    t.count = 0;
    func_ov003_0216e6a0(&t);
}
