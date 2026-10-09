#include "ffc/types.h"

extern void func_02025b58(void *p);

void *func_020258a0(void *p)
{
    uint32_t *q = (uint32_t *)p;
    if (q[1] != 0) {
        func_02025b58(p);
    }
    return p;
}
