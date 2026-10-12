#include "ffc/types.h"

extern int func_ov001_021808cc(uint8_t *a);
extern void func_ov001_0217fd14(void *dst, uint32_t x, int y);
extern void func_ov001_0217fc84(void *dst);
extern int func_ov001_021817a4(uint8_t *a, void *b, void *c);

int func_ov001_02180a44(uint8_t *a, uint32_t b, int c) {
    uint8_t s1[0x20];
    uint8_t s0[0x20];

    if (*(int *)(a + 0xc) != 2) {
        if (func_ov001_021808cc(a) != 0) {
            return 1;
        }
        return 0;
    }
    if (c < 0x20) {
        if (func_ov001_021808cc(a) != 0) {
            return 1;
        }
        return 0;
    }
    func_ov001_0217fd14(s1, b, c);
    func_ov001_0217fc84(s0);
    ((void (*)(void *, void *))func_ov001_0217fd14)(a + 0x68, s0);
    if (func_ov001_021817a4(a, s1, s0) == 0) {
        return 0;
    }
    *(int *)(a + 0xc) = 3;
    return 1;
}
