#include "ffc/types.h"

extern void func_02090398(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_02056844(uint32_t a);

uint32_t func_0206f340(uint32_t *p, uint32_t x, uint32_t y, uint32_t z) {
    if (x != 0) {
        func_02090398(p[0], x, y, z, p[0]);
        func_02090398(p[0] + y + z, x + y, p[1] + x - (x + y), z, p[0]);
        func_02056844(x);
    }
    p[1] += z;
    return p[0] + y;
}
