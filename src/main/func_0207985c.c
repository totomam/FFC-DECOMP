#include "ffc/types.h"

extern uint8_t data_0213e6c0[];

void func_0207985c(int32_t idx, uint32_t val)
{
    *(uint32_t *)(data_0213e6c0 + idx * 0x24) = val;
}
