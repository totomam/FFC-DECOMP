#include "ffc/types.h"

extern uint8_t data_ov006_021bc800[];

uint16_t func_ov006_021b2698(void)
{
    return *(uint16_t *)(*(uint8_t **)(data_ov006_021bc800 + 4) + 0x52);
}
