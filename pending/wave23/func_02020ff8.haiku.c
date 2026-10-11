#include "ffc/types.h"

void func_02020ff8(int32_t *r0, int32_t *r1, int32_t *r2, int32_t *r3) {
    int32_t dy = r2[1] - r3[1];
    int32_t dx = r2[0] - r3[0];
    int32_t x = dx + (*r1 << 3);
    r0[0] = 0;
    r0[1] = 0;
    if (x > 256) {
        r0[0] = x - 256;
    }
    if (dy < 0) {
        r0[1] = dy;
    }
}
