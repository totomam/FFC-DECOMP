#include "ffc/types.h"

extern void func_ov000_02169580(void *dst, const void *src, uint32_t n);
extern void func_ov000_02168cd0(void *ctx, const void *data);

typedef struct {
    uint8_t pad[0x10];
    uint32_t lo;
    uint32_t hi;
    uint8_t buf[64];
} Ctx;

void func_ov000_02168c04(void *ctxp, const void *srcp, uint32_t n) {
    Ctx *c = (Ctx *)ctxp;
    const uint8_t *src = (const uint8_t *)srcp;
    uint32_t off = (c->lo >> 3) & 0x3f;
    uint32_t bits = n << 3;
    uint32_t rem;
    uint32_t i;

    c->lo += bits;
    if (c->lo < bits) {
        c->hi++;
    }
    c->hi += n >> 29;

    rem = 64 - off;
    if (n >= rem) {
        func_ov000_02169580(c->buf + off, src, rem);
        func_ov000_02168cd0(c, c->buf);
        i = rem;
        while (i + 63 < n) {
            func_ov000_02168cd0(c, src + i);
            i += 64;
        }
        off = 0;
    } else {
        i = 0;
    }
    func_ov000_02169580(c->buf + off, src + i, n - i);
}
