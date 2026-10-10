#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint16_t f10;
    uint16_t f12;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
} FfcObj;

extern uint32_t func_02088978(FfcObj *p, int b, uint32_t c, uint32_t d);
extern void func_02088f30(void);
extern uint32_t func_0208893c(void);
extern void func_02088670(FfcObj *p);
extern void func_0208898c(uint32_t v);

void func_02088714(FfcObj *p, int b, uint32_t c, uint32_t d, uint32_t e)
{
    uint32_t saved;
    volatile int vc;
    uint32_t t;

    saved = func_02088978(p, b, c, d);
    if (p == 0 || p->f0 != 0) {
        func_02088f30();
    }
    vc = *(volatile uint16_t *)0x04000006;
    t = func_0208893c();
    p->f1c = 0;
    p->f10 = (uint16_t)b;
    if (b <= vc) {
        t++;
    }
    p->fc = t;
    p->f4 = e;
    p->f12 = (uint16_t)c;
    p->f24 = 0;
    p->f0 = d;
    func_02088670(p);
    func_0208898c(saved);
}
