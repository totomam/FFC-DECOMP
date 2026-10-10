#include "ffc/types.h"

uint32_t func_020820fc(void) {
    uint16_t v = *(uint16_t *)0x4001008;
    int t = (v & 0x1f00) >> 8;
    return (t << 11) + 0x6200000;
}
