#include "ffc/types.h"

extern void *data_020b8e44;
extern void *data_0213df20;
extern char data_ov009_021b0624[];
extern char data_ov009_021b062c[];
extern char data_ov009_021b0630[];
extern uint32_t data_ov009_021b061c[2];

extern uint32_t func_02036418(void *obj);
extern uint32_t func_02019e78(void *a, uint32_t b, uint32_t c);
extern void func_02036370(void *a, uint32_t b);
extern uint32_t func_02035db4(void);
extern void *func_02036380(void *o);
extern uint32_t func_02035eb0(const void *o);
extern uint8_t *func_020197b4(void *a, uint32_t b);
extern void func_02086ad4(void *o, uint32_t first, ...);
extern void *func_0205681c(uint32_t n);
extern void func_02005988(void *a, void *b);
extern void *func_0205d508(void *a, void *b, void *c);
extern void func_020059cc(void *o);
extern uint32_t func_0205db1c(const void *o);
extern uint32_t func_0205da88(const void *o);
extern uint32_t func_020583cc(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_02059728(void *o, uint32_t a, uint32_t b);
extern void func_02059bf8(void);
typedef struct { uint32_t a, b; } P2;
typedef struct { uint32_t a, b, c, d; } R4;
extern void func_0205d04c(void *o, R4 r, uint32_t e);
extern uint32_t func_0205dbf8(void *o);
extern void func_0205db3c(P2 *out, void *o);
extern void func_0205cfb4(void *o, uint32_t t, P2 p, R4 r, P2 q, uint32_t h, uint32_t k, uint32_t z);
extern uint32_t func_ov009_0219e428(uint32_t x);
extern uint32_t func_02059c94(void *o, P2 a, P2 b, uint32_t t, uint32_t z);
extern void func_02056bc0(void *o, void *n);

typedef struct {
    uint8_t a0[0x80]; uint32_t f80; uint32_t f84; uint8_t a88[0xcc - 0x88];
    uint8_t fcc[0xe8 - 0xcc]; uint8_t fe8[0x1a8 - 0xe8];
    uint32_t f1a8; uint32_t f1ac; uint32_t f1b0; uint32_t f1b4;
    uint8_t a1b8[0x218 - 0x1b8]; uint32_t f218; uint8_t a21c[0x224 - 0x21c];
    uint8_t f224; uint8_t a225[3]; uint32_t f228;
} Obj;

void func_ov009_021a17d4(void *a)
{
    Obj *o = (Obj *)a;
    uint8_t *p = (uint8_t *)a;
    uint8_t b68[12];
    uint8_t b74[0x44];
    uint32_t r6, m, v, mode, t, h;
    uint8_t *s;
    void *cfg, *obj, *g, *r4; uint8_t fl;

    if (o->f224 == 0) {
        uint32_t x = func_02036418(p + 0xe8);
        r6 = func_02019e78(data_020b8e44, x, o->f1a8);
        func_02036370(p + 0x148, o->f1a8);
        m = (func_02035db4() != 0);
    } else {
        void *q0 = func_02036380(p + 0xe8);
        r6 = func_02035eb0(q0);
        m = 0;
    }

    s = func_020197b4(data_020b8e44, r6);
    v = *(uint16_t *)(s + 0xe);
    o->f228 = v;
    cfg = (s[7] != 0) ? (void *)data_ov009_021b0624 : (void *)data_ov009_021b062c;
    mode = (m != 0) ? 0x62 : 0x61;
    func_02086ad4(b74, (uint32_t)data_ov009_021b0630, o->f228, 1, mode, (uint32_t)cfg);

    fl = 0;
    void *n = func_0205681c(0x38);
    r4 = n;
    if (n) {
        func_02005988(b68, b74);
        r4 = func_0205d508(n, b68, (void *)0);
        fl = 1;
    }
    o->f1ac = r4;
    if (fl != 0) {
        func_020059cc(b68);
    }

    g = *(void **)((uint8_t *)data_0213df20 + 0x14);
    r6 = *(uint32_t *)((uint8_t *)g + 0x34);
    obj = o->f1ac;
    t = func_0205db1c(o->f1ac);
    h = func_0205da88(o->f1ac);
    o->f1b4 = func_020583cc(r6, t, h, 1);
    o->f1b0 = func_02059728(*(void **)((uint8_t *)data_0213df20 + 0x14), 1, 1);
    func_02059bf8();
    R4 r1, r2; P2 pp, q, mb, ma;
    r1.c = 0x100; r1.d = 0x100; r1.a = 0; r1.b = 0;
    func_0205d04c(o->f1b0, r1, 0);
    q.a = 0; q.b = 0; r2.a = 0; r2.b = 0; r2.d = 0xc0;
    r2.c = 0x100;
    t = func_0205dbf8(o->f1ac);
    func_0205db3c(&pp, o->f1ac);
    h = *(uint32_t *)((uint8_t *)o->f1b4 + 0x18);
    func_0205cfb4(o->f1b0, t, pp, r2, q, h, (uint32_t)s[1], 0);
    ma.a = 0; ma.b = 0xc0; mb.a = 0; mb.b = (uint32_t)-0xc0;
    t = func_ov009_0219e428(0xb4);
    v = func_02059c94(o->f1b0, mb, ma, t, 0);
    func_02056bc0(o->f218, (void *)v);
    {
    {
    uint32_t *src = data_ov009_021b061c;
    uint32_t x0 = src[0];
    uint32_t x1 = src[1];
    uint32_t *d0 = &o->f80, *d1 = &o->f84;
    *d0 = x0;
    *d1 = x1;
    }
    }
}
