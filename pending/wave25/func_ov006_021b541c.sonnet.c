#include "ffc/types.h"

int func_ov006_021b541c(uint16_t *dst, uint8_t *src, int n)
{
    int i = 0;
    int c;
    n--;
    if (n > 0) {
        do {
            c = src[i];
            if (c == 0) break;
            dst[i] = c;
            i++;
        } while (i < n);
    }
    dst[i] = 0;
    return i;
}
