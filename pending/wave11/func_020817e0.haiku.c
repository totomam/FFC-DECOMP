/* cflags: -nothumb */
#include "ffc/types.h"

int32_t func_020817e0(int32_t a, int64_t b) {
    int64_t x = a;
    int64_t t = b * x + 0x80000000LL;
    return (int32_t)(t >> 32);
}
