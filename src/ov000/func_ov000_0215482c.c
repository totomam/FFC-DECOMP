#include "ffc/types.h"

extern uint32_t func_ov000_021547e4(uint8_t c);

int func_ov000_0215482c(uint8_t *src, uint8_t *dst, uint32_t n, uint32_t m)
{
    int rem;
    int main_len;
    uint32_t out_len;
    uint32_t acc;
    int i;
    int j;
    int k;
    union {
        uint32_t w;
        uint8_t b[4];
    } u;

    out_len = (n * 3) >> 2;
    if (m >= out_len) {
        rem = n & 3;
        main_len = n - rem;
    } else {
        return -1;
    }
    for (i = 0; i < main_len; i += 4) {
        acc = 0;
        for (j = 0; j < 4; j++) {
            acc |= func_ov000_021547e4(src[i + j]) << (6 * (3 - j));
        }
        u.w = acc;
        for (k = 0; k < 3; k++) {
            dst[(i / 4) * 3 + k] = u.b[2 - k];
        }
    }
    if (rem != 0) {
        acc = 0;
        u.w = acc;
        for (j = 0; j < rem; j++) {
            acc |= func_ov000_021547e4(src[main_len + j]) << (6 * (3 - j));
            u.w |= acc;
        }
        for (k = 0; k < rem; k++) {
            dst[(main_len * 3) / 4 + k] = u.b[2 - k];
        }
    }
    return (int)out_len;
}
