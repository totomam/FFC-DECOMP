/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void func_02069600(void *a);

struct Obj {
    virtual void f0();
    virtual void f1();
};

extern "C" void func_ov009_021adbdc(void *a, Obj *b);
void func_ov009_021adbdc(void *a, Obj *b)
{
    func_02069600(a);
    if (b != 0) {
        if (b != 0) {
            b->f1();
        }
    }
}
