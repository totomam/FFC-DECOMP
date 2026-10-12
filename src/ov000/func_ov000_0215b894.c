#include "ffc/types.h"

extern void func_ov000_0215a64c(uint32_t a, uint32_t b);

uint32_t func_ov000_0215b894(uint32_t a, uint32_t b)
{
    uint32_t r0 = a;
    uint32_t r1 = b;

    if (a == 0) {
        return 0;
    }
    switch (a) {
    case 1:
        r0 = 9;
        r1 = 9 - 10;
        break;
    case 2:
    case 5:
        r0 = 0;
        r1 = 0;
        a = 0;
        break;
    case 3:
        r0 = 6;
        r1 = 6 - 16;
        break;
    case 4:
        r0 = 6;
        r1 = 6 - 36;
        break;
    case 6:
        r0 = 6;
        r1 = 6 - 76;
        break;
    case 7:
        r0 = 6;
        r1 = 6 - 86;
        break;
    default:
        break;
    }
    if (r0 != 0) {
        func_ov000_0215a64c(r0, r1 - 0x105b8);
    }
    return a;
}
