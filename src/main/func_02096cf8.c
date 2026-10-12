#include "ffc/types.h"

extern double func_02099a74(double a, double b);

typedef union {
    double d;
    struct {
        uint32_t lo;
        uint32_t hi;
    } s;
} DU;

double func_02096cf8(DU x, int32_t *eptr, ...) {
    int32_t hx;
    int32_t lx;

    hx = x.s.hi & 0x7fffffff;
    lx = x.s.lo;
    *eptr = 0;
    if (hx >= 0x7ff00000 || (hx | lx) == 0) {
        return x.d;
    }
    if (hx < (1 << 20)) {
        x.d = func_02099a74(x.d, 1.8014398509481984e16);
        hx = x.s.hi & 0x7fffffff;
        *eptr = -54;
    }
    *eptr += (hx >> 20) - 1022;
    x.s.hi = (x.s.hi & 0x800fffff) | 0x3fe00000;
    return x.d;
}
