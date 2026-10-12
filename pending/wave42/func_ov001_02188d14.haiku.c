#include "ffc/types.h"

extern void func_ov000_02159014(int32_t r0, uint32_t r1);

void func_ov001_02188d14(uint32_t x, uint32_t y)
{
    switch (x) {
    case 1:
        func_ov000_02159014(9, 0xffff86e7);
        return;
    case 3:
        func_ov000_02159014(0xe, 0xffff86d4);
        return;
    case 4:
        func_ov000_02159014(0xd, 0xffff86c0);
        return;
    case 7:
        func_ov000_02159014(0xd, 0xffff86e8 - y);
        return;
    case 5:
        func_ov000_02159014(0xd, 0xffff86c0);
        return;
    case 8:
        func_ov000_02159014(9, 0xffff86df);
        return;
    case 2:
        func_ov000_02159014(0xd, 0xffff86de);
        return;
    default:
        func_ov000_02159014(9, 0xffff86df);
        return;
    case 0:
    case 6:
        return;
    }
}
