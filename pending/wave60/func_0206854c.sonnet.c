/* cflags: -lang c++ */
#include "ffc/types.h"
struct R { int32_t v; R() {} R(int32_t x) : v(x) {} R(const R &o) : v(o.v) {} ~R() {} };
extern "C" int32_t func_02081210(int32_t a, int32_t b);
struct O { virtual void f0(); virtual R f1(); };
inline R shl(const R &a) { return R(a.v << 12); }
inline R dv(const R &a, int32_t d) { return R(func_02081210(a.v, d)); }
inline R zero() { return R(0); }
inline R cp(const R &a) { return R(a); }
extern "C" void func_0206854c(R *out, uint8_t *p)
{
    int32_t d = *(int32_t*)(p + 0x38);
    R a, b;
    const R *s;
    if (d == 0) {
        a = cp(cp(zero()));
        s = &a;
    } else {
        O *o = *(O**)(p + 0x20);
        R t = o->f1();
        b = cp(cp(dv(shl(t), d)));
        s = &b;
    }
    *out = *s;
}
