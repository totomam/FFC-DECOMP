#include "ffc/types.h"

extern void func_ov000_0215988c(uint32_t a, int32_t b);

uint32_t func_ov000_02159f34(uint32_t a, int32_t b) {
    uint32_t r0 = a;
    int32_t r1 = b;
    if (a == 0) {
        return 0;
    }
    switch (a) {
    case 1:
        r0 = 9;
        r1 = 9 - 10;
        break;
    case 2:
        r0 = 9;
        r1 = 9 - 11;
        break;
    case 3:
        r0 = 6;
        r1 = 6 - 16;
        break;
    case 4:
        r0 = 6;
        r1 = 6 - 26;
        break;
    }
    func_ov000_0215988c(r0, r1 - 0x11558);
    return a;
}
