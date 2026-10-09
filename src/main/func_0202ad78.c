#include "ffc/types.h"

extern void func_0202a96c(void *p);

void *func_0202ad78(void *p)
{
    uint32_t *q = (uint32_t *)p;
    if (q[1] != 0) {
        func_0202a96c(p);
    }
    return p;
}
