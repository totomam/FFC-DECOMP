#include "ffc/types.h"

typedef struct { int32_t x; int32_t y; } Pt;
typedef struct { int32_t q; int32_t r; } QR;
typedef struct { uint8_t pad[0x18]; int32_t v; } Inner;
typedef struct {
    uint8_t pad0[0x20];
    void *o20;
    Inner *pa;
    Inner *pb;
    uint8_t pad1[0x40];
    Pt s70;
} Ctx;

extern QR func_0209a76c(int32_t a, int32_t b);
extern int32_t func_0205daac(void *p);
extern void func_02059e18(void *o, int32_t a, Pt b, Pt p0, Pt p1, Pt p2,
                          int32_t e, int32_t f, int32_t g, int32_t h);

typedef struct { Ctx *c; int32_t a1; int32_t a2; int32_t a3; } Blk;

void func_020209a8(Blk b, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8)
{
    int32_t dx, dy, ilo, ihi, jlo, jhi, i, j;
    Ctx *c = b.c;
    int32_t a1 = b.a1, a2 = b.a2, a3 = b.a3;

    if (a5 > a7) return;
    if (a6 > a8) return;

    dx = a3 - a1;
    dy = a4 - a2;
    ilo = func_0209a76c(a5, dx).q;
    jlo = func_0209a76c(a6, dy).q;
    ihi = func_0209a76c(a7 - 1, dx).q + 1;
    jhi = func_0209a76c(a8 - 1, dy).q + 1;

    for (i = ilo; i < ihi; i++) {
        int32_t idx = i * dx;
        for (j = jlo; j < jhi; j++) {
            int32_t t7 = 0, t6 = 0, t2, tr;
            if (i == ilo) t7 = func_0209a76c(a5, dx).r;
            if (i == ihi - 1) t2 = func_0209a76c(a7 - 1, dx).r + 1;
            else t2 = dx;
            if (j == jlo) t6 = func_0209a76c(a6, dy).r;
            if (j == jhi - 1) tr = func_0209a76c(a8 - 1, dy).r + 1;
            else tr = dy;
            func_02059e18(c->o20, func_0205daac(c->pad1), c->s70,
                          (Pt){t7 + a1, t6 + a2},
                          (Pt){t2 + a1, tr + a2},
                          (Pt){t7 + idx, t6 + j * dy},
                          c->pa->v, c->pb->v, 0, 0);
        }
    }
}
