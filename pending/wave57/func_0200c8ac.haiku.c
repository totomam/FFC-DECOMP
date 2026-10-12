#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_0200bd24(void *p, Pair v);
extern void func_0200bdf4(void *p, uint32_t v);
extern uint32_t func_02055058(uint32_t x);
extern uint32_t data_0213e098;
extern uint32_t data_020ab054[];
extern uint32_t data_020ab060;
extern Pair data_020ab11c;

typedef struct Self {
    uint32_t f00[0x20];
    uint32_t f80;
    uint32_t f84;
    void *p88;
    void *p8c;
    uint32_t p90;
    void *p94;
    uint32_t p98;
    void *p9c;
    uint32_t pa0[7];
    uint32_t bc;
    uint32_t c0;
    uint32_t c4;
    uint32_t c8;
    uint32_t cc[2];
    uint32_t d4;
    uint32_t d8[8];
    uint8_t f8;
    uint8_t f9[3];
    uint8_t fc;
} Self;

void func_0200c8ac(Self *self) {
    uint32_t sum;
    uint32_t v;
    uint32_t *pv;
    Pair s1;
    Pair s2;
    Pair t;
    Pair u;

    if (self->fc == 1 && self->p8c == 0) {
        self->d4 = 0x10;
    }

    {
        void *p8c = self->p8c;
    if (p8c != 0) {
        Pair *ps;
        if (self->fc == 0) {
            s1.a = 2;
            s1.b = self->d4 + 0x63;
            ps = &s1;
        } else {
            s2.a = 2;
            s2.b = 0x73;
            ps = &s2;
        }
        func_0200bd24(p8c, *ps);
        func_0200bdf4(self->p8c, self->d4);
    }
    }

    if (self->fc != 1 && self->p88 != 0) {
        void **vt = *(void ***)self->p88;
        ((void (*)(void *, uint32_t, uint32_t))vt[0x38 / 4])(self->p88, 0, self->d4 + 0x60);
    }

    sum = self->d4 + func_02055058(data_0213e098);
    self->d4 = sum;
    pv = &self->d4;
    if (data_020ab054[3] < sum) {
        pv = &data_020ab060;
    }
    v = *pv;
    self->d4 = v;

    if (v < 0x10) {
        return;
    }

    {
        uint32_t *q = (uint32_t *)self->p9c;
        q[3] = q[3] & ~0xffu;
        if (self->p88 != 0) {
            t = ((Pair (*)(void *))(*(void ***)self->p88)[4])(self->p88);
            self->c4 = t.a;
            self->c8 = t.b;
        }
        {
            u = ((Pair (*)(void *))(*(void ***)self->p94)[4])(self->p94);
            self->bc = u.a;
            self->c0 = u.b;
        }
        self->f8 = 1;
        self->f80 = data_020ab11c.a;
        self->f84 = data_020ab11c.b;
    }
}
