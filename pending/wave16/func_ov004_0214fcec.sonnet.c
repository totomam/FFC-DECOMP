#include "ffc/types.h"

extern int32_t data_ov004_02159448[];

void func_ov004_0214fcec(int32_t *out, volatile int32_t a, volatile int32_t b, ...) {
    int32_t *d = data_ov004_02159448;
    int32_t y = ((b + 4) >> 3) + d[0x12];
    int32_t x = ((a + 2) >> 2) + d[0x11];
    out[1] = y;
    out[0] = x;
}
