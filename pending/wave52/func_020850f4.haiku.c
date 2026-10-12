/* cflags: -nothumb */
#include "ffc/types.h"

extern uint8_t *func_02084e04(uint8_t *src, uint8_t *dst, uint32_t n);

uint8_t *func_020850f4(uint8_t *src, uint8_t *dst, uint32_t n)
{
    if (n == 0) {
        return src;
    }
    if ((int32_t)src > (int32_t)dst) {
        return func_02084e04(src, dst, n);
    }
    src += n;
    dst += n;
    if (n > 8) {
        if ((uint32_t)dst & 2) {
            n -= 2;
            *--dst = *--src;
            *--dst = *--src;
        }
        if ((uint32_t)dst & 1) {
            n -= 1;
            *--dst = *--src;
        }
        while (n-- > 0) {
            *--dst = *--src;
        }
        return src - (dst - src);
    }
    switch (n) {
    case 8: *--dst = *--src;
    case 7: *--dst = *--src;
    case 6: *--dst = *--src;
    case 5: *--dst = *--src;
    case 4: *--dst = *--src;
    case 3: *--dst = *--src;
    case 2: *--dst = *--src;
    case 1: *--dst = *--src;
    }
    return src;
}
