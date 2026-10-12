#include "ffc/types.h"

extern void func_ov001_0217ec78(void *dst, const void *src, uint32_t n);

#define W(o) (*(uint32_t *)(d + (o)))

void func_ov001_02179e4c(uint32_t *s, uint8_t *d) {
    if (s[0]) {
        func_ov001_0217ec78(d + 8, (void *)s[0], 0x1f);
    } else {
        d[8] = 0;
    }
    if (s[1]) {
        func_ov001_0217ec78(d + 0x27, (void *)s[1], 0x15);
    } else {
        d[0x27] = 0;
    }
    if (s[2]) {
        func_ov001_0217ec78(d + 0x3c, (void *)s[2], 0x33);
    } else {
        d[0x3c] = 0;
    }
    if (s[3]) {
        func_ov001_0217ec78(d + 0x6f, (void *)s[3], 0x1f);
    } else {
        d[0x6f] = 0;
    }
    if (s[4]) {
        func_ov001_0217ec78(d + 0x8e, (void *)s[4], 0x1f);
    } else {
        d[0x8e] = 0;
    }
    if (s[5]) {
        func_ov001_0217ec78(d + 0xad, (void *)s[5], 0x4c);
    } else {
        d[0xad] = 0;
    }
    W(0xfc) = s[6];
    func_ov001_0217ec78(d + 0x100, (uint8_t *)s + 0x1c, 0xb);
    func_ov001_0217ec78(d + 0x10b, (uint8_t *)s + 0x27, 3);
    W(0x110) = s[0xb];
    W(0x114) = s[0xc];
    if (s + 13) {
        func_ov001_0217ec78(d + 0x118, (uint8_t *)s + 0x34, 0x80);
    } else {
        d[0x118] = 0;
    }
    W(0x198) = s[0x2d];
    W(0x19c) = s[0x2e];
    W(0x1a0) = s[0x2f];
    W(0x1a4) = s[0x30];
    W(0x1a8) = s[0x31];
    if (s[0x32]) {
        func_ov001_0217ec78(d + 0x1ac, (void *)s[0x32], 0x33);
    } else {
        d[0x1ac] = 0;
    }
    W(0xfc) = s[6];
    W(0x110) = s[0xb];
    W(0x114) = s[0xc];
    W(0x198) = s[0x2d];
    W(0x19c) = s[0x2e];
    W(0x1a0) = s[0x2f];
    W(0x1a4) = s[0x30];
    W(0x1a8) = s[0x31];
    W(0x1e0) = s[0x33];
    W(0x1e4) = s[0x34];
    W(0x1e8) = s[0x35];
    W(0x1ec) = s[0x36];
    W(0x1f0) = s[0x37];
    W(0x1f4) = s[0x38];
    W(0x1f8) = s[0x39];
    W(0x1fc) = s[0x3a];
    W(0x200) = s[0x3b];
}
