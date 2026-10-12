#include "ffc/types.h"

typedef struct FfcObj {
    void **vt;
    uint32_t w04;
    uint32_t w08;
    uint32_t flags;
    uint8_t pad10[3];
    uint8_t b13;
    uint8_t b14;
    uint8_t pad15[3];
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
    int32_t f28;
    uint32_t w2c;
    int32_t f30;
} FfcObj;

extern void func_02056f88(FfcObj *p);
extern uint32_t func_02055058(uint32_t v);
extern uint32_t func_0209a76c(uint32_t a, uint32_t b);
extern uint32_t data_0213e098;

void func_02056f9c(FfcObj *p) {
    uint32_t r4, x, i, saved, r7, m, half;
    int32_t r5;

    if (p->b13 == 0) {
        func_02056f88(p);
    }
    if (p->b14) {
        p->b14 = 0;
        p->flags = (p->flags & ~0xffu) | 2;
        return;
    }
    {
        uint32_t t = func_02055058(data_0213e098);
        uint32_t lim;
        p->f20 += t;
        lim = p->f24;
        if (p->f20 >= lim) {
            int32_t c = p->f28;
            if (c != -1) {
                c--;
                p->f28 = c;
                if (c == 0) {
                    goto l_6e;
                }
            }
            p->f20 = 0;
            p->f18 = (uint32_t)-1;
            ((void (*)(FfcObj *, uint32_t))p->vt[3])(p, 0);
            return;
        l_6e:
            p->f20 = lim;
            p->b14 = 1;
        }
    }
    saved = p->f18;
    r7 = p->f1c;
    m = r7 - 1;
    r4 = func_0209a76c(m * p->f20, p->f24);
    r5 = p->f30;
    if (r5 != 0) {
        if (r5 > 10) {
            uint32_t h1 = r7 >> 1;
            half = h1;
            if (r4 < half) {
                x = r4;
                for (i = 0; i < (uint32_t)(r5 - 10); i++) {
                    x = func_0209a76c(r4 * x, half - 1);
                }
                r4 = x;
            } else {
                uint32_t mh = m - half;
                x = m - r4;
                for (i = 0; i < (uint32_t)(r5 - 10); i++) {
                    x = func_0209a76c(x * x, mh);
                }
                r4 = half + (mh - x);
            }
        } else if (r5 >= -10) {
            if (r5 > 0) {
                x = r4;
                for (i = 0; i < (uint32_t)r5; i++) {
                    x = func_0209a76c(r4 * x, m);
                }
                r4 = x;
            } else {
                uint32_t y = m - r4;
                x = y;
                for (i = 0; i < (uint32_t)(-r5); i++) {
                    x = func_0209a76c(x * y, m);
                }
                r4 = m - x;
            }
        } else {
            uint32_t h2 = r7 >> 1;
            half = h2;
            if (r4 < half) {
                uint32_t mm = half - 1;
                uint32_t y = mm - r4;
                x = y;
                for (i = 0; i < (uint32_t)(-(r5 + 10)); i++) {
                    x = func_0209a76c(x * y, mm);
                }
                r4 = mm - x;
            } else {
                uint32_t d = r4 - half;
                uint32_t mh = m - half;
                x = d;
                for (i = 0; i < (uint32_t)(-(r5 + 10)); i++) {
                    x = func_0209a76c(d * x, mh);
                }
                r4 = half + (mh - x);
            }
        }
    }
    p->f18 = r4;
    if (r4 != saved) {
        ((void (*)(FfcObj *, uint32_t))p->vt[3])(p, r4);
    }
}
