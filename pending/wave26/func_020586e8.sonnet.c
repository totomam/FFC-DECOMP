/* cflags: -lang c++ */
#include "ffc/types.h"

struct Ctx { uint8_t pad[0x40]; uint32_t val; };
extern "C" {
extern void *func_0205681c(uint32_t size);
extern uint32_t data_020b0d50[];
void func_020586e8(Ctx *c, uint32_t a1, uint32_t a2, uint32_t a3, uint8_t e);
}
struct Obj {
    void *vt; uint32_t p4, p8; uint32_t f; uint32_t p10;
    uint32_t a, b, c, d; uint8_t e;
    void init(Ctx *cx, uint32_t a1, uint32_t a2, uint32_t a3, uint8_t e_) {
        uint32_t ff = f & ~0xffu;
        uint32_t v = cx->val;
        f = ff;
        vt = data_020b0d50;
        a = v; b = a1; c = a2; d = a3; e = e_;
    }
};
void func_020586e8(Ctx *c, uint32_t a1, uint32_t a2, uint32_t a3, uint8_t e)
{
    Obj *o = (Obj *)func_0205681c(0x28);
    if (o) o->init(c, a1, a2, a3, e);
}
