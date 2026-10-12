#include "ffc/types.h"

extern uint64_t func_0209a978(uint32_t a, uint32_t b);
extern void func_02084b2c(uint8_t *p, int v, uint32_t n);
extern void func_02084ca4(const uint8_t *src, uint8_t *dst, uint32_t n);
extern int8_t *data_ov000_0216aef4;

int func_ov000_02158d6c(const uint8_t *src, uint32_t n, uint8_t *out, uint32_t outmax)
{
    uint8_t buf[3];
    const uint8_t *end;
    uint8_t *dst;
    uint32_t extra, total, rem, bits, chars, k;

    extra = ((uint32_t)(func_0209a978(n, 3) >> 32) != 0) ? 4 : 0;
    total = ((uint32_t)func_0209a978(n, 3) << 2) + extra;

    if (out == 0) {
        return (int)total;
    }
    if (outmax < total) {
        return -1;
    }

    dst = out;
    end = src + n;
    if (src != end) {
        do {
            rem = (uint32_t)(end - src);
            bits = rem << 3;
            chars = ((uint32_t)(func_0209a978(bits, 6) >> 32) != 0) ? 1 : 0;
            chars += (uint32_t)func_0209a978(bits, 6);

            k = rem;
            if (k >= 3) {
                k = 3;
            }

            func_02084b2c(buf, 0, 3);
            func_02084ca4(src, buf, k);

            dst[0] = (uint8_t)data_ov000_0216aef4[buf[0] >> 2];

            if (chars >= 2) {
                dst[1] = (uint8_t)data_ov000_0216aef4[((buf[0] << 4) & 0x3f) | (buf[1] >> 4)];
            } else {
                dst[1] = 0x2a;
            }

            if (chars >= 3) {
                dst[2] = (uint8_t)data_ov000_0216aef4[((buf[1] << 2) & 0x3f) | (buf[2] >> 6)];
            } else {
                dst[2] = 0x2a;
            }

            if (chars >= 4) {
                dst[3] = (uint8_t)data_ov000_0216aef4[buf[2] & 0x3f];
            } else {
                dst[3] = 0x2a;
            }

            src += k;
            dst += 4;
        } while (src != end);
    }

    return (int)(dst - out);
}
