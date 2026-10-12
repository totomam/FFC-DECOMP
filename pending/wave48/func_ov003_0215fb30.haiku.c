#include "ffc/types.h"

typedef struct { uint32_t pad; uint32_t a; uint32_t b; uint8_t c; } LocS;

extern void func_02056c9c(void *o, uint32_t x);
extern void func_020193a0(void *dst, uint32_t x);
extern void *func_0205327c(void *dst, const void *src);
extern void func_02052be0(void);
extern void func_02052d10(uint32_t a, uint32_t b);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(void *o);
extern uint32_t func_ov003_021464a4(uint32_t a);
extern uint32_t func_0203b67c(void);
extern void func_02056bc0(void *o, uint32_t node);
extern char data_ov003_0217a394[];
extern uint32_t data_020b8e44;

void *func_ov003_0215fb30(uint8_t *self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint8_t *a5, uint8_t a6)
{
    LocS loc;
    LocS *d;
    LocS *lp;
    uint8_t *p;
    uint32_t v;

    func_02056c9c(self, 0);
    *(uint32_t *)self = (uint32_t)data_ov003_0217a394;
    *(uint32_t *)(self + 0x80) = a1;
    *(uint32_t *)(self + 0x84) = a2;
    *(uint32_t *)(self + 0x88) = a3;
    *(uint32_t *)(self + 0x98) = a4;
    *(uint8_t *)(self + 0xa4) = 0;

    func_020193a0(&loc, data_020b8e44);
    d = (LocS *)(self + 0xbc);
    lp = &loc;
    func_0205327c(d, &loc);
    {
        uint32_t t = loc.a;
        d->a = t;
        d->b = loc.b;
        d->c = loc.c;
        if (t != 0) {
            func_02052be0();
            if (d->c != 0) {
                func_02052d10(d->a, d->b);
            }
        }
    }
    lp = &loc;
    if (lp->a != 0) {
        if (lp->c != 0) {
            func_02052d3c(lp->a, lp->b);
        }
        func_02052c04(lp->a);
    }
    func_02053290(lp);

    *(uint8_t *)(self + 0xcc) = *a5;
    *(uint8_t *)(self + 0xcd) = a6;
    *(uint8_t *)(self + 0xce) = 0;
    *(uint8_t *)(self + 0xcf) = 0;
    *(uint32_t *)(self + 0xd0) = 0;
    *(uint32_t *)(self + 0xd4) = 0;
    *(uint32_t *)(self + 0xd8) = 0;
    *(uint8_t *)(self + 0xdc) = 0;
    *(uint8_t *)(self + 0xdd) = 0;
    *(uint8_t *)(self + 0xde) = 1;
    *(uint32_t *)(self + 0xe0) = 0;
    *(uint32_t *)(self + 0xe4) = 0;
    *(uint32_t *)(self + 0xe8) = 0;
    *(uint32_t *)(self + 0xec) = 0;
    *(uint8_t *)(self + 0xf0) = 0;

    *(uint32_t *)(self + 0x8c) = func_ov003_021464a4(*(uint32_t *)(self + 0x80));
    *(uint32_t *)(self + 0x94) = 0;
    *(uint32_t *)(self + 0x90) = 0;

    p = *(uint8_t **)(self + 0x88);
    if (p[8] != 0) {
        *(uint16_t *)(self + 0x9c) = *(uint16_t *)p;
        *(uint32_t *)(self + 0xa0) = *(uint32_t *)(p + 4);
    }

    **(uint32_t **)(self + 0x84) = 0;
    *(uint32_t *)(self + 0xb8) = 0;

    v = func_0203b67c();
    *(uint32_t *)(self + 0xd0) = v;
    func_02056bc0(self + 0x48, v);
    v = func_0203b67c();
    *(uint32_t *)(self + 0xd4) = v;
    func_02056bc0(self + 0x48, v);
    v = func_0203b67c();
    *(uint32_t *)(self + 0xd8) = v;
    func_02056bc0(self + 0x48, v);

    return self;
}
