/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
void func_02054144(int x);
void func_02056db0(void *p);
void func_02056844(void *p);
extern uint32_t data_ov003_0217bda0;
}
struct Inner { virtual void f(); virtual ~Inner(); };
struct Obj { uint32_t vt; uint8_t pad[0xb0]; Inner *child; };
extern "C" void *func_ov003_02178664(void *p)
{
    Obj *o = (Obj *)p;
    o->vt = (uint32_t)&data_ov003_0217bda0;
    if (o->child) {
        func_02054144(0);
        Inner *c = o->child;
        if (c) {
            if (c) c->~Inner();
            o->child = 0;
        }
    }
    func_02056db0(o);
    func_02056844(o);
    return o;
}
