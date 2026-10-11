#include "ffc/types.h"

extern void func_02090398(uint32_t a, uint32_t b, uint32_t c);
extern void func_02056844(uint32_t a);

uint32_t func_0206f340(uint32_t *p, uint32_t x, uint32_t y, uint32_t z) {
    if (x != 0) {
        uint32_t t = p[0];
        uint32_t a, b;
        func_02090398(t, x, y);
        a = t + y;
        b = x + y;
        func_02090398(a + z, b, (x + p[1]) - b);
        func_02056844(x);
    }
    p[1] += z;
    return p[0] + y;
}
