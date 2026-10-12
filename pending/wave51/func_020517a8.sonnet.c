#include "ffc/types.h"

typedef struct {
    uint32_t flag:1;
    uint32_t rest:31;
    uint32_t len;
    int8_t *ptr;
} LongStr;

int32_t func_020517a8(uint8_t *s, int8_t *pat, uint32_t start, uint32_t patlen)
{
    uint32_t len;
    int8_t *base;
    int8_t *p;
    int8_t *end;

    if (((LongStr *)s)->flag == 0) {
        base = (int8_t *)(s + 1);
        len = ((uint32_t)s[0] << 24) >> 25;
    } else {
        base = ((LongStr *)s)->ptr;
        len = ((LongStr *)s)->len;
    }

    if (start >= len) {
        goto notfound;
    }
    if (patlen == 0) {
        return start;
    }

    end = base + len;
    p = base + start;
    if (p >= end) {
        goto notfound;
    }
    do {
        int8_t *q = pat;
        uint32_t i = 0;
        if (i < patlen) {
            int8_t c = p[i];
            do {
                if (c == *q) {
                    goto next;
                }
                i++;
                q++;
            } while (i < patlen);
        }
        return (int32_t)(p - base);
next:
        p++;
    } while (p < end);

notfound:
    return -1;
}
