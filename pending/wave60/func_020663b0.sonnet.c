/* cflags: -lang c++ */
#include "ffc/types.h"
struct S { uint32_t a, b; };
struct O { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(uint32_t, uint32_t, S, S, uint32_t); };
struct P { uint8_t pad[0x2c]; uint32_t m; uint32_t pad2; S t; };
extern "C" void func_020663b0(P *p, O *o, S s, uint32_t x);
extern "C" void func_020663b0(P *p, O *o, S s, uint32_t x) {
    o->v9(p->m, 0, p->t, s, x);
}
