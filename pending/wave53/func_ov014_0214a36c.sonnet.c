/* cflags: -nothumb */
#include "ffc/types.h"

extern uint64_t func_ov014_02149be4(int32_t a, int16_t *b);
extern void func_ov014_0214a190(void);

void func_ov014_0214a36c(int32_t *p)
{
    int32_t *c = (int32_t *)((char *)p + 8);
    int32_t *ss = (int32_t *)((char *)c + 0x190);
    int16_t *out;
    int32_t stride = p[0x1cc / 4];
    int32_t sb;
    int32_t v;
    int32_t t, t2, m, y;
    int i, k;
    uint64_t rt;

    rt = func_ov014_02149be4(p[0], (int16_t *)p[1]);
    out = (int16_t *)(uint32_t)(rt >> 32);

    func_ov014_0214a190();
    func_ov014_0214a190();
    func_ov014_0214a190();
    func_ov014_0214a190();

    sb = ss[9];

    for (i = 256; i != 0; i--) {
        v = out[0];
        for (k = 7; k >= 0; k--) {
            t = c[k] * ss[k] + 0x4000;
            v -= t >> 15;
            t2 = c[k] * v + 0x4000;
            ss[k + 1] = ss[k] + (t2 >> 15);
        }
        ss[0] = v;
        m = sb * 0x7fff + 0x4000;
        sb = v + (m >> 15);
        y = sb + sb;
        if (y < -0x8000) y = -0x8000;
        if (y > 0x7fff) y = 0x7fff;
        out[0] = (int16_t)y;
        out = (int16_t *)((char *)out + stride);
    }
    ss[9] = sb;
}
