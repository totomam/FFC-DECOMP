#include "ffc/types.h"

#define F(off) (*(int32_t *)((uint8_t *)s + (off)))

extern int32_t func_ov001_02171b58(void *p);
extern int32_t func_ov001_02171d60(void *p);
extern void func_ov001_02171d4c(void *p);
extern int32_t func_ov001_02172124(void *p, int32_t a, int32_t b);
extern int32_t func_ov001_02171ac0(void *p, int32_t a, int32_t b);

int32_t func_ov001_021721f8(void *s0, int32_t a, int32_t b) {
    uint8_t *s = (uint8_t *)s0;
    int32_t r = 0;
    int32_t idx = 0x66;
    if (*(int32_t *)(s + (idx << 2)) != 0 && *(int32_t *)(s + (idx << 2) + 0xc) == 1 && *(int32_t *)(s + (idx << 2) + 0x10) == 1) {
        if (func_ov001_02171b58(s + 0x58) == 0) {
            return 0;
        }
        if (func_ov001_02171d60(s) == 0) {
            return 0;
        }
        if (F(0x68) >= F(0x64)) {
            func_ov001_02171d4c(s + 0x58);
            return 1;
        }
        return 2;
    }
    if (F(0x68) >= F(0x64)) {
        r = func_ov001_02172124(s, a, b);
        if (r != -2) {
            if (r != -1) {
                if (r == b) {
                    return 1;
                }
            } else {
                return 0;
            }
        } else {
            return 2;
        }
    }
    if (func_ov001_02171ac0(s + 0x58, a + r, b - r) == 0) {
        return 0;
    }
    return 2;
}
