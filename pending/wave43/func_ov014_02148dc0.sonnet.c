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
    uint8_t *fp = c->src;
    uint32_t *d = (uint32_t *)c->dst;
    int rows = c->rows;
    *d++ = *(uint32_t *)fp;
    fp += 4;
    do {
        int i = c->n - 8;
        do {
            uint8_t a = *fp++;
            uint8_t b = *fp++;
            uint8_t e = *fp++;
            uint8_t f = *fp++;
            uint8_t g = *fp++;
            uint8_t h = *fp++;
            uint8_t k = *fp++;
            int t = f - g;
            if (t < 0) t = -t;
            if (t < (int)(c->thr & 0xff)) {
                t = e - f;
                if (t < 0) t = -t;
                if (t < (int)(c->thr >> 8)) {
                    t = h - g;
                    if (t < 0) t = -t;
                    if (t < (int)(c->thr >> 8)) {
                        int s = (f + g + 1) >> 1;
                        int m = (e - h + 4) >> 3;
                        f = c->tab[s + m];
                        g = c->tab[s - m];
                    }
                }
            }
            *d++ = a | (b << 8) | (e << 16) | (f << 24);
            *d++ = g | (h << 8) | (k << 16) | (*fp++ << 24);
            i -= 8;
        } while (i != 0);
        *d++ = *(uint32_t *)fp;
        fp += 0x104;
        d = (uint32_t *)((uint8_t *)d + 0x100);
        fp -= c->n;
        d = (uint32_t *)((uint8_t *)d - c->n);
        if (--rows == 0) break;
        *d++ = *(uint32_t *)fp;
        fp += 4;
    } while (1);
}
