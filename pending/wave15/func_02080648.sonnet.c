/* cflags: -nothumb */
#include "ffc/types.h"

extern void func_020800cc(void *a, void *b, uint32_t c, uint32_t d, uint32_t e);

void func_02080648(uint32_t *a, uint32_t *b, uint32_t c, uint32_t d, uint32_t e)
{
    volatile uint32_t *s = a;
    uint32_t *p = b;
    uint32_t t0, t1, t2;
    func_020800cc(a, p, c, d, e);
    t0 = s[9]; t1 = s[10]; t2 = s[11];
    p[9] = t0; p[10] = t1; p[11] = t2;
}
