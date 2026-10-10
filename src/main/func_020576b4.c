#include "ffc/types.h"

extern uint32_t data_0209f348[];

uint32_t func_020576b4(uint32_t *p)
{
    return data_0209f348[(p[1] & 0xf0) >> 4];
}
