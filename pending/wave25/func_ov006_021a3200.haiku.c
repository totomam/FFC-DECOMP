#include "ffc/types.h"

void func_ov006_021a3200(uint8_t *r0, uint32_t *r1, uint32_t r2) {
    uint32_t r4 = 0;
    uint8_t *r3;
    if (r4 >= r2) {
        return;
    }
    do {
        r3 = r0 + r4;
        r0[r4] = *r1;
        r3[1] = *r1 >> 8;
        r3[2] = *r1 >> 16;
        r3[3] = *r1 >> 24;
        r4 += 4;
        r1++;
    } while (r4 < r2);
}
