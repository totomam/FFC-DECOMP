#include "ffc/types.h"

extern int func_0209abd0(double x);
extern double func_02099a74(double a, double b);
extern double func_02099390(double a, double b);
extern double func_020996c0(double a, double b);

double func_02095ae4(double x, double y) {
    uint32_t *px;
    int32_t ix;
    double z, r, hz, a, qx, t1, t2, t3, t4, t5, t6, t7, t8, t9, t10;
    double h, pp, q, s, w;
    uint32_t *hp;

    px = (uint32_t *)&x;
    ix = px[1] & 0x7fffffff;
    if (ix < 0x3e400000) {
        if (func_0209abd0(x) == 0) {
            return 1.0;
        }
    }

    z = func_02099a74(x, x);
    t1 = func_02099a74(-1.13596475577881948265e-11, z);
    t2 = func_02099390(2.08757232129817482790e-09, t1);
    t3 = func_02099a74(z, t2);
    t4 = func_02099390(-2.75573143513906633035e-07, t3);
    t5 = func_02099a74(z, t4);
    t6 = func_02099390(2.48015872894767294178e-05, t5);
    t7 = func_02099a74(z, t6);
    t8 = func_02099390(-1.38888888888741095749e-03, t7);
    t9 = func_02099a74(z, t8);
    t10 = func_02099390(4.16666666666666019037e-02, t9);
    r = func_02099a74(z, t10);

    if (ix < 0x3fd33333) {
        h = func_02099a74(0.5, z);
        pp = func_02099a74(z, r);
        q = func_02099a74(x, y);
        s = func_020996c0(pp, q);
        s = func_020996c0(h, s);
        return func_020996c0(1.0, s);
    }

    if (ix > 0x3fe90000) {
        qx = 0.28125;
    } else {
        ((uint32_t *)&qx)[1] = ix - 0x00200000;
        ((uint32_t *)&qx)[0] = 0;
    }
    hz = func_020996c0(func_02099a74(0.5, z), qx);
    a = func_020996c0(1.0, qx);
    pp = func_02099a74(z, r);
    q = func_02099a74(x, y);
    w = func_020996c0(pp, q);
    s = func_020996c0(hz, w);
    return func_020996c0(a, s);
}
