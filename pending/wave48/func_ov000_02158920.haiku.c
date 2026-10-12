#include "ffc/types.h"

extern void func_02084ca4(int8_t *dst, int8_t *src, uint32_t n);
extern const int8_t data_ov000_02169734[];
extern const int8_t data_ov000_0216971c[];

typedef union {
    int8_t b[8];
    uint32_t w[2];
} Blk;

uint64_t func_ov000_02158920(int32_t p0, int32_t p1, int32_t p2, int32_t p3)
{
    int8_t out[8];
    Blk buf;
    uint32_t i;
    uint32_t a = p0 & 0xffff;
    uint32_t b = p1 & 0xffffff;
    uint32_t c = p2 & 1;
    uint32_t d = p3 & 3;

    buf.w[0] = (a << 27) | (b << 3) | (c << 2) | d;
    buf.w[1] = (b >> 29) | (a >> 5);

    for (i = 0; i < 6; i++) {
        buf.b[i] ^= 0xd6;
    }
    for (i = 0; i < 5; i++) {
        int8_t x = buf.b[i];
        buf.b[i] = (int8_t)((data_ov000_02169734[(x >> 4) & 0xf] << 4) | data_ov000_02169734[x & 0xf]);
    }

    func_02084ca4(buf.b, out, 8);

    for (i = 0; i < 5; i++) {
        buf.b[data_ov000_0216971c[i]] = out[i];
    }

    buf.b[7] = 0;
    buf.b[6] = 0;
    buf.b[5] &= 7;

    buf.w[1] = (buf.w[1] << 1) | (buf.w[0] >> 31);
    buf.w[0] <<= 1;

    buf.b[0] |= (buf.b[5] >> 3) & 1;

    for (i = 0; i < 6; i++) {
        buf.b[i] ^= 0x67;
    }

    buf.b[7] = 0;
    buf.b[6] = 0;
    buf.b[5] &= 7;

    return ((uint64_t)buf.w[1] << 32) | buf.w[0];
}
