#include "ffc/types.h"

extern int32_t func_ov000_0214a8d4(uint8_t *self, uint8_t *p, uint32_t v);
extern void func_ov000_0214bd88(uint8_t *obj);
extern void func_ov000_0214bdb8(uint8_t *obj, const uint8_t *src, uint32_t len);
extern void func_02084b2c(uint8_t *dst, int32_t val, uint32_t n);
extern void func_ov000_0214be38(uint8_t *obj, uint8_t *buf);
extern void func_ov000_0214c434(uint8_t *obj);
extern void func_ov000_0214c46c(uint8_t *obj, const uint8_t *src, uint32_t len);
extern void func_ov000_0214c4ec(uint8_t *obj, uint8_t *buf);
extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern void func_ov000_0214a8bc(uint8_t *obj);

int32_t func_ov000_0214a8e8(uint8_t *self, uint8_t *p) {
    uint32_t len;
    uint8_t b[0x14];
    uint8_t a[0x30];
    int32_t r6;

    r6 = func_ov000_0214a8d4(self, p + 5, ((uint32_t)p[3] << 8) + p[4]);

    switch (*(uint16_t *)(self + 0x32)) {
    case 4:
        r6 -= 0x10;
        p[3] = (uint8_t)(r6 >> 8);
        p[4] = (uint8_t)r6;
        func_ov000_0214bd88(self + 0x3fc);
        len = 0x10;
        func_ov000_0214bdb8(self + 0x3fc, *(uint8_t **)(self + 0x1d4), len);
        func_02084b2c(a, 0x36, 0x30);
        func_ov000_0214bdb8(self + 0x3fc, a, 0x30);
        func_ov000_0214bdb8(self + 0x3fc, self + 0x2e4, 8);
        func_ov000_0214bdb8(self + 0x3fc, p, 1);
        func_ov000_0214bdb8(self + 0x3fc, p + 3, r6 + 2);
        func_ov000_0214be38(self + 0x3fc, b);
        func_ov000_0214bd88(self + 0x3fc);
        func_ov000_0214bdb8(self + 0x3fc, *(uint8_t **)(self + 0x1d4), len);
        func_02084b2c(a, 0x5c, 0x30);
        func_ov000_0214bdb8(self + 0x3fc, a, 0x30);
        func_ov000_0214bdb8(self + 0x3fc, b, len);
        func_ov000_0214be38(self + 0x3fc, b);
        break;
    case 5:
        r6 -= 0x14;
        p[3] = (uint8_t)(r6 >> 8);
        p[4] = (uint8_t)r6;
        func_ov000_0214c434(self + 0x348);
        len = 0x14;
        func_ov000_0214c46c(self + 0x348, *(uint8_t **)(self + 0x1d4), len);
        func_02084b2c(a, 0x36, 0x28);
        func_ov000_0214c46c(self + 0x348, a, 0x28);
        func_ov000_0214c46c(self + 0x348, self + 0x2e4, 8);
        func_ov000_0214c46c(self + 0x348, p, 1);
        func_ov000_0214c46c(self + 0x348, p + 3, r6 + 2);
        func_ov000_0214c4ec(self + 0x348, b);
        func_ov000_0214c434(self + 0x348);
        func_ov000_0214c46c(self + 0x348, *(uint8_t **)(self + 0x1d4), len);
        func_02084b2c(a, 0x5c, 0x28);
        func_ov000_0214c46c(self + 0x348, a, 0x28);
        func_ov000_0214c46c(self + 0x348, b, len);
        func_ov000_0214c4ec(self + 0x348, b);
        break;
    default:
        break;
    }

    if (func_02090410(p + 5 + r6, b, len) != 0) {
        self[0x455] = 9;
    }
    func_ov000_0214a8bc(self + 0x2ec);
    return r6 + 5;
}
