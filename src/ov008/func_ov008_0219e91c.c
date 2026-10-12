#include "ffc/types.h"

extern void func_020694ac(void *p, uint32_t a, uint32_t b);
extern uint8_t data_ov008_021a83ac[];

void *func_ov008_0219e91c(void *p0)
{
    uint8_t *p = (uint8_t *)p0;
    uint32_t *q;

    func_020694ac(p0, 0, 0);
    *(uint8_t **)p = data_ov008_021a83ac;
    q = (uint32_t *)(p + 0xc4);
    *q = 0;
    q[1] = 0;
    q[2] = 0;
    *(int32_t *)(p + 0xec) = -1;
    *(uint32_t *)(p + 0xf0) = 0;
    q = (uint32_t *)(p + 0xf4);
    *q = 0;
    q[1] = 0;
    q[2] = 0;
    p[0x100] = 0;
    p[0x101] = 0;
    p[0x102] = 0;
    p[0x103] = 0;
    return p0;
}
