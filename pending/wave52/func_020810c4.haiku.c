/* cflags: -nothumb */
#include "ffc/types.h"

extern int32_t func_02081210(int32_t x, int32_t y);
extern int64_t func_02081260(void);
extern int32_t func_02081278(int32_t x);

void func_020810c4(int32_t a, int32_t b, int32_t c, int32_t d, int32_t e, int32_t f, int32_t *g)
{
    volatile uint32_t *dv = (volatile uint32_t *)0x04000290;
    int32_t v = func_02081210(b, a);
    int64_t q;
    int64_t p;
    int32_t Q;
    int32_t x;

    dv[0] = 0;
    dv[1] = 0x1000;
    dv[2] = d - e;
    dv[3] = 0;

    if (f != 0x1000) {
        v = (v * f) / 4096;
    }

    g[1] = 0;
    g[2] = 0;
    g[3] = 0;
    g[4] = 0;
    g[5] = v;
    g[6] = 0;
    g[7] = 0;
    g[8] = 0;
    g[9] = 0;
    g[11] = -f;
    g[12] = 0;
    g[13] = 0;
    g[15] = 0;

    q = func_02081260();

    dv[0] = 0;
    dv[1] = v;
    dv[2] = c;
    dv[3] = 0;

    if (f != 0x1000) {
        q = (q * (int64_t)f) / 4096;
    }

    p = (int64_t)(2 * d) * e;
    Q = (int32_t)((p + 0x800) >> 12);
    g[10] = (int32_t)((q * (int64_t)(d + e) + 0x80000000LL) >> 32);
    x = (int32_t)((q * (int64_t)Q + 0x80000000LL) >> 32);
    g[14] = x;
    g[0] = func_02081278(x);
}
