#include "ffc/types.h"

void func_ov005_021973d0(uint8_t *p, int32_t x)
{
    if (p[0x89]) {
        if (x == 0) {
            *(int32_t *)(p + 0x84) = 0;
        } else if (x > 0) {
            *(int32_t *)(p + 0x84) = 2;
        } else if (x < 0) {
            *(int32_t *)(p + 0x84) = 1;
        }
    }
}
