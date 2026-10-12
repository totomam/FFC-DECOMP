#include "ffc/types.h"

extern void func_02084ca4(void *dst, void *src, uint32_t n);
extern void func_ov000_0214bf0c(void *ctx, uint8_t *block);

typedef struct {
    uint8_t pad[0x14];
    uint32_t hi;
    uint32_t lo;
    uint8_t buf[0x40];
} Ctx;

void func_ov000_0214c46c(Ctx *p, uint8_t *data, uint32_t len)
{
    uint32_t off = (p->lo >> 3) & 0x3f;
    uint32_t bits = len << 3;
    uint32_t r4;

    p->lo += bits;
    if (p->lo < bits) {
        p->hi++;
    }
    p->hi += len >> 29;

    if (len >= 0x40 - off) {
        r4 = 0x40 - off;
        func_02084ca4(data, p->buf + off, r4);
        off = 0;
        func_ov000_0214bf0c(p, p->buf);
        for (; r4 + 0x3f < len; r4 += 0x40) {
            func_ov000_0214bf0c(p, data + r4);
        }
    } else {
        r4 = 0;
    }
    func_02084ca4(data + r4, p->buf + off, len - r4);
}
