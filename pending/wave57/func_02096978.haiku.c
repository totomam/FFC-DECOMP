#include "ffc/types.h"

extern double func_02099390(double a, double b);
extern int func_02099ff0(double a, double b);

double func_02096978(double x)
{
    const double huge = 1.0e300;
    int32_t hi = ((int32_t *)&x)[1];
    uint32_t lo = ((uint32_t *)&x)[0];
    int32_t j0;
    int32_t m;
    uint32_t i;

    j0 = ((hi >> 20) & 0x7ff) - 0x3ff;

    if (j0 < 20) {
        if (j0 < 0) {
            if (func_02099390(huge, x) > 0.0) {
                if (hi < 0) {
                    hi = (int32_t)0x80000000;
                    lo = 0;
                } else if ((hi | lo) != 0) {
                    hi = 0x3ff00000;
                    lo = 0;
                }
            }
            goto done;
        } else {
            m = 0x000fffff >> j0;
            if (((hi & m) | lo) == 0) return x;
            if (func_02099390(huge, x) > 0.0) {
                if (hi > 0) hi += (int32_t)0x00100000 >> j0;
                hi &= ~m;
                lo = 0;
            }
            goto done;
        }
    }

    if (j0 > 51) {
        if (j0 == 1024) return func_02099390(x, x);
        return x;
    }

    i = 0xffffffffu >> (j0 - 20);
    if ((lo & i) == 0) return x;
    if (func_02099390(huge, x) > 0.0) {
        if (hi > 0) {
            if (j0 == 20) {
                hi += 1;
            } else {
                uint32_t j = lo + (1u << (52 - j0));
                if (j < lo) hi += 1;
                lo = j;
            }
        }
        lo &= ~i;
    }
done:
    ((int32_t *)&x)[1] = hi;
    ((uint32_t *)&x)[0] = lo;
    return x;
}
