#include "ffc/types.h"

extern uint32_t func_020730a0(uint32_t);

uint32_t func_020735ec(uint8_t *p, uint32_t i)
{
    return func_020730a0(*(uint32_t *)(p + (i << 2) + 0xac));
}
