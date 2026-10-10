/* cflags: -nothumb */
#include "ffc/types.h"

extern void func_020800cc(void *a, void *b, uint32_t c, uint32_t d, uint32_t e);

void func_02080648(void *a, void *b, uint32_t c, uint32_t d, uint32_t e)
{
    volatile uint32_t *src = (volatile uint32_t *)a;
    uint32_t *dst = (uint32_t *)b;
    uint32_t t0, t1, t2;
    func_020800cc(a, b, c, d, e);
    t0 = src[9];
    t1 = src[10];
    t2 = src[11];
    dst[9] = t0;
    dst[10] = t1;
    dst[11] = t2;
}
