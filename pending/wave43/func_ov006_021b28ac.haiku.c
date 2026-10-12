#include "ffc/types.h"

extern uint8_t data_ov006_021bc800[];

int16_t func_ov006_021b28ac(uint32_t mask) {
    uint32_t m = mask;
    int16_t ret = 0;
    uint16_t count = 0;
    int16_t i;
    uint16_t k;
    uint32_t t;

    for (i = 0; i < 16; i++) {
        if (m & (1u << i)) {
            ret = i + 1;
            count++;
        }
    }
    if (count <= 1) {
        return ret;
    }

    t = *(uint32_t *)(*(uint8_t **)(data_ov006_021bc800 + 4) + 0x58);
    t = t * 0x10dcd;
    *(uint32_t *)(*(uint8_t **)(data_ov006_021bc800 + 4) + 0x58) = t + 0x3039;
    k = (uint16_t)(((uint32_t)(uint8_t)(*(uint32_t *)(*(uint8_t **)(data_ov006_021bc800 + 4) + 0x58)) * count) >> 8);

    for (i = 0; i < 16; i++) {
        if (m & 1) {
            if (k == 0) {
                return i + 1;
            }
            k--;
        }
        m >>= 1;
    }
    return 0;
}
