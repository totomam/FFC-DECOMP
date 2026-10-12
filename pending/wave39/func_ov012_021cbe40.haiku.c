#include "ffc/types.h"

extern void func_020694ac(void *p, uint32_t a, uint32_t b);
extern uint16_t func_0201c9ac(void *obj, uint32_t n);
extern uint32_t data_ov012_021d3a58;
extern uint32_t data_020b93b8;

void *func_ov012_021cbe40(uint8_t *p, uint32_t arg)
{
    uint32_t *q;
    uint32_t idx;

    func_020694ac(p, 0, 0);
    *(uint32_t *)p = (uint32_t)&data_ov012_021d3a58;
    q = (uint32_t *)(p + 0xc8);
    *q = 0;
    *(uint32_t *)(p + 0xf0) = 0;
    q[1] = 0;
    q[2] = 0;
    q = (uint32_t *)(p + 0xf8);
    *q = 0;
    idx = 0x41 * 4;
    q[1] = 0;
    q[2] = 0;
    p[idx] = 0;
    p[idx + 1] = 0;
    p[idx + 2] = 0;
    p[idx + 3] = 0;
    *(uint32_t *)(p + idx + 4) = arg;
    *(uint16_t *)(p + idx + 8) = func_0201c9ac((void *)data_020b93b8, 6);
    *(uint16_t *)(p + idx + 10) = 0;
    return p;
}
