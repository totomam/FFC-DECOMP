#include "ffc/types.h"

extern void func_ov000_0215dbd8(int32_t a, int32_t b);

uint32_t func_ov000_02161a1c(uint32_t a, int32_t b) {
    int32_t r0 = (int32_t)a;
    int32_t r1 = b;

    if (a == 0) {
        return 0;
    }
    switch (a) {
    case 1:
        r0 = 6;
        r1 = 6 - 0x38;
        break;
    case 2:
        r0 = 6;
        r1 = 6 - 0x24;
        break;
    case 3:
        r0 = 6;
        r1 = 6 - 0x1a;
        break;
    case 4:
        r0 = 6;
        r1 = 6 - 0x2e;
        break;
    case 5:
        r0 = 9;
        r1 = 9 - 0xa;
        break;
    case 6:
        r0 = 9;
        r1 = 9 - 0xb;
        break;
    }
    func_ov000_0215dbd8(r0, r1 - 0x14c08);
    return a;
}
