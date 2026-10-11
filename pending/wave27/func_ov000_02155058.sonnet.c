#include "ffc/types.h"

extern int8_t data_ov000_02169b2c[];
extern int16_t func_0209a76c(void *a, int32_t bits, void *c, int8_t *d, int8_t *e);

void func_ov000_02155058(uint32_t lo, uint32_t hi, uint8_t *p, int8_t *buf)
{
    int16_t n = func_0209a76c(p + 4, 5, p, buf, buf);
    int16_t i;

    for (i = 0; i < n; i++) {
        buf[n - 1 - i] = data_ov000_02169b2c[lo & 0x1f];
        lo = (lo >> 5) | (hi << 27);
        hi >>= 5;
    }
    buf[n] = 0;
}
