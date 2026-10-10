/* cflags: -lang c++ */
#include "ffc/types.h"

struct B { int x; };
typedef void (B::*PM)(uint32_t, uint32_t, uint32_t);

struct Obj {
    uint8_t pad0[0x0c];
    uint32_t flags;
    uint8_t pad1[0x84 - 0x10];
    B *base;
    PM pmf;
    uint32_t a90;
    uint32_t a94;
    uint32_t a98;
};

extern "C" void func_ov003_02173f88(Obj *self)
{
    (self->base->*self->pmf)(self->a90, self->a94, self->a98);
    self->flags = (self->flags & ~0xffu) | 2;
}
