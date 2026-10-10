/* cflags: -lang c++ */
#include "ffc/types.h"

struct Obj { };
struct Args { uint32_t a, b; };
typedef void (Obj::*Fn)(Args);

struct Self {
    uint8_t pad0[0xc];
    uint32_t flags;
    uint8_t pad1[0x84 - 0x10];
    Obj *obj;
    Fn fn;
    Args args;
};

extern "C" void func_ov010_021c94b4(Self *self)
{
    (self->obj->*(self->fn))(self->args);
    self->flags = (self->flags & ~0xffu) | 2;
}
