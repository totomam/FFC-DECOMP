#include "ffc/types.h"

uint32_t func_020822e8(void) {
    int32_t m = *(volatile uint32_t *)0x04000000 & 7;
    uint32_t h = *(volatile uint16_t *)0x0400000C;
    uint32_t r;
    if (m < 5 || !(h & 0x80)) {
        r = *(volatile uint32_t *)0x04000000;
        r = 0x06000000 + (((r & 0x07000000) >> 24) << 16) + (((h & 0x3c) >> 2) << 14);
    } else {
        r = 0;
    }
    return r;
}
