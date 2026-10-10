#include "ffc/types.h"

extern uint32_t func_02069dcc(uint32_t a, uint8_t *b);

uint32_t func_02069300(uint8_t *p)
{
    return func_02069dcc(*(uint32_t *)(p + 0x80), p);
}
