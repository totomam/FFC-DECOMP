#include "ffc/types.h"

extern uint8_t data_ov000_0217004c[];

uint32_t func_ov000_02159988(void) {
    uint8_t *p = *(uint8_t **)(data_ov000_0217004c + 0xc);
    if (p != 0) {
        return *(uint32_t *)(p + 0x14);
    }
    return 0;
}
