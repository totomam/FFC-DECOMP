#include "ffc/types.h"

extern uint8_t *func_ov000_021653e4(uint8_t *p, uint32_t n);
extern void func_ov001_0217ef6c(void *ctx, void *data);
extern uint8_t data_ov001_021905a4[];

typedef struct {
    uint8_t *buf;
    uint32_t cap;
    uint32_t len;
} Buf;

uint32_t func_ov001_0217826c(void *ctx, Buf *s, uint8_t v)
{
    uint32_t len = s->len;
    uint32_t cap = s->cap;
    uint8_t *p = s->buf;

    if (cap == len) {
        cap += 0x4000;
        p = func_ov000_021653e4(p, cap + 1);
        if (p == 0) {
            func_ov001_0217ef6c(ctx, data_ov001_021905a4);
            return 1;
        }
    }
    p[len] = v;
    p[len + 1] = 0;
    uint32_t m = s->len + 1;
    s->buf = p;
    s->len = m;
    s->cap = cap;
    return 0;
}
