#include "ffc/types.h"

extern uint8_t data_020b8df0[];

void func_02019d4c(uint32_t r0, uint32_t a, uint32_t b)
{
    *(uint32_t *)(data_020b8df0 + 0x14) = a;
    *(uint32_t *)(data_020b8df0 + 0x2c) = b;
}
