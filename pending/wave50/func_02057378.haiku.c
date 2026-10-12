#include "ffc/types.h"

typedef struct S {
    void *vt;
    uint8_t r04[8];
    uint32_t w0c;
    uint8_t r10[3];
    uint8_t b13;
    uint8_t b14;
    uint8_t b15;
    uint8_t r16[6];
    int32_t w1c;
    int32_t w20;
    int32_t w24;
    uint8_t r28[4];
    int32_t w2c;
    int32_t w30;
    uint8_t r34[16];
    int32_t w44;
    int32_t w48;
    int32_t w4c;
    int32_t w50;
    int32_t w54;
    int32_t w58;
    int32_t w5c;
    int32_t w60;
    int32_t w64;
    int32_t w68;
    int32_t w6c;
    int32_t w70;
} S;

extern int32_t func_0208f694(int32_t value);
extern int32_t func_0209a76c(int32_t a, int32_t b);
extern char data_020b0c7c[];

S *func_02057378(S *pp, ...)
{
    S *p = pp;
    int32_t x1, x2, x3, x4;
    int32_t *p1, *p2, *m;
    int32_t *ap = (int32_t *)&pp + 1;
    int32_t a = ap[0], b = ap[1], c = ap[2], d = ap[3];
    int32_t e = ap[4], f = ap[5], g = ap[6], h = ap[7];

    p->w0c &= ~0xFFu;
    p->w1c = -1;
    p->w24 = -1;
    p->w2c = 1;
    p->vt = data_020b0c7c;
    p->b13 = 0;
    p->b14 = 0;
    p->b15 = 0;
    p->w44 = a;
    p->w54 = e;
    p->w58 = f;
    p->w5c = g;
    p->w60 = h;
    p->w30 = 0;
    p->w48 = b;
    p->w4c = c;
    p->w50 = d;

    x1 = func_0208f694(d - h);
    x2 = func_0208f694(c - g);
    p1 = (x2 < x1) ? &x1 : &x2;

    x3 = func_0208f694(b - f);
    x4 = func_0208f694(a - e);
    p2 = (x4 < x3) ? &x3 : &x4;

    m = (*p2 < *p1) ? p1 : p2;

    p->w1c = *m + 1;
    p->w64 = func_0209a76c((e - a) << 16, *m);
    p->w68 = func_0209a76c((f - b) << 16, *m);
    p->w6c = func_0209a76c((g - c) << 16, *m);
    p->w70 = func_0209a76c((h - d) << 16, *m);
    return p;
}
