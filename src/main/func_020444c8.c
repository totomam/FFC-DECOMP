/* cflags: -lang c++ */
#include "ffc/types.h"
struct B { int x; };
typedef void (B::*PF)();
struct S { char pad[0x38]; B *obj; PF mf; };
extern "C" void func_020444c8(S *s) { (s->obj->*s->mf)(); }
