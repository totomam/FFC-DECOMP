/* cflags: -lang c++ */
#include "ffc/types.h"

struct Base {
    void m(uint8_t);
};

struct Obj {
    uint8_t pad[0x38];
    Base *base;
    void (Base::*pmf)(uint8_t);
    uint8_t arg;
};

extern "C" void func_ov007_0219e6b4(Obj *self)
{
    Base *b = self->base;
    (b->*(self->pmf))(self->arg);
}
