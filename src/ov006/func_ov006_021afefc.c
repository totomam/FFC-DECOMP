#include "ffc/types.h"

extern uint8_t *data_ov006_021bc7e4;
extern uint32_t func_ov006_021b04fc(uint32_t a, uint8_t *b);

uint32_t func_ov006_021afefc(uint32_t a)
{
    return func_ov006_021b04fc(a, data_ov006_021bc7e4 + 0x4cc);
}
