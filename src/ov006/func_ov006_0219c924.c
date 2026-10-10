#include "ffc/types.h"

extern uint8_t data_ov006_021ba150[];

uint32_t func_ov006_0219c924(void) {
    uint8_t *p = data_ov006_021ba150;
    uint8_t *q = *(uint8_t **)(p + 0xc);
    return *(uint32_t *)(q + 0x8);
}
