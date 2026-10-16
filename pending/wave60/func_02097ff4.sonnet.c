/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern int32_t data_020b33d0[];
extern int32_t data_020b33e4[];
extern void func_0209724c(void *p);
struct O { int32_t *vt; int a; int32_t *vt2; };
struct B { char pad[0x30]; int x; short y; };
O *func_02097ff4(O *self);
O *func_02097ff4(O *self) {
    self->vt = data_020b33d0;
    self->a = 0;
    self->vt2 = data_020b33e4;
    B *b = (B*)((char*)self + self->vt[-3]);
    func_0209724c(b);
    b->x = 0;
    b->y = 0x20;
    return self;
}
}
