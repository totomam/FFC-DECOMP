#include "ffc/types.h"

extern uint8_t *data_ov006_021bc848;
extern uint32_t func_ov006_021b3f44(uint32_t x);

uint32_t func_ov006_021b518c(uint32_t idx)
{
    uint32_t *p = (uint32_t *)(data_ov006_021bc848 + (idx << 2));
    return func_ov006_021b3f44(p[0x800 / 4]);
}
