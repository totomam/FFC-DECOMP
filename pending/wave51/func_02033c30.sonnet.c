#include "ffc/types.h"

extern uint32_t data_020ae258[];
extern uint32_t func_020817c8(int32_t first, int32_t second);
extern int32_t func_02081210(int32_t a, int32_t b);
extern int32_t func_0209a76c(int32_t a, int32_t b);

int32_t func_02033c30(int32_t unused, int32_t idx, int32_t x0, int32_t y, int32_t a, int32_t b, int32_t c)
{
    int32_t sub;
    int32_t r;
    int32_t r4;

    sub = b - 1;
    if (sub > 3 || sub < 0) {
        sub = 0;
    }

    if (idx == 10) {
        return y;
    }

    if (idx < 10) {
        r = (int32_t)func_020817c8(y * 4096 - x0 * 4096, data_020ae258[sub * 10 + idx]);
        r = x0 * 4096 + r;
    } else {
        r = (int32_t)func_020817c8(a * 4096 - y * 4096, (idx - 10) * 4096);
        r = func_02081210(r, 10 * 4096);
        r = y * 4096 + r;
    }

    r4 = r >> 12;
    if (c != 0) {
        r4 += func_0209a76c(c * (a - y), 100) / 4;
    }
    return r4;
}
