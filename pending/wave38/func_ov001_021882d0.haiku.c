#include "ffc/types.h"

extern uint32_t func_ov001_0218821c(uint32_t a, uint32_t b, uint32_t c, uint8_t *buf, int n);

uint32_t func_ov001_021882d0(uint32_t a, uint32_t b, uint32_t c, uint32_t d, ...)
{
    uint8_t buf[10];
    uint8_t *p;

    buf[0] = 0xfd;
    buf[1] = 0xfc;
    buf[2] = 0x1e;
    buf[3] = 0x66;
    buf[4] = 0x6a;
    buf[5] = 0xb2;

    d = ((d << 24) & 0xff000000) | ((d << 8) & 0x00ff0000) | ((d >> 8) & 0x0000ff00) | ((d >> 24) & 0xff);
    p = (uint8_t *)&d;
    buf[6] = p[0];
    buf[7] = p[1];
    buf[8] = p[2];
    buf[9] = p[3];

    return func_ov001_0218821c(a, b, c, buf, 10);
}
