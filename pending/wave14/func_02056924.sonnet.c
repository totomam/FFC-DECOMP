/* cflags: -lang c++ */
#include "ffc/types.h"
struct Obj {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    uint32_t pad8, pad9;
    uint32_t flags;
};
extern "C" void func_02056924(Obj *p);
extern "C" void func_02056924(Obj *p) {
    p->f3();
    p->flags = (p->flags & 0xffffff00u) | 2u;
}
