#include "ffc/types.h"

extern uint8_t *data_ov006_021bc7e4;

uint8_t func_ov006_021b0018(uint32_t x)
{
    return *(data_ov006_021bc7e4 + (x << 8) + 0xe7);
}
