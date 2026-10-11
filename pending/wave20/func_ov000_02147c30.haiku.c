#include "ffc/types.h"

extern int func_ov000_02147ba0(int a, int b, int c, int d);

int func_ov000_02147c30(int a, int b, int c, int d, int e, int f)
{
    int r = func_ov000_02147ba0(a, b, e, f);
    if (r == 0) {
        return r;
    }
    if (d == 0) {
        return r;
    }
    return func_ov000_02147ba0(c, d, e, 0);
}
