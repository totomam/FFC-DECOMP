#include "ffc/types.h"
extern int *func_ov001_0217f324(int a, int b);
extern int *func_ov001_0217f30c(int *p);
extern int func_ov001_0217f27c(int a);
extern int func_ov001_0217f2c4(int *p, int v);
extern int func_02099a74(int a, int b, int c, int d);
extern int func_ov001_0217f28c(int a);
int func_ov001_0217f0e8(int a, int b, int *c) {
    int *p = func_ov001_0217f324(a, b);
    int *q;
    int t;
    if (p == 0) return 0;
    t = p[1];
    if (t == 0) {
        q = func_ov001_0217f30c(p);
        return func_ov001_0217f2c4(p, func_ov001_0217f27c(c[0] * q[0]));
    } else if (t == 1) {
        int r;
        q = func_ov001_0217f30c(p);
        r = func_02099a74(c[0], c[1], q[0], q[1]);
        return func_ov001_0217f2c4(p, func_ov001_0217f28c(r));
    }
    return (int)func_ov001_0217f30c(p);
}
