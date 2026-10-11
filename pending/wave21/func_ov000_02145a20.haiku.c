#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);
extern uint8_t data_ov000_0216bc60[];

struct G {
    uint8_t pad0[0x20];
    uint8_t *tbl;
    uint8_t pad1[0x5c - 0x24];
    uint32_t lim;
    uint32_t pad2;
    volatile uint32_t pos;
};

void func_ov000_02145a20(void) {
    uint32_t t;
    struct G *g;
    func_02088978();
    g = (struct G *)data_ov000_0216bc60;
    t = g->pos;
    g->pos = t + *(uint16_t *)(g->tbl + g->pos);
    if (g->pos >= g->lim) {
        g->pos = 0;
    }
    func_0208898c();
}
