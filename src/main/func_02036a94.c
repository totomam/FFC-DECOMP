#include "ffc/types.h"

extern int32_t func_020367bc(void *a, int32_t i);
extern void func_02036a10(void *a, int32_t i, int32_t c, int32_t d, int32_t e);

int32_t func_02036a94(uint8_t *a, int32_t b, int32_t c, uint8_t d, int32_t e)
{
    uint32_t i;
    for (i = 0; i < 5; i++) {
        if (a[0x34 + i * 4]) {
            if (func_020367bc(a, i) == b) {
                func_02036a10(a, i, c, d, e);
                return 1;
            }
        }
    }
    return 0;
}
