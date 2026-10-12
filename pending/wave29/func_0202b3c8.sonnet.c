/* cflags: -lang c++ */
#include "ffc/types.h"
struct Flag { uint8_t v; Flag(uint8_t x) : v(x) {} };
extern "C" void func_0202d0c8(uint8_t *a, uint32_t *b, Flag c);
extern "C" void func_0202b3c8(uint8_t *p, uint32_t *src);
extern "C" void func_0202b3c8(uint8_t *p, uint32_t *src) {
    uint32_t cnt = *(uint32_t *)(p + 360);
    uint32_t cap = *(uint32_t *)(p + 364);
    Flag f(0);
    if (cnt < cap) {
        uint32_t n = cnt + 1;
        *(uint32_t *)(p + 360) = n;
        uint32_t *d = (uint32_t *)(*(uint8_t **)(p + 356) + (n - 1) * 16);
        d[0] = src[0]; d[1] = src[1]; d[2] = src[2]; d[3] = src[3];
    } else {
        func_0202d0c8(p + 356, src, f);
    }
}
