#include "ffc/types.h"
extern void *func_0205681c(uint32_t n);
extern void func_02056c9c(void *p, int v);
extern uint32_t data_ov003_0217b004;
void *func_ov003_02166e48(uint32_t a, uint32_t b, ...) {
    uint32_t *q = &b;
    uint8_t *p = func_0205681c(0xa4);
    if (p != 0) {
        func_02056c9c(p, 0);
        *(uint32_t*)p = (uint32_t)&data_ov003_0217b004;
        *(uint32_t*)(p + 0x84) = a;
        *(uint32_t*)(p + 0x88) = q[0];
        *(uint32_t*)(p + 0x8c) = q[1];
        *(uint32_t*)(p + 0x90) = q[2];
        *(uint32_t*)(p + 0x94) = q[3];
        *(uint32_t*)(p + 0x98) = q[4];
        *(uint32_t*)(p + 0x9c) = q[5];
        *(uint32_t*)(p + 0xa0) = q[6];
    }
    return p;
}
