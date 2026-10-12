#include "ffc/types.h"

uint32_t func_0208979c(uint32_t x) {
    int32_t i;
    uint32_t sum = 0;
    uint32_t w;
    for (i = 0; i < 8; i++) {
        if (((x >> (i * 4)) & 0xf) >= 10) {
            return 0;
        }
    }
    i = 0;
    w = 1;
    for (; i < 8; i++) {
        sum += ((x >> (i * 4)) & 0xf) * w;
        w *= 10;
    }
    return sum;
}
