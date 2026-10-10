#include "ffc/types.h"

extern uint8_t data_0213e6bc[];

void func_02079848(int32_t idx, int32_t val)
{
    *(uint32_t *)(data_0213e6bc + idx * 36) = (uint16_t)val;
}
