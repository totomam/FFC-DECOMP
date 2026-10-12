/* cflags: -nothumb */
#include "ffc/types.h"

extern int8_t data_ov014_02155928[];
extern int16_t data_ov014_02155938[];

typedef struct {
    int32_t pred;
    int32_t index;
} AdpcmState;

static inline int32_t dec(AdpcmState *st, int32_t nib)
{
    int32_t step = data_ov014_02155938[st->index];
    int32_t diff;
    st->index += data_ov014_02155928[nib & 7];
    if (st->index < 0) st->index = 0;
    if (st->index > 0x58) st->index = 0x58;
    diff = step >> 3;
    if (nib & 4) diff += step;
    if (nib & 2) diff += step >> 1;
    if (nib & 1) diff += step >> 2;
    if (nib & 8) st->pred -= diff; else st->pred += diff;
    if (st->pred < -32768) st->pred = -32768;
    if (st->pred > 32767) st->pred = 32767;
    return st->pred;
}

void func_ov014_02146d3c(AdpcmState *st, uint8_t *in, int32_t n, uint32_t *out)
{
    int32_t i = 0;
    while (i < n) {
        int32_t b = in[i];
        int32_t s1, s2;
        i++;
        s1 = dec(st, b);
        b >>= 4;
        s2 = dec(st, b);
        *out++ = ((uint32_t)s2 << 16) | ((uint32_t)s1 & 0xFFFF);
    }
}
