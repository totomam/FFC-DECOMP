#include "ffc/types.h"

typedef struct {
    int32_t a, b;
} P2;

typedef struct {
    int32_t a, b, c, d;
} P4;

typedef struct {
    int32_t p0;
    int32_t p4;
    int32_t x8;
    int32_t xc;
    int32_t x10;
    P2 x14;
    int32_t f1c;
    int32_t f20;
    int32_t f24;
    int32_t f28;
    uint8_t flag;
    uint8_t flag2;
} S;

extern int func_02059f74(int b, P2 x, P4 v, P2 cd, int a7, int a8, int a9, int a10);

int func_0205e9f4(S *p, int b, int c, int d, ...)
{
    P2 cd;
    int f20;
    int f1c;
    int A = 0;
    int B = 0;
    uint8_t flag2;
    uint8_t flag;
    P4 v;
    int g = *(&d + 1);
    int h = *(&d + 2);

    cd.a = c;
    cd.b = d;
    f20 = p->f20;
    f1c = p->f1c;
    flag2 = p->flag2;
    if (flag2) {
        A = (p->x10 - h) - (d - p->x8);
    }
    flag = p->flag;
    if (flag) {
        B = (p->xc - g) - (c - p->x8);
    }
    v.a = c + B + f1c;
    v.b = (d + A) + f20;
    v.c = (g + B) + f1c;
    v.d = (h + A) + f20;
    return func_02059f74(b, p->x14, v, cd, p->f24, p->f28, flag, flag2);
}
