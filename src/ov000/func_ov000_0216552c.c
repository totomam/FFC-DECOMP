#include "ffc/types.h"

extern int32_t func_ov000_0214ee04(int32_t a, int32_t b, int32_t c, int32_t d, uint8_t *buf);
extern int32_t func_ov000_02165408(int32_t a, int32_t b);

int32_t func_ov000_0216552c(int32_t a, int32_t b, int32_t c, int32_t d, const uint8_t *src, uint32_t x)
{
    uint8_t buf[8];
    const uint8_t *s = src;
    uint8_t *dst = buf;
    uint32_t n = 8;
    do {
        *dst++ = *s++;
    } while (--n != 0);
    buf[0] = x;
    return func_ov000_02165408(func_ov000_0214ee04(a, b, c, d, buf), -1);
}
