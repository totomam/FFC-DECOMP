/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void *func_0205681c(uint32_t size);
extern "C" uint32_t data_ov004_0215955c;

struct Pair {
    uint32_t x;
    uint32_t y;
};

struct Obj {
    uint32_t vt;
    uint32_t pad[2];
    uint32_t f;
    uint32_t pad2;
    uint32_t a;
    Pair s;
    inline void init(uint32_t a_, Pair p) {
        f &= ~0xffu;
        vt = (uint32_t)&data_ov004_0215955c;
        a = a_;
        s = p;
    }
};

extern "C" void func_ov004_0214e618(uint32_t a, Pair s);
extern "C" void func_ov004_0214e618(uint32_t a, Pair s) {
    Obj *p = (Obj *)func_0205681c(0x20);
    if (p != 0) {
        p->init(a, s);
    }
}
