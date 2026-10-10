/* cflags: -nothumb */
#include "ffc/types.h"

extern void func_02087f78(uint32_t a, uint32_t b, uint32_t c);

void func_02088014(uint32_t a, uint32_t b, uint32_t c) {
    uint32_t s = (c - 22) >> 1;
    b = (b & (0xFFFFF000u << s)) | c;
    b = b | 1;
    func_02087f78(a, b, c);
}
