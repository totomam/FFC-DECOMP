/* cflags: -nothumb */
#include "ffc/types.h"

void func_02084e04(uint8_t *src, uint8_t *dst, int32_t n) {
    uint8_t t;
    if (n > 8) {
        if ((uint32_t)src & 1) {
            n--;
            *dst++ = *src++;
        }
        if ((uint32_t)src & 2) {
            n -= 2;
            *dst++ = *src++;
            *dst++ = *src++;
        }
        while (n-- > 0) {
            *dst++ = *src++;
        }
        return;
    }
    switch (n) {
    case 8: t = *src++; *dst++ = t;
    case 7: t = *src++; *dst++ = t;
    case 6: t = *src++; *dst++ = t;
    case 5: t = *src++; *dst++ = t;
    case 4: t = *src++; *dst++ = t;
    case 3: t = *src++; *dst++ = t;
    case 2: t = *src++; *dst++ = t;
    case 1: t = *src++; *dst++ = t;
    case 0: break;
    }
}
