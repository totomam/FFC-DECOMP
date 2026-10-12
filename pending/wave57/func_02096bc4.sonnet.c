#include "ffc/types.h"

extern double func_02099390(double a, double b);
extern int func_02099ff0(double a, double b);

double func_02096bc4(double x, ...)
{
    int32_t hi, j0, m;
    uint32_t lo, i, o;

    hi = ((int32_t *)&x)[1];
    lo = ((uint32_t *)&x)[0];
    j0 = ((hi >> 20) & 0x7ff) - 0x3ff;

    if (j0 < 20) {
        if (j0 < 0) {
            if (func_02099390(1e300, x) > 0.0) {
                if (hi >= 0) {
                    lo = 0;
                    hi = 0;
                } else if ((((uint32_t)hi & 0x7fffffffu) | lo) != 0) {
                    hi = (int32_t)0xbff00000u;
                    lo = 0;
                }
            }
        } else {
            m = 0x000fffff;
            m >>= j0;
            if ((((uint32_t)hi & (uint32_t)m) | lo) == 0) {
                return x;
            }
            if (func_02099390(1e300, x) > 0.0) {
                if (hi < 0) {
                    hi += ((0x000fffff + 1) >> j0);
                }
                hi &= ~m;
                lo = 0;
            }
        }
    } else if (j0 > 51) {
        if (j0 == 1024) {
            return func_02099390(x, x);
        }
        return x;
    } else {
        o = lo;
        i = 0xffffffffu >> (j0 - 20);
        if ((lo & i) == 0) {
            return x;
        }
        if (func_02099390(1e300, x) > 0.0) {
            if (hi < 0) {
                if (j0 == 20 || (lo += (1u << (52 - j0))) < o) {
                    hi += 1;
                }
            }
            lo &= ~i;
        }
    }

    ((int32_t *)&x)[1] = hi;
    ((uint32_t *)&x)[0] = lo;
    return x;
}
