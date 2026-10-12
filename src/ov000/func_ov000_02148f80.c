#include "ffc/types.h"

extern void *func_02084b2c(void *, int, uint32_t);
extern int func_02084118(void *, void *, uint32_t);
extern int func_ov000_021493d8(void *);
extern void func_ov000_02149250(void *, int);
extern void *func_02084ca4(void *, void *, uint32_t);
extern void *func_020849ac(int, void *, uint32_t);
extern int func_ov000_02149304(void *, void *);

int func_ov000_02148f80(uint8_t *p, void *q)
{
    int f[4];
    uint8_t mask;
    int i;

    func_02084b2c(f, 0, 16);
    for (i = 0; i < 3; i++) {
        int r = func_02084118(q, p + (i << 8), 0xfe);
        if (r == *(uint16_t *)(p + (i << 8) + 0xfe) &&
            func_ov000_021493d8(p + (i << 8)) != 0) {
            f[i] = 1;
        }
    }
    {
        int r = func_02084118(q, p + 0x300, 0xfe);
        if (r == *(uint16_t *)(p + 0x3fe)) {
            f[3] = 1;
        }
    }

    if (f[0] && f[1] && f[2] && f[3]) {
        return 0;
    }

    mask = p[0xef];
    if (f[0] == 0) {
        func_ov000_02149250(p, 0);
        mask = 0;
        if (f[1] != 0) {
            mask = p[0x1ef];
            func_02084ca4(p + 0x1f0, p + 0xf0, 14);
        }
    }
    if (f[1] == 0) {
        func_ov000_02149250(p, 1);
        if (f[0] != 0) {
            func_02084ca4(p + 0xf0, p + 0x1f0, 14);
        }
    }
    if (f[2] == 0) {
        func_ov000_02149250(p, 2);
    }
    if (f[3] == 0) {
        func_020849ac(0, p + 0x300, 0x100);
    }

    {
        int any = 0;
        uint8_t bits = 0;
        for (i = 0; i < 3; i++) {
            if (p[(i << 8) + 0xe7] != 0xff) {
                bits |= (uint8_t)(1u << i);
            } else if (mask & (1u << i)) {
                any = 1;
            }
        }
        p[0xef] = bits;
        p[0x1ef] = bits;

        if (func_ov000_02149304(p, q) == 0) {
            return -10000;
        }
        if (f[0] == 0 && f[1] == 0 && f[2] == 0) {
            return 0;
        }
        if (f[0] == 0 && f[1] == 0) {
            return -10003;
        }
        if (any) {
            return -10002;
        }
    }
    return 0;
}
