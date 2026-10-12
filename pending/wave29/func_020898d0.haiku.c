#include "ffc/types.h"

extern int32_t func_02089858(uint32_t a, uint32_t b);
extern int32_t func_020898b8(uint32_t a);
extern long long func_0209a71c(long long first, long long second);

long long func_020898d0(uint32_t a, uint32_t b)
{
    int32_t x = func_02089858(a, b);
    int32_t y;

    if (x == -1) {
        return -1;
    }
    y = func_020898b8(b);
    if (y == -1) {
        return -1;
    }
    return (long long)y + func_0209a71c((long long)x, 0x15180LL);
}
