#include "ffc/types.h"

extern void func_0207095c(void *p);

void *func_020708f8(void *p)
{
    uint32_t *q = (uint32_t *)p;
    if (q[1] != 0) {
        func_0207095c(p);
    }
    return p;
}
