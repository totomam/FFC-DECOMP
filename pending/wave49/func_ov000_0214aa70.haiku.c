#include "ffc/types.h"

extern void func_ov000_0214bd88(void *p);
extern void func_ov000_0214bdb8(void *p, void *src, int n);
extern void func_02084b2c(void *p, int c, int n);
extern void func_ov000_0214be38(void *p, uint8_t *src);
extern void func_ov000_0214c434(void *p);
extern void func_ov000_0214c46c(void *p, void *src, int n);
extern void func_ov000_0214c4ec(void *p, uint8_t *src);
extern void func_ov000_0214c5a0(void *p, uint8_t *src, int n);
extern void func_ov000_0214a8bc(void *p);

int func_ov000_0214aa70(uint8_t *self, uint8_t *p) {
    uint8_t buf[0x30];
    uint8_t *pp = p;
    int idx = (p[3] << 8) + p[4];
    uint8_t *q = p + 5;
    uint16_t st = *(uint16_t *)(self + 0x32);

    switch (st) {
    case 4: {
        func_ov000_0214bd88(self + 0x3fc);
        func_ov000_0214bdb8(self + 0x3fc, *(void **)(self + 0xbc), 0x10);
        func_02084b2c(buf, 0x36, 0x30);
        func_ov000_0214bdb8(self + 0x3fc, buf, 0x30);
        func_ov000_0214bdb8(self + 0x3fc, self + 0x1cc, 8);
        func_ov000_0214bdb8(self + 0x3fc, p, 1);
        func_ov000_0214bdb8(self + 0x3fc, p + 3, idx + 2);
        func_ov000_0214be38(self + 0x3fc, q + idx);
        func_ov000_0214bd88(self + 0x3fc);
        func_ov000_0214bdb8(self + 0x3fc, *(void **)(self + 0xbc), 0x10);
        func_02084b2c(buf, 0x5c, 0x30);
        func_ov000_0214bdb8(self + 0x3fc, buf, 0x30);
        func_ov000_0214bdb8(self + 0x3fc, q + idx, 0x10);
        func_ov000_0214be38(self + 0x3fc, q + idx);
        idx += 0x10;
        break;
    }
    case 5: {
        func_ov000_0214c434(self + 0x348);
        func_ov000_0214c46c(self + 0x348, *(void **)(self + 0xbc), 0x14);
        func_02084b2c(buf, 0x36, 0x28);
        func_ov000_0214c46c(self + 0x348, buf, 0x28);
        func_ov000_0214c46c(self + 0x348, self + 0x1cc, 8);
        func_ov000_0214c46c(self + 0x348, p, 1);
        func_ov000_0214c46c(self + 0x348, p + 3, idx + 2);
        func_ov000_0214c4ec(self + 0x348, q + idx);
        func_ov000_0214c434(self + 0x348);
        func_ov000_0214c46c(self + 0x348, *(void **)(self + 0xbc), 0x14);
        func_02084b2c(buf, 0x5c, 0x28);
        func_ov000_0214c46c(self + 0x348, buf, 0x28);
        func_ov000_0214c46c(self + 0x348, q + idx, 0x14);
        func_ov000_0214c4ec(self + 0x348, q + idx);
        idx += 0x14;
        break;
    }
    default:
        break;
    }

    pp[3] = (uint8_t)(idx >> 8);
    pp[4] = (uint8_t)idx;
    func_ov000_0214c5a0(self + 0xc8, p + 5, idx);
    func_ov000_0214a8bc(self + 0x1d4);
    return idx + 5;
}
