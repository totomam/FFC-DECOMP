/* cflags: -nothumb */
#include "ffc/types.h"

void func_02084b2c(uint8_t *p, uint32_t c, uint32_t n)
{
    uint32_t words;
    uint8_t *end;

    if (n == 0) {
        return;
    }
    if ((uint32_t)p & 1) {
        *(uint16_t *)(p - 1) = (uint16_t)(((*(uint16_t *)(p - 1)) & 0xff) | (c << 8));
        n--;
        p++;
        if (n == 0) {
            return;
        }
    }
    if (n < 2) {
        goto tail;
    }
    c |= c << 8;
    if ((uint32_t)p & 2) {
        *(uint16_t *)p = (uint16_t)c;
        n -= 2;
        p += 2;
        if (n == 0) {
            return;
        }
    }
    c |= c << 16;
    words = n & ~3u;
    if (words != 0) {
        n -= words;
        end = p + words;
        do {
            *(uint32_t *)p = c;
            p += 4;
        } while (p < end);
    }
    if (n & 2) {
        *(uint16_t *)p = (uint16_t)c;
        p += 2;
    }
tail:
    if (n & 1) {
        *(uint16_t *)p = (uint16_t)(((*(uint16_t *)p) & 0xff00) | (c & 0xff));
    }
}
