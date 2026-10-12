#include "ffc/types.h"

int32_t func_020323cc(uint32_t *p, int32_t c, uint32_t start) {
    uint8_t *base;
    uint32_t len;
    uint8_t *end;
    uint8_t *q;
    volatile uint32_t *vp = p; uint32_t flag = (*vp << 31) >> 31;
    if (flag == 0) {
        base = (uint8_t *)p + 1;
        len = ((uint32_t)*(uint8_t *)p << 24) >> 25;
    } else {
        base = (uint8_t *)p[2];
        len = p[1];
    }
    if (start < len) {
        end = base + len;
        q = base + start;
        while (q < end) {
            if (c == *(int8_t *)q) {
                return (int32_t)(q - base);
            }
            q++;
        }
    }
    return -1;
}
