#include "ffc/types.h"

typedef struct Inner {
    uint32_t a, b, pad, c;
} Inner;

typedef struct Sub {
    uint32_t pad0[5];
    uint32_t f14;
    Inner *f18;
    uint32_t pad1;
    uint8_t f20;
} Sub;

typedef struct Obj {
    uint32_t pad0[3];
    uint32_t f0c;
    uint32_t f10;
    Sub *f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
    uint32_t f28;
    uint32_t state;
} Obj;

extern uint32_t func_0207223c(void *);
extern uint32_t func_02071ec8(uint32_t);
extern void func_ov000_0215aafc(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern uint32_t func_ov000_0215aee0(uint32_t, uint32_t, void *, void *);
extern uint32_t func_ov000_021649d0(void);
extern void func_02072550(void);

void func_02072498(Obj *p)
{
    Sub *s;
    uint32_t r5 = 0;
    uint32_t r6 = 0;
    uint32_t t;
    uint32_t r;

    switch (p->state) {
    case 0:
        s = p->f14;
        if (s->f18 != 0) {
            r6 = func_0207223c(s->f18);
        } else {
            r6 = 0;
        }
        s = p->f14;
        if (s->f18 != 0) {
            r5 = s->f18->c;
        } else {
            r5 = 0;
        }
        t = func_02071ec8(p->f14->f14);
        func_ov000_0215aafc(t, p->f1c, p->f20, p->f24, p->f28, r5, r6);
        p->state = 1;
        break;
    case 1:
        r = func_ov000_0215aee0(p->f18, 0, (void *)func_02072550, p);
        if (r == 0) {
            p->state = 4;
        } else {
            p->state = 2;
        }
        break;
    case 2:
        break;
    case 3:
        if (func_ov000_021649d0() == 1) {
            p->f14->f20 = 1;
        }
        p->f0c = (p->f0c & ~0xffu) | 2;
        break;
    case 4:
        p->f0c = (p->f0c & ~0xffu) | 2;
        break;
    }
}
