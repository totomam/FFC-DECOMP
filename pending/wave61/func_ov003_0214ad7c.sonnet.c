#include "ffc/types.h"
typedef struct { uint32_t a, b; } P;
extern void *func_0205681c(int n);
extern void func_02056c9c(void *o, int a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern char data_ov003_021794f4[];
void *func_ov003_0214ad7c(uint32_t p0, P pr, uint32_t p3, uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3)
{
    uint8_t *o = (uint8_t *)func_0205681c(0xa4); uint32_t q3 = q3;
    if (o != 0) {
        func_02056c9c(o, 0, s2, q3, s2, s3);
        *(void **)o = data_ov003_021794f4;
        *(uint32_t *)(o + 0x84) = p0;
        *(P *)(o + 0x88) = pr;
        *(uint32_t *)(o + 0x90) = q3;
        *(uint32_t *)(o + 0x94) = s0;
        *(uint32_t *)(o + 0x98) = s1;
        *(uint32_t *)(o + 0x9c) = s2;
        *(uint32_t *)(o + 0xa0) = s3;
    }
    return o;
}
