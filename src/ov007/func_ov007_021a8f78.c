#include "ffc/types.h"

extern void func_ov007_021a8fec(void *p);

void *func_ov007_021a8f78(void *p)
{
    uint32_t *q = (uint32_t *)p;
    if (q[1] != 0) {
        func_ov007_021a8fec(p);
    }
    return p;
}
