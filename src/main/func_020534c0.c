#include "ffc/types.h"

extern void func_020534d4(void *p);

void *func_020534c0(void *p)
{
    uint32_t *q = (uint32_t *)p;
    if (q[1] != 0) {
        func_020534d4(p);
    }
    return p;
}
