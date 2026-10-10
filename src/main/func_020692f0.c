#include "ffc/types.h"

extern uint32_t func_020697ac(uint32_t a, uint8_t *b);

uint32_t func_020692f0(uint8_t *p)
{
    return func_020697ac(*(uint32_t *)(p + 0x80), p);
}
