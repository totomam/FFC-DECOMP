#include "ffc/types.h"

typedef struct {
    uint32_t lng : 1;
    uint32_t sz : 7;
    uint32_t pad : 24;
    uint32_t len;
    int8_t *ptr;
} Str;

int func_02051810(Str *s, int8_t *pat, uint32_t pos, uint32_t patlen)
{
    int8_t *d;
    uint32_t n;
    uint32_t i;
    int8_t *q;
    int8_t *p;

    if (!s->lng) {
        d = (int8_t *)s + 1;
        n = ((uint32_t)*(uint8_t *)s << 24) >> 25;
    } else {
        d = s->ptr;
        n = s->len;
    }
    if (n == 0) {
        return -1;
    }
    n--;
    if (pos > n) {
        pos = n;
    }
    q = d + pos + 1;
    if (q <= d) {
        return -1;
    }
    for (;;) {
        q--;
        i = 0;
        p = pat;
        if (patlen != 0) {
            do {
                if (q[i] == *p) {
                    break;
                }
                i++;
                p++;
            } while (i < patlen);
            if (i != patlen) {
                if (q <= d) {
                    return -1;
                }
                continue;
            }
        }
        return (int)(q - d);
    }
}
