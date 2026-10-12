/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct {
    uint8_t *src;
    uint8_t *dst;
    int n;
    int rows;
    uint32_t thr;
    uint8_t *tab;
} FfcCtx;

void func_ov014_02148dc0(FfcCtx *c)
{
    uint8_t *fp;
    uint8_t *d;
    int r3;
    int sl;

    fp = c->src;
    d = c->dst;
    r3 = c->rows;
    *(uint32_t *)d = *(uint32_t *)fp;
    fp += 4;
    d += 4;
    for (;;) {
        sl = c->n - 8;
        do {
            uint8_t r2 = *fp++;
            uint8_t r3b = *fp++;
            uint8_t r4 = *fp++;
            uint8_t r5 = *fp++;
            uint8_t r6 = *fp++;
            uint8_t r7 = *fp++;
            uint8_t r8 = *fp++;
            uint8_t sb;
            int t;
            t = (int)r5 - (int)r6;
            if (t < 0) t = -t;
            if (t >= (int)(c->thr & 0xff)) goto out;
            t = (int)r4 - (int)r5;
            if (t < 0) t = -t;
            if (t >= (int)(c->thr >> 8)) goto out;
            t = (int)r7 - (int)r6;
            if (t < 0) t = -t;
            if (t >= (int)(c->thr >> 8)) goto out;
            {
                int s = (int)r5 + (int)r6 + 1;
                int k = ((int)r4 - (int)r7 + 4) >> 3;
                r5 = c->tab[k + (s >> 1)];
                r6 = c->tab[(s >> 1) - k];
            }
out:
            sb = *fp++;
            *(uint32_t *)d = r2 | (r3b << 8) | (r4 << 16) | (r5 << 24);
            *(uint32_t *)(d + 4) = r6 | (r7 << 8) | (r8 << 16) | (sb << 24);
            d += 8;
            sl -= 8;
        } while (sl != 0);
        *(uint32_t *)d = *(uint32_t *)fp;
        fp += 4;
        fp += 0x100;
        d += 0x104;
        fp -= c->n;
        d -= c->n;
        r3--;
        if (r3 == 0) break;
        *(uint32_t *)d = *(uint32_t *)fp;
        fp += 4;
        d += 4;
    }
}
