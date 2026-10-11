#include "ffc/types.h"

extern uint32_t data_ov006_021bc7ec[];

int func_ov006_021b0cbc(void)
{
    uint8_t *p = (uint8_t *)data_ov006_021bc7ec[1];
    if (p == 0) {
        return 1;
    }
    if (p[0x18] == 0) {
        return 1;
    }
    return 0;
}
