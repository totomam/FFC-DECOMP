/* cflags: -lang c++ */
#include "ffc/types.h"

struct A { };
struct S2 { uint32_t x, y; };
typedef uint32_t (A::*PMF)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, S2, uint32_t, uint32_t, uint32_t, uint32_t);

struct B {
    uint8_t pad[0x38];
    A *obj;
    PMF pmf;
    uint32_t a0, a1, a2, a3, a4;
    S2 a5;
    uint32_t a6, a7, a8, a9;
};

extern "C" uint32_t func_ov003_0214e31c(B *p)
{
    return (p->obj->*(p->pmf))(p->a0, p->a1, p->a2, p->a3, p->a4, p->a5, p->a6, p->a7, p->a8, p->a9);
}
