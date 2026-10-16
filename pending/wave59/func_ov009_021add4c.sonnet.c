/* cflags: -lang c++ */
#include "ffc/types.h"
struct P { int32_t x, y; P(int a, int b) : x(a), y(b) {} };
struct R { P a, b; R(const P&x, const P&y) : a(x), b(y) {} };
inline void mk(R *o, P hi, const P &lo) { R t(hi, lo); o->a = t.b; o->b = t.a; }
extern "C" void func_ov009_021add4c(R *out, uint8_t *self);
extern "C" void func_ov009_021add4c(R *out, uint8_t *self) {
    mk(out, P(*(int32_t*)(self + 0x94) + 0x28, *(int32_t*)(self + 0x98) + 0xe), *(P*)(self + 0x94));
}
