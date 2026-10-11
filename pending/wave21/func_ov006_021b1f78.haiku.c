#include "ffc/types.h"

extern uint32_t data_ov006_021bc7fc;
extern uint32_t data_ov006_021b9a40[];

uint16_t func_ov006_021b1f78(uint32_t idx) {
    uint32_t base = data_ov006_021bc7fc;
    data_ov006_021b9a40[0] = base + 2;
    data_ov006_021b9a40[1] = base + 4;
    data_ov006_021b9a40[2] = base + 6;
    data_ov006_021b9a40[3] = base + 8;
    data_ov006_021b9a40[4] = base + 10;
    data_ov006_021b9a40[5] = base + 12;
    return *(uint16_t *)data_ov006_021b9a40[idx];
}
