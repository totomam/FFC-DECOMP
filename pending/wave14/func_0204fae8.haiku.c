#include "ffc/types.h"

extern int32_t data_020b03cc[];

int32_t func_0204fae8(int32_t a, int32_t idx, int32_t b, int32_t c) {
    int32_t v = data_020b03cc[idx * 2];
    int32_t t = a + c * (v >> 3) * 2;
    return t + b * 2;
}
