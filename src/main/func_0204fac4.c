#include "ffc/types.h"

extern int32_t data_020b03cc[];
extern int32_t data_020b03d0[];

int32_t func_0204fac4(uint32_t idx) {
    int32_t a = data_020b03cc[idx * 2];
    int32_t b = data_020b03d0[idx * 2];
    int32_t p = a * b;
    return (p / 64) * 2;
}
