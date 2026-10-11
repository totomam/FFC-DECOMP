#include "ffc/types.h"

extern int32_t func_02006728(void *a, int32_t b, uint32_t c);

int32_t func_02006824(void *a, int32_t b)
{
    if (b < 0) {
        b = 0;
    } else if (b > 0x7f) {
        b = 0x7f;
    }
    *(int32_t *)((uint8_t *)a + 0xc) = b;
    return func_02006728(a, b, 0);
}
