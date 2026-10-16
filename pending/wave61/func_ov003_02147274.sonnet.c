/* cflags: -lang c++ */
#include "ffc/types.h"
struct V { int32_t x, y; V(){} V(int32_t a,int32_t b):x(a),y(b){} };
inline V add(const V &a, const V &b) { return V(a.x + b.x, a.y + b.y); }
extern "C" void func_ov003_02147274(V *o, V *a, V *b);
extern "C" void func_ov003_02147274(V *o, V *a, V *b) {
    V t[2];
    *o = add(*a, *b);
}
