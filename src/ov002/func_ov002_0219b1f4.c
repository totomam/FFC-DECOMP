#include "ffc/types.h"

void *func_ov002_0219b1f4(void *p, int32_t y)
{
    if (y < 0) {
        y = 0;
    }
    if (y > 31) {
        y = 31;
    }
    return (uint8_t *)p + 4 + (y << 5);
}
