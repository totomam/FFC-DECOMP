#include "ffc/types.h"

typedef struct Ctx {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t *f20;
} Ctx;

typedef struct Mar {
    uint32_t a;
    void *ptr;
    uint32_t idx;
    uint8_t flag;
} Mar;

typedef struct Mt {
    uint32_t a;
    uint32_t b;
    uint32_t off;
} Mt;

extern uint32_t data_020b93b8;
extern uint32_t data_020b8e44;
extern uint32_t data_0213df20;

extern uint32_t func_0201bd84(uint32_t a, uint32_t b);
extern void func_0201bcf4(uint32_t a, uint32_t b, uint32_t c);
extern void func_02018644(Mar *m, uint32_t x);
extern Mt *func_02052d90(void *a, uint32_t b);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void func_02053290(void *a);
extern void func_0203919c(void *a, uint32_t b);
extern uint32_t func_020424e0(uint32_t a);
extern uint32_t func_ov003_021464ac(void);
extern void *func_0203be48(uint32_t a, void *b, uint32_t c, uint32_t d);
extern void func_020059cc(void *a);
extern void *func_0203b688(void);
extern void *func_0205681c(uint32_t size);
extern void *func_02047588(void *a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_ov003_0214d9fc(void);
extern void func_02056bc0(void *obj, void *node);
extern uint32_t func_ov003_0214d9c0(void);
extern uint32_t func_0201c9ac(uint32_t a, uint32_t b);
extern void *func_02047920(void *a, uint32_t b, uint16_t c, uint32_t d);

void *func_ov003_0217262c(Ctx *c, uint32_t mode, uint32_t *out) {
    uint32_t s[3];
    Mar mB;
    Mar mA;
    void *sp0;
    Mt *p;
    uint32_t v;
    uint32_t idx;
    void *r4;
    void *r6;
    Mar *m6;

    switch (mode) {
    case 0:
        if (func_0201bd84(data_020b93b8, 0x3f)) {
            idx = 9;
        } else {
            func_0201bcf4(data_020b93b8, 0x3f, 1);
            idx = 8;
        }
        m6 = &mB;
        func_02018644(m6, data_020b8e44);
        p = func_02052d90(m6->ptr, m6->idx);
        p = func_02052d90(m6->ptr, m6->idx);
        v = ((uint16_t *)((uint8_t *)p + p->off))[idx];
        if (m6->ptr != 0) {
            if (m6->flag != 0) {
                func_02052d3c(m6->ptr, m6->idx);
            }
            func_02052c04(m6->ptr);
        }
        func_02053290(m6);
        func_0203919c(s, v);
        func_020424e0(c->f4);
        r4 = func_0203be48(data_0213df20, s, func_ov003_021464ac(), 0);
        func_020059cc(s);
        break;
    case 1:
        r4 = func_0203b688();
        r6 = func_0205681c(0x98);
        if (r6 != 0) {
            r6 = func_02047588(r6, c->f4, 3, 0);
        }
        func_020424e0(c->f4);
        func_02056bc0(r4, (void *)func_ov003_0214d9fc());
        func_02056bc0(r4, r6);
        break;
    case 2:
        r4 = func_0203b688();
        func_020424e0(c->f4);
        func_02056bc0(r4, (void *)func_ov003_0214d9c0());
        if (func_0201c9ac(data_020b93b8, 4) < c->f8) {
            sp0 = func_0205681c(0x88);
            if (sp0 != 0) {
                m6 = &mA;
                func_02018644(m6, data_020b8e44);
                p = func_02052d90(m6->ptr, m6->idx);
                p = func_02052d90(m6->ptr, m6->idx);
                v = *(uint16_t *)((uint8_t *)p + p->off + 0x1e);
                if (m6->ptr != 0) {
                    if (m6->flag != 0) {
                        func_02052d3c(m6->ptr, m6->idx);
                    }
                    func_02052c04(m6->ptr);
                }
                func_02053290(m6);
                sp0 = func_02047920(sp0, c->f4, v, 0);
            }
            func_02056bc0(r4, sp0);
            c->f20[0] = 2;
        }
        *out = 1;
        break;
    default:
        return 0;
    }
    return r4;
}
