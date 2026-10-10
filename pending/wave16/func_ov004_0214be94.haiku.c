#include "ffc/types.h"

void func_ov004_0214be94(uint8_t *p, int32_t v)
{
    if (v < 0) {
        v = 0;
    } else if (v > 9) {
        v = 9;
    }
    *(int32_t *)(p + 0xa4) = v;
}
