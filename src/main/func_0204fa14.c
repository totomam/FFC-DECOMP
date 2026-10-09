#include "ffc/types.h"

extern void func_0204fa4c(void *p);

void *func_0204fa14(void *p)
{
    uint32_t *q = (uint32_t *)p;
    if (q[1] != 0) {
        func_0204fa4c(p);
    }
    return p;
}
