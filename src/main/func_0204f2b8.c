#include "ffc/types.h"

extern uint32_t *func_0204f2e4(uint32_t *a, uint32_t *b, uint32_t c, uint32_t *d);

void func_0204f2b8(uint32_t **out, uint32_t *p, uint32_t *q)
{
    uint32_t *r;

    r = func_0204f2e4(p, q, p[1], &p[1]);
    if (r == &p[1]) {
        goto store_n;
    }
    if (*q >= r[3]) {
        goto store_r;
    }
store_n:
    *out = &p[1];
    return;
store_r:
    *out = r;
}
