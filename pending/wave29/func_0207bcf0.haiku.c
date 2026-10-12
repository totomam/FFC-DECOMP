#include "ffc/types.h"

extern void func_0207bd2c(uint8_t *p);
extern void func_0207c914(uint8_t *p, uint32_t a, uint32_t b);

void func_0207bcf0(uint8_t *p, uint32_t v)
{
    int32_t bit = (int32_t)(*(uint32_t *)(p + 0x118) << 30) >> 31;
    if (bit == 0) {
        func_0207bd2c(p);
        return;
    }
    if (v == 0) {
        func_0207bd2c(p);
        return;
    }
    func_0207c914(p + 0xf0, 0, v);
    *(uint32_t *)(p + 0x118) |= 8;
    *(uint32_t *)(p + 0x158) = 0;
}
