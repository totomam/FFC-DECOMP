#include "ffc/types.h"

extern void func_ov003_0214e2a8(void *p);

void *func_ov003_0214e2cc(void *p)
{
    uint32_t *q = (uint32_t *)p;
    if (q[1] != 0) {
        func_ov003_0214e2a8(p);
    }
    return p;
}
