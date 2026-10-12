#include "ffc/types.h"

extern uint32_t func_020780d8(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_0207adbc(uint32_t a, uint32_t b);
extern void func_020780f8(uint32_t a);

uint32_t func_0207abbc(uint32_t p, uint32_t len)
{
    uint32_t end = p + len;
    uint32_t s = (p + 3) & ~3u;
    uint32_t r;

    if (s > end) {
        return 0;
    }
    if (end - s < 16) {
        return 0;
    }
    r = func_020780d8(s + 16, end - s - 16, 0);
    if (r == 0) {
        return 0;
    }
    if (func_0207adbc(s, r) == 0) {
        func_020780f8(r);
        return 0;
    }
    return s;
}
