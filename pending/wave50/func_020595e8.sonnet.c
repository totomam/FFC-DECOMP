#include "ffc/types.h"

typedef struct Guard {
    uint32_t v;
    uint8_t flag;
} Guard;

typedef struct Q {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
} Q;

typedef struct P {
    uint32_t f0;
    uint32_t f4;
} P;

typedef struct Self {
    uint32_t f0;
    uint32_t f4;
    Q *f8;
    uint32_t fc;
    P *f10;
    uint32_t slots[];
} Self;

extern void func_0208763c(uint32_t);
extern void func_02088f30(void);
extern uint32_t func_0205ce70(uint32_t);
extern uint32_t func_0205816c(void *first, uint32_t second, uint32_t third, uint32_t fourth, uint32_t fifth, uint32_t sixth, uint32_t seventh);
extern void *func_0205681c(uint32_t);
extern uint32_t func_0205ce88(void *p, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02087678(uint32_t);

uint32_t func_020595e8(Self *self, uint32_t a1, uint32_t a2)
{
    Guard g;
    Guard *gp = &g;
    uint32_t i;
    uint32_t cnt;
    uint32_t idx;
    uint32_t r;
    uint32_t offs;
    uint32_t p;

    gp->v = (uint32_t)self->f10 + 0x20;
    gp->flag = 1;
    if (gp->flag) {
        func_0208763c(gp->v);
    }

    Q *q = self->f8;
    i = 0;
    cnt = q->f14;
    if (i < cnt) {
        do {
            if (self->slots[q->f10 + i] == 0) break;
            i++;
        } while (i < *(volatile uint32_t *)&q->f14);
    }
    if (i >= cnt) {
        func_02088f30();
    }
    idx = i + self->f8->f10;

    r = func_0205ce70(a1);
    r = func_0205816c(self->f10, r, a2, 0x4000, 0, 0, 0x80000);
    offs = (r - self->f10->f4) >> 14;

    p = (uint32_t)func_0205681c(0x44);
    if (p != 0) {
        p = func_0205ce88((void *)p, self->fc, offs, r, a1, idx);
    }
    self->slots[idx] = p;

    if (gp->flag) {
        func_02087678(g.v);
    }
    return p;
}
