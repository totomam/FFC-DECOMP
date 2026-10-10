/* cflags: -lang c++ */
#include "ffc/types.h"

struct T { void f(uint32_t, uint32_t); };
typedef void (T::*PMF)(uint32_t, uint32_t);

struct Obj {
    uint8_t pad[0xc];
    uint32_t flags;
    uint8_t pad2[0x84 - 0x10];
    T *target;
    PMF pmf;
    uint32_t a;
    uint32_t b;
};

extern "C" void func_ov003_0217815c(Obj *p);
extern "C" void func_ov003_0217815c(Obj *p) {
    (p->target->*(p->pmf))(p->a, p->b);
    p->flags = (p->flags & ~0xffu) | 2;
}
