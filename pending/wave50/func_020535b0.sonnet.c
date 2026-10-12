/* cflags: -lang c++ */
#include "ffc/types.h"
struct Vec { uint32_t a, b, c, d; };
struct Sub { uint32_t a, b, c; };
struct Obj { uint32_t w0, cnt, w2; Sub s; };
struct Tag { uint8_t x; Tag(uint8_t v) : x(v) {} };
struct Num { uint32_t v; Num(uint32_t x) : v(x) {} ~Num() {} };
extern "C" void func_02053d60(void *o, Vec *v, Tag t);
struct Cmp { const Num &a; uint32_t b; Cmp(const Num &x, uint32_t y) : a(x), b(y) {} operator bool() const { return a.v < b; } };
extern "C" Obj *func_020535b0(Obj *p, Vec v);
extern "C" Obj *func_020535b0(Obj *p, Vec v) {
    p->w0 = 0; p->cnt = 0; p->w2 = 0; 
    Sub *s = &p->s;
    s->a = 0; s->b = 0; s->c = 0;
    uint32_t n = p->cnt;
    if (Cmp(Num(n), n)) {
        Vec *e = (Vec *)(n * 17);
        if (e) *e = v;
        p->cnt++;
    } else {
        Tag t(n); func_02053d60(p, &v, t);
    }
    return p;
}
