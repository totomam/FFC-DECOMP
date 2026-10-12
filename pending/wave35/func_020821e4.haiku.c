/* cflags: -nothumb */
#include "ffc/types.h"

uint32_t func_020821e4(void) {
    uint32_t a = *(volatile uint32_t *)0x4000000;
    uint32_t b = *(volatile uint16_t *)0x400000E;
    uint32_t c = *(volatile uint32_t *)0x4000000;
    uint32_t r1 = (c & 0x38000000) >> 27;
    uint32_t r2 = r1 << 16;
    uint32_t r1b = (b & 0x1f00) >> 8;

    switch (a & 7) {
    case 0:
    case 1:
    case 2:
        return 0x6000000 + r2 + (r1b << 11);
    case 3:
    case 4:
    case 5:
        if (b & 0x80) {
            return 0x6000000 + (r1b << 14);
        }
        return 0x6000000 + r2 + (r1b << 11);
    case 6:
        return 0;
    default:
        return 0;
    }
}
