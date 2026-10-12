#include "ffc/types.h"

typedef struct E1 {
    uint32_t f00, f04, f08, f0c;
    int32_t f10;
    uint32_t f14;
    uint32_t f18;
} E1;

typedef struct P2 {
    uint32_t _0[2];
    uint32_t *p8;
} P2;

typedef struct Ctx {
    uint32_t _0[16];
    uint32_t f40;
    uint32_t _44;
    uint32_t f48;
    uint32_t f4c;
} Ctx;

typedef struct Self {
    uint32_t _0[7];
    uint32_t *p1c;
    uint32_t p20;
    uint32_t _24[2];
    E1 *p2c;
    uint32_t n30;
    uint32_t _34[3];
    uint32_t p40;
    uint32_t p44;
    uint32_t *p48;
    uint32_t *p4c;
} Self;

extern uint32_t data_020b1134[];
extern uint32_t data_020b11b4[];
extern uint32_t func_0209a978(uint32_t a, uint32_t b);
extern uint32_t func_0205f81c(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_0205fbc8(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_0205f234(uint32_t *e, uint32_t b);

void func_02067cfc(Self *self, uint32_t b)
{
    uint32_t i;
    uint32_t sum;
    uint32_t off;
    uint32_t r5;
    uint32_t q;
    uint32_t v;
    E1 *e;
    Ctx *r7;
    uint32_t *ip;
    uint32_t *E;
    uint32_t w, lo, hi, r;

    sum = 0;
    r7 = (Ctx *)((P2 *)self->p1c[6])->p8;
    for (i = 0; i < self->n30; i++) {
        off = i * 0x1c;
        e = (E1 *)((uint8_t *)self->p2c + off);
        r5 = r7->f4c;
        v = data_020b1134[e->f10 * 2] * data_020b1134[e->f10 * 2 + 1];
        if (r7->f40 == 0) {
            q = func_0209a978(v + r5 - 1, r5);
            e->f14 = r5 * q;
        } else {
            q = func_0209a978(v * 2 + r5 - 1, r5);
            e->f14 = (r5 * q) >> 1;
        }
        ((E1 *)((uint8_t *)self->p2c + off))->f18 = sum;
        sum += ((E1 *)((uint8_t *)self->p2c + off))->f14;
    }
    self->p4c = (uint32_t *)func_0205f81c(self->p20, self->n30, b);
    self->p48 = (uint32_t *)func_0205fbc8(r7, 0, sum, b);

    for (i = 0; i < self->n30; i++) {
        off = i * 0x1c;
        e = (E1 *)((uint8_t *)self->p2c + off);
        ip = (uint32_t *)self->p4c[1];
        E = (uint32_t *)((uint8_t *)ip + i * 0x28);
        w = E[0];
        w &= 0xffff3fff;
        w |= (e->f10 & 3) << 14;
        w &= 0x3fffffff;
        w |= ((e->f10 >> 2) & 3) << 30;
        E[0] = w;
        if (((w >> 8) & 3) == 3) {
            lo = data_020b11b4[e->f10 * 2] << 1;
            hi = data_020b11b4[e->f10 * 2 + 1] << 1;
        } else {
            lo = data_020b11b4[e->f10 * 2];
            hi = data_020b11b4[e->f10 * 2 + 1];
        }
        E[6] = lo;
        E[7] = hi;
        func_0205f234(E, self->p44);
        r = func_0209a978(self->p48[6] + ((E1 *)((uint8_t *)self->p2c + off))->f18, r7->f4c);
        if (((E[0] >> 13) & 1) == 1) {
            r <<= 1;
        }
        E[1] = (E[1] & 0xfffffc00) | (r & 0x3ff);
    }
}
