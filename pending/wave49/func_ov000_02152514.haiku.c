#include "ffc/types.h"

typedef struct In {
    uint32_t w0;
    uint32_t w4;
    uint8_t b8;
    uint8_t b9;
    uint8_t ba;
    uint8_t bb;
    uint32_t wc;
    uint8_t b10;
} In;

typedef struct Glob {
    uint8_t *f0;
    uint8_t *f4;
    uint8_t *f8;
    uint8_t *fc;
    uint8_t *f10;
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
    uint8_t *r5;
    uint32_t bbv;
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

    g->f10 = func_ov000_021529c4(0x10, 0x14d8);
    g->f0 = func_ov000_021529c4(2, 0x4800);
    g->f4 = func_ov000_021529c4(4, 0x58);
    g->f8 = func_ov000_021529c4(8, 0xc);
    func_020849e0(0, g->f10, 0x14d8);
    func_020849e0(0, g->f0, 0x4800);
    func_020849e0(0, g->f4, 0x58);
    func_020849e0(0, g->f8, 0xc);

    r5 = g->f10;
    r5[0x14ba] = p->b8;
    r5[0x14bb] = (r5[0x14bb] & ~3) | (p->b9 & 3);
    *(uint32_t *)(r5 + 0x14c8) = p->wc;
    r5[0x14cc] = p->b10;

    *(uint32_t *)g->f8 = p->w0;
    *(uint32_t *)(g->f8 + 4) = p->w4;
    *(uint32_t *)(g->f8 + 8) = 0;

    bbv = p->bb;
    r5[0x14bc] = (r5[0x14bc] & ~0xf) | (p->ba & 0xf);
    r5[0x14bc] = (r5[0x14bc] & ~0x10) | ((bbv << 28 >> 28) << 31 >> 27);
    r5[0x14bc] = (r5[0x14bc] & ~0x20) | ((bbv << 24 >> 28) << 31 >> 26);

    func_ov000_02158584(r5);
    if (func_02087460() != 0) {
        uint8_t a, b, c, n;
        r5[0x14bc] &= ~0x80;
        func_ov000_02158590(r5 + 0x300);
        n = r5[0x14bc] & 0xf;
        a = r5[0x3e7];
        b = r5[0x5e7];
        c = r5[0x7e7];
        if (n == 0) {
            if ((a >= 0x10 && a != 0xff) || (b >= 0x10 && b != 0xff) ||
                (c >= 0x10 && c != 0xff)) {
                r5[0x14bc] |= 0x80;
            }
        } else if (n == 0xb) {
            if (a >= 0x10 && a != 0xff) {
                r5[0x14bc] |= 0x80;
            }
        } else if (n == 0xc) {
            if (b >= 0x10 && b != 0xff) {
                r5[0x14bc] |= 0x80;
            }
        } else if (n == 0xd) {
            if (c >= 0x10 && b != 0xff) {
                r5[0x14bc] |= 0x80;
            }
        }
    }

    if (func_02087460() != 0) {
        if (!((r5[0x14bc] >> 5) & 1)) {
            r = func_ov000_0214f390(g->f0, 0x4800, 2);
        } else {
            r = func_ov000_0214f384(g->f0, 0x4800);
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
