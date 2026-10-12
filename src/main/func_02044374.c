/* cflags: -lang c++ */
#include "ffc/types.h"
struct B { virtual void f(); };
struct Obj {
    uint8_t pad0[0x0c];
    uint32_t w0c;
    uint8_t pad1[0x84 - 0x10];
    B *base;
    void (B::*pmf)(uint32_t, uint32_t, uint32_t, uint32_t);
    uint32_t a90, a94, a98, a9c;
};
extern "C" void func_02044374(Obj *self) {
    (self->base->*(self->pmf))(self->a90, self->a94, self->a98, self->a9c);
    self->w0c = (self->w0c & ~0xffu) | 2;
}
