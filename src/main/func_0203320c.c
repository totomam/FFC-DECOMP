/* cflags: -lang c++ */
#include "ffc/types.h"
struct B { int x; };
typedef void (B::*PF)();
struct S { char pad[0x38]; B *obj; PF mf; };
extern "C" void func_0203320c(S *s) { (s->obj->*s->mf)(); }
