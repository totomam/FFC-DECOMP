#include "ffc/types.h"

typedef struct Params {
    uint32_t f00;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    uint8_t f14;
    int32_t f18;
    uint8_t f1c;
    uint32_t f20;
    uint32_t f24;
    uint8_t f28;
    uint8_t f29;
    uint32_t f2c;
    uint32_t f30;
    uint8_t f34;
    uint32_t f38;
    uint32_t f3c;
    uint32_t f40;
    uint32_t f44;
    uint32_t f48;
    uint32_t f4c;
    uint8_t f50;
    uint8_t f51;
    uint32_t f54;
    uint32_t f58;
} Params;

extern uint32_t func_ov002_021a1868(void *obj, uint32_t v);
extern uint32_t func_ov002_021a16d4(void *obj);
extern uint32_t func_ov002_02195fa4(void);
extern uint32_t func_ov002_02198700(uint32_t a, uint32_t b);
extern void func_ov002_021a9390(void *obj, Params *p);
extern void *func_02015c98(void *unused, uint32_t index);
extern uint32_t func_ov002_021a4898(void *obj, uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern void func_ov002_021a945c(void *obj, Params *p);
extern void func_ov002_021a94fc(void *obj, Params *p);
extern uint32_t func_ov002_021994c0(void *obj, uint32_t v);
extern void func_ov002_021a95f8(void *obj, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_ov002_021aa820(uint32_t v);
extern void func_ov002_021a984c(void *obj, Params *p);
extern uint32_t func_ov002_021c85d8(void *obj, uint32_t v);
extern void *func_ov002_021c92c0(uint32_t a, uint32_t b);
extern void *func_02055a2c(void *obj, void *v);
extern void *func_ov002_021c91b4(uint32_t v);
extern void *func_ov002_0219acac(void *obj, void *v);
extern uint32_t func_ov002_021aa850(uint32_t v);
extern void *func_ov002_021a3fb8(uint32_t a, uint32_t b);
extern void func_ov002_021a997c(void *obj, Params *p);
extern void func_ov002_021a9ca0(void *obj, Params *p);
extern void *func_0205681c(uint32_t size);
extern void *func_ov002_021a92d4(void *obj, Params *p);
extern void func_ov002_021c8f10(Params *p);
extern void *data_020b8e44;

void func_ov002_021a90b0(uint8_t *self, Params *p)
{
    Params tmp;
    uint32_t t0;
    uint32_t r7;
    uint8_t *ev;
    uint8_t *base;
    uint32_t off;
    void *obj;
    void *x;
    int made;

    t0 = func_ov002_021a1868(self, p->f04);
    func_ov002_021a16d4(self);
    r7 = func_ov002_02198700(func_ov002_02195fa4(), p->f08);
    if (r7 == 0) {
        return;
    }
    func_ov002_021a9390(self, p);
    base = (uint8_t *)func_02015c98(data_020b8e44, p->f0c);
    off = *(uint32_t *)(base + 0x14);
    ev = 0;
    if (off != 0) {
        ev = base + off;
    }
    if (*ev == 6) {
        uint32_t v = func_ov002_021a4898(self, *(uint32_t *)(self + 0xf0), t0);
        func_02056bc0(self + 0x14, (void *)v);
    }
    func_ov002_021a945c(self, p);

    switch (*ev) {
    case 4:
        if (p->f18 > 0) {
            func_ov002_021a94fc(self, p);
        }
        break;
    case 5:
        if (p->f18 > 0) {
            uint32_t a = func_ov002_021994c0(*(void **)(self + 0xfc), 2);
            if (p->f50 != 0 || a != 0) {
                func_ov002_021a95f8(self, t0, p->f0c, r7);
            }
        }
        break;
    case 8:
        if (func_ov002_021aa820(r7) != 0) {
            func_ov002_021a984c(self, p);
        }
        break;
    case 0x17:
        if (p->f10 == 3) {
            uint32_t a = func_ov002_021c85d8(self + 0x144, 0);
            uint32_t v = (a != 0) ? 0x1182 : 0x1183;
            void *b = func_ov002_021c92c0(0, v);
            void *y;
            void *z;
            x = func_02055a2c(*(void **)(self + 0xf0), b);
            func_02056bc0(self + 0x14, x);
            y = func_ov002_021c91b4(0);
            z = func_ov002_0219acac(*(void **)(self + 0xf0), y);
            func_02056bc0(self + 0x14, z);
        }
        break;
    default:
        break;
    }

    if (func_ov002_021aa820(r7) == 0) {
        uint32_t q = func_ov002_021aa850(r7);
        void *w = func_ov002_021a3fb8(q, p->f08);
        func_02056bc0(self + 0x14, w);
    } else {
        func_ov002_021a997c(self, p);
    }

    if (p->f20 != 0) {
        func_ov002_021a9ca0(self, p);
    }

    made = 0;
    obj = func_0205681c(0x6c);
    x = obj;
    if (obj != 0) {
        uint8_t *b0;
        uint32_t *w;
        uint32_t *w3;
        tmp.f00 = p->f00;
        w3 = (uint32_t *)&tmp.f48;
        tmp.f04 = p->f04;
        made = 1;
        tmp.f08 = p->f08;
        tmp.f0c = p->f0c;
        tmp.f10 = p->f10;
        b0 = (uint8_t *)&tmp.f00;
        b0[0x14] = p->f14;
        tmp.f18 = p->f18;
        b0[0x1c] = p->f1c;
        w = (uint32_t *)&tmp.f20;
        w[0] = p->f20;
        w[1] = p->f24;
        ((uint8_t *)w)[8] = p->f28;
        ((uint8_t *)w)[9] = p->f29;
        w[2] = p->f2c;
        w[3] = p->f30;
        ((uint8_t *)w)[0x14] = p->f34;
        w = (uint32_t *)&tmp.f38;
        w[0] = p->f38;
        w[1] = p->f3c;
        w = (uint32_t *)&tmp.f40;
        w[0] = p->f40;
        w[1] = p->f44;
        w3[0] = p->f48;
        w3[1] = p->f4c;
        ((uint8_t *)w)[0x10] = p->f50;
        ((uint8_t *)w)[0x11] = p->f51;
        tmp.f54 = p->f54;
        tmp.f58 = p->f58;
        x = func_ov002_021a92d4(obj, &tmp);
    }
    x = func_02055a2c(self + 0x80, x);
    func_02056bc0(self + 0x14, x);
    if (made) {
        func_ov002_021c8f10(&tmp);
    }
}
