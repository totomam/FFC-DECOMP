/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" void func_02099378(void *p);
struct Obj { virtual void a(); virtual void b(); virtual void c(); virtual void d(); int count; };
extern "C" void func_0209935c(Obj *p);
extern "C" void func_0209935c(Obj *p) {
    if (--p->count == 0) {
        p->d();
        func_02099378(p);
    }
}
