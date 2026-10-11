#include "ffc/types.h"

extern int func_ov004_0214f7ac(int a);
extern int func_ov004_0214f7c0(int a);

int func_ov004_0214f7d4(int a)
{
    if (func_ov004_0214f7ac(a) != 0 || func_ov004_0214f7c0(a) != 0) {
        return 1;
    }
    return 0;
}
