#include "ffc/types.h"

extern int32_t func_ov001_02188954(uint8_t *dst, const uint8_t *src, int32_t n);
extern const int8_t data_ov001_0218f130[];

int32_t func_ov001_021889d4(int8_t *out, const uint8_t *src, int32_t n) {
    uint8_t buf[3];
    int32_t ret = 0;
    int32_t got;

    got = func_ov001_02188954(buf, src, n > 3 ? 3 : n);
    while (got > 0) {
        uint8_t b0, b1, b2;
        if (n < 3) {
            buf[2] = 0;
        }
        if (n < 2) {
            buf[1] = 0;
        }
        b0 = buf[0];
        b1 = buf[1];
        b2 = buf[2];
        out[0] = data_ov001_0218f130[(b0 >> 2) & 0x3f];
        out[1] = data_ov001_0218f130[((b0 << 4) | (b1 >> 4)) & 0x3f];
        if (got > 1) {
            out[2] = data_ov001_0218f130[((b1 << 2) | (b2 >> 6)) & 0x3f];
        } else {
            out[2] = 0x2a;
        }
        if (got > 2) {
            out[3] = data_ov001_0218f130[b2 & 0x3f];
        } else {
            out[3] = 0x2a;
        }
        ret += 4;
        out += 4;
        src += got;
        n -= got;
        if (n == 0) {
            break;
        }
        got = func_ov001_02188954(buf, src, n > 3 ? 3 : n);
    }
    *out = 0;
    return ret;
}
