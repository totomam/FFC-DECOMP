/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct {
    uint32_t i;
    uint32_t j;
    uint8_t tbl[1024];
} RC4State;

#define STEP() \
    do { \
        j += si; \
        sj = *(uint32_t *)(ctx->tbl + (j >> 22)); \
        b = *in++; \
        *(uint32_t *)(ctx->tbl + (i >> 22)) = sj; \
        *(uint32_t *)(ctx->tbl + (j >> 22)) = si; \
        t = si + sj; \
        i += inc; \
        t = *(uint32_t *)(ctx->tbl + (t >> 22)); \
        si = *(uint32_t *)(ctx->tbl + (i >> 22)); \
        *out++ = (uint8_t)(b ^ (t >> 24)); \
    } while (0)

void func_0208f15c(RC4State *ctx, const uint8_t *in, int32_t n, uint8_t *out)
{
    uint32_t inc = 0x1000000;
    uint32_t i = ctx->i + inc;
    uint32_t j = ctx->j;
    uint32_t si, sj, t;
    uint8_t b;

    si = *(uint32_t *)(ctx->tbl + (i >> 22));
    n -= 8;
    while (n >= 0) {
        STEP();
        STEP();
        STEP();
        STEP();
        STEP();
        STEP();
        STEP();
        STEP();
        n -= 8;
    }
    n += 8;
    while (n > 0) {
        STEP();
        n--;
    }
    ctx->i = (i - inc) & 0xff000000;
    ctx->j = j;
}
