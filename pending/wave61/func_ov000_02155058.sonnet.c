#include "ffc/types.h"
extern int32_t func_0209a76c(int32_t a, int32_t b);
extern int8_t data_ov000_02169b2c[];
void func_ov000_02155058(uint64_t v, int32_t n, int8_t *buf) {
    int32_t i, len = func_0209a76c(n + 4, 5);
    int8_t *t = data_ov000_02169b2c;

    int8_t *q;
    for (i = 0; i < len; i++) {
        q = buf + len - 1;
        *(q - i) = t[(int32_t)v & 0x1f];
        v >>= 5;
    }
    buf[len] = 0;
}
