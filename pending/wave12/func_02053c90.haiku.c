/* cflags: -lang c++ */
#include "ffc/types.h"

struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }

struct Obj { int32_t a; int32_t b; };

extern "C" void func_02053c90(Obj *p) {
    int n = p->b;
    p->b = diff(n, n);
}
