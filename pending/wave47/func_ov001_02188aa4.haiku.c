#include "ffc/types.h"

extern int32_t func_ov001_02188954(int8_t *dst, uint8_t *src, int32_t n);
extern int32_t func_ov001_02188980(uint8_t c);

int32_t func_ov001_02188aa4(uint8_t *out, uint8_t *src, int32_t len) {
    int8_t buf[8];
    int32_t total = 0;
    int32_t n, r4, i;

    n = func_ov001_02188954(buf + 3, src, 4);
    r4 = 0;
    while (n > 0 && r4 >= 0) {
        buf[0] = 0;
        buf[1] = 0;
        buf[2] = 0;
        r4 = func_ov001_02188980(buf[3]);
        if (r4 < 0) goto emit;
        buf[0] = (int8_t)(r4 << 2);
        r4 = func_ov001_02188980(buf[4]);
        if (r4 < 0) goto emit;
        buf[0] = (int8_t)(buf[0] | ((r4 << 20) >> 24));
        buf[1] = (int8_t)(r4 << 4);
        r4 = func_ov001_02188980(buf[5]);
        if (r4 < 0) goto emit;
        buf[1] = (int8_t)(buf[1] | ((r4 << 22) >> 24));
        buf[2] = (int8_t)(r4 << 6);
        r4 = func_ov001_02188980(buf[6]);
        if (r4 < 0) goto emit;
        buf[2] = (int8_t)(buf[2] | ((r4 << 24) >> 24));
emit:
        for (i = 0; i < n - 1; i++) {
            *out++ = (uint8_t)buf[i];
        }
        src += n;
        total += n - 1;
        len -= 4;
        if (len <= 0) {
            break;
        }
        n = func_ov001_02188954(buf + 3, src, 4);
    }
    *out = 0;
    return total;
}
