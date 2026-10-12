#include "ffc/types.h"

extern void func_02090398(int32_t, int32_t, int32_t);
extern void func_02056844(int32_t);

int32_t func_0205f178(int32_t *p, int32_t a, int32_t b, int32_t c)
{
    if (a != 0) {
        int32_t v = p[0];
        int32_t t = b * 4;
        int32_t s = t / 4 * 4;
        func_02090398(v, a, s);
        {
        int32_t d = v + s;
        d += c * 4;
        int32_t q = p[1] * 4;
        int32_t y = a + t;
        func_02090398(d, y, (a + q - y) / 4 * 4);
        }
        func_02056844(a);
    }
    p[1] += c;
    return p[0] + b * 4;
}
