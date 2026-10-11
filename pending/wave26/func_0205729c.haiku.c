#include "ffc/types.h"

void func_0205729c(int32_t *p, int32_t idx) {
    if (idx != p[7] - 1) {
        int32_t b = p[16] + ((p[20] * idx) >> 16);
        p[13] = p[15] + ((p[19] * idx) >> 16);
        p[14] = b;
        return;
    }
    p[13] = p[17];
    p[14] = p[18];
}
