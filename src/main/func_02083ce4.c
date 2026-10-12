#include "ffc/types.h"

extern void func_02084ca4(void *dst, const void *src, uint32_t n);
extern void (*data_020b2b10)(void *);

typedef struct {
    uint8_t pad[0x14];
    uint8_t buf[0x40];
    uint32_t pos;
    uint32_t cnt_lo;
    uint32_t cnt_hi;
} Ctx;

void func_02083ce4(Ctx *c, uint8_t *dst, uint32_t len) {
    uint32_t n;
    while (len != 0) {
        n = 0x40 - c->pos;
        if (n > len) {
            n = len;
        }
        func_02084ca4(dst, c->buf + c->pos, n);
        dst += n;
        len -= n;
        c->pos += n;
        if (c->pos >= 0x40) {
            data_020b2b10(c);
            c->pos = 0;
            if (++c->cnt_lo == 0) {
                c->cnt_hi++;
            }
        }
    }
}
