#include "ffc/types.h"

typedef struct {
    uint32_t ext : 1;
    uint32_t small_len : 7;
    uint32_t rest : 24;
} Hdr;

typedef struct {
    uint8_t ext : 1;
    uint8_t small_len : 7;
} Hb;

int func_02030f24(Hdr *s, int8_t *pat, uint32_t start, uint32_t patlen) {
    uint8_t *data;
    uint32_t len;
    uint32_t rem;
    int8_t *text;
    int8_t *p;
    int8_t *t;
    int8_t *pend;

    if (!s->ext) {
        data = (uint8_t *)s + 1;
        len = ((Hb *)s)->small_len;
    } else {
        data = *(uint8_t **)((uint8_t *)s + 8);
        len = *(uint32_t *)((uint8_t *)s + 4);
    }
    if (start > len) {
        goto fail;
    }
    rem = len - start;
    pend = pat + patlen;
    text = (int8_t *)data + start;
    if (rem < patlen) {
        goto fail;
    }
    for (;;) {
        p = pat;
        t = text;
        while (p < pend) {
            if (*p != *t) {
                goto next;
            }
            p++;
            t++;
        }
        return (int)(text - (int8_t *)data);
next:
        rem--;
        text++;
        if (rem < patlen) {
            break;
        }
    }
fail:
    return -1;
}
