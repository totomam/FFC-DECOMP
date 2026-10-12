#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, int v);
extern char data_ov003_0217a030[];

void *func_ov003_0215b224(void *a, volatile int b, volatile int c, uint16_t d, uint16_t e, uint32_t f, uint32_t g, uint16_t h, uint32_t i)
{
    uint8_t *p = (uint8_t *)func_0205681c(0xa4);
    if (p != 0) {
        func_02056c9c(p, 0);
        *(char **)p = data_ov003_0217a030;
        *(void **)(p + 0x84) = a;
        *(int *)(p + 0x88) = b;
        *(int *)(p + 0x8c) = c;
        *(uint16_t *)(p + 0x90) = d;
        *(uint16_t *)(p + 0x92) = e;
        *(uint32_t *)(p + 0x94) = f;
        *(uint32_t *)(p + 0x98) = g;
        *(uint16_t *)(p + 0x9c) = h;
        *(uint32_t *)(p + 0xa0) = i;
    }
    return p;
}
