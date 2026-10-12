#include "ffc/types.h"

extern int32_t func_ov009_0219e428(int32_t x);
extern int32_t func_ov009_021a0388(int32_t x);
extern int32_t func_ov009_021a0370(int32_t x);
extern int32_t func_0209a76c(int32_t x, uint32_t y);
extern void func_0202b704(uint32_t a, uint32_t b, int32_t c, uint32_t d);
extern uint32_t data_020a7d0a;

void func_ov009_021a1e0c(int32_t *p, uint32_t a, int32_t x, int32_t y, int32_t z)
{
    int32_t val;

    if (p[0x7d] < func_ov009_0219e428(x)) {
        return;
    }
    if (p[0x7d] >= func_ov009_0219e428(y + z)) {
        return;
    }
    if (p[0x7d] >= func_ov009_0219e428(y)) {
        if (func_ov009_021a0388(p[0x78]) == 0) {
            val = func_0209a76c(func_ov009_021a0370(p[0x78]) << 12, 31);
        } else {
            val = 0;
        }
    } else {
        val = 0x1000;
    }
    {
        int32_t *q = p + a;
        func_0202b704(q[0x70], (uint16_t)data_020a7d0a, val, q[0x72]);
    }
}
