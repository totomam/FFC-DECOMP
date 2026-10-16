#include "ffc/types.h"
typedef struct { uint32_t a, b, c, d; } S;
extern void *func_0205681c(uint32_t);
extern void func_02056c9c(void *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern uint32_t data_ov003_0217b01c;
void *func_ov003_02166eb0(S s, uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint32_t i, uint32_t j, uint32_t k, uint32_t l)
{
    uint8_t *p = (uint8_t *)func_0205681c(0xb4);
    if (p) {
        func_02056c9c(p, 0, f, s.d, f, g);
        *(uint32_t *)p = (uint32_t)&data_ov003_0217b01c;
        *(uint32_t *)(p + 0x84) = s.a;
        *(uint32_t *)(p + 0x88) = s.b;
        *(uint32_t *)(p + 0x8c) = s.c;
        *(uint32_t *)(p + 0x90) = s.d;
        *(uint32_t *)(p + 0x94) = e;
        *(uint32_t *)(p + 0x98) = f;
        *(uint32_t *)(p + 0x9c) = g;
        *(uint32_t *)(p + 0xa0) = h;
        *(uint32_t *)(p + 0xa4) = i;
        *(uint32_t *)(p + 0xa8) = j;
        *(uint32_t *)(p + 0xac) = k;
        *(uint32_t *)(p + 0xb0) = l;
    }
    return p;
}
