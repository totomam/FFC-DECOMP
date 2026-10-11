#include "ffc/types.h"

extern void func_02055914(uint32_t a, uint32_t b);

void func_02039678(uint32_t *p, uint32_t *q)
{
    if (q[3] != p[19]) {
        return;
    }
    p[20] = p[20] - 1;
    if ((int32_t)p[20] > 0) {
        return;
    }
    if (p[21] != 0) {
        func_02055914(p[21], p[22]);
    }
    p[3] = (p[3] & ~0xffu) | 2u;
}
