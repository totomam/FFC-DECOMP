#include "ffc/types.h"

extern void func_020586e8(int32_t *p, int32_t a, int32_t b, int32_t c, int32_t d);

void func_020581e4(int32_t *s, int32_t a1, int32_t a2, int32_t a3)
{
    int32_t mul;
    int32_t b;
    int32_t a;
    int32_t *pm;
    int32_t m;
    int32_t x;
    int32_t *q;

    mul = s[7];
    a = a3 * mul;
    b = s[2] - a2 * mul;
    if ((uint32_t)a < (uint32_t)b) {
        pm = &a;
    } else {
        pm = &b;
    }
    m = *pm;
    x = s[1] + a2 * s[7];
    q = (int32_t *)s[4];
    if (x == q[1]) {
        a1 += 2;
        x += 2;
        m -= 2;
    }
    func_020586e8((int32_t *)s[4], a1, x, m, 0);
}
