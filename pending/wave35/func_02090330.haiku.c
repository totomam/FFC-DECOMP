#include "ffc/types.h"

extern uint32_t func_02090320(uint8_t *out, uint16_t ch);
extern void func_020928f0(uint8_t *dst, const uint8_t *src, uint32_t n);

uint32_t func_02090330(uint8_t *dst, const uint16_t *src, uint32_t max)
{
    uint8_t buf[4];
    uint32_t n = 0;
    uint32_t len;
    uint16_t c;

    if (dst == 0 || src == 0) {
        return 0;
    }
    do {
        c = *src;
        if (c == 0) {
            dst[n] = 0;
            break;
        }
        src++;
        len = func_02090320(buf, c);
        if (n + len > max) {
            break;
        }
        func_020928f0(dst + n, buf, len);
        n += len;
    } while (n <= max);
    return n;
}
