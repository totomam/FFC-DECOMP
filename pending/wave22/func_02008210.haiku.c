#include "ffc/types.h"

extern void func_02079838(int a);
extern void func_02006c44(int a);
extern int data_020a7ea4[];

void func_02008210(int x)
{
    int r1 = x;
    if (r1 < 0) {
        r1 = 0;
    } else if (r1 > 0x7f) {
        r1 = 0x7f;
    }
    data_020a7ea4[1] = r1;
    func_02079838(1);
    func_02006c44(data_020a7ea4[1]);
}
