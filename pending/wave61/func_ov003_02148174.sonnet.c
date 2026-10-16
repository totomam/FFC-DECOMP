/* cflags: -lang c++ */
#include "ffc/types.h"
struct V { int32_t x, y; };
struct Num { int v; int pad[1]; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }
extern "C" void func_ov003_02148174(V *a, const V *b);
extern "C" void func_ov003_02148174(V *a, const V *b) {
    int bx = b->x;
    a->x = diff(a->x, bx);
    int by = b->y;
    a->y = diff(a->y, by);
}
