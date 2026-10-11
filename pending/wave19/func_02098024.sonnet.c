/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
extern void func_0209724c(void *p);
extern uint8_t data_020b3380[];
extern uint8_t data_020b3394[];
void *func_02098024(void *p);
}

struct S { uint32_t vt; uint32_t a; uint32_t b; };

void *func_02098024(void *p) {
    S *s = (S *)p;
    s->vt = (uint32_t)data_020b3380;

    s->b = (uint32_t)data_020b3394;
    s->a = 0;
    uint8_t *q = (uint8_t *)s + *(int32_t *)((uint32_t)data_020b3380 - 12);
    func_0209724c(q);
    *(uint32_t *)(q + 0x30) = 0;
    *(uint8_t *)(q + 0x34) = 0x20;
    return s;
}
