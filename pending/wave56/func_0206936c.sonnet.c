/* cflags: -lang c++ */
#include "ffc/types.h"
struct V2 { uint32_t a, b; V2(){} V2(const V2&o):a(o.a),b(o.b){} };
struct V4 { uint32_t a, b, c, d; V4(){} V4(const V4&o):a(o.a),b(o.b),c(o.c),d(o.d){} };
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual V2 get2();
    virtual V4 get4();
};
extern "C" void func_0206936c(uint32_t *out, Obj *obj, uint32_t idx);
extern "C" void func_0206936c(uint32_t *out, Obj *obj, uint32_t idx)
{
    V4 buf = obj->get4();
    uint32_t x, y;
    switch (idx) {
    default: {
        V2 b = obj->get2();
        x = b.a; out[2] = x; y = b.b; out[3] = y; out[0] = x; out[1] = y;
        return; }
    case 1:
        y = buf.b; out[0] = buf.a; out[1] = y; y = buf.d; out[2] = buf.a; out[3] = y; return;
    case 3:
        y = buf.b; out[0] = buf.c; out[1] = y; y = buf.d; out[2] = buf.c; out[3] = y; return;
    case 4:
        y = buf.d; out[0] = buf.a; out[1] = y; y = buf.d; out[2] = buf.c; out[3] = y; return;
    case 2:
        y = buf.b; out[0] = buf.a; out[1] = y; y = buf.b; out[2] = buf.c; out[3] = y; return;
    }
}
