/* cflags: -lang c++ */
#include "ffc/types.h"
struct T { void f(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t); };
struct S {
    uint8_t pad0[0xc]; uint32_t flags;
    uint8_t pad1[0x84-0x10];
    T *obj; void (T::*pmf)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
    uint32_t a, b, c, d, e;
};
extern "C" void func_ov003_0216a3cc(S *p)
{
    (p->obj->*(p->pmf))(p->a, p->b, p->c, p->d, p->e);
    p->flags = (p->flags & ~0xffu) | 2u;
}
