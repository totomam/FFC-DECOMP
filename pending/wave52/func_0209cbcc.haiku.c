#include "ffc/types.h"

struct Ctx {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
};

struct Pair {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
    uint32_t e;
    uint32_t f;
};

extern void func_0209cce4(void);
extern void func_0209c070(uint32_t obj, struct Pair *out);
extern void func_0209d160(struct Ctx *p, struct Pair *s);
extern uint32_t func_0209c8c4(struct Ctx *p, struct Pair *s);
extern uint8_t *func_0209ca84(struct Ctx *p, struct Pair *s, uint32_t *out);
extern uint32_t func_0209bfdc(uint8_t *src, uint32_t *out);
extern void func_0209bf7c(uint32_t x, uint32_t *out);
extern void func_0209c2d8(struct Ctx *p, struct Pair *s, uint8_t *r);
extern void func_0209cb94(struct Ctx *p, uint32_t a, uint32_t b);
extern void func_0209d220(struct Ctx *p, struct Pair *s, uint32_t v);

void func_0209cbcc(struct Ctx *p)
{
    struct Pair s;
    uint32_t t[4];
    uint8_t *r4;
    uint32_t w;

    func_0209c070(p->f10, &s);
    if (s.b == 0) {
        func_0209cce4();
    }
    func_0209d160(p, &s);
    if (p->f0 != 0) {
        p->fc = 0;
    } else {
        p->fc = func_0209c8c4(p, &s);
        if (p->fc == 0) {
            func_0209cce4();
        }
    }
    r4 = func_0209ca84(p, &s, &t[0]);
    w = ((uint32_t)r4[1]) | ((uint32_t)r4[2] << 8) | ((uint32_t)r4[3] << 16) | ((uint32_t)r4[4] << 24);
    t[1] = w;
    func_0209bf7c(func_0209bfdc(r4 + 5, &t[2]), &t[3]);
    func_0209c2d8(p, &s, r4);
    func_0209cb94(p, t[3], t[0]);
    func_0209d220(p, &s, s.a + t[2]);
}
