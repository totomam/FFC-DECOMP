#include "ffc/types.h"

extern double func_02099a74(double a, double b);
extern double func_02099390(double a, double b);
extern double func_020996c0(double a, double b);
extern int32_t func_0209abd0(double a);

double func_020964a8(double x, double y, int32_t flag) {
    double x2, x3, p, v, w, h, q, s, X, Y, Z, W;

    if ((int32_t)(((uint32_t *)&x)[1] & 0x7fffffff) < 0x3e400000) {
        if (func_0209abd0(x) == 0) {
            return x;
        }
    }

    x2 = func_02099a74(x, x);
    x3 = func_02099a74(x2, x);
    p = func_02099390(0.00833333333332249,
                      func_02099a74(x2,
                          func_02099390(-0.0001984126982985795,
                              func_02099a74(x2,
                                  func_02099390(2.7557313707070068e-06,
                                      func_02099a74(x2,
                                          func_02099390(-2.5050760253406863e-08,
                                              func_02099a74(1.58969099521155e-10, x2))))))));

    if (flag == 0) {
        v = func_02099a74(x2, p);
        w = func_02099390(-0.16666666666666632, v);
        q = func_02099a74(x3, w);
        return func_02099390(x, q);
    }

    h = func_02099a74(0.5, y);
    q = func_02099a74(x3, p);
    s = func_020996c0(h, q);
    X = func_02099a74(x2, s);
    Y = func_020996c0(X, y);
    Z = func_02099a74(-0.16666666666666632, x3);
    W = func_020996c0(Y, Z);
    return func_020996c0(x, W);
}
