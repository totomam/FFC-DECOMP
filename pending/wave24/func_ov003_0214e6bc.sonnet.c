/* cflags: -lang c++ */
#include "ffc/types.h"
struct T { int x; };
struct S { uint32_t a, b; };
typedef void (T::*PMF)(S, uint32_t);
struct Obj {
    uint32_t pad0[3];
    uint32_t flags;
    uint32_t pad1[(0x84 - 0x10) / 4];
    T *obj;
    PMF pmf;
    S s; uint32_t c;
};
extern "C" void func_ov003_0214e6bc(Obj *p);
extern "C" void func_ov003_0214e6bc(Obj *p)
{
    (p->obj->*(p->pmf))(p->s, p->c);
    p->flags = (p->flags & ~0xffu) | 2u;
}
