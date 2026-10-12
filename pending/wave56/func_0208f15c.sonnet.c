/* cflags: -nothumb */
#include "ffc/types.h"

#define STEP() \
    do { \
        j += si; \
        sj = *(uint32_t *)(tb + (j >> 22)); \
        b = *in++; \
        *(uint32_t *)(tb + (i >> 22)) = sj; \
        *(uint32_t *)(tb + (j >> 22)) = si; \
        t = si + sj; \
        i += inc; \
        t = *(uint32_t *)(tb + (t >> 22)); \
        si = *(uint32_t *)(tb + (i >> 22)); \
        *out++ = (uint8_t)(b ^ (t >> 24)); \
    } while (0)

void func_0208f15c(uint32_t *ctx, const uint8_t *in, int32_t n, uint8_t *out)
{
    uint32_t inc = 0x1000000;
    uint32_t i = ctx[0];
    uint32_t j = ctx[1];
    uint8_t *tb = (uint8_t *)(ctx + 2);
    uint32_t si, sj, t;
    uint8_t b;

    i += inc;
    n -= 8;
    si = *(uint32_t *)(tb + (i >> 22));
    while (n >= 0) {
        STEP(); STEP(); STEP(); STEP();
        STEP(); STEP(); STEP(); STEP();
        n -= 8;
    }
    n += 8;
    while (n > 0) {
        STEP();
        n--;
    }
    *(uint32_t *)(tb - 8) = (i - inc) & 0xff000000;
    *(uint32_t *)(tb - 4) = j;
}
