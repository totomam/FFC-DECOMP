#include "ffc/types.h"

extern uint8_t *data_ov006_021bc7fc;

uint16_t func_ov006_021b2054(uint8_t *p)
{
    uint16_t i = 1;
    uint8_t *base = data_ov006_021bc7fc;
    uint16_t flags = *(uint16_t *)(base + 2);
    uint8_t *e;
    while (i < 2) {
        if (flags & (1 << i)) {
            e = base + 0x24 + (i - 1) * 30;
            if (p[0] == e[0] && p[1] == e[1] && p[2] == e[2] &&
                p[3] == e[3] && p[4] == e[4] && p[5] == e[5]) {
                return *(uint16_t *)(e + 6);
            }
        }
        i++;
    }
    return 0;
}
