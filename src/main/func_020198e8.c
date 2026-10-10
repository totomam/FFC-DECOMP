#include "ffc/types.h"

extern void *func_02015ba4(void *unused, uint32_t index);
extern uint32_t data_0209e0b8[];

uint32_t func_020198e8(void *unused, uint32_t index) {
    uint8_t *p = (uint8_t *)func_02015ba4(unused, index);
    return data_0209e0b8[p[1]];
}
