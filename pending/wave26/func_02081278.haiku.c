#include "ffc/types.h"

uint32_t func_02081278(void) {
    volatile uint16_t *ctrl = (volatile uint16_t *)0x4000280;
    volatile uint32_t *res = (volatile uint32_t *)0x40002a0;
    uint32_t lo;
    uint32_t hi;
    uint64_t t;

    while (*ctrl & 0x8000) {
    }
    lo = res[0];
    hi = res[1];
    t = (uint64_t)lo + 0x80000;
    hi += (uint32_t)(t >> 32);
    return ((uint32_t)t >> 20) | (hi << 12);
}
