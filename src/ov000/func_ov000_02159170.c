#include "ffc/types.h"

extern uint8_t data_ov000_0217002c[];

void func_ov000_02159170(uint32_t a, uint32_t b)
{
    *(uint32_t *)(data_ov000_0217002c + 4) = a;
    *(uint32_t *)(data_ov000_0217002c + 0) = b;
}
