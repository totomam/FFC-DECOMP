/* cflags: -lang c++ */
#include "ffc/types.h"

struct S {
    uint32_t w[22];
    S();
    void f(uint32_t a, uint32_t b);
};
extern "C" void func_ov006_021a2964(void *dst, S *buf);

extern "C" void func_ov006_021a3288(void *dst, uint32_t a, uint32_t b)
{
    S buf;
    buf.f(a, b);
    func_ov006_021a2964(dst, &buf);
}
