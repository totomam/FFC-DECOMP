#include "ffc/types.h"

void func_02035be0(uint32_t *p) {
    uint32_t v = *p;
    uint32_t r1;
    uint32_t t;
    v = (v & ~0x1fu) | 6u;
    v &= 0xffffc01fu;
    r1 = 0x32u << 6;
    t = (v | r1) & 0xff803fffu;
    t |= r1 << 9;
    v = (r1 << 18) | (t & 0x7fffffu);
    *p = v;
}
