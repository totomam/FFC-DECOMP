/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct {
    uint8_t *src;
    uint8_t *dst;
    int32_t width;
    int32_t rows;
    uint32_t thr;
    uint8_t *tab;
} FfcBlk;

#define IABS(x) ((x) < 0 ? -(x) : (x))

void func_ov014_02148b94(FfcBlk *s)
{
    uint8_t *src = s->src;
    uint8_t *dst = s->dst;
    int32_t width = s->width;
    int32_t rows = s->rows;
    uint32_t thr = s->thr;
    uint8_t *tab = s->tab;
    int32_t n;
    uint32_t lim;

    *(uint32_t *)dst = *(uint32_t *)src;
    src += 4;
    dst += 4;

    do {
        n = width - 8;
        do {
            uint8_t a0 = src[0], a1 = src[1], a2 = src[2], a3 = src[3];
            uint8_t a4 = src[4], a5 = src[5], a6 = src[6];
            uint8_t a2b, a5b, a6b, a3b, a4b;
            int32_t sl, dd, h;
            uint32_t t1 = thr & 0xff;
            src += 8;
            a2b = a2; a3b = a3; a4b = a4; a5b = a5; a6b = a6;
            if (IABS((int32_t)a3 - (int32_t)a4) < (int32_t)t1) {
                lim = thr >> 8;
                if (IABS((int32_t)a2 - (int32_t)a3) < (int32_t)lim &&
                    IABS((int32_t)a5 - (int32_t)a4) < (int32_t)lim) {
                    sl = a3 + a4 + 1;
                    dd = ((int32_t)a2 - (int32_t)a5 + 4) >> 3;
                    h = sl >> 1;
                    if (IABS((int32_t)a1 - (int32_t)a3) < (int32_t)lim) {
                        a2b = (uint8_t)((a1 + h + 1) >> 1);
                    }
                    if (IABS((int32_t)a6 - (int32_t)a4) < (int32_t)lim) {
                        a5b = (uint8_t)((a6 + h + 1) >> 1);
                    }
                    a4b = tab[h - dd];
                    a3b = tab[h + dd];
                }
            }
            {
                uint8_t a7 = src[-1];
                *(uint32_t *)dst = a0 | (a1 << 8) | (a2b << 16) | (a3b << 24);
                dst += 4;
                *(uint32_t *)dst = a4b | (a5b << 8) | (a6 << 16) | (a7 << 24);
                dst += 4;
            }
            n -= 8;
        } while (n != 0);

        *(uint32_t *)dst = *(uint32_t *)src;
        src += 4;
        src += 0x100 - width;
        dst += 0x104;
        dst -= width;
        rows--;
        if (rows != 0) {
            *(uint32_t *)dst = *(uint32_t *)src;
            src += 4;
            dst += 4;
        }
    } while (rows != 0);
}
