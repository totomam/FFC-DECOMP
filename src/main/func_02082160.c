/* cflags: -nothumb */
#include "ffc/types.h"

uint32_t func_02082160(void) {
    volatile uint32_t *dispcnt = (volatile uint32_t *)0x4000000;
    volatile uint16_t *bg0cnt = (volatile uint16_t *)0x400000c;
    uint32_t mode = *dispcnt & 7;
    uint32_t cnt = *bg0cnt;
    uint32_t base = (*dispcnt & 0x38000000) >> 27;
    uint32_t tile = base << 16;
    uint32_t sbb = (cnt & 0x1f00) >> 8;

    switch (mode) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        return tile + 0x6000000 + (sbb << 11);
    case 5:
        if (cnt & 0x80) {
            return (sbb << 14) + 0x6000000;
        }
        return tile + 0x6000000 + (sbb << 11);
    case 6:
        return 0x6000000;
    default:
        return 0;
    }
}
