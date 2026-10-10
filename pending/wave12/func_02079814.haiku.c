#include "ffc/types.h"

extern uint32_t data_0213e240[];

void func_02079814(uint32_t param_1)
{
    uint32_t mask = 1u << param_1;
    data_0213e240[1] &= ~mask;
}
