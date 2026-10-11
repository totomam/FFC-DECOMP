#include "ffc/types.h"

uint32_t func_020812c8(void) {
    while (*(volatile uint16_t *)0x40002b0 & 0x8000) {}
    {
        uint32_t v = *(volatile uint32_t *)0x40002b4;
        return (v + (0x40002b4 >> 17)) >> 10;
    }
}
