#include "ffc/types.h"

extern int32_t data_020b2b70[];

int func_02089858(uint32_t *p) {
    uint32_t a = p[0];
    uint32_t b;
    uint32_t c;
    uint32_t t;
    uint32_t u;

    if (!(a < 100 && p[1] >= 1 && p[1] <= 12 && p[2] >= 1 && p[2] <= 31 &&
          (int)p[3] < 7 && p[1] >= 1 && p[1] <= 12)) {
        return -1;
    }
    b = p[1];
    c = p[2];
    t = (c - 1) + data_020b2b70[b];
    if (b >= 3 && (a & 3) == 0) {
        t++;
    }
    u = t + a * 365;
    return (int)(u + ((a + 3) >> 2));
}
