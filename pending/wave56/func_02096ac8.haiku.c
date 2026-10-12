#include "ffc/types.h"

extern double func_02095ae4(double x, double y);
extern double func_020996c0(double a, double b);
extern int func_020956cc(double x, double *y);
extern double func_020964a8(double x, double y, int iy);

typedef struct { double a; double b; } S2;

double func_02096ac8(S2 s) {
    double y[2];
    double z = 0.0;
    int n;
    int32_t hi;

    hi = ((int32_t *)&s)[1] & 0x7fffffff;
    if (hi <= 0x3fe921fb) {
        return func_02095ae4(s.a, z);
    }
    if (hi >= 0x7ff00000) {
        return func_020996c0(s.a, s.a);
    }
    n = func_020956cc(s.a, y);
    switch (n & 3) {
    case 0:
        return func_02095ae4(y[0], y[1]);
    case 1:
        return func_020996c0(z, func_020964a8(y[0], y[1], 1));
    case 2:
        return func_020996c0(z, func_02095ae4(y[0], y[1]));
    default:
        return func_020964a8(y[0], y[1], 1);
    }
}
