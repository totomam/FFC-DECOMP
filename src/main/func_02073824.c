#include "ffc/types.h"

extern int32_t func_ov000_021649d0(void);

int32_t func_02073824(void)
{
    int32_t r = func_ov000_021649d0();
    if (r == 0) {
        goto zero;
    }
    if (r == 1) {
        goto one;
    }
    if (r == 2) {
        goto two;
    }
zero:
    return 0;
one:
    return 1;
two:
    return 2;
}
