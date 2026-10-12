#include "ffc/types.h"

extern void func_ov000_0215a64c(int a, int b);
extern void func_ov000_0215dbd8(int a, int b);
extern void func_ov000_0215988c(int a, int b);
extern int data_ov000_02170064[];

int func_ov000_0215b7f4(int a)
{
    int r4;
    int r5;
    int *p;
    int *q;

    if (!a) {
        return 0;
    }
    switch (a) {
    case 1:
        r4 = 9;
        r5 = 9;
        r4 -= 10;
        break;
    case 2:
        r4 = 9;
        r5 = 9;
        r4 -= 11;
        break;
    case 3:
        r4 = 6;
        r5 = 6;
        r4 -= 16;
        break;
    case 4:
        r4 = 6;
        r5 = 6;
        r4 -= 26;
        break;
    }

    p = (int *)data_ov000_02170064[1];
    switch (p[9]) {
    case 1:
        r4 -= 0xee48;
        func_ov000_0215a64c(r5, r4);
        break;
    case 2:
        q = (int *)((char *)p + 0x94);
        r4 -= 0xee48;
        if (*q < 1) {
            func_ov000_0215a64c(r5, r4);
        }
        break;
    case 4:
        r4 -= 0x13c68;
        func_ov000_0215dbd8(r5, r4);
        break;
    default:
        r4 -= 0x16378;
        break;
    }
    func_ov000_0215988c(r5, r4);
    return a;
}
