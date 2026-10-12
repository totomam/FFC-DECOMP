/* cflags: -lang c++ */
#include "ffc/types.h"
struct T;
typedef void (T::*PM)(void *, uint8_t, uint8_t, uint8_t, uint8_t);
struct T {
    uint8_t pad0[0xc]; uint32_t flags;
    uint8_t pad1[0x84-0x10]; T *obj; PM mp; void *arg;
    uint8_t a, b, c, d;
    void f(void *, uint8_t, uint8_t, uint8_t, uint8_t);
};
extern "C" void func_ov003_0214e5b4(T *p);
extern "C" void func_ov003_0214e5b4(T *p)
{
    (p->obj->*p->mp)(p->arg, p->a, p->b, p->c, p->d);
    p->flags = (p->flags & ~0xffu) | 2;
}
