#include "ffc/types.h"

extern void func_0206aa58(void *p, int v, uint32_t n);
extern void func_020095b8(void *p, uint32_t x);
extern uint32_t data_ov003_0217b094[];

void *func_ov003_02168084(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t size)
{
    uint32_t *q = (uint32_t *)p;
    func_0206aa58(p, 0, size);
    q[0] = (uint32_t)data_ov003_0217b094;
    q[0x38 / 4] = a;
    q[0x3c / 4] = b;
    func_020095b8((char *)p + 0x40, c);
    return p;
}
