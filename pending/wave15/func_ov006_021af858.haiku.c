#include "ffc/types.h"

extern uint8_t *data_ov006_021bc7dc;

void func_ov006_021af858(uint8_t a)
{
    uint8_t r;
    data_ov006_021bc7dc[0x1c] = a;
    r = 4;
    if (a != 2) {
        r = 6;
    }
    data_ov006_021bc7dc[0x1d] = r;
}
