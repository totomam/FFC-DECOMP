/* cflags: -lang c++ */
#include "ffc/types.h"
struct V { int32_t x, y; };
struct N { int v; N(int x) : v(x) {} ~N() {} };
inline int add(const N &a, int b) { return a.v + b; }
inline int add2(const N &a, const N &b) { return a.v + b.v; }
extern "C" void func_ov003_0214815c(V *a, V *b);
extern "C" void func_ov003_0214815c(V *a, V *b) {
#if 3==1
    a->x = add(a->x, b->x);
    a->y = add(a->y, b->y);
#elif 3==2
    a->x = add2(a->x, b->x);
    a->y = add2(a->y, b->y);
#elif 3==3
    int bx=b->x; a->x = add2(a->x, bx);
    int by=b->y; a->y = add2(a->y, by);
#else
    int bx=b->x; a->x = add2(bx, a->x);
    int by=b->y; a->y = add2(by, a->y);
#endif
}
