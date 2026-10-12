#include "ffc/types.h"

extern void func_020694ac(void *p, uint32_t a, uint32_t b);
extern uint32_t data_ov008_021a7d9c[];

void *func_ov008_0219be94(void *a, uint32_t b)
{
    uint8_t *p = (uint8_t *)a;
    uint32_t *q;
    func_020694ac(a, 0, 0);
    *(uint32_t **)(p + 0) = data_ov008_021a7d9c;
    q = (uint32_t *)(p + 0xc4);
    *(uint32_t *)(p + 0xc4) = 0;
    *(uint32_t *)(p + 0xdc) = b;
    *(uint32_t *)(p + 0xec) = 0;
    *(uint32_t *)(p + 0xfc) = 0;
    q[1] = 0;
    q[2] = 0;
    q = (uint32_t *)(p + 0xec);
    q[1] = 0;
    q[2] = 0;
    *(uint32_t *)(p + 0x100) = 0;
    p[0x105] = 0;
    p[0x106] = 0;
    p[0x107] = 0;
    return a;
}
