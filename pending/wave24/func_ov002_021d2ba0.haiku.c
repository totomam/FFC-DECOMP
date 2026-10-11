#include "ffc/types.h"

extern int32_t func_02090398(int32_t a, int32_t b, int32_t n);

int32_t func_ov002_021d2ba0(int32_t *p, int32_t a, int32_t b) {
    if (a != b) {
        int32_t x = p[0] + (p[1] << 3) - b;
        func_02090398(a, b, (x / 8) << 3);
        p[1] -= (b - a) / 8;
    }
    return a;
}
