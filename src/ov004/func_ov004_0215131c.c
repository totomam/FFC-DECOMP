/* cflags: -lang c++ */
#include "ffc/types.h"

struct Vec2 {
    int32_t x;
    int32_t y;
};
struct G { int v; G(int a) : v(a) {} ~G() {} };
inline int sh(const G &g) { return g.v >> 12; }

extern "C" void func_ov004_0215131c(Vec2 *out, Vec2 v) {
    out->x = sh(v.x);
    out->y = sh(v.y);
}
