/* cflags: -lang c++ */
#include "ffc/types.h"

struct T { void f(void *, uint8_t); };
struct S {
    char pad0[0xc]; uint32_t w;
    char pad1[0x84 - 0x10]; T *obj;
    void (T::*pmf)(void *, uint8_t);
    void *arg; uint8_t b;
};

extern "C" void func_ov004_02156724(S *s)
{
    (s->obj->*(s->pmf))(s->arg, s->b);
    s->w = (s->w & ~0xffu) | 2;
}
