#include "ffc/types.h"

extern int func_0208cf38(int a, int b, int c, int d);
extern int func_02087460(void);
extern int func_0208d304(void);
extern void func_0208cdd8(int a, void *b);
extern void func_02084ca4(void *src, void *dst, uint32_t n);
extern int func_0208cea4(void *p, uint32_t n);

int func_0208da6c(void *a, void *b) {
    uint8_t buf[0x3c];
    uint8_t *base;
    uint16_t t;
    uint16_t x;
    int r;

    r = func_0208cf38(3, 2, 3, 5);
    if (r != 0) {
        return r;
    }
    if (func_02087460() != 0) {
        if (func_0208d304() == 0) {
            return 4;
        }
    }
    if (b == 0) {
        return 6;
    }
    base = (uint8_t *)b;
    if (*(uint32_t *)base == 0) {
        return 6;
    }
    if (*(uint16_t *)(base + 4) > 0x400) {
        return 6;
    }
    if (*(uint16_t *)(base + 0x12) > 0x20) {
        return 6;
    }
    t = *(uint16_t *)(base + 0x10);
    if (t != 0 && t != 1 && t != 2 && t != 3) {
        return 6;
    }
    if ((uint16_t)(t + 0xfffe) <= 1) {
        if (*(uint16_t *)(base + 0x34) > 0x20) {
            return 6;
        }
    }
    func_0208cdd8(0x26, a);
    x = *(uint16_t *)(base + 6);
    *(uint16_t *)(buf + 0) = 0x26;
    *(uint16_t *)(buf + 2) = x;
    *(uint32_t *)(buf + 4) = *(uint32_t *)base;
    *(uint16_t *)(buf + 8) = *(uint16_t *)(base + 4);
    *(uint16_t *)(buf + 0xa) = *(uint16_t *)(base + 8);
    func_02084ca4(base + 0xa, buf + 0xc, 6);
    *(uint16_t *)(buf + 0x12) = *(uint16_t *)(base + 0x10);
    *(uint16_t *)(buf + 0x36) = *(uint16_t *)(base + 0x34);
    *(uint16_t *)(buf + 0x14) = *(uint16_t *)(base + 0x12);
    func_02084ca4(base + 0x14, buf + 0x16, 0x20);
    r = func_0208cea4(buf, 0x3c);
    if (r != 0) {
        return r;
    }
    return 2;
}
