#include "ffc/types.h"

typedef struct Obj {
    uint32_t w[0x64];
} Obj;

typedef struct Ctx {
    uint32_t x0;
    Obj *obj;
    uint32_t x2;
    uint32_t x3;
    uint32_t x4;
    uint32_t flag;
} Ctx;

typedef struct Msg {
    uint8_t a;
    uint8_t b;
    uint16_t c;
    uint32_t d;
} Msg;

extern uint32_t func_ov000_021653d4(uint32_t x);
extern void func_ov001_0217ef6c(void *p, void *d);
extern uint32_t func_ov000_02165418(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov001_0217ef50(void *p, uint32_t n, void *d);
extern void func_ov001_021788f0(void *p, uint32_t n, uint32_t f);
extern uint32_t func_ov000_0216564c(uint32_t h, uint32_t x);
extern uint32_t *func_ov000_0214ee74(void *d);
extern uint32_t func_ov000_021654bc(uint32_t h, Msg *m, uint32_t n);
extern uint32_t func_ov000_021655a0(uint32_t h);
extern uint32_t func_ov000_0216591c(void);
extern char data_ov001_0219135c[];
extern char data_ov001_0219136c[];
extern char data_ov001_02191394[];
extern char data_ov001_0219131c[];
extern char data_ov001_021913c8[];
extern char data_ov001_021913f8[];

uint32_t func_ov001_0217cccc(void *a, Ctx *b)
{
    Obj *o;
    uint32_t r;
    uint32_t *q;
    Msg m;
    int z;
    int k;

    z = 0;
    o = b->obj;
    o->w[3] = 0x1000;
    r = func_ov000_021653d4(0x1001);
    o->w[2] = r;
    if (r == 0) {
        func_ov001_0217ef6c(a, data_ov001_0219135c);
        return 1;
    }

    r = func_ov000_02165418(2, 1, 0);
    o->w[1] = r;
    if (r == (uint32_t)(z - 1)) {
        func_ov001_0217ef50(a, 5, data_ov001_0219136c);
        func_ov001_021788f0(a, 3, 1);
        return 3;
    }

    if (func_ov000_0216564c(r, z) == 0) {
        func_ov001_0217ef50(a, 5, data_ov001_02191394);
        func_ov001_021788f0(a, 3, 1);
        return 3;
    }

    q = func_ov000_0214ee74(data_ov001_0219131c);
    if (q == 0) {
        func_ov001_0217ef50(a, 5, data_ov001_021913c8);
        func_ov001_021788f0(a, 3, 1);
        return 3;
    }

    k = 8;
    m.a = z;
    m.d = z;
    m.b = 2;
    m.c = 0xcd74;
    m.d = ((uint32_t *)((uint32_t *)q[3])[0])[0];

    if (func_ov000_021654bc(o->w[1], &m, k) == (uint32_t)(z - 1)) {
        r = func_ov000_021655a0(o->w[1]);
        if (r != (uint32_t)(k - 14) && r != (uint32_t)(k - 34) && r != (uint32_t)(k - 84)) {
            func_ov001_0217ef50(a, 5, data_ov001_021913f8);
            func_ov001_021788f0(a, 3, 1);
            return 3;
        }
    }

    b->flag = 1;
    o->w[0x63] = func_ov000_0216591c();
    return 0;
}
