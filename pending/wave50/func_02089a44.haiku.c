#include "ffc/types.h"

extern int64_t func_0209a76c(int32_t a, int32_t b);

int32_t func_02089a44(int32_t *s)
{
    int32_t t = s[0] + 2000;
    int32_t k = s[1] - 2;
    int32_t c = s[2];
    int32_t hi;
    int32_t lo;
    int32_t q;
    int32_t h4;

    if (k < 1) {
        k += 12;
        t -= 1;
    }

    hi = (int32_t)func_0209a76c(t, 100);
    lo = (int32_t)(func_0209a76c(t, 100) >> 32);
    q = (int32_t)func_0209a76c(26 * k - 2, 10);
    h4 = hi / 4;

    return (int32_t)(func_0209a76c(h4 + (lo / 4 + (lo + (c + q))) + 5 * hi, 7) >> 32);
}
