/* cflags: -lang c++ */
#include "ffc/types.h"
struct S { uint32_t a, b, c, d; };
struct O { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7();
virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15(); virtual void f16(S s); };
struct Ctx { uint8_t pad[0x1c]; O *obj; S s; };
extern "C" void func_02065dec(Ctx *p)
{
    p->obj->f16(p->s);
}
