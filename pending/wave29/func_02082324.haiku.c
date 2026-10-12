#include "ffc/types.h"

uint32_t func_02082324(void) {
    int32_t mode = *(volatile uint32_t *)0x04000000 & 7;
    uint32_t h = *(volatile uint16_t *)0x0400000E;
    if (mode < 3 || (mode < 6 && !(h & 0x80))) {
        uint32_t v = *(volatile uint32_t *)0x04000000;
        uint32_t r2 = ((v & 0x07000000) >> 24) << 16;
        r2 = r2 + 0x06000000;
        return r2 + (((h & 0x3c) >> 2) << 14);
    }
    return 0;
}
