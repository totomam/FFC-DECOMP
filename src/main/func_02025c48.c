/* cflags: -lang c++ */
#include "ffc/types.h"

struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }

struct Elem { uint32_t a; uint32_t b; uint32_t c; };
struct Obj {
    uint8_t pad0[0x40];
    uint32_t f40;
    uint8_t pad1[4];
    Elem *f48;
    uint32_t f4c;
};

extern "C" void func_02025c48(Obj *o) {
    Num n(o->f4c);
    uint32_t lim = n.v * n.v;
    for (uint32_t i = 0; i < lim; i++) {
        Elem *e = &o->f48[i];
        Num t(e->b);
        e->b = diff(t, e->b);
    }
    o->f40 = diff(Num(o->f40), o->f40);
}
