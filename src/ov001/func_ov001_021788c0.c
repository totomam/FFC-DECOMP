#include "ffc/types.h"

extern void func_02090398(uint8_t *dst, uint8_t *src, uint32_t n);

typedef struct {
    uint8_t *buf;
    uint32_t pad4;
    uint32_t cnt;
    uint32_t n;
} S;

int func_ov001_021788c0(void *unused, S *s) {
    uint32_t r;
    if (s == 0 || s->buf == 0 || s->n == 0) {
        return 0;
    }
    r = s->cnt - s->n;
    s->cnt = r;
    if (r != 0) {
        func_02090398(s->buf, s->buf + s->n, r);
    }
    s->buf[s->cnt] = 0;
    s->n = 0;
    return 0;
}
