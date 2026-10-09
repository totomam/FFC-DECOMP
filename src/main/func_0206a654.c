#include "ffc/types.h"

extern void func_0206a630(void *p);

void *func_0206a654(void *p)
{
    uint32_t *q = (uint32_t *)p;
    if (q[1] != 0) {
        func_0206a630(p);
    }
    return p;
}
