#include "ffc/types.h"

extern int32_t func_ov002_0219c5d8(uint8_t *p, uint32_t m);
extern int32_t func_ov002_021ae6a4(int32_t r);
extern void func_ov002_021bd85c(uint32_t v);

int32_t func_ov002_0219c1c0(uint8_t *p, uint32_t x)
{
    uint32_t m;
    int32_t r;

    switch (x) {
    case 0:
        m = 0;
        break;
    case 1:
        m = 3;
        break;
    case 2:
        m = 4;
        break;
    default:
        m = 7;
        break;
    }

    r = func_ov002_0219c5d8(p, m);
    if (r == 0) {
        func_ov002_021bd85c(*(uint32_t *)(p + x * 4 + 0x11C));
        return 0;
    }

    if (func_ov002_021ae6a4(r) == 8) {
        func_ov002_021bd85c(*(uint32_t *)(p + x * 4 + 0x11C));
        return 0;
    }

    return 1;
}
