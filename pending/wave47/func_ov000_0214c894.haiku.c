#include "ffc/types.h"

extern int func_ov000_0214c5f0(uint16_t *b, int n);
extern void func_02084b2c(void *dst, int c, uint32_t size);
extern void func_ov000_0214c7c5_unk(uint16_t *a, uint32_t p, int k, int n);

void func_ov000_0214c894(uint16_t *a, uint16_t *b, int n)
{
    int m = func_ov000_0214c5f0(b, n);
    int i;
    int k;
    int nm1 = n - 1;

    if (2 * m < n) {
        func_02084b2c(a + 2 * m, 0, (n - 2 * m) * 2);
    }

    if (m > 0) {
        for (i = 0; i < m && 2 * i < n; i++) {
            uint32_t sq = (uint32_t)b[i] * b[i];
            a[2 * i] = (uint16_t)sq;
            if (2 * i == nm1) {
                break;
            }
            a[2 * i + 1] = (uint16_t)(sq >> 16);
        }
    }

    for (k = 0; k < m; k++) {
        for (i = k + 1; i < m && k + i < n; i++) {
            uint32_t p = (uint32_t)b[i] * b[k];
            if (p <= 0x7fff8000u) {
                p <<= 1;
            } else {
                func_ov000_0214c7c5_unk(a, p, k + i, n);
            }
            func_ov000_0214c7c5_unk(a, p, k + i, n);
        }
    }
}
