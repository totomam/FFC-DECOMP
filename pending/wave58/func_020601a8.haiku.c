#include "ffc/types.h"

typedef struct {
    uint32_t pad[5];
    uint32_t mask;
    uint8_t *base;
    int32_t tilesW;
    int32_t spanW;
    int32_t x0;
    int32_t rows;
    int32_t x;
    int32_t y;
} Obj;

void func_020601a8(Obj *p) {
    uint32_t pat = 0;
    int32_t i, ii, r7, endc, ncols, xb, end, lr, sp34, t2;
    uint32_t hiM, rM;
    uint8_t *dst;
    uint8_t *base;

    if (p->mask == 0xffffffffu) return;
    if (p->x0 <= 0) return;
    if (p->rows <= 0) return;
    for (i = 0; i < 8; i++) pat |= p->mask << (4 * i);
    if (p->y < 0) {
        p->rows += p->y;
        p->y = 0;
    }
    t2 = p->y + p->rows - (p->spanW << 3);
    if (t2 > 0) p->rows -= t2;
    if (p->rows == 0) return;

    xb = p->x & 7;
    hiM = ~((1u << (4 * xb)) - 1);
    end = (xb + p->x0) & 7;
    rM = end ? ((1u << (4 * end)) - 1) : 0xffffffffu;
    ncols = (xb + p->x0 + 7) >> 3;
    lr = 1 - 8 * ncols;
    sp34 = lr + 8 * (p->tilesW - 1);
    r7 = (p->x < 0) ? -(p->x >> 3) : 0;
    t2 = p->x + p->x0 - (p->tilesW << 3);
    endc = (t2 > 0) ? ncols - ((t2 + 7) >> 3) : ncols;
    base = p->base;
    dst = base + ((((p->x >> 3) + (p->y >> 3) * p->tilesW) << 5) + ((p->y & 7) << 2));

    for (; p->rows != 0; p->rows--) {
        for (ii = 0; ii < ncols; ii++) {
            uint32_t *w = (uint32_t *)dst;
            if (ii >= r7 && ii < endc) {
                if (ii == 0) {
                    if (ii == ncols - 1) {
                        *w = (*w & ~(hiM & rM)) | (pat & hiM & rM);
                    } else {
                        *w = (*w & ~hiM) | (pat & hiM);
                    }
                } else if (ii == ncols - 1) {
                    *w = (*w & ~rM) | (pat & rM);
                } else {
                    *w = pat;
                }
            }
            dst += 32;
        }
        if (((uint32_t)(dst - base) & 31) == 28) {
            dst += 4 * sp34;
        } else {
            dst += 4 * lr;
        }
    }
}
