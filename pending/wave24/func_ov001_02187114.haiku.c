#include "ffc/types.h"

extern void func_ov001_021870e8(uint32_t a, uint32_t b);

void func_ov001_02187114(uint32_t a, uint32_t x) {
    uint32_t m = 0xff000000;
    uint32_t t1 = x << 24;
    uint32_t t2 = (0x00ff0000 & (x << 8));
    uint32_t t3 = ((x >> 24) << 24) >> 24;
    uint32_t r1 = ((x >> 8) & 0xff00) | t3;
    uint32_t s;
    uint32_t r4;
    r1 = r1 | t2;
    s = (t1 & m) | r1;
    r4 = (s << 24) | 0;
    r4 = r4 | ((s & 0xff00) << 8);
    r4 = ((s & 0x00ff0000) >> 8) | r4;
    r1 = ((s & m) >> 24) | r4;
    func_ov001_021870e8(a, r1);
}
