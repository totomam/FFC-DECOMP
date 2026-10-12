#include "ffc/types.h"

int func_02092a84(uint8_t *s, uint8_t *accept) {
    uint8_t tbl[32];
    uint8_t *p;
    uint8_t *q;
    uint32_t c;
    uint32_t n;

    q = tbl;
    n = 32;
    do {
        *q++ = 0;
    } while (--n != 0);

    p = accept + 1;
    c = *accept;
    if (c != 0) {
        do {
            tbl[(uint8_t)c >> 3] |= (uint8_t)(1 << (c & 7));
            c = *p++;
        } while (c != 0);
    }

    p = s + 1;
    c = *s;
    while (c != 0) {
        if (tbl[(uint8_t)c >> 3] & (uint8_t)(1 << (c & 7))) {
            break;
        }
        c = *p++;
    }
    return (int)(p - s) - 1;
}
