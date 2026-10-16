#include "ffc/types.h"
typedef struct { uint32_t x, y; } S;
extern void *func_0205681c(uint32_t n);
extern void func_02056c9c(void *p, int v);
extern uint32_t data_ov003_02179614;
void *func_ov003_0214bc38(uint32_t a, S s, uint32_t d, uint8_t e, uint32_t f, uint8_t g, uint32_t h, uint32_t i, uint32_t j)
{
    uint8_t *p = (uint8_t *)func_0205681c(0xac);
    if (p != 0) {
        func_02056c9c(p, 0);
        *(uint32_t *)p = (uint32_t)&data_ov003_02179614;
        *(uint32_t *)(p + 0x84) = a;
        *(S *)(p + 0x88) = s;
        *(uint32_t *)(p + 0x90) = d;
        *(uint8_t *)(p + 0x94) = e;
        *(uint32_t *)(p + 0x98) = f;
        *(uint8_t *)(p + 0x9c) = g;
        *(uint32_t *)(p + 0xa0) = h;
        *(uint32_t *)(p + 0xa4) = i;
        *(uint32_t *)(p + 0xa8) = j;
    }
    return p;
}
