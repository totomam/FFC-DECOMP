/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern uint8_t data_020b33d0[];
extern uint8_t data_020b33e4[];
extern void func_0209724c(void *p);
struct B { void *vt; int x; void *y; };
B *func_02097ff4(B *p);
}
B *func_02097ff4(B *p) {
    void *w = data_020b33e4;
    void **vt = (void **)data_020b33d0;
    p->y = data_020b33e4;
    p->vt = vt;
    p->x = 0;
    p->y = w;
    uint8_t *r4 = (uint8_t *)p + ((int32_t *)vt)[-3];
    func_0209724c(r4);
    *(int32_t *)(r4 + 0x30) = 0;
    *(uint16_t *)(r4 + 0x34) = 0x20;
    return p;
}
