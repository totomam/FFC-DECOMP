#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t state);

typedef struct {
    uint16_t a;
    uint16_t pad0;
    uint16_t b;
    uint16_t pad1;
    uint16_t c;
    uint16_t pad2;
    uint16_t d;
    uint16_t pad3;
    uint16_t e;
} S;

int func_0208ac40(int16_t *out, uint32_t x, uint32_t z, uint32_t y, S s_) {
    S *p = &s_;
    int32_t c1, a1, e1, b1, d1;
    uint32_t irq;
    int32_t da, dz;
    uint32_t tmp;
    int32_t qa, qc, bb, dd;

    if (x >= 0x1000 || z >= 0x1000 || p->b >= 0x1000 || p->c >= 0x1000) return 1;
    if (y >= 0x100 || p->d >= 0x100 ||
        p->a >= 0xc0 || p->e >= 0xc0) return 1;
    if (y == p->d || p->a == p->e || x == p->b || z == p->c) return 1;

    irq = func_02088978();
    *(volatile uint16_t *)0x4000280 = 0;
    b1 = p->b;
    *(volatile int32_t *)0x4000290 = (int32_t)((x - b1) << 8);
    d1 = p->d;
    volatile int32_t *dp1 = (volatile int32_t *)0x4000298;
    dp1[0] = (int32_t)(y - d1);
    dp1[1] = 0;
    c1 = p->c;
    dz = z - c1;
    e1 = p->e;
    a1 = p->a;
    da = a1 - e1;
    while (*(volatile uint16_t *)0x4000280 & 0x8000) ;
    qa = *(volatile int32_t *)0x40002a0;
    *(volatile uint16_t *)0x4000280 = 0;
    *(volatile int32_t *)0x4000290 = (int32_t)(dz << 8);
    volatile int32_t *dp2 = (volatile int32_t *)0x4000298;
    dp2[0] = da;
    dp2[1] = 0;

    if (qa >= 0x8000 || qa < -0x8000) {
        func_0208898c(irq);
        return 1;
    }
    out[2] = (int16_t)qa;

    tmp = ((x + b1) << 8) - (uint32_t)((int32_t)out[2] * (int32_t)(y + d1));
    bb = (int32_t)(tmp << 9) >> 16;
    if (bb >= 0x8000 || bb < -0x8000) {
        func_0208898c(irq);
        return 1;
    }
    out[0] = (int16_t)bb;

    while (*(volatile uint16_t *)0x4000280 & 0x8000) ;
    qc = *(volatile int32_t *)0x40002a0;
    func_0208898c(irq);
    if (qc >= 0x8000 || qc < -0x8000) return 1;
    out[3] = (int16_t)qc;

    tmp = ((z + c1) << 8) - (uint32_t)((int32_t)out[3] * (int32_t)(a1 + e1));
    dd = (int32_t)(tmp << 9) >> 16;
    if (dd >= 0x8000 || dd < -0x8000) return 1;
    out[1] = (int16_t)dd;
    return 0;
}
