#include "ffc/types.h"

extern void func_ov004_0214ae20(void *p);

void func_ov004_0214b9e4(void *p)
{
    uint8_t *q = (uint8_t *)p;
    q[0x95] = 0;
    func_ov004_0214ae20(p);
}
