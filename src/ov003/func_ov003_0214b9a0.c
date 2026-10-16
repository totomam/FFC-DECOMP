#include "ffc/types.h"
typedef struct { uint32_t x, y; } P;
extern void *func_0205681c(uint32_t n);
extern void func_02056c9c(void *p, int v);
extern uint32_t data_ov003_021795e4;
void *func_ov003_0214b9a0(uint32_t a, P bc, uint32_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h, uint32_t i, uint32_t j, uint32_t k) {
    uint8_t *p = (uint8_t *)func_0205681c(0xa4);
    if (p != 0) {
        func_02056c9c(p, 0);
        *(uint32_t *)p = (uint32_t)&data_ov003_021795e4;
        *(uint32_t *)(p + 0x84) = a;
        *(P *)(p + 0x88) = bc;
        *(uint32_t *)(p + 0x90) = d;
        p[0x94] = e;
        p[0x95] = f;
        p[0x96] = g;
        p[0x97] = h;
        *(uint32_t *)(p + 0x98) = i;
        *(uint32_t *)(p + 0x9c) = j;
        *(uint32_t *)(p + 0xa0) = k;
    }
    return p;
}
