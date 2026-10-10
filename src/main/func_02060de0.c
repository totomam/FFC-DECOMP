#include "ffc/types.h"

extern uint32_t func_02060ae8(uint32_t a, uint8_t b);

uint32_t func_02060de0(uint8_t *p)
{
    return func_02060ae8(*(uint32_t *)(p + 0x14), *(p + 0x18));
}
