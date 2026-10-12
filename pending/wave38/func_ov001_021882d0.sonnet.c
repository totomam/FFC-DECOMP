#include "ffc/types.h"

extern uint32_t func_ov001_0218821c(uint32_t a, uint32_t b, uint32_t c, uint8_t *buf, int n);

static inline uint32_t bswap(uint32_t v)
{
    return (v << 24) | ((v << 8) & 0x00ff0000) | ((v >> 8) & 0x0000ff00) | (v >> 24);
}

uint32_t func_ov001_021882d0(uint32_t a, uint32_t b, uint32_t c, uint32_t d, ...)
{
    uint8_t buf[10];
    uint8_t *dst;
    uint8_t *src;

    buf[0] = 0xfd;
    buf[1] = 0xfc;
    buf[2] = 0x1e;
    buf[3] = 0x66;
    buf[4] = 0x6a;
    buf[5] = 0xb2;

    d = (uint8_t)(d >> 24) | ((d >> 8) & 0xff00) | ((d << 8) & 0xff0000) | ((d << 24) & 0xff000000);
    dst = buf + 6;
    src = (uint8_t *)&d;
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];

    return func_ov001_0218821c(a, b, c, buf, 10);
}
