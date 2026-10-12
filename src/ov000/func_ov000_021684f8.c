#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern uint8_t *func_02092a2c(uint8_t *text, uint32_t character);
extern int32_t func_02092a04(const uint8_t *a, const uint8_t *b, uint32_t n);

typedef struct {
    uint8_t *data;
    int32_t len;
} Buf;

uint32_t func_ov000_021684f8(uint8_t *s, Buf *b)
{
    int32_t i = 0;
    uint32_t n;
    uint32_t m;

    uint8_t *q;
    uint8_t *e;
    uint8_t *d;
    int32_t len;

    if (s == 0) {
        return 1;
    }
    n = func_02092864(s);
    e = s + n;
    if ((int8_t)e[i - 1] == ':') {
        return i;
    }
    q = func_02092a2c(s, ':');
    if (q == 0) {
        q = s;
    }
    len = b->len;
    while (i < len && b->data[i] != ':') {
        i++;
    }
    if (i == len) {
        i = 0;
    } else {
        i++;
    }
    d = b->data;
    n = len - i;
    m = func_02092864(q);
    if (n <= m) {
        n = func_02092864(q);
    }
    if (func_02092a04(q, d + i, n) == 0) {
        return 1;
    }
    return 0;
}
