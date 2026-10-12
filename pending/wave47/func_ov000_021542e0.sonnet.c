#include "ffc/types.h"

extern void func_ov000_02152b80(uint32_t x);
extern int func_ov000_02151a9c(uint8_t *p);
extern int func_ov000_0214f67c(void);

typedef struct { uint8_t lo:5; uint8_t f5:1; uint8_t f6:1; uint8_t f7:1; } F;

uint32_t func_ov000_021542e0(uint8_t *p, uint32_t arg) {
    uint8_t n;
    uint8_t i;
    uint32_t flag;
    uint8_t *q;

    if (arg == 0x11) {
        return arg;
    }
    n = p[0x14c2];
    for (i = 0; i < n; i++) {
        if (p[0xbf4 + i * 4] == 0) {
            break;
        }
    }
    if (arg == 6) {
        if (n == i) {
            if (i == 0) {
                func_ov000_02152b80(5);
            } else {
                func_ov000_02152b80(6);
            }
            return 0x11;
        }
        goto L00b8;
    }
    if (n == 0) {
        return arg;
    }
    if (n == i) {
        return arg;
    }
    if (((F *)(p + 0x14bc))->f5 == 1) {
        if ((p + i * 4)[0xbf6] < 0x14) {
            return arg;
        }
    } else {
        if ((p + i * 4)[0xbf6] < 0x16) {
            return arg;
        }
    }
    q = p + i * 4;
    if (q[0xbf5] >= 0x13 && q[0xbf5] <= 0x16) {
        return arg;
    }
    if (((F *)(p + 0x14bc))->f7 == 1) {
        if (func_ov000_02151a9c(p + 0xc20 + i * 0xc0) == 0) {
            return arg;
        }
    }
L00b8:
    p[0x14c3] = i;
    if (func_ov000_0214f67c() != 1) {
        p[0x14be] = (uint8_t)arg;
        arg = 7;
    }
    return arg;
}
