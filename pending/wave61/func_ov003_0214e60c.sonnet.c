/* cflags: -lang c++ */
#include "ffc/types.h"
struct T { };
struct P { uint32_t a, b; };
typedef void (T::*MF)(P, uint32_t, uint16_t, uint32_t);
struct S {
    uint8_t pad0[0xc];
    uint32_t flags;
    uint8_t pad1[0x84 - 0x10];
    T *obj;
    MF mf;
    P p; uint32_t c;
    uint16_t d;
    uint32_t e;
};
extern "C" void func_ov003_0214e60c(S *self) {
    (self->obj->*self->mf)(self->p, self->c, self->d, self->e);
    self->flags = (self->flags & ~0xff) | 2;
}
