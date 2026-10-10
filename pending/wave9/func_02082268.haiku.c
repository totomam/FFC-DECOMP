#include "ffc/types.h"

uint32_t func_02082268(void) {
    uint32_t p = 0x4000008;
    uint16_t bg = *(volatile uint16_t *)p;
    uint32_t dispcnt = *(volatile uint32_t *)(p - 8);
    uint32_t r0 = ((bg & 0x3c) >> 2) << 14;
    uint32_t r2 = ((dispcnt & 0x07000000) >> 24) << 16;
    return r0 + (r2 + 0x06000000);
}
