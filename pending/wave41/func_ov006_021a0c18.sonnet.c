#include "ffc/types.h"

#define BS(x) ((uint16_t)((((x) >> 8) & 0xff) | (((x) << 8) & 0xff00)))

uint8_t *func_ov006_021a0c18(uint8_t *p, uint32_t *a, uint32_t *b)
{
    uint32_t sum = 0;
    uint8_t *q;
    uint8_t *end;
    uint8_t *base;
    int raw;
    uint32_t len;

    raw = *(uint16_t *)p;
    *a = BS(raw);
    raw = *(uint16_t *)(p + 2);
    len = BS(raw);
    base = p + 6;
    end = base + len;
    *b = len;
    for (q = p; q < end; q++) {
        sum += *q;
    }
    raw = *(uint16_t *)end;
    if ((uint16_t)sum != BS(raw)) {
        return 0;
    }
    return p + 6;
}
