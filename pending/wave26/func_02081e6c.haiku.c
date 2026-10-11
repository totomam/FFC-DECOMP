#include "ffc/types.h"

void func_02081e6c(int32_t a, uint32_t b, uint32_t c, uint16_t d) {
    if (a != 0) {
        uint32_t t;
        uint32_t old;
        *(volatile uint16_t *)0x400035c = d;
        t = (c << 8) | (b << 6);
        old = *(volatile uint16_t *)0x4000060;
        old = old & 0xffffc0bf;
        t = t + 0x80;
        *(volatile uint16_t *)0x4000060 = (uint16_t)(t | old);
    } else {
        *(volatile uint16_t *)0x4000060 &= 0xcf7f;
    }
}
