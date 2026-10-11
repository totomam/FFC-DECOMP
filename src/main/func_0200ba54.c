/* cflags: -lang c++ */
#include "ffc/types.h"
struct Pair { uint32_t d; uint32_t e; };
struct Obj {
 virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
 virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
 virtual uint32_t f(uint32_t, uint32_t, Pair, Pair, uint32_t);
};
struct P { uint8_t pad[0x18]; Obj *o; };
extern "C" uint32_t func_0200ba54(P *p, uint32_t b, uint32_t c, Pair s, Pair f, uint32_t g);
extern "C" uint32_t func_0200ba54(P *p, uint32_t b, uint32_t c, Pair s, Pair f, uint32_t g) {
 return p->o->f(b, c, s, f, g);
}
