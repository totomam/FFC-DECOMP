#include "ffc/types.h"

void func_ov000_0214cf3c(uint8_t *dst, uint16_t *src, int32_t n) {
    uint8_t *p;
    dst += n - 1;
    while (n > 1) {
        p = dst - 1;
        *dst = (uint8_t)*src;
        n -= 2;
        dst -= 2;
        *p = (uint8_t)(*src >> 8);
        src++;
    }
    if (n > 0) {
        *dst = (uint8_t)*src;
    }
}
