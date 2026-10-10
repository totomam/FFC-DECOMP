#include "ffc/types.h"

uint32_t func_020820d0(void) {
    int screen = *(uint16_t *)0x4000008 & 0x1f00;
    uint32_t dispcnt = *(uint32_t *)0x4000000;
    uint32_t mode = (dispcnt & 0x38000000) >> 27;
    return ((screen >> 8) << 11) + (0x06000000 + (mode << 16));
}
