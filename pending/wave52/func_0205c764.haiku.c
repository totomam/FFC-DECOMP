#include "ffc/types.h"

extern int64_t func_0209a978(uint32_t a, uint32_t b);
extern void func_02090398(uint32_t dst, uint32_t val, int32_t len);

void func_0205c764(uint32_t *p, uint32_t *a, uint32_t *b)
{
    int32_t hi = (int32_t)(func_0209a978(p[1] + p[2], p[3]) >> 32);
    uint32_t r7 = p[0] + (uint32_t)(hi << 2);

    if (*a <= *b) {
        func_02090398(r7, *a, (((int32_t)(*b - *a)) / 4) * 4);
        p[2] += ((int32_t)(*b - *a)) / 4;
    } else {
        int32_t x = (((int32_t)(a[3] - *a)) / 4) * 4;
        func_02090398(r7, *a, x);
        func_02090398(r7 + x, b[1], (((int32_t)(*b - b[1])) / 4) * 4);
        p[2] += (((int32_t)(a[3] - *a)) / 4) + (((int32_t)(*b - b[1])) / 4);
    }
}
