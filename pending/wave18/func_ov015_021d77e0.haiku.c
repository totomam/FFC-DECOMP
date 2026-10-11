#include "ffc/types.h"

extern uint32_t data_ov015_021d79e0;
extern uint32_t data_ov015_021d79e4[];

void func_ov015_021d77e0(uint32_t a, uint32_t b)
{
    uint32_t idx = *(uint32_t *)0x2fffc3c & 1;
    data_ov015_021d79e0 = idx;
    data_ov015_021d79e4[idx] = a;
    data_ov015_021d79e4[idx ^ 1] = b;
}
