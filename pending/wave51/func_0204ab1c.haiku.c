#include "ffc/types.h"

extern int32_t func_ov000_0214ed84(uint32_t a, uint8_t *b, uint8_t *c, uint32_t d);
extern void func_0204ac98(uint8_t *dst, uint8_t *src, uint32_t len);
extern void func_0204acc0(uint8_t *a, uint8_t *b);

int32_t func_0204ab1c(uint8_t *base, uint32_t p1, uint8_t *p2, int32_t n, uint32_t p5)
{
    uint8_t *buf = base + 0x40;
    int32_t ret = 0;
    uint32_t avail;
    uint32_t off;
    uint32_t rem;
    uint32_t len;

    if (n > 0) {
        if (*(int32_t *)(base + 0x8044) == 0) {
            int32_t r = func_ov000_0214ed84(p1, buf, base + 0x8000, p5);
            if (r <= 0) {
                return 0;
            }
            *(int32_t *)(base + 0x8044) = r;
            *(int32_t *)(base + 0x8040) = 0;
        }
        avail = *(uint32_t *)(base + 0x8044);
        if (avail != 0) {
            len = (uint32_t)n;
            if (len > avail) {
                len = avail;
            }
            off = *(uint32_t *)(base + 0x8040);
            func_0204ac98(p2, buf + off, len);
            rem = *(uint32_t *)(base + 0x8044) - len;
            *(uint32_t *)(base + 0x8044) = rem;
            if (rem == 0) {
                func_0204acc0(buf, base + 0x8000);
                *(uint32_t *)(base + 0x8040) = 0;
            } else {
                *(uint32_t *)(base + 0x8040) = off + len;
            }
            ret = (int32_t)len;
        }
    }
    return ret;
}
