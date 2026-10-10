#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern uint32_t func_0201f138(uint32_t x);

int func_ov008_021a11b0(uint8_t *p)
{
    uint32_t v = func_0201f138(data_020b93b8);
    return v > p[0x104];
}
