#include "ffc/types.h"

extern volatile uint16_t data_0214136c;
extern volatile uint16_t data_020b2944;

void func_020819e8(uint16_t a, uint32_t b, uint32_t c) {
    uint32_t reg = *(volatile uint32_t *)0x04000000;
    uint32_t hi;

    data_0214136c = a;
    hi = a;
    if (data_020b2944 == 0) {
        hi = 0;
    }
    reg = (hi << 16) | (reg & 0xfff0fff0);
    reg |= b;
    reg |= (c << 3);
    *(volatile uint32_t *)0x04000000 = reg;
    if (data_0214136c == 0) {
        data_020b2944 = 0;
    }
}
