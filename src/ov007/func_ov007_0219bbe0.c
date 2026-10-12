/* cflags: -lang c++ */
#include "ffc/types.h"

struct Pair { uint32_t a; uint32_t b; };
struct V { uint32_t a, b, c, d; };
struct O {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual V get();
    uint8_t pad[0x7c];
    uint8_t *p80; uint32_t x84; uint32_t x88;
};

extern "C" void func_020643a8(O *obj, Pair a);
extern "C" void func_0205f52c(uint32_t p, Pair c);

extern "C" void func_ov007_0219bbe0(O *obj, Pair a)
{
    Pair p3;
    V o1;
    V o2;
    uint32_t y;

    func_020643a8(obj, a);
    o1 = obj->get();
    y = o1.b;
    o2 = obj->get();
    p3.a = o2.a + obj->x84;
    p3.b = y + obj->x88;
    func_0205f52c(*(uint32_t *)(obj->p80 + 0x94), p3);
}
