#include "ffc/types.h"

extern void func_ov000_0215dbd8(int a, int b);

int func_ov000_02161b10(int x, int unused, int y)
{
    int a;
    int b;

    if (x == 0) {
        return 0;
    }

    switch (x) {
    case 1:
        a = 9;
        b = a - 10;
        break;
    case 2:
        a = 6;
        b = a - 56;
        break;
    case 3:
        a = 6;
        b = a - 36;
        break;
    default:
        a = x;
        b = y;
        break;
    }

    func_ov000_0215dbd8(a, b - 0x14ff0);
    return x;
}
