/* cflags: -nothumb */
#include "ffc/types.h"

void func_02084bc0(uint8_t *p, uint8_t c, uint32_t n) {
    if (n == 0) {
        return;
    }
    if (n <= 8) {
        switch (8 - n) {
        case 0: *p++ = c;
        case 1: *p++ = c;
        case 2: *p++ = c;
        case 3: *p++ = c;
        case 4: *p++ = c;
        case 5: *p++ = c;
        case 6: *p++ = c;
        case 7: *p++ = c;
        }
        return;
    }
    {
        uint32_t w = c;
        w |= w << 8;
        w |= w << 16;
        if ((uint32_t)p & 1) {
            *p++ = c;
            n -= 1;
        }
        if ((uint32_t)p & 2) {
            *(uint16_t *)p = w;
            p += 2;
            n -= 2;
        }
        if ((uint32_t)p & 4) {
            *(uint32_t *)p = w;
            p += 4;
            n -= 4;
        }
        if (n >= 32) {
            do {
                uint32_t *q = (uint32_t *)p;
                q[0] = w; q[1] = w; q[2] = w; q[3] = w;
                q[4] = w; q[5] = w; q[6] = w; q[7] = w;
                p += 32;
                n -= 32;
            } while (n >= 32);
        }
        while (n >= 4) {
            *(uint32_t *)p = w;
            p += 4;
            n -= 4;
        }
        while (n > 0) {
            *p++ = c;
            n--;
        }
    }
}
