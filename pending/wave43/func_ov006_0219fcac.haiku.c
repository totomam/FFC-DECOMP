#include "ffc/types.h"

typedef struct Blk {
    uint32_t w0;
    uint32_t w4;
    uint32_t w8;
    uint32_t wc;
} Blk;

typedef struct G {
    uint32_t g0;
    uint32_t g4;
    Blk *g8;
    uint32_t gc;
    uint32_t g10;
    uint32_t g14;
    uint32_t g18;
    uint32_t g1c;
    uint32_t g20;
    uint32_t g24;
} G;

extern G data_ov006_021bb120;

extern uint32_t func_02088978(uint32_t a, uint32_t b, uint32_t c);
extern void func_0208898c(uint32_t h);
extern uint32_t func_ov000_0214f384(uint32_t x, uint32_t y);
extern uint32_t func_ov000_0214f4f0(Blk *p, void *fn);
extern void func_ov006_0219f708(void);

uint32_t func_ov006_0219fcac(uint32_t a, uint32_t b, uint32_t c)
{
    uint32_t h = func_02088978(a, b, c);
    G *g;
    Blk *t;
    uint32_t r6;
    uint32_t k = 0x231f;

    t = (Blk *)((b + 0x53) & ~3u);
    r6 = (uint32_t)t;
    g = &data_ov006_021bb120;
    g->g24 = b;
    r6 = (r6 + 0x2f) & ~0x1fu;
    g->g8 = t;
    g->g0 = r6;
    r6 = (r6 + k) & ~0x1fu;
    g->g20 = r6;
    r6 = (r6 + 0xdf) & ~0x1fu;
    t->w4 = r6;
    g->g8->w8 = (b + c) - g->g8->w4;
    g->g8->wc = 0;
    g->g8->w0 = 3;
    g->g1c = a;

    if (g->g18 == 0) {
        if (func_ov000_0214f384(g->g0, k - 0x1f)) {
            func_0208898c(h);
            return 0;
        }
        g->g18 = 1;
    }

    if (g->g18 == 1) {
        if (func_ov000_0214f4f0(g->g8, (void *)func_ov006_0219f708) == 3) {
            g->g18 = 4;
            func_0208898c(h);
            return 1;
        }
        func_0208898c(h);
        return 0;
    }

    func_0208898c(h);
    return 0;
}
