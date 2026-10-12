#include "ffc/types.h"

extern int32_t func_ov000_0214ed84(uint32_t a, uint8_t *b, uint32_t c, uint32_t d);
extern void func_0204ac98(uint8_t *dst, uint8_t *src, uint32_t len);
extern void func_0204acc0(uint8_t *a, uint32_t b);

#define SZ(b) (*(uint32_t *)((b) + 0x8044))
#define POS(b) (*(uint32_t *)((b) + 0x8040))

int32_t func_0204ab1c(uint8_t *base, uint32_t p1, uint8_t *p2, int32_t n, uint32_t p5)
{
    uint8_t *buf = base + 0x40;
    int32_t ret = 0;
    if (n > 0) {
        if (SZ(base) == 0) {
            int32_t r = func_ov000_0214ed84(p1, buf, 0x8000, p5);
            if (r <= 0) return r;
            SZ(base) = r;
            POS(base) = 0;
        }
        {
            uint32_t len = SZ(base);
            if (len != 0) {
                if ((uint32_t)n <= len) len = n;
                func_0204ac98(p2, buf + POS(base), len);
                {
                    uint32_t rem = SZ(base) - len;
                    SZ(base) = rem;
                    if (rem == 0) {
                        func_0204acc0(buf, 0x8000);
                        POS(base) = 0;
                    } else {
                        POS(base) = POS(base) + len;
                    }
                }
                ret = len;
            }
        }
    }
    return ret;
}
