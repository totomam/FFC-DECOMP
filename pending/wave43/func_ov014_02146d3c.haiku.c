/* cflags: -nothumb */
#include "ffc/types.h"

extern int8_t data_ov014_02155928[];
extern int16_t data_ov014_02155938[];

typedef struct {
    int32_t pred;
    int32_t index;
} AdpcmState;

void func_ov014_02146d3c(AdpcmState *st, uint8_t *in, int32_t n, uint32_t *out)
{
    int32_t i = 0;
    int32_t b, step, diff, s1, s2, old, idx, pred, nib;
    while (i < n) {
        b = in[i];
        i++;

        nib = b;
        old = st->index;
        idx = old + data_ov014_02155928[nib & 7];
        st->index = idx;
        if (idx < 0) { idx = 0; st->index = idx; }
        step = data_ov014_02155938[old];
        if (st->index > 0x58) st->index = 0x58;
        diff = step >> 3;
        if (nib & 4) diff += step;
        if (nib & 2) diff += step >> 1;
        if (nib & 1) diff += step >> 2;
        pred = st->pred;
        if (nib & 8) pred -= diff; else pred += diff;
        st->pred = pred;
        if (pred < -32768) { pred = -32768; st->pred = pred; }
        if (st->pred > 32767) st->pred = 32767;
        s1 = st->pred;

        nib = b >> 4;
        old = st->index;
        idx = old + data_ov014_02155928[nib & 7];
        st->index = idx;
        if (idx < 0) { idx = 0; st->index = idx; }
        step = data_ov014_02155938[old];
        if (st->index > 0x58) st->index = 0x58;
        diff = step >> 3;
        if (nib & 4) diff += step;
        if (nib & 2) diff += step >> 1;
        if (nib & 1) diff += step >> 2;
        pred = st->pred;
        if (nib & 8) pred -= diff; else pred += diff;
        st->pred = pred;
        if (pred < -32768) { pred = -32768; st->pred = pred; }
        if (st->pred > 32767) st->pred = 32767;
        s2 = st->pred;

        *out++ = ((uint32_t)s2 << 16) | ((uint32_t)s1 & 0xFFFF);
    }
}
