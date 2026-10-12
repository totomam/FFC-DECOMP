#include "ffc/types.h"

typedef struct In {
    uint32_t w0;
    uint32_t w4;
    uint8_t b8;
    uint8_t b9;
    uint8_t ba;
    uint8_t bb_lo : 4;
    uint8_t bb_hi : 4;
    uint32_t wc;
    uint8_t b10;
} In;

typedef struct Big {
    uint8_t pad[0x14ba];
    uint8_t v;
    uint8_t m : 2;
    uint8_t m2 : 6;
    uint8_t n : 4;
    uint8_t x : 1;
    uint8_t y : 1;
    uint8_t z : 1;
    uint8_t w : 1;
    uint8_t pad2[0x14c8 - 0x14bd];
    uint32_t wc;
    uint8_t b10;
    uint8_t pad3[0x14d8 - 0x14cd];
} Big;

typedef struct Tri { uint32_t a, b, c; } Tri;

typedef struct Glob {
    uint8_t *f0;
    uint8_t *f4;
    Tri *f8;
    uint8_t *fc;
    Big *f10;
} Glob;

extern Glob data_ov000_0216e26c;
extern void func_020849e0(uint32_t a, void *b, uint32_t c);
extern void *func_ov000_021529c4(uint32_t a, uint32_t b);
extern void func_ov000_02158584(void *p);
extern int32_t func_02087460(void);
extern void func_ov000_02158590(void *p);
extern int32_t func_ov000_0214f390(void *a, uint32_t b, uint32_t c);
extern int32_t func_ov000_0214f384(void *a, uint32_t b);
extern void func_ov000_02152a34(void);

int32_t func_ov000_02152514(In *p)
{
    Glob *g;
    uint8_t *r1;
    Big *r5;
    int32_t r;

    r1 = (uint8_t *)((void *(*)(uint32_t, uint32_t))p->w0)(1, 0xcc);
    g = &data_ov000_0216e26c;
    g->fc = r1;
    func_020849e0(0, r1, 0xcc);
    r1 = g->fc;
    *(uint32_t *)r1 = p->w0;
    *(uint32_t *)(r1 + 4) = p->w4;
    r1[9] = 1;
    r1[0x16] = 1;
    r1[8] = 1;

    g->f10 = func_ov000_021529c4(0x10, sizeof(Big));
    g->f0 = func_ov000_021529c4(2, 0x4800);
    g->f4 = func_ov000_021529c4(4, 0x58);
    g->f8 = func_ov000_021529c4(8, 0xc);
    func_020849e0(0, g->f10, sizeof(Big));
    func_020849e0(0, g->f0, 0x4800);
    func_020849e0(0, g->f4, 0x58);
    func_020849e0(0, g->f8, 0xc);

    r5 = g->f10;
    r5->v = p->b8;
    r5->m = p->b9;
    r5->wc = p->wc;
    r5->b10 = p->b10;

    {
        uint8_t *t = (uint8_t *)g->f8;
        *(uint32_t *)t = p->w0;
        *(uint32_t *)(t + 4) = p->w4;
        *(uint32_t *)(t + 8) = 0;
    }

    {
        Big *q = r5;
        q->n = p->ba;
        q->x = p->bb_lo;
        q->y = p->bb_hi;
    }

    func_ov000_02158584(r5);
    if (func_02087460() != 0) {
        uint8_t n;
        r5->w = 0;
        func_ov000_02158590((uint8_t *)r5 + 0x300);
        n = r5->n;
#define A (((uint8_t *)r5)[0x3e7])
#define B (((uint8_t *)r5)[0x5e7])
#define C (((uint8_t *)r5)[0x7e7])
        if (n == 0) {
            if ((A >= 0x10 && A != 0xff) || (B >= 0x10 && B != 0xff) ||
                (C >= 0x10 && C != 0xff)) {
                ((uint8_t *)r5)[0x14bc] |= 0x80;
            }
        } else if (n == 0xb) {
            if (A >= 0x10 && A != 0xff) r5->w = 1;
        } else if (n == 0xc) {
            if (B >= 0x10 && B != 0xff) r5->w = 1;
        } else if (n == 0xd) {
            if (C >= 0x10 && B != 0xff) r5->w = 1;
        }
    }

    if (func_02087460() != 0) {
        if (r5->y == 1) {
            r = func_ov000_0214f384(g->f0, 0x4800);
        } else {
            r = func_ov000_0214f390(g->f0, 0x4800, 2);
        }
    } else {
        r = func_ov000_0214f384(g->f0, 0x4800);
    }

    if (r == 1 || r > 4) {
        func_ov000_02152a34();
        return 0;
    }
    return 1;
}
