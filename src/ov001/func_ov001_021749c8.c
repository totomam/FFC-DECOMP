#include "ffc/types.h"

extern int func_ov000_021652a8(int a, int b, int c, void *d);
extern int func_ov001_02171e6c(uint8_t *p, int a, int b);
extern int func_ov001_02171d60(uint8_t *p);
extern void func_ov001_02171d4c(uint8_t *p);
extern int func_ov001_02171ff0(uint8_t *p, uint8_t *buf, uint32_t *len);
extern int func_ov001_02171ac0(uint8_t *p, uint8_t *buf, uint32_t len);
extern int func_ov001_02171ee8(uint8_t *p);
extern int data_ov001_0218fecc;

typedef int (*cb_t)(uint8_t *, uint8_t *);

#define FI(p, off) (*(int *)((p) + (off)))

void func_ov001_021749c8(uint8_t *p) {
    uint32_t len;
    uint8_t buf[0x404];
    cb_t cb;
    int r;

    if (FI(p, 0x1a0) == 0) {
        func_ov000_021652a8(8, 3, 0x10, &data_ov001_0218fecc);
        cb = (cb_t)FI(p, 0x1bc);
        if (cb != 0 && cb(p, p + 0x194) == 3) {
            FI(p, 0x124) = 1;
            FI(p, 0x40) = 0x11;
            return;
        }
        if (FI(p, 0x1a4) != 0) {
            FI(p, 0x10) = 5;
            func_ov001_02171e6c(p, 0, 0);
            return;
        }
    }

    if (FI(p, 0x1b0) != 0) {
        cb = (cb_t)FI(p, 0x1bc);
        if (cb != 0 && cb(p, p + 0x194) == 3) {
            FI(p, 0x124) = 1;
            FI(p, 0x40) = 0x11;
            return;
        }
        if (FI(p, 0x1a4) != 0) {
            FI(p, 0x10) = 5;
            func_ov001_02171e6c(p, 0, 0);
        }
        return;
    }

    if (FI(p, 0x68) < FI(p, 0x64)) {
        if (!func_ov001_02171d60(p)) {
            return;
        }
        if (FI(p, 0x68) < FI(p, 0x64)) {
            return;
        }
        func_ov001_02171d4c(p + 0x58);
    }

    len = 0x401;
    r = func_ov001_02171ff0(p, buf, &len);
    if (r == 2 || r == 3) {
        FI(p, 0x124) = 1;
        FI(p, 0x40) = 0x11;
        return;
    }
    if (r != 0) {
        return;
    }
    if (!func_ov001_02171ac0(p + 0xc4, buf, len)) {
        return;
    }
    if (!func_ov001_02171ee8(p)) {
        FI(p, 0x124) = 1;
        FI(p, 0x40) = 0x11;
        return;
    }
    if (FI(p, 0x1a4) != 0) {
        FI(p, 0x10) = 5;
        func_ov001_02171e6c(p, 0, 0);
    }
}
