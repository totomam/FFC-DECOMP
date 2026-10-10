#include "ffc/types.h"

extern uint8_t data_ov006_021bc800[];

uint32_t func_ov006_021b26a8(void) {
    uint8_t *p = data_ov006_021bc800;
    uint8_t *q = *(uint8_t **)(p + 0x4);
    return *(uint32_t *)(q + 0x40);
}
