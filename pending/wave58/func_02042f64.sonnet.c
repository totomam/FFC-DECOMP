#include "ffc/types.h"

extern void func_020424d4(void *self, uint32_t v);
extern void func_020375bc(uint32_t v);
extern void func_020375f4(uint32_t mask);
extern uint32_t func_02017fe4(uint32_t v);
extern void *func_02056830(uint32_t size);
extern void func_02084b2c(void *p, uint32_t c, uint32_t n);
extern void *func_0205681c(uint32_t size);
extern void func_02042f44(void *self);
extern void func_020427f4(void *self);
extern void *func_0203b6f0(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_ov003_02145308(void *a, void *b, uint32_t c, uint32_t d);
extern uint32_t func_0201b778(void *v);
extern void *func_0201b79c(void *v);
extern uint32_t func_0201bd84(void *v, uint32_t m);
extern void *func_020424e0(void *self);
extern void *func_ov003_02149850(void);
typedef struct { uint32_t a; uint32_t b; } Pair;
extern void *func_02043160(void *a, Pair p, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void *func_ov003_0214d454(void *a);

extern uint32_t data_020b8e44;
extern void *data_020b93b8;
extern Pair data_020af654;
extern uint32_t data_020af65c[2];

typedef void (*VFn)(void *, void *);

void func_02042f64(void *self)
{
    uint8_t *p = (uint8_t *)self;
    void *v;
    void *obj;
    uint32_t n;

    if (*(uint32_t *)(p + 0x168) == 1) {
        func_020424d4(self, 3);
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
        return;
    }

    {
        uint8_t *s = p + 0x14;
        uint32_t t = s[0x12];
        s[0x12] = (uint8_t)((t & ~0xffu) | 1);
        s = p + 0x48;
        t = s[0x12];
        s[0x12] = (uint8_t)((t & ~0xffu) | 1);
    }

    func_020375bc(0);
    func_020375f4(0x10);

    n = func_02017fe4(data_020b8e44) << 3;
    *(void **)(p + 0x124) = func_02056830(n);
    n = func_02017fe4(data_020b8e44) << 3;
    func_02084b2c(*(void **)(p + 0x124), 0, n);

    *(uint8_t *)(p + 0x128) = 0;

    *(void **)(p + 0xc0) = func_0205681c(0x3c);
    **(uint32_t **)(p + 0xc0) = 0;
    *(void **)(p + 0xc4) = func_0205681c(0xc);
    (*(uint8_t **)(p + 0xc4))[8] = 0;

    *(uint8_t *)(p + 0x164) = 0;
    *(uint8_t *)(p + 0x133) = 1;
    *(uint8_t *)(p + 0x134) = 1;
    *(uint8_t *)(p + 0x132) = 0;
    *(uint8_t *)(p + 0x130) = 0;
    *(uint8_t *)(p + 0x131) = 0;
    *(uint8_t *)(p + 0x135) = 0;

    func_02042f44(self);
    func_020427f4(self);

    obj = func_0203b6f0();
    *(void **)(p + 0x154) = obj;
    *(uint8_t *)((uint8_t *)obj + 0x12) = (*(uint8_t *)((uint8_t *)obj + 0x12) & ~0xffu) | 1;
    func_02056bc0(p + 0x48, *(void **)(p + 0x154));

    v = func_0205681c(0x430);
    if (v != 0) {
        uint32_t f = (*(uint32_t *)(p + 0x16c) != 0);
        v = func_ov003_02145308(v, p + 0x120, 0, f);
    }
    *(void **)(p + 0x8c) = v;
    func_02056bc0(*(void **)(p + 0x154), v);

    if (func_0201b778(data_020b93b8) != 0) {
        void *m = func_0201b79c(data_020b93b8);
        void *o = *(void **)(p + 0x8c);
        ((VFn)(((void **)*(void **)o)[5]))(o, m);
        if (func_0201bd84(data_020b93b8, 0x4f) == 0) {
            void *q = func_020424e0(self);
            void *r6 = func_ov003_02149850();
            void *r7v = func_02043160(q, data_020af654, 2, 0, 0x1e, 0);
            void *n2 = func_ov003_0214d454(q);
            uint8_t *s4 = p + 0x14;
            func_02056bc0(s4, n2);
            func_02056bc0(s4, r7v);
            func_02056bc0(s4, r6);
        }
    }

    obj = func_0203b6f0();
    *(void **)(p + 0x14c) = obj;
    func_02056bc0(p + 0x48, obj);

    obj = func_0203b6f0();
    *(void **)(p + 0x150) = obj;
    func_02056bc0(p + 0x48, obj);

    *(Pair *)(p + 0x80) = *(Pair *)data_020af65c;
}
