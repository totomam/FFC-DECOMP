#include "ffc/types.h"

typedef struct {
    uint32_t flag : 1;
    uint32_t rest : 31;
} Hdr;

int32_t func_0200cfe4(uint8_t *s, uint16_t *needle, uint32_t off, uint32_t n)
{
    uint32_t len;
    uint16_t *buf;
    uint16_t *q;
    uint16_t *end;
    uint16_t *b;
    uint16_t *a;
    uint32_t rem;

    if (!((Hdr *)s)->flag) {
        buf = (uint16_t *)(s + 2);
        len = (uint32_t)(s[0] << 24) >> 25;
    } else {
        buf = *(uint16_t **)(s + 8);
        len = *(uint32_t *)(s + 4);
    }
    if (off > len) {
        goto fail;
    }
    rem = len - off;
    end = needle + n;
    q = buf + off;
    if (rem < n) {
        goto fail;
    }
    while (1) {
        b = q;
        a = needle;
        while (a < end) {
            if (*a != *b) {
                goto mismatch;
            }
            a++;
            b++;
        }
        return (int32_t)(q - buf);
mismatch:
        rem--;
        q++;
        if (rem < n) {
            goto fail;
        }
    }
fail:
    return -1;
}
