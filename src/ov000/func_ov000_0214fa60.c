#include "ffc/types.h"

typedef struct {
    uint32_t pad[0x4b0];
    uint32_t f0;
    uint32_t f1;
    uint32_t f2;
    uint32_t f3;
    uint32_t f4;
} G;
typedef struct { uint32_t a; G *g; } D;
extern D data_ov000_0216e214;
extern void func_02084b2c(uint32_t a, uint32_t b, uint32_t c);

typedef struct {
    uint32_t w0;
    uint32_t w1;
    uint32_t w2;
    uint32_t w3;
} P;

#define g (data_ov000_0216e214.g)
void func_ov000_0214fa60(P *p, uint32_t v)
{
    if (p == 0) {
        g->f0 = 3;
        g->f1 = 0;
        g->f2 = 0;
        g->f3 = 0;
    } else {
        uint32_t w1;
        g->f0 = p->w0 & 3;
        w1 = p->w1;
        if (((4 - (w1 & 3)) & 3) + 12 > p->w2) {
            g->f1 = 0;
            g->f2 = 0;
        } else {
            g->f1 = (w1 + 3) & ~3u;
            g->f2 = p->w2 - ((4 - (p->w1 & 3)) & 3);
            func_02084b2c(g->f1, 0, g->f2);
        }
        g->f3 = p->w3;
    }
    g->f4 = v;
}
