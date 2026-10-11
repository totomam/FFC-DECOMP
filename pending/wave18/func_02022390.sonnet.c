/* cflags: -lang c++ */
#include "ffc/types.h"

struct S {
    virtual void f0(); virtual void f1(); virtual void f2();
    virtual void f3(); virtual void f4(); virtual void f5();
    virtual void f6();
    uint8_t pad[0xdc - 4]; uint32_t a; uint32_t b;
};

extern "C" void func_02022390(S *p) {
    if (p->b != 0) {
        p->b = 0;
        p->f6();
        p->a = 0;
    }
}
