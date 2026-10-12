#include "ffc/types.h"

extern uint32_t func_ov003_021481c0(uint32_t x);
extern void func_0201d014(uint32_t dev, uint32_t h, void *buf);
extern void func_02036c18(void *buf, uint32_t v);
extern void func_0201cff8(uint32_t dev, uint32_t h, void *buf);
extern void func_02016980(void *out, uint32_t x);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_0201d14c(uint32_t dev, uint32_t h, void *buf);
extern void func_0201d0ac(uint32_t dev, uint32_t h, void *buf);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void func_02053290(void *o);
extern uint32_t func_020424e0(uint32_t x);
extern void func_ov003_02148254(uint32_t a, uint32_t b);
extern uint32_t data_020b93b8;
extern uint32_t data_020b8e44;

typedef struct Self {
    uint32_t a0;
    uint32_t a4;
    uint32_t a8;
    uint32_t flags;
    uint32_t a10;
    uint32_t h14;
    uint32_t h18;
} Self;

typedef struct Loc {
    uint32_t a;
    void *p;
    uint32_t n;
    uint8_t f;
} Loc;

typedef struct Mar {
    uint32_t a;
    uint32_t count;
    uint32_t off;
} Mar;

typedef struct Ent {
    uint32_t a;
    uint32_t b;
    uint32_t off;
} Ent;

void func_ov003_021642bc(Self *self)
{
    uint8_t tmp[0x10];
    Loc loc;
    uint8_t buf0[0x28];
    uint32_t i;
    uint16_t *q;
    Mar *m;
    Ent *e;
    uint32_t o;
    Loc *lp;
    uint32_t k;

    self->h18 = func_ov003_021481c0(self->h18);
    if (self->h18 != 0) {
        func_0201d014(data_020b93b8, self->h18, tmp);
        func_02036c18(tmp, 0);
        func_0201cff8(data_020b93b8, self->h18, tmp);
        func_02016980(&loc, data_020b8e44);
        i = 0;
        if (i < ((Mar *)func_02052d90(loc.p, loc.n))->count) {
            do {
                k = i;
                m = (Mar *)func_02052d90(loc.p, loc.n);
                e = (Ent *)((uint8_t *)m + ((uint32_t *)((uint8_t *)m + m->off))[i]);
                o = e->off;
                q = (o == 0) ? (uint16_t *)k : (uint16_t *)((uint8_t *)e + o);
                if (q != 0 && self->h18 == *q) {
                    func_0201d14c(data_020b93b8, self->h18, buf0);
                    buf0[2] = 0;
                    func_0201d0ac(data_020b93b8, self->h18, buf0);
                    break;
                }
                i++;
            } while (i < ((Mar *)func_02052d90(loc.p, loc.n))->count);
        }
        lp = &loc;
        if (lp->p != 0) {
            if (lp->f) {
                func_02052d3c(lp->p, lp->n);
            }
            func_02052c04(lp->p);
        }
        func_02053290(lp);
        if (func_020424e0(self->h14) != 0) {
            func_ov003_02148254(func_020424e0(self->h14), self->h18);
        }
    }
    self->flags = (self->flags & ~0xffu) | 2;
}
