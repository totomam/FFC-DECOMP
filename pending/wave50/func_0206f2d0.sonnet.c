/* cflags: -lang c++ */
#include "ffc/types.h"
struct L { uint32_t a, b, c; };
struct P { uint32_t base, size, x; };
struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }
extern "C" {
void func_0206f22c(L *s, uint32_t r1, uint32_t v);
void func_02090380(void *d, const void *s, uint32_t n);
void *func_020903cc(void *o, int c, uint32_t n);
void func_0206f5e0(L *s);
void func_0206f2d0(P *p, uint32_t r1);
void func_0206f2d0(P *p, uint32_t r1)
{
    volatile uint8_t z[4];
    L l;
    z[2] = 0;
    l.a = 0; l.b = 0; l.c = 0;
    uint32_t v = z[2];
    func_0206f22c(&l, r1, v);
    uint32_t base = p->base;
    uint32_t n = diff(Num(base + p->size), base);
    func_02090380((void *)(l.a + l.b), (const void *)base, n);
    func_020903cc((void *)base, 0, n);
    l.b += n;
    p->size = 0;
    uint32_t t = p->x; p->x = l.c; l.c = t;
    t = p->base; p->base = l.a; l.a = t;
    p->size = l.b;
    l.b = 0;
    func_0206f5e0(&l);
}
}
