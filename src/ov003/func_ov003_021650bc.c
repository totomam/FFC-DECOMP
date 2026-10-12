#include "ffc/types.h"

extern void *func_020424e0(void *a);
extern void *func_ov003_02146494(void *a);
extern void func_ov003_0215e54c(void *a, uint16_t b);
extern void *func_ov003_021464f4(void *a, uint16_t b);
extern void func_ov003_0215e200(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void *func_ov003_02155b40(void *a);
extern uint32_t func_ov003_02148ae4(void *a, uint32_t b, uint32_t c);
extern void *func_ov003_0214649c(void *a);
extern void *func_02052d90(void *a, uint32_t b);
extern void func_02016448(void *a, void *b);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void func_02053290(void *a);
extern void func_ov003_0215f0d4(void *a);
extern void func_ov003_0215e358(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void *data_020b8e44;

typedef struct {
    uint32_t x0;
    void *a;
    uint32_t b;
    uint8_t f;
} Tmp;

typedef struct {
    uint8_t pad[0x14];
    void *m14;
    uint8_t f18;
    uint8_t f19;
    uint16_t h1a;
    uint16_t h1c;
    uint32_t w20;
    uint32_t w24;
    uint32_t w28;
    uint32_t w2c;
    uint32_t w30;
    uint32_t w34;
    uint32_t w38;
} Ctx;

void func_ov003_021650bc(Ctx *p) {
    uint32_t sum;
    uint32_t r6;
    uint32_t r7;
    uint32_t sp8;
    Tmp t1;
    Tmp t2;

    if (p->f18 != 0) {
        void *h;
        func_ov003_0215e54c(func_ov003_02146494(func_020424e0(p->m14)), p->h1a);
        h = func_ov003_021464f4(func_020424e0(p->m14), p->h1a);
        if (h == 0) {
            func_ov003_0215e200(func_ov003_02146494(func_020424e0(p->m14)), p->w30, p->w34, p->w38);
            return;
        }
        {
            uint32_t *q = (uint32_t *)func_ov003_02155b40(h);
            r6 = p->w30 + q[2];
            q = (uint32_t *)func_ov003_02155b40(h);
            sp8 = p->w38 + q[3];
        }
        r7 = func_ov003_02148ae4(func_020424e0(p->m14), r6, sp8);
        if (r7 == (2u << 30)) {
            r7 = 0;
        }
        sum = 0;
        if (func_ov003_0214649c(func_020424e0(p->m14)) != 0) {
            void *base = func_ov003_0214649c(func_020424e0(p->m14));
            void *m = func_02052d90(*(void **)((uint8_t *)base + 0xe4), *(uint32_t *)((uint8_t *)base + 0xe8));
            if (*((uint8_t *)m + 8) != 0) {
                Tmp *q = &t1;
                func_02016448(q, data_020b8e44);
                sum += *(uint32_t *)((uint8_t *)func_02052d90(t1.a, t1.b) + 0x5c);
                if (t1.a != 0) {
                    if (q->f != 0) func_02052d3c(q->a, q->b);
                    func_02052c04(q->a);
                }
                func_02053290(&t1);
            }
        }
        Tmp *q2 = &t2;
        func_02016448(q2, data_020b8e44);
        r7 = sum + (p->w34 + (r7 + *(uint32_t *)((uint8_t *)func_02052d90(t2.a, t2.b) + 0x2c)));
        if (t2.a != 0) {
            if (q2->f != 0) func_02052d3c(q2->a, q2->b);
            func_02052c04(q2->a);
        }
        func_02053290(&t2);
    } else {
        sp8 = p->w2c;
        r6 = p->w24;
        r7 = p->w28;
    }

    func_ov003_0215e200(func_ov003_02146494(func_020424e0(p->m14)), p->w30, p->w34, p->w38);
    {
        uint8_t f19 = p->f19;
        ((uint8_t *)func_ov003_02146494(func_020424e0(p->m14)))[0xdd] = f19;
    }
    func_ov003_0215f0d4(func_ov003_02146494(func_020424e0(p->m14)));
    func_ov003_0215e358(func_ov003_02146494(func_020424e0(p->m14)), r6, r7, sp8, p->h1c, p->w20);
    ((uint8_t *)func_ov003_02146494(func_020424e0(p->m14)))[0xdc] = 0;
}
