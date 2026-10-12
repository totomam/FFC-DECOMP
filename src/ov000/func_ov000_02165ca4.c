#include "ffc/types.h"

void func_ov000_02165ca4(const int8_t *src, uint8_t *dst, int len) {
    uint8_t buf[4];
    int i = 0;
    if (len > 0) {
        do {
            buf[i] = src[i];
            i++;
        } while (i < len);
    }
    if (i < 3) {
        do {
            buf[i] = 0;
            i++;
        } while (i < 3);
    }
    dst[0] = buf[0] >> 2;
    dst[1] = ((buf[0] & 3) << 4) | (buf[1] >> 4);
    dst[2] = ((buf[1] & 0xf) << 2) | (buf[2] >> 6);
    dst[3] = buf[2] & 0x3f;
}
