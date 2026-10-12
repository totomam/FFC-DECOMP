#include "ffc/types.h"
typedef struct { uint32_t ext:1; uint32_t rest:31; } Hdr;
typedef struct { uint8_t ext:1; uint8_t sl:7; } Hb;

int func_02030f24(Hdr *s, int8_t *pat, uint32_t start, uint32_t patlen) {
    uint8_t *data;
    uint32_t len;
    uint32_t rem;
    int8_t *text;
    int8_t *pend;
    int8_t *t;
    int8_t *p;
    int i, j;

    if (!s->ext) {
        data = (uint8_t *)s + 1;
        len = ((Hb *)s)->sl;
    } else {
        data = (uint8_t *)((uint32_t *)s)[2];
        len = ((uint32_t *)s)[1];
    }
    if (start <= len) {
        rem = len - start;
        pend = pat + patlen;
        text = (int8_t *)data + start;
        if (rem >= patlen) do {
            i = 0; j = 0;
            p = pat;
            t = text;
            while (p < pend) {
                if (p[i] != t[j]) goto next;
                p++; t++;
            }
            return text - (int8_t *)data;
next:
            text++;
        } while (--rem >= patlen);
    }
    return -1;
}
