#include "ffc/types.h"

int func_ov006_021b541c(uint16_t *dst, uint8_t *src, int n)
{
    int i = 0;
    int last = n - 1;
    if (last > 0) {
        do {
            uint8_t c = src[i];
            if (c == 0) {
                break;
            }
            dst[i] = c;
            i++;
        } while (i < last);
    }
    dst[i] = 0;
    return i;
}
