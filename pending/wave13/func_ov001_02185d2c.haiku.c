#include "ffc/types.h"

void func_ov001_02185d2c(uint8_t *p, uint8_t c)
{
    int32_t n = *(int32_t *)(p + 0x54);
    if (n < 0x28) {
        *(int32_t *)(p + 0x54) = n + 1;
        uint8_t *q = p + n;
        q += 0x2c;
        *q = c;
    }
}
