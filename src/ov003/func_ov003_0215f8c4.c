#include "ffc/types.h"

extern int32_t func_0209a76c(int32_t sum, int32_t a);
extern void func_ov003_0215e214(int32_t s19, int32_t x1, int32_t x2, int32_t x3);

void func_ov003_0215f8c4(int32_t *s, int32_t x)
{
    int32_t a = s[7];
    int32_t d = a - x;
    int32_t *q = (int32_t *)s[16];
    int32_t r1;
    int32_t r2;
    int32_t r3;

    r1 = func_0209a76c((s[13] >> 5) * d + (q[0] >> 5) * x, a);
    r2 = func_0209a76c((s[14] >> 5) * d + (q[1] >> 5) * x, a);
    r3 = func_0209a76c((s[15] >> 5) * d + (q[2] >> 5) * x, a);
    func_ov003_0215e214(s[19], r1 << 5, r2 << 5, r3 << 5);
}
