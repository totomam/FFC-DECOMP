#include "ffc/types.h"

extern void func_ov000_0215dbd8(uint32_t a, uint32_t b);

int func_ov000_02161b50(int x)
{
    if (x == 0) {
        return 0;
    }
    switch (x) {
    case 1:
        return 1;
    case 2:
        return 2;
    case 3:
        return 3;
    default:
        break;
    }
    if (6 != 0) {
        func_ov000_0215dbd8(6, 0xfffeb007);
    }
    return x;
}
