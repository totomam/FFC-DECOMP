#include "ffc/types.h"

typedef struct {
    uint32_t w[5];
    int32_t f14;
    int32_t f18;
    uint32_t s[3];
} G;

extern uint32_t func_02088978(uint32_t a, uint32_t b);
extern void func_02088f30(void);
extern void func_02087058(void *p);
extern void func_0208898c(uint32_t v);
extern G data_021407c0;

uint32_t func_0207cb94(uint32_t a, uint32_t b)
{
    G *g = &data_021407c0;
    uint32_t r;

    r = func_02088978(a, b);
    if (g->f14 == (int32_t)a && g->f18 != 0) {
        goto body;
    }
    func_02088f30();
    goto end;
body:
    if (g->s[2] != b) {
        func_02088f30();
    }
    g->f18--;
    if (g->f18 == 0) {
        g->f14 = -3;
        g->s[2] = 0;
        func_02087058(g->s);
    }
end:
    func_0208898c(r);
}
