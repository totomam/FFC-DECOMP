#include "ffc/types.h"

extern uint8_t data_ov006_021bc70c[];

uint8_t func_ov006_021a6564(void)
{
    uint8_t v = data_ov006_021bc70c[0];
    if (v == 6) {
        return 0x38;
    }
    if (v == 1) {
        uint32_t w = *(uint32_t *)&data_ov006_021bc70c[8];
        if (!((w >> 4) & 2)) {
            return 0x37;
        }
    }
    return (uint8_t)(v + 0x31);
}
