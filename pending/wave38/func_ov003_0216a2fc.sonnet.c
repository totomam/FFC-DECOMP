/* cflags: -lang c++ */
#include "ffc/types.h"
struct Self;
struct P { uint32_t a, b; };
typedef void (Self::*MFn)(uint32_t, uint32_t, P, uint32_t, uint32_t, uint32_t);
struct Base { uint8_t pad[0x84]; };
struct Self {
    uint8_t pad0[0xc];
    uint32_t fc;
    uint8_t pad[0x84-0x10];
    Base *base;
    MFn fn;
    uint32_t f90, f94;
    P p;
    uint32_t fa0, fa4, fa8;
};
extern "C" void func_ov003_0216a2fc(Self *s);
void func_ov003_0216a2fc(Self *s) {
    ((Self*)s->base->*s->fn)(s->f90, s->f94, s->p, s->fa0, s->fa4, s->fa8);
    s->fc = (s->fc & ~0xffu) | 2;
}
