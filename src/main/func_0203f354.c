/* cflags: -lang c++ */
#include "ffc/types.h"
struct S;
struct S {
    uint32_t pad[3];
    uint32_t flags;
    uint8_t pad2[0x84-0x10];
    S *obj;
    void (S::*mf)(uint8_t, uint8_t);
    uint8_t a;
    uint8_t b;
};
extern "C" void func_0203f354(S *self);
extern "C" void func_0203f354(S *self) {
    (self->obj->*self->mf)(self->a, self->b);
    self->flags = (self->flags & ~0xff) | 2;
}
