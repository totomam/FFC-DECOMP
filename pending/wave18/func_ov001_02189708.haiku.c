#include "ffc/types.h"

extern int32_t func_0204e148(int32_t a, uint32_t *x, uint32_t *y);

int func_ov001_02189708(int32_t a, uint8_t *p)
{
    uint32_t x;
    uint32_t y;
    int32_t r;

    r = func_0204e148(a, &x, &y);
    if (r != *(int32_t *)(p + 0x10)) {
        return 0;
    }
    return 1;
}
