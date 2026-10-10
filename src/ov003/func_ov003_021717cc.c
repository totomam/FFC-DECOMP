#include "ffc/types.h"

extern uint8_t data_ov003_02178e34[];

uint32_t func_ov003_021717cc(uint32_t a, uint32_t b)
{
    return *(uint32_t *)(data_ov003_02178e34 + (a << 5) + (b << 2));
}
