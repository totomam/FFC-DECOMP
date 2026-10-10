#include "ffc/types.h"

extern uint8_t data_ov000_0217004c[];

uint32_t func_ov000_0215a3d0(void) {
    uint8_t *p = data_ov000_0217004c;
    uint8_t *q = *(uint8_t **)(p + 0xc);
    return *(uint32_t *)(q + 0x20);
}
