#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair8;

extern void *data_020b93b8;
extern void *data_020b8e44;
extern Pair8 data_ov011_021cb19c[];
extern Pair8 data_ov011_021cae78[];
extern Pair8 data_ov011_021cb1a4[];

extern void func_02035f58(void *obj);
extern void func_0201f36c(void *obj, uint32_t index, void *out);
extern void *func_0203b688(void);
extern int func_ov011_021c2c20(void *self, void *obj);
extern void func_0201f4b0(void *obj, uint32_t index, uint32_t zero);
extern uint32_t func_ov011_021c02a8(void *self, Pair8 p);
extern uint32_t func_0209a76c(uint32_t a, uint32_t b);
extern uint32_t func_ov009_0219a390(uint32_t a, Pair8 p);
extern void func_02056bc0(void *obj, void *node);
extern void *func_02062a30(void *owner);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(void *obj, uint32_t idx);
extern void func_02005988(void *obj, uint32_t v);
extern void *func_02032d24(void *self, Pair8 p, void *c, uint32_t d, uint32_t e);
extern void func_020059cc(void *obj);
extern void func_02069724(void *out, void *self);
extern void *func_ov011_021c2360(void *self, Pair8 a, Pair8 c);
extern void *func_0203b72c(void);
extern void func_02035fd0(void *obj);

void func_ov011_021c21fc(uint8_t *self, uint32_t idx)
{
    uint8_t buf[0x60];
    Pair8 cfg;
    Pair8 pr;
    uint8_t sub[0xc];
    uint32_t *tab = *(uint32_t **)(self + 0x184);
    uint16_t val = (uint16_t)tab[idx + 10 * self[0x27d]];
    void *o;
    void *m;
    void *r5;

    func_02035f58(buf);
    func_0201f36c(data_020b93b8, val, buf);
    o = func_0203b688();
    if (func_ov011_021c2c20(self, buf)) {
        void *r7;
        uint32_t k;
        uint32_t n;
        func_0201f4b0(data_020b93b8, val, 0);
        r7 = func_ov011_021c02a8(self, data_ov011_021cb19c[0]);
        k = func_0209a76c(idx, 5);
        {
            n = func_ov009_0219a390(*(uint32_t *)(self + idx * 4 + 0xec),
                                    data_ov011_021cae78[k]);
        }
        func_02056bc0(o, (void *)n);
        func_02056bc0(o, r7);
    } else {
        void *obj = *(void **)(self + 0x17c);
        void **vt = *(void ***)obj;
        uint32_t q;
        ((void (*)(void *))vt[11])(obj);
        q = (uint32_t)func_02062a30(*(void **)(self + 0x17c));
        func_02056bc0(o, (void *)q);

        r5 = 0;
        m = func_0205681c(0xb0);
        if (m) {
            func_02005988(sub, (void *)func_020159c8(data_020b8e44, 0x1c7));
            cfg.a = 0x80; cfg.b = 0x60;
            r5 = (void *)1;
            m = func_02032d24(m, cfg, sub, 4, 0);
        }
        func_02056bc0(self + 0x14, m);
        if (r5) {
            func_020059cc(sub);
        }
    }

    func_02069724(&pr, self);
    m = func_ov011_021c2360(self, data_ov011_021cb1a4[0], pr);
    {
        void *t = func_0203b72c();
        uint8_t *l = self + 0x14;
        func_02056bc0(l, t);
        func_02056bc0(l, o);
        func_02056bc0(l, m);
    }
    func_02035fd0(buf);
}
