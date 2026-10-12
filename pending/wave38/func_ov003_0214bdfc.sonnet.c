/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void func_02056bf4(uint32_t a, uint32_t b);

struct Obj {
    virtual void f0();
    virtual void f1();
};

extern "C" void func_ov003_0214bdfc(uint8_t *p, int b)
{
    Obj *o = *(Obj **)(p + (b ? 0x77 : 0x76) * 4);
    uint32_t *q;
    if (b) q = (uint32_t *)(p + 0x1e4); else q = (uint32_t *)(p + 0x1e0);
    if (o == 0) return;
    func_02056bf4(*(uint32_t *)(p + 0x188), (uint32_t)o);
    if (o != 0) {
        if (o != 0) o->f1();
    }
    *q = 0;
    if (b) {
        *(uint32_t *)(p + 0x77 * 4) = 0;
    } else {
        *(uint32_t *)(p + 0x76 * 4) = 0;
    }
}
