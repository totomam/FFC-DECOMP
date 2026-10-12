#include "ffc/types.h"

uint8_t *func_ov006_021a0c18(uint8_t *p, uint32_t *a, uint32_t *b)
{
    uint32_t sum = 0;
    uint8_t *q;
    uint8_t *end;
    uint8_t *base;
    int raw;
    uint16_t len;
    uint16_t chk;

    raw = *(uint16_t *)p;
    *a = (uint16_t)((((uint8_t)(raw >> 8)) | ((raw << 8) & 0xff00)));

    raw = *(uint16_t *)(p + 2);
    len = (uint16_t)((((uint8_t)(raw >> 8)) | ((raw << 8) & 0xff00)));
    base = p + 6;
    end = base + len;
    *b = len;

    for (q = p; q < end; q++) {
        sum += *q;
    }
    sum = (uint16_t)sum;

    raw = *(uint16_t *)end;
    chk = (uint16_t)((((uint8_t)(raw >> 8)) | ((raw << 8) & 0xff00)));

    if (sum == chk) {
        return p + 6;
    }
    return 0;
}
