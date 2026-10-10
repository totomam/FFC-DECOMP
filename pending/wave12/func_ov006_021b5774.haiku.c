#include "ffc/types.h"

extern uint8_t *data_ov006_021bc884;
extern uint32_t func_ov006_021b3f0c(uint32_t v, uint32_t w);

uint32_t func_ov006_021b5774(uint32_t idx, uint32_t w) {
    uint32_t *p = (uint32_t *)(data_ov006_021bc884 + (idx << 6));
    return func_ov006_021b3f0c(p[1], w);
}
