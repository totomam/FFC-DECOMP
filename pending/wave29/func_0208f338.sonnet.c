/* cflags: -nothumb */
#include "ffc/types.h"

void func_0208f338(uint8_t *ctx, const uint8_t *in, int32_t len, uint8_t *out)
{
    uint8_t *s = ctx + 4;
    uint32_t x = ((uint32_t)ctx[0] << 24) + 0x1000000;
    uint32_t y = (uint32_t)ctx[1] << 24;
    uint8_t a, b, c, k;

    a = s[x >> 24];
    while (--len >= 0) {
        y += (uint32_t)a << 24;
        b = s[y >> 24];
        c = *in++;
        s[x >> 24] = b;
        s[y >> 24] = a;
        k = s[(uint8_t)(a + b)];
        x += 0x1000000;
        a = s[x >> 24];
        *out++ = c ^ k;
    }
    s[-4] = (x - 0x1000000) >> 24;
    s[-3] = y >> 24;
}
