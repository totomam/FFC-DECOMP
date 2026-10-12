#include "ffc/types.h"

extern int func_ov001_021808cc(void *p);
extern int func_ov001_0217fdb4(void *a, void *b, int c);
extern void func_ov001_0217fd14(void *dst, void *src);
extern int func_ov001_0218180c(void *p, void *buf, int x, int y);
extern void func_ov000_021653f4(int v);

int func_ov001_02180ab4(uint8_t *p, uint8_t *q, int c) {
    uint8_t buf[0x20];

    if (*(int *)(p + 0xc) != 0) {
        if (func_ov001_021808cc(p) != 0) {
            return 1;
        }
        return 0;
    }
    if (c < 0x40) {
        if (func_ov001_021808cc(p) != 0) {
            return 1;
        }
        return 0;
    }
    if (func_ov001_0217fdb4(q, p + 0x68, c) == 0) {
        if (func_ov001_021808cc(p) != 0) {
            return 1;
        }
        return 0;
    }
    func_ov001_0217fd14(buf, q + 0x20);
    if (func_ov001_0218180c(p, buf, *(int *)(p + 0x38), *(int *)(p + 0x3c)) == 0) {
        return 0;
    }
    if (*(int *)(p + 0x38) != 0) {
        func_ov000_021653f4(*(int *)(p + 0x38));
        *(int *)(p + 0x38) = 0;
    }
    *(int *)(p + 0xc) = 1;
    return 1;
}
