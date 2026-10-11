#include "ffc/types.h"

extern void func_020889e8(uint32_t x);

void func_020889f4(uint32_t r0) {
    uint32_t r2 = 1;
    uint32_t r1 = *(volatile uint16_t *)0x4004004;
    r1 &= r2;
    if (r1 == 1) {
        r2 = 2;
    }
    r0 <<= r2;
    if (r0 > 0x10) {
        r0 -= 0x10;
        func_020889e8(r0);
    }
}
