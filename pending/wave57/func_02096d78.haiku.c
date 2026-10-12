#include "ffc/types.h"

extern int func_02090288(double x);
extern int func_0209a1c8(double a, double b);
extern double func_02099a74(double a, double b);
extern double func_02099390(double a, double b);
extern double func_02096aa8(double a, double b);

typedef union {
    double d;
    struct { uint32_t lo; uint32_t hi; } w;
} DU;

double func_02096d78(DU x, int n, ...)
{
    int32_t k;
    uint32_t hx;

    if (func_02090288(x.d) <= 2 || func_0209a1c8(0.0, x.d) == 0) {
        return x.d;
    }

    hx = x.w.hi;
    k = (int32_t)((hx & 0x7ff00000) >> 20);
    if (k == 0) {
        if ((x.w.lo | (hx & 0x7fffffff)) == 0) {
            return x.d;
        }
        x.d = func_02099a74(x.d, 1.8014398509481984e16);
        hx = x.w.hi;
        k = (int32_t)((hx & 0x7ff00000) >> 20) - 54;
        if (n < -50000) {
            return func_02099a74(1e-300, x.d);
        }
    }
    if (k == 0x7ff) {
        return func_02099390(x.d, x.d);
    }
    k = k + n;
    if (k > 0x7fe) {
        return func_02099a74(1e300, func_02096aa8(1e300, x.d));
    }
    if (k > 0) {
        x.w.hi = (x.w.hi & 0x800fffff) | ((uint32_t)k << 20);
        return x.d;
    }
    if (k <= -54) {
        if (n > 50000) {
            return func_02099a74(1e300, func_02096aa8(1e300, x.d));
        }
        return func_02099a74(1e-300, func_02096aa8(1e-300, x.d));
    }
    x.w.hi = (x.w.hi & 0x800fffff) | ((uint32_t)(k + 54) << 20);
    return func_02099a74(5.5511151231257827e-17, x.d);
}
