#include "ffc/types.h"

extern uint8_t *data_ov006_021bc7e4;
extern uint8_t data_ov006_021b9930[];
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);

uint32_t func_ov006_021aff5c(void *object)
{
    uint8_t *p = data_ov006_021bc7e4 + 0x4f0;
    return func_02086ad4(object, (uint32_t)data_ov006_021b9930, p[0], p[1], p[2], p[3]);
}
