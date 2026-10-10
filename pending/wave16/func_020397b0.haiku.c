/* cflags: -lang c++ */
#include "ffc/types.h"

struct Obj {
    virtual void v0() {}
    virtual void v1() {}
    virtual void v2() {}
    virtual void v3() {}
    virtual void v4() {}
    virtual int v5() { return 0; }
    uint32_t x[2];
    uint32_t flags;
};

extern "C" void func_020397b0(Obj *p) {
    if (p->v5() != 0) {
        p->flags = (p->flags & ~0xffu) | 2u;
    }
}
