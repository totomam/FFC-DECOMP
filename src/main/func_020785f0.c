#include "ffc/types.h"

extern uint32_t data_020a1950[][4];

uint32_t func_020785f0(uint8_t *p)
{
    return data_020a1950[p[1]][p[0]];
}
