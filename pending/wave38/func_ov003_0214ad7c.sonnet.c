#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, int zero, uint32_t c, uint32_t d, uint32_t g, uint32_t h);
extern char data_ov003_021794f4[];

void *func_ov003_0214ad7c(uint32_t a, uint32_t b, uint32_t c, uint32_t d, ...)
{
    uint32_t *ap = &d + 1;
    uint32_t a0 = a;
    char *p = (char *)func_0205681c(0xa4);
    if (p != 0) {
        func_02056c9c(p, 0, c, d, ap[2], ap[3]);
        *(void **)p = data_ov003_021794f4;
        *(uint32_t *)(p + 0x84) = a0;
        *(uint32_t *)(p + 0x88) = (&a)[1];
        *(uint32_t *)(p + 0x8c) = (&a)[2];
        *(uint32_t *)(p + 0x90) = d;
        *(uint32_t *)(p + 0x94) = ap[0];
        *(uint32_t *)(p + 0x98) = ap[1];
        *(uint32_t *)(p + 0x9c) = ap[2];
        *(uint32_t *)(p + 0xa0) = ap[3];
    }
    return p;
}
