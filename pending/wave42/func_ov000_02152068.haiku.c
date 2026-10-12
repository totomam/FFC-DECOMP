#include "ffc/types.h"

extern uint8_t func_ov000_0215223c(uint8_t *p);
extern void func_02084b2c(void *dst, int c, uint32_t n);
extern int func_ov000_021523b4(uint8_t *p, uint8_t v, uint8_t *q);

uint32_t func_ov000_02152068(uint8_t *p)
{
    uint8_t *r6;
    uint16_t h;
    uint8_t v;
    uint32_t k = 0xc2 << 4;
    uint8_t *q;

    r6 = p + k + p[0x14c3] * 0xc0;

    v = func_ov000_0215223c(p);
    p[0x14bd] = v;
    func_02084b2c(p + 0x1468, 0, 0x52);
    if (func_ov000_021523b4(p, p[0x14bd], p + 0x1468) != 0) {
        p[0x14bb] = (p[0x14bb] & ~0xc) | 4;
        h = *(uint16_t *)(r6 + 0x2c);
        if (!((h >> 4) & 1)) {
            q = p + p[0x14c3] * 4;
            q[k - 0x2c] = 3;
            return 9;
        }
        if (p[0x14bd] == 0x12 && r6[0x15] == 0) {
            q = p + p[0x14c3] * 4;
            q[k - 0x2c] = 3;
            return 9;
        }
    } else {
        p[0x14bb] = p[0x14bb] & ~0xc;
        h = *(uint16_t *)(r6 + 0x2c);
        if (((h >> 4) & 1) == 1) {
            q = p + p[0x14c3] * 4;
            q[k - 0x2c] = 3;
            return 9;
        }
    }
    p[0x14c5] = 0;
    p[0x14c4] = 0;
    return 8;
}
