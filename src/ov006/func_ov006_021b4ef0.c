#include "ffc/types.h"

extern uint32_t data_ov006_021bc828[];

int func_ov006_021b4ef0(uint16_t *out)
{
    uint8_t *r2;

    if ((int)(*(uint16_t *)0x2ffffa8 & 0x8000) >> 15) {
        return 0;
    }
    r2 = (uint8_t *)data_ov006_021bc828[1];
    if (!((uint32_t)(*(uint8_t *)(r2 + 0x38) << 31) >> 31)) {
        out[0] = *(uint16_t *)(r2 + 0x2c);
        out[1] = *(uint16_t *)(r2 + 0x2e);
        return 0;
    }
    out[0] = *(uint16_t *)(r2 + 0x28);
    out[1] = *(uint16_t *)(r2 + 0x2a);
    return 1;
}
