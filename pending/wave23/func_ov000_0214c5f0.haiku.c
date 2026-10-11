#include "ffc/types.h"

uint32_t func_ov000_0214c5f0(uint16_t *p, uint32_t n)
{
    while (n != 0 && p[n - 1] == 0) {
        n--;
    }
    return n;
}
