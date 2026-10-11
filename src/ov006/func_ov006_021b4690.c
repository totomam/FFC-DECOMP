#include "ffc/types.h"

extern uint8_t *data_ov006_021bc820;

void func_ov006_021b4690(uint8_t *p)
{
    uint8_t *base = data_ov006_021bc820;
    if (p == base + 0x610) {
        base[0x67c] = 1;
    } else {
        base[0x67d] = 1;
    }
}
