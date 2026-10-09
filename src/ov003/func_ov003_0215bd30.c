#include "ffc/types.h"

extern void func_ov003_0215bd00(void *p);

void *func_ov003_0215bd30(void *p)
{
    uint32_t *q = (uint32_t *)p;
    if (q[1] != 0) {
        func_ov003_0215bd00(p);
    }
    return p;
}
