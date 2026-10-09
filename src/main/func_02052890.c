#include "ffc/types.h"

extern void func_020528a4(void *p);

void *func_02052890(void *p)
{
    uint32_t *q = (uint32_t *)p;
    if (q[1] != 0) {
        func_020528a4(p);
    }
    return p;
}
