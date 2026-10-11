/* cflags: -lang c++ */
#include "ffc/types.h"
struct Big { uint32_t a, b, c, d; };
struct Pair { uint32_t a, b; };
extern "C" void func_02065528(void *p);
extern "C" void func_0205f52c(uint32_t x, Pair v);
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual Big get();
    uint32_t pad[(0x80-4)/4];
    uint32_t *f80; uint32_t f84; uint32_t f88;
};
extern "C" void func_ov007_0219bb78(Obj *o)
{
    func_02065528(o);
    uint32_t r4 = o->get().b;
    uint32_t r0 = o->get().a;
    Pair s;
    s.a = r0 + o->f84;
    s.b = r4 + o->f88;
    func_0205f52c(*(uint32_t *)((uint8_t*)o->f80 + 0x94), s);
}
