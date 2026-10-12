/* cflags: -nothumb */
#include "ffc/types.h"

void func_020857f8(uint8_t *src, uint8_t *dst) {
    uint32_t w = *(uint32_t *)src;
    int32_t n = (int32_t)(w >> 8);
    uint32_t sum = 0;
    if ((w & 0xf) == 1) {
        src += 3;
        dst -= 1;
        do {
            uint8_t t = *++src;
            sum += t;
            *++dst = (uint8_t)sum;
            n--;
        } while (n > 0);
    } else {
        src += 2;
        dst -= 2;
        do {
            uint16_t t = *(uint16_t *)(src += 2);
            sum += t;
            *(uint16_t *)(dst += 2) = (uint16_t)sum;
            n -= 2;
        } while (n > 0);
    }
}
