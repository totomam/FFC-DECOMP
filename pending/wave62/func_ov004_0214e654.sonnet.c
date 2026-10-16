/* cflags: -lang c++ */
#include "ffc/types.h"
struct P { int32_t x, y; };
struct VO { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(P p); virtual void f4(); virtual void f5(); virtual P f6(); };
struct Q { char pad[0x34]; int32_t x, y; };
struct S { char pad[0x8c]; VO *o; char pad2[0xe0-0x90]; Q *q; };
extern "C" void func_ov004_0214e654(S *self, P in, int32_t z)
{
    P d;
    const P &s = self->o->f6();

    d.x = (-(s.x - 256)) / 2 + in.x;
    d.y = (-(s.y - 192)) / 2 + in.y;
    self->o->f3(d);
    P n; n.x = -in.x; n.y = -in.y;
    P m = n;
    self->q->x = m.x;
    self->q->y = m.y;
}
