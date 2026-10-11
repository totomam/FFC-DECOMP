#include "ffc/types.h"

extern int func_ov000_021655ac(int a, int b, int *c, int d);

int func_ov000_02165724(int a)
{
    int r = 0;
    int x = 0;
    if (func_ov000_021655ac(a, 0, &x, 0) == 1) {
        r = x;
    }
    return r;
}
