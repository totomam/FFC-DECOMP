#include "ffc/types.h"

extern void func_ov001_021898f8(int a);
extern int func_0204e0e0(int b);
extern void func_ov001_02188d14(int a, int b);
extern void func_ov001_02189908(void);
extern uint8_t data_ov001_02195798[];

int func_ov001_021893c0(int a, int b)
{
    func_ov001_021898f8(a);
    if (func_0204e0e0(b)) {
        func_ov001_02188d14(3, 0);
        func_ov001_02189908();
        return 0;
    }
    *(int *)(data_ov001_02195798 + 0x10) = b;
    func_ov001_02189908();
    return 1;
}
