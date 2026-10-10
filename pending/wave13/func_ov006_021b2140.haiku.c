#include "ffc/types.h"

extern uint8_t data_ov006_021bc800[];

void func_ov006_021b2140(uint32_t r0) {
    uint8_t *obj = *(uint8_t **)(data_ov006_021bc800 + 4);
    int32_t s = *(int32_t *)(obj + 0x40);
    if ((uint32_t)(s - 9) > 1) {
        *(uint32_t *)(obj + 0x54) = r0;
    }
}
