#include "ffc/types.h"

extern void func_020442b4(void *p);

void *func_020442fc(void *p)
{
    uint32_t *q = (uint32_t *)p;
    if (q[1] != 0) {
        func_020442b4(p);
    }
    return p;
}
