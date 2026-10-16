/* cflags: -lang c++ */
#include "ffc/types.h"
struct Obj;
struct Tmp { uint32_t a, b, c; };
typedef void (Obj::*MF)(Tmp *, uint32_t);
struct Obj {
    uint32_t pad0[3];
    uint32_t flags;
    uint8_t pad1[0x84 - 0x10];
    Obj *self;
    MF mf;
    uint32_t src[3];
    uint32_t arg;
};
extern "C" void func_020095b8(Tmp *, void *);
extern "C" void *func_020059cc(void *);
extern "C" void func_ov003_021637f0(Obj *p) {
    Tmp t;
    Tmp *q = &t;
    func_020095b8(q, &p->src);
    (p->self->*p->mf)(q, p->arg);
    func_020059cc(&t);
    p->flags = (p->flags & ~0xff) | 2;
}
