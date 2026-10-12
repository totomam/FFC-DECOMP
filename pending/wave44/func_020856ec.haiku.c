/* cflags: -nothumb */
#include "ffc/types.h"

void func_020856ec(uint8_t *src, uint8_t *dst) {
    int32_t size = (int32_t)(*(uint32_t *)src >> 8);
    int32_t n;
    int32_t i;
    src += 4;
    while (size > 0) {
        uint8_t c = *src++;
        if (c & 0x80) {
            n = (c & 0x7f) + 3;
        } else {
            n = (c & 0x7f) + 1;
        }
        size -= n;
        for (i = 0; i < n; i++) {
            dst[i] = src[i];
        }
        src += n;
        dst += n;
    }
}
