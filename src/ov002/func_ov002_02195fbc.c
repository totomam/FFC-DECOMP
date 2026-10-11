/* cflags: -lang c++ */
#include "ffc/types.h"

struct A {
    char pad[0x3c0];
    void (A::*pmf)();
    void go();
};

extern "C" void func_ov002_02195fbc(A *p);

extern "C" void func_ov002_02195fbc(A *p)
{
    (p->*(p->pmf))();
}
