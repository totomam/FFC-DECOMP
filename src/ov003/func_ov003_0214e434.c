/* cflags: -lang c++ */
#include "ffc/types.h"
struct B { };
struct S { uint32_t a, b; };
typedef void (B::*PM)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, S, uint32_t, uint32_t);
struct Obj {
    uint8_t pad[0x38];
    B *base;
    PM pm;
    uint32_t a44, a48, a4c, a50, a54;
    S a58;
    uint32_t a60, a64;
};
extern "C" void func_ov003_0214e434(Obj *p);
extern "C" void func_ov003_0214e434(Obj *p) {
    (p->base->*(p->pm))(p->a44, p->a48, p->a4c, p->a50, p->a54, p->a58, p->a60, p->a64);
}
