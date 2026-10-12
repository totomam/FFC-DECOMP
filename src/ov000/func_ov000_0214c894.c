#include "ffc/types.h"

extern int func_ov000_0214c5f0(uint16_t *b, int n);
extern void func_02084b2c(void *dst, int c, uint32_t size);
extern void func_ov000_0214c7c5_unk(uint16_t *a, uint32_t p, int k, int n);

void func_ov000_0214c894(uint16_t *a, uint16_t *b, int n)
{
    int m = func_ov000_0214c5f0(b, n);
    int i;
    int k;
    int j;

    if (2 * m < n) {
        func_02084b2c(a + 2 * m, 0, (n - 2 * m) * 2);
    }

    i = 0;
    if (m > 0) {
        int nm1 = n - 1;
        do {
            uint32_t sq;
            j = 2 * i;
            if (j >= n) break;
            sq = (uint32_t)b[i] * b[i];
            a[j] = (uint16_t)sq;
            if (j == nm1) break;
            a[j + 1] = (uint16_t)(sq >> 16);
            i++;
        } while (i < m);
    }

    k = 0;
    if (m > 0) do {
        for (i = k + 1; i < m && k + i < n; i++) {
            uint32_t p = (uint32_t)b[i] * b[k];
            if (p <= 0x7fff8000u) {
                func_ov000_0214c7c5_unk(a, p << 1, k + i, n);
            } else {
                func_ov000_0214c7c5_unk(a, p, k + i, n);
                func_ov000_0214c7c5_unk(a, p, k + i, n);
            }
        }
        k++;
    } while (k < m);
}
