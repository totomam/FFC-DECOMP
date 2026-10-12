#include "ffc/types.h"

extern double func_020964a8(double x, double y, int32_t iy);
extern double func_020996c0(double a, double b);
extern int32_t func_020956cc(double x, double *y);
extern double func_02095ae4(double x, double y);

double func_02096f00(double x)
{
    int32_t ix;
    double y[2];
    int32_t n;
    double z;

    z = 0.0;
    ix = ((int32_t *)&x)[1] & 0x7fffffff;
    if (ix <= 0x3fe921fb) {
        return func_020964a8(x, z, 0);
    }
    if (ix >= 0x7ff00000) {
        return func_020996c0(x, x);
    }
    n = func_020956cc(x, y);
    switch (n & 3) {
    case 0:
        return func_020964a8(y[0], y[1], 1);
    case 1:
        return func_02095ae4(y[0], y[1]);
    case 2:
        return func_020996c0(z, func_020964a8(y[0], y[1], 1));
    default:
        return func_020996c0(z, func_02095ae4(y[0], y[1]));
    }
}
