#include "ffc/types.h"

extern int func_ov000_02158680(int a, int b, int c);

int func_ov000_02158590(int a)
{
    int r = 0;
    if (func_ov000_02158680(a, 0, 3)) {
        r = 1;
    }
    return r;
}
