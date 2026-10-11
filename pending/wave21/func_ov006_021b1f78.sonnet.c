#include "ffc/types.h"

extern uint16_t *data_ov006_021bc7fc;
extern uint16_t *data_ov006_021b9a40[];

uint16_t func_ov006_021b1f78(int idx) {
    uint16_t *p = data_ov006_021bc7fc;
    data_ov006_021b9a40[0] = p + 1;
    data_ov006_021b9a40[1] = p + 2;
    data_ov006_021b9a40[2] = p + 3;
    data_ov006_021b9a40[3] = p + 4;
    data_ov006_021b9a40[4] = p + 5;
    data_ov006_021b9a40[5] = p + 6;
    if (idx < 0) return 0;
    return *data_ov006_021b9a40[idx];
}
