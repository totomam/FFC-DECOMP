#include "ffc/types.h"

extern uint8_t *data_ov000_0217096c;

uint8_t func_ov000_0216443c(int32_t idx) {
    uint8_t *p = data_ov000_0217096c + idx * 0x38;
    return p[0x1d];
}
