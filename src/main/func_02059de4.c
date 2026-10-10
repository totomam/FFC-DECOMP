#include "ffc/types.h"

extern uint8_t data_0209f4b4[];

uint32_t func_02059de4(uint32_t a, uint32_t b)
{
    return *(uint32_t *)(data_0209f4b4 + (a << 5) + (b << 3));
}
