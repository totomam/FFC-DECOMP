#include "ffc/types.h"
uint32_t func_ov000_02154d0c(int a) {
    int n = 32 - a;
    uint32_t m = 0xffffffff;
    a = 0;
    uint32_t k = 0xff000000;
    if (n > 0) { do { a++; m <<= 1; } while (a < n); }
    return ((m << 24) & k) | (((m << 8) & (k >> 8)) | (((m >> 8) & (k >> 16)) | ((uint8_t)(m >> 24))));
}
