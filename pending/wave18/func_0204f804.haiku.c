#include "ffc/types.h"

extern uint32_t data_0209e698[];

uint32_t func_0204f804(uint8_t *base, uint32_t idx, uint32_t val, ...) {
    uint32_t tmp;
    uint8_t *slot = base + 0x34;
    *(uint8_t *)&tmp = slot[idx * 4];
    slot[idx * 4] = *(uint8_t *)&val;
    *((uint8_t *)data_0209e698[idx]) = *(uint8_t *)&val;
    return tmp;
}
