/* cflags: -lang c++ */
#include "ffc/types.h"
struct N { int v; N(int x):v(x){} ~N(){} };
inline int sub(const N &a, const N &b) { return a.v - b.v; }
extern "C" void func_ov003_02148174(int *a, int *b) {
    N x(b[0]);
    a[0] = sub(a[0], x);
    N y(b[1]);
    a[1] = sub(a[1], y);
    N z(0), w(0), u(0);
}
