#include "ffc/types.h"

extern void func_0202a818(void *p);

void *func_0202ad64(void *p)
{
    uint32_t *q = (uint32_t *)p;
    if (q[1] != 0) {
        func_0202a818(p);
    }
    return p;
}
