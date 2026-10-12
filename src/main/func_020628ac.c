/* cflags: -lang c++ */
#include "ffc/types.h"
struct Pair { int32_t a, b; };
struct O {
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void f3(Pair p);
    virtual void v4();
    virtual void f5(Pair p);
};
extern "C" void func_020628ac(O *self, Pair a, Pair b);
extern "C" void func_020628ac(O *self, Pair a, Pair b)
{
    Pair c;
    Pair d;
    Pair *pc = &c;
    Pair *pd = &d;
    pc->a = a.a;
    pc->b = a.b;
    self->f3(c);
    pd->a = b.a - a.a;
    pd->b = b.b - a.b;
    self->f5(d);
}
