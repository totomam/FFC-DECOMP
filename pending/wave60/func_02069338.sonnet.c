/* cflags: -lang c++ */
#include "ffc/types.h"
struct P { int32_t x, y; P(int a, int b) : x(a), y(b) {} };
struct R { int32_t a, b, c, d; };
struct O { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual R get(); };
extern "C" P func_02069338(O *o);
extern "C" P func_02069338(O *o) {
    R r = o->get();
    R *q = &r;
    int32_t y = (q->b + q->d) >> 1;
    int32_t x = (q->a + q->c) >> 1;
    return P(x, y);
}
