#include "ffc/types.h"

extern uint32_t func_02064574(uint32_t a, uint32_t b, uint32_t c);

uint32_t func_ov004_02147520(uint32_t a, uint8_t *p)
{
    return func_02064574(a, *(uint32_t *)(p + 0x94), *(uint32_t *)(p + 0x98));
}
