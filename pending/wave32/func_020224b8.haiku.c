#include "ffc/types.h"

extern void func_020224fc(void *p, uint32_t n, uint32_t v);

typedef struct {
    uint32_t *buf;
    uint32_t len;
} S;

void func_020224b8(S *p, uint32_t n, uint32_t *src) {
    uint32_t v;
    uint8_t *b;
    uint32_t cnt;
    uint32_t *d;
    if (n == 0) {
        return;
    }
    b = (uint8_t *)&v + 1;
    *b = 0;
    func_020224fc(p, n, *b);
    cnt = n;
    d = (uint32_t *)((uint8_t *)p->buf + p->len * 4);
    while (cnt != 0) {
        *d++ = *src;
        cnt--;
    }
    p->len += n;
}
