/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern uint8_t data_ov003_0217bda0[];
extern void func_02054144(int a);
extern void func_02056db0(void *p);
struct X { virtual ~X(); virtual void f(); };
struct S { void *vt; uint8_t pad[0xb0]; X *obj; };
void *func_ov003_02178624(S *self);
void *func_ov003_02178624(S *self) {
    self->vt = data_ov003_0217bda0;
    X *t = self->obj;
    if (t != 0) {
        func_02054144(0);
        X *o = self->obj;
        if (o != 0) { delete o; self->obj = 0; }
    }
    func_02056db0(self);
    return self;
}
}
