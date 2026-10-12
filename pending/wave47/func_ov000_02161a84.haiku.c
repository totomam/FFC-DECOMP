#include "ffc/types.h"

extern int32_t func_ov000_0215b594(void);
extern void func_ov000_0215a64c(int32_t a, int32_t b);
extern void func_ov000_0215dbd8(int32_t a, int32_t b);
extern void func_ov000_02159014(int32_t a, int32_t b);

int32_t func_ov000_02161a84(int32_t a)
{
    int32_t x;
    int32_t y;

    if (a == 0) {
        return 0;
    }

    switch (a) {
    case 1:
        y = 6;
        x = 6 - 0x38;
        break;
    case 2:
        y = 6;
        x = 6 - 0x42;
        break;
    case 3:
        y = 6;
        x = 6 - 0x24;
        break;
    case 4:
        y = 6;
        x = 6 - 0x56;
        break;
    case 5:
        y = 6;
        x = 6 - 0x1a;
        break;
    }

    switch (func_ov000_0215b594()) {
    case 2:
        func_ov000_0215a64c(y, x - 0xfa00);
        break;
    case 4:
        func_ov000_0215dbd8(y, x - 0x14820);
        break;
    default:
        func_ov000_02159014(y, x - 0x16f30);
        break;
    }
    return a;
}
