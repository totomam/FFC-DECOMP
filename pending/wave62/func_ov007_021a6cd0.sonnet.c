/* cflags: -lang c++ */
#include "ffc/types.h"
struct BS { uint32_t *data; uint32_t count; uint32_t cap; };
struct Ref { uint32_t *p; uint32_t m; ~Ref() {} };
extern "C" uint32_t func_0206583c(BS *b, int n);
extern "C" void func_020657e4(BS *b, uint32_t n);
extern "C" void func_ov007_021a6cd0(BS *b, int v);
inline Ref mk(BS *b) {
    Ref r;
    uint32_t i = b->count = b->count + 1;
    i = i - 1;
    r.p = b->data + (i >> 5);
    r.m = 1u << (i & 0x1f);
    return r;
}
extern "C" void func_ov007_021a6cd0(BS *b, int v)
{
    if (b->count == b->cap << 5) {
        func_020657e4(b, func_0206583c(b, 1));
    }
    Ref r = mk(b);
    if (v) {
        *r.p |= r.m;
    } else {
        *r.p &= ~r.m;
    }
}
