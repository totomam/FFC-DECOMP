#include "ffc/types.h"

extern int func_0208ac40(void *out, uint16_t a, uint16_t b, uint8_t c, uint8_t d,
                         uint16_t e, uint16_t f, uint8_t g, uint8_t h);

int func_0208a858(uint16_t *out)
{
    uint8_t *base = (uint8_t *)0x2fffc80;
    uint16_t a = *(uint16_t *)(base + 0x58);
    uint16_t b = *(uint16_t *)(base + 0x5a);
    uint8_t c = *(uint8_t *)(base + 0x5c);
    uint8_t d = *(uint8_t *)(base + 0x5d);
    uint16_t e = *(uint16_t *)(base + 0x5e);
    uint16_t f = *(uint16_t *)(base + 0x60);
    uint8_t g = *(uint8_t *)(base + 0x62);
    uint8_t h = *(uint8_t *)(base + 0x63);

    if (a == 0 && e == 0 && b == 0 && f == 0) {
        goto zero;
    }
    if (func_0208ac40(out, a, b, c, d, e, f, g, h) == 0) {
        return 1;
    }
zero:
    out[0] = 0;
    out[1] = 0;
    out[2] = 0;
    out[3] = 0;
    return 1;
}
