#include "ffc/types.h"
extern uint16_t *data_ov006_021bc7fc;
extern uint16_t *data_ov006_021b9a40[6];
uint32_t func_ov006_021b1f78(uint32_t i) {
    uint16_t *b = data_ov006_021bc7fc;
    data_ov006_021b9a40[0] = b + 1;
    data_ov006_021b9a40[1] = b + 2;
    data_ov006_021b9a40[2] = b + 3;
    data_ov006_021b9a40[3] = b + 4;
    data_ov006_021b9a40[4] = b + 5;
    data_ov006_021b9a40[5] = b + 6;
    return *data_ov006_021b9a40[i];
}
