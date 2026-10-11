/* cflags: -lang c++ */
#include "ffc/types.h"
struct Obj { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
 virtual void f24(Obj *); virtual void f28(); };
extern "C" void func_02069dcc(Obj *a, Obj *b);
extern "C" void func_02069dcc(Obj *a, Obj *b) {
    b->f28();
    a->f24(b);
}
