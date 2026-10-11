#include "ffc/types.h"

extern int32_t func_ov000_02148d24(int32_t a, int32_t b, int32_t c);

int32_t func_ov000_02158660(int32_t a, int32_t b)
{
    if (func_ov000_02148d24(b, a, 256) != -1) {
        return 1;
    }
    return 0;
}
