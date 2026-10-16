/* cflags: -lang c++ */
#include "ffc/types.h"
struct B { int x; };
typedef void (B::*PF)();
struct S { char pad[0x38]; B *obj; PF mf; };
extern "C" void func_ov009_0219e358(S *s) { (s->obj->*s->mf)(); }
