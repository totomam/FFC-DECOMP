#include "ffc/types.h"
typedef struct { uint32_t x, y; } S;
extern void *func_0205681c(int n);
extern void func_02056c9c(void *p, int v);
extern uint32_t data_ov003_0217b034;
void *func_ov003_02166f44(uint32_t a, S s, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint8_t i) {
    uint8_t *p = (uint8_t *)func_0205681c(0xa8);
    if (p != 0) {
        func_02056c9c(p, 0);
        *(uint32_t *)p = (uint32_t)&data_ov003_0217b034;
        *(uint32_t *)(p + 0x84) = a;
        *(S *)(p + 0x88) = s;
        *(uint32_t *)(p + 0x90) = d;
        *(uint32_t *)(p + 0x94) = e;
        *(uint32_t *)(p + 0x98) = f;
        *(uint32_t *)(p + 0x9c) = g;
        *(uint32_t *)(p + 0xa0) = h;
        *(uint8_t *)(p + 0xa4) = i;
    }
    return p;
}
