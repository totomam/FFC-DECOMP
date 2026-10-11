#include "ffc/types.h"

extern int32_t func_02035cb0(int32_t a, int32_t b);

int32_t func_02035d0c(int32_t a, int32_t b)
{
    if (func_02035cb0(a, b) != 0) {
        return 0;
    }
    if (func_02035cb0(b, a) != 0) {
        return 0;
    }
    return 1;
}
