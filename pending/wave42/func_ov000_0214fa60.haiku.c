#include "ffc/types.h"

extern uint32_t data_ov000_0216e214[];
extern void func_02084b2c(uint32_t a, uint32_t b, uint32_t c);

typedef struct {
    uint32_t pad[0x4b0];
    uint32_t f0;
    uint32_t f1;
    uint32_t f2;
    uint32_t f3;
    uint32_t f4;
} G;

typedef struct {
    uint32_t w0;
    uint32_t w1;
    uint32_t w2;
    uint32_t w3;
} P;

void func_ov000_0214fa60(P *p, uint32_t v)
{
    G *g = (G *)data_ov000_0216e214[1];
    uint32_t pad;

    if (p == 0) {
        g->f0 = 3;
        g->f1 = 0;
        g->f2 = 0;
        g->f3 = 0;
        g->f4 = v;
        return;
    }

    g->f0 = p->w0 & 3;
    pad = (4 - (p->w1 & 3)) & 3;
    if (pad + 12 <= p->w2) {
        g->f1 = (p->w1 + 3) & ~3u;
        g->f2 = p->w2 - pad;
        func_02084b2c(g->f1, 0, g->f2);
    } else {
        g->f1 = 0;
        g->f2 = 0;
    }
    g->f3 = p->w3;
    g->f4 = v;
}
