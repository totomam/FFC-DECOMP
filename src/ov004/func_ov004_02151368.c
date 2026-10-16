#include "ffc/types.h"
extern void func_020224b8(void *p, int a, int b);
void *func_ov004_02151368(uint32_t *p, int a, int b)
{
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    func_020224b8(p, a, b);
    return p;
}
