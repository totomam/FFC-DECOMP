#include "ffc/types.h"

extern void func_02084b2c(void *p, int c, uint32_t n);
extern int func_ov000_0214c5f0(void *p, int n);
extern void func_ov000_0214c7c5_unk(void *a, int prod, int idx, int n);

void func_ov000_0214c7e0(uint16_t *a, uint16_t *p1, uint16_t *p2, int n) {
    int i, j;
    int c1, c2;

    func_02084b2c(a, 0, n * 2);
    c1 = func_ov000_0214c5f0(p1, n);
    c2 = func_ov000_0214c5f0(p2, n);
    for (i = 0; i < c2; i++) {
        for (j = 0; j < c1 && j < n - i; j++) {
            func_ov000_0214c7c5_unk(a, p1[j] * p2[i], i + j, n);
        }
    }
}
