#include "ffc/types.h"

extern void func_020224b8(void *p);

void *func_ov004_02151368(void *p)
{
    uint32_t *q = (uint32_t *)p;
    q[0] = 0;
    q[1] = 0;
    q[2] = 0;
    func_020224b8(p);
    return p;
}
