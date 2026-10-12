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

extern int64_t func_0209a76c(int32_t a, int32_t b);
#define Q(a,b) ((int32_t)func_0209a76c(a,b))
#define R(a,b) ((int32_t)(func_0209a76c(a,b)>>32))
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
    ilo = Q(a5, dx);
    jlo = Q(a6, dy);
    ihi = Q(a7 - 1, dx) + 1;
    jhi = Q(a8 - 1, dy) + 1;

    Pt org = {a1, a2};
    for (i = ilo; i < ihi; i++) {
        int32_t idx = i * dx;
        for (j = jlo; j < jhi; j++) {
            int32_t m5 = a5, m1 = ihi - 1, m7 = a7 - 1, m2 = jhi - 1, m8 = a8 - 1;
            void *p0 = (char *)c + 0x30;
            Pt *p1 = (Pt *)((char *)c + 0x70);
            Pt o2 = org;
            int32_t t7 = 0, t6 = 0, t2, tr;
            if (i == ilo) t7 = R(m5, dx);
            if (i == m1) t2 = R(m7, dx) + 1;
            else t2 = dx;
            if (j == jlo) t6 = R(a6, dy);
            if (j == m2) tr = R(m8, dy) + 1;
            else tr = dy;
            Pt A = {t7 + idx, t6 + j * dy};
            Pt B = {t7 + o2.x, t6 + o2.y};
            Pt C = {t2 + o2.x, tr + o2.y};
            func_02059e18(c->o20, func_0205daac(p0), *p1, B, C, A,
                          c->pa->v, c->pb->v, 0, 0);
        }
    }
}
