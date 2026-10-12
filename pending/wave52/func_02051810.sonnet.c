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
    int8_t *p;
    int8_t *q;

    if (!s->lng) {
        d = (int8_t *)s + 1;
        n = ((uint32_t)*(uint8_t *)s << 24) >> 25;
    } else {
        d = s->ptr;
        n = s->len;
    }
    if (n != 0) {
        n--;
        if (pos > n) {
            pos = n;
        }
        q = d + pos + 1;
        if (q > d) {
            do {
                q--;
                p = pat;
                i = 0;
                while (i < patlen) {
                    if (q[i] == *p++) {
                        goto next;
                    }
                    i++;
                }
                return (int)(q - d);
            next:;
            } while (q > d);
        }
    }
    return -1;
}
