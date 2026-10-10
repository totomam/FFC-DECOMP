#include "ffc/types.h"

extern uint8_t *data_ov006_021bc848;

uint8_t *func_ov006_021b51e4(uint32_t a, uint32_t b) {
    return data_ov006_021bc848 + (a << 10) + (b << 3);
}
