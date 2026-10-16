/* cflags: -lang c++ */
#include "ffc/types.h"
struct A { uint8_t c; };
struct V { uint32_t a, b, c; };
struct O { V x; V y; };
struct S { uint32_t b, n; };
extern "C" void func_02053d94(O *o, uint32_t b, uint32_t e, A a);
inline uint32_t beg(S *s) { return s->b; }
inline uint32_t en(S *s) { return s->b + s->n * 16; }
extern "C" O *func_0205360c(O *o, S *s) {
    A a;
    o->x.a = 0; o->x.b = 0; o->x.c = 0;
    func_02053d94(o, beg(s), en(s), a);
    V *y = &o->y;
    y->a = 0; y->b = 0; y->c = 0;
    return o;
}
