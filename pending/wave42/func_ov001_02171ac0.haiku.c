#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern uint32_t func_ov001_021719e0(void *self, int32_t arg);
extern void func_02090380(void *destination, const void *source, uint32_t length);

typedef struct Ctx {
    uint32_t *base;
    uint8_t *buf;
    int32_t cap;
    int32_t len;
    uint32_t pad10;
    int32_t f14;
    int32_t f18;
    uint32_t pad1c;
    int32_t f20;
} Ctx;

uint32_t func_ov001_02171ac0(Ctx *c, const uint8_t *src, int32_t n)
{
    int32_t newlen;

    if (c == 0) return 0;
    if (src == 0) return 0;
    if (n < 0) return 0;
    if (c->f20 != 0) return 0;
    if (n == 0) {
        n = func_02092864(src);
    }
    newlen = c->len + n;
    while (newlen >= c->cap) {
        if (c->f18 != 0) {
            c->base[0x49] = 1;
            c->base[0x10] = 2;
            return 0;
        }
        if (func_ov001_021719e0(c, c->f14) == 0) {
            c->base[0x49] = 1;
            c->base[0x10] = 1;
            return 0;
        }
    }
    func_02090380(c->buf + c->len, src, n);
    c->len = newlen;
    c->buf[newlen] = 0;
    return 1;
}
