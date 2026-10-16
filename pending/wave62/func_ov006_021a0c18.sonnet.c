#include "ffc/types.h"
uint8_t *func_ov006_021a0c18(uint8_t *p, uint32_t *a, uint32_t *b)
{
    uint16_t h = *(uint16_t *)p;
    uint32_t sum = 0;
    uint32_t len;
    uint8_t *q, *end;
    uint16_t c;
    *a = (uint16_t)(((h >> 8) & 0xff) | ((h << 8) & 0xff00));
    h = *(uint16_t *)(p + 2);
    len = (uint16_t)(((h >> 8) & 0xff) | ((h << 8) & 0xff00));
    end = p + 6;
    *b = len;
    end += len;
    q = p;
    while (q < end) sum += *q++;
    c = *(uint16_t *)end;
    if ((uint16_t)sum != (uint16_t)(((c >> 8) & 0xff) | ((c << 8) & 0xff00))) return 0;
    return p + 6;
}
