#include "ffc/types.h"

extern int32_t func_ov007_021c08a0(int32_t x);

int32_t func_ov007_021c0bc4(uint8_t *a, int32_t u)
{
    int32_t *p = *(int32_t **)(a + 8);

    if (p[0] == 0) {
        return 4;
    }
    if (p[3] <= 0) {
        return 6;
    }
    if (p[2] != 0) {
        return func_ov007_021c08a0(p[2]);
    }
    return 5;
}
