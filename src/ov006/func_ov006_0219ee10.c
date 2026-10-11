#include "ffc/types.h"

extern uint64_t func_0209a76c(uint32_t a, int m);

void func_ov006_0219ee10(uint32_t a, int8_t *dst, int len, int8_t *src, int m)
{
    int i;
    int j;
    int n;

    n = len / 2;
    j = (int)(func_0209a76c(a, m) >> 32);
    for (i = 0; i < n; i++) {
        dst[i] = (int8_t)i;
        dst[i] ^= src[j];
        j++;
        if (j >= m) {
            j = 0;
        }
    }
}
