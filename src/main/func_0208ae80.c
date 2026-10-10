#include "ffc/types.h"

extern uint8_t data_021434e4[];

uint32_t func_0208ae80(uint32_t x)
{
    return x & *(uint16_t *)(data_021434e4 + 0x38);
}
