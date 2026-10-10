#include "ffc/types.h"

extern uint8_t data_ov004_02159448[];

void func_ov004_0214fcec(int32_t *out, volatile int32_t a, volatile int32_t b, ...) {
    int32_t *d = (int32_t *)data_ov004_02159448;
    out[1] = ((b + 4) >> 3) + d[0x48 / 4];
    out[0] = ((a + 2) >> 2) + d[0x44 / 4];
}
