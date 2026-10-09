#include "ffc/types.h"

extern void func_02025b34(void *p);

void *func_0202d17c(void *p)
{
    uint32_t *q = (uint32_t *)p;
    if (q[1] != 0) {
        func_02025b34(p);
    }
    return p;
}
