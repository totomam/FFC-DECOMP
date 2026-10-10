/* cflags: -lang c++ */
#include "ffc/types.h"
struct A { char pad[0xc0]; void (A::*pmf)(int); };
extern "C" void func_ov013_021c2368(A *p, int a);
extern "C" void func_ov013_021c2368(A *p, int a) {
    (p->*(p->pmf))(a);
}
