#include "ffc/types.h"

extern uint8_t *data_ov006_021bc81c;

uint8_t func_ov006_021b3fb8(int a)
{
    uint8_t *p;
    if (a == 1) {
        p = data_ov006_021bc81c;
    } else {
        p = data_ov006_021bc81c + 0xc;
    }
    return p[9];
}
