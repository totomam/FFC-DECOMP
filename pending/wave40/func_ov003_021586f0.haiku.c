#include "ffc/types.h"

extern int func_0202b2dc(void);
extern int func_ov003_0215630c(void *p);
extern void func_ov003_02157b6c(void *p, int a, int b, int c, int d, int e, int f);
extern void func_02021338(int x);

void func_ov003_021586f0(uint8_t *p) {
    volatile uint32_t t[2];
    int k = 0x110;
    if (*(void **)(p + k) == 0) {
        return;
    }
    if (func_0202b2dc() == 0) {
        return;
    }
    if (func_ov003_0215630c(p) != 0) {
        func_ov003_02157b6c(p, 0xa3, 0, 0x1000, 0, 0, 0);
        uint8_t *q = *(uint8_t **)(p + 0xa8);
        if (q[4] == 2) {
            return;
        }
        if (q[5] == 2) {
            return;
        }
        func_02021338(k);
    } else {
        func_ov003_02157b6c(p, 0xa2, 0, 0x1000, 0, 0, 0);
        uint8_t *q = *(uint8_t **)(p + 0xa8);
        if (q[4] == 2) {
            return;
        }
        if (q[5] == 2) {
            return;
        }
        func_02021338(k - 1);
    }
}
