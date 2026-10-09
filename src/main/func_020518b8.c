#include "ffc/types.h"

extern void func_020516ac(void *p);

void *func_020518b8(void *p)
{
    uint32_t *q = (uint32_t *)p;
    if (q[1] != 0) {
        func_020516ac(p);
    }
    return p;
}
