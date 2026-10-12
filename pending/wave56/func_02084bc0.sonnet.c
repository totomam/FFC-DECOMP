/* cflags: -nothumb */
#include "ffc/types.h"

void func_02084bc0(uint8_t *p, uint32_t c, int32_t n) {
    if (n == 0) {
        return;
    }
    if (n > 8) {
        goto big;
    }
    switch (n) {
    case 8: *p++ = c;
    case 7: *p++ = c;
    case 6: *p++ = c;
    case 5: *p++ = c;
    case 4: *p++ = c;
    case 3: *p++ = c;
    case 2: *p++ = c;
    case 1: *p++ = c;
    }
    return;
big:
    c |= c << 8;
    c |= c << 16;
    if ((uint32_t)p & 1) {
        *p++ = c;
        n -= 1;
    }
    if ((uint32_t)p & 2) {
        *(uint16_t *)p = c;
        p += 2;
        n -= 2;
    }
    if ((uint32_t)p & 4) {
        *(uint32_t *)p = c;
        p += 4;
        n -= 4;
    }
    if (n >= 32) {
        do {
            uint32_t *q = (uint32_t *)p;
            q[0] = c; q[1] = c; q[2] = c; q[3] = c;
            q[4] = c; q[5] = c; q[6] = c; q[7] = c;
            p += 32;
            n -= 32;
        } while (n >= 32);
    }
    while (n >= 4) {
        *(uint32_t *)p = c;
        p += 4;
        n -= 4;
    }
    while (n > 0) {
        *p++ = c;
        n--;
    }
}
