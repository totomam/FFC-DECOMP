#include "ffc/types.h"

extern int32_t func_ov000_0214ee04(void *a, int32_t b, int32_t c, int32_t d, int32_t e);

int32_t func_ov006_021a0bb8(void *a0, int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
    int32_t r = func_ov000_0214ee04(a0, a3, a4, 0, a1);
    if (r < 0) {
        return -4;
    }
    return r;
}
