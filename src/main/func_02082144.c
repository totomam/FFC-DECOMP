#include "ffc/types.h"

uint32_t func_02082144(void) {
    uint16_t v = *(uint16_t *)0x400100a;
    int t = (v & 0x1f00) >> 8;
    return (t << 11) + 0x6200000;
}
