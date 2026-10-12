/* cflags: -nothumb */
#include "ffc/types.h"

void func_020857f8(uint8_t *src, uint8_t *dst) {
    int32_t sum = 0;
    uint32_t w = *(uint32_t *)src;
    int32_t n = w >> 8;
    if ((w & 0xf) == 1) {
        src += 3; dst -= 1;
        do {
            sum += *++src;
            *++dst = sum;
            n--;
        } while (n > 0);
    } else {
        src += 2; dst -= 2;
        do {
            sum += *(uint16_t *)(src += 2);
            *(uint16_t *)(dst += 2) = sum;
            n -= 2;
        } while (n > 0);
    }
}
