#include "ffc/types.h"

extern void func_02084ca4(void *dst, const void *src, uint32_t n);
extern void func_ov000_0214a6f8(uint8_t *s, uint8_t *buf, uint32_t n);
extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern void func_ov000_0214a788(uint8_t *s, uint8_t *buf, uint32_t n);

void func_ov000_0214a81c(uint8_t *base, const uint8_t *p) {
    uint8_t buf[0x14];

    func_02084ca4(base + 0x3A4, base + 0x3FC, 0x58);
    func_ov000_0214a6f8(base, buf, 1);
    func_02084ca4(base + 0x3FC, base + 0x3A4, 0x58);
    if (func_02090410(p, buf, 0x10) != 0) {
        base[0x455] = 9;
        return;
    }
    func_02084ca4(base + 0x2EC, base + 0x348, 0x5c);
    func_ov000_0214a788(base, buf, 1);
    func_02084ca4(base + 0x348, base + 0x2EC, 0x5c);
    if (func_02090410(p + 0x10, buf, 0x14) != 0) {
        base[0x455] = 9;
        return;
    }
    base[0x455] = 6;
}
