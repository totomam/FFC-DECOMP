#include "ffc/types.h"

int func_ov001_02189aa8(uint8_t *out, uint32_t val, int n)
{
    int i;
    int k = 0;

    if (n > 8) {
        return -1;
    }
    for (i = 1; i <= n; i++) {
        uint32_t d = (val >> ((n - i) * 4)) & 0xF;
        if (d < 10) {
            out[k] = d + 0x30;
        } else {
            out[k] = d + 0x57;
        }
        k++;
    }
    return k;
}
