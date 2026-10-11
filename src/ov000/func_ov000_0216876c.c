#include "ffc/types.h"

int32_t func_ov000_0216876c(int32_t *p, int32_t i)
{
    if (i < 0 || i >= p[0]) {
        return 0;
    }
    return p[5] + p[2] * i;
}
