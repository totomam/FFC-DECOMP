#include "ffc/types.h"

extern uint32_t data_ov006_021bc800[];

void func_ov006_021b268c(uint32_t x)
{
    uint32_t *p = (uint32_t *)data_ov006_021bc800[1];
    p[2] = x;
}
