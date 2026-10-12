#include "ffc/types.h"

extern void func_02056c4c(uint32_t v);
extern void func_02056bf4(void *p);
extern void *func_ov003_0214649c(void *p);
extern void *func_ov003_02153470(void);
extern void *func_02052d90(void *mar, uint32_t index);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern void func_02005988(void *a, void *b);
extern uint32_t func_02052000(void *a);
extern void *func_020059cc(void *object);
extern void *func_ov003_02146494(void *p);
extern void *func_ov003_021464f4(void *p);
extern void func_ov003_0215c29c(void *self, void *x);
extern void *func_0203b8bc(uint32_t n);
extern void func_0202afc0(void *obj, void *p, uint32_t a, uint32_t b, uint32_t c);
extern void func_ov003_02158154(void *a, uint32_t b, void *c);
extern void func_ov003_0215c2ec(void *self, uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern void *func_ov003_0215c2d0(void *self);
extern void func_ov003_0215818c(void *a, uint32_t b, void *c);
extern void func_ov003_0215abf8(void *a, uint32_t b);
extern char data_ov003_0217a288[];
extern uint32_t data_ov003_0217a21c[];

void func_ov003_0215c310(uint8_t *p)
{
    uint8_t s4[12];
    uint8_t s10[0x44];
    uint8_t *d;
    uint8_t *m;
    uint8_t *o;
    void *q;
    void *t;
    uint32_t v;
    uint32_t flag;
    volatile uint32_t z2, z3;

    func_02056c4c(*(uint32_t *)(p + 0xc0));
    t = *(void **)(p + 0xa0);
    if (t != 0) {
        func_02056bf4(p + 0x48);
        t = *(void **)(p + 0xa0);
        if (*(uint32_t *)(p + 0xa0) != 0) {
            ((void (*)(void *))(*(void ***)t)[1])(t);
        }
        *(void **)(p + 0xa0) = 0;
    }
    func_ov003_0214649c(*(void **)(p + 0x98));
    if (*(uint32_t *)func_ov003_02153470() != 0) {
        m = func_ov003_0214649c(*(void **)(p + 0x98));
        if (((uint8_t *)func_02052d90(*(void **)(m + 0xe4), *(uint32_t *)(m + 0xe8)))[8] != 0) {
            m = func_ov003_0214649c(*(void **)(p + 0x98));
            d = func_02052d90(*(void **)(m + 0xe4), *(uint32_t *)(m + 0xe8));
            func_02091b10(s10, (uint32_t)data_ov003_0217a288, d + *(uint32_t *)(d + 0x4c));
            func_02005988(s4, s10);
            flag = (func_02052000(s4) == 0);
            func_020059cc(s4);
            if (flag == 0) {
                m = func_ov003_02146494(*(void **)(p + 0x98));
                v = *(uint32_t *)(m + 0xb0);
                *(uint32_t *)(p + 0xa4) = v;
                if (v != 0) {
                    q = func_ov003_021464f4(*(void **)(p + 0x98));
                    if (q != 0) {
                        func_ov003_0215c29c(p, q);

                        o = func_0203b8bc(*(uint32_t *)(p + 0x9c));
                        *(uint8_t **)(p + 0xa0) = o;
                        *(uint32_t *)(o + 0x18) = 0;
                        *(uint32_t *)(o + 0x1c) = 1u << 30;

                        func_0202afc0(*(void **)(p + 0xa0), s10, 0, 0, 0);

                        func_ov003_02158154(q, data_ov003_0217a21c[2], *(void **)(p + 0xa0));

                        o = *(uint8_t **)(p + 0xa0);
                        *(uint32_t *)(o + 0xc) &= ~0xffu;
                        z2 = 0; z3 = 0;
                        o = *(uint8_t **)(p + 0xa0);
                        *(uint32_t *)(o + 0x20) = 1;
                        o = *(uint8_t **)(p + 0xa0);
                        o[0x41] = 1;

                        func_ov003_0215c2ec(p, 0);

                        func_02056bc0(p + 0x48, *(void **)(p + 0xa0));

                        q = func_ov003_0215c2d0(p);
                        if (q != 0) {
                            func_ov003_0215818c(q, data_ov003_0217a21c[1], *(void **)(p + 0xa0));
                            func_ov003_0215abf8(q, 0);
                        }
                    }
                }
            }
        }
    }
}
