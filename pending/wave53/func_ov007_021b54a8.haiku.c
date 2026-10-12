#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *obj, uint32_t id);
extern void func_02005988(void *obj, void *p);
extern uint32_t func_02032d24(uint32_t a, Pair p, void *d, uint32_t e, uint32_t f);
extern void *func_ov001_0218dde0(void *p, uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern void func_0200a630(void *obj, void *p);
extern uint32_t func_02051248(void *obj, void *p);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern void *func_0200a678(void *object);
extern uint8_t *data_020b93b8;
extern void *data_020b8e44;
extern uint32_t data_ov007_021c69ac[2];

typedef struct { uint32_t bit : 1; uint32_t rest : 31; uint32_t x; void *ptr; } Node;

void func_ov007_021b54a8(uint8_t *self)
{
    uint8_t obj28[12];
    uint8_t obj1c[12];
    Pair pr;
    Node obj10;
    void *r4;
    void *r7;
    void *t;
    uint32_t sz;
    uint32_t v0;
    uint32_t *d;
    uint32_t v1;

    if (*(uint32_t *)(self + 0x2fc) == 0 || self[0x564] != 0) {
        *(uint32_t *)(self + 0xc) = (*(uint32_t *)(self + 0xc) & ~0xffu) | 2;
    }

    *(uint32_t *)(data_020b93b8 + 0x1d0) = *(uint32_t *)(self + 0x2fc);
    *(uint32_t *)(data_020b93b8 + 0x1d4) = *(uint32_t *)(self + 0x304);

    sz = 0xb0;
    r4 = 0;
    r7 = func_0205681c(sz);
    if (r7 != 0) {
        t = func_020159c8(data_020b8e44, sz + 0x9d);
        func_02005988(obj28, t);
        pr.a = 0x80;
        pr.b = 0x60;
        r4 = (void *)1;
        r7 = (void *)func_02032d24((uint32_t)r7, pr, obj28, 4, 0);
    }
    t = func_ov001_0218dde0(self, 2);
    func_02056bc0(t, r7);
    if (r4 != 0) {
        func_020059cc(obj28);
    }

    func_0200a630(obj1c, self + 0xec);
    func_02051248(&obj10, obj1c);
    if (obj10.bit == 0) {
        r4 = (uint8_t *)&obj10 + 1;
    } else {
        r4 = obj10.ptr;
    }
    t = func_020159c8(data_020b8e44, 0x149);
    func_02091b10(self + 0x566, (uint32_t)t, r4);
    func_020059cc(&obj10);
    func_0200a678(obj1c);

    d = data_ov007_021c69ac;
    v0 = d[0];
    v1 = d[1];
    *(uint32_t *)(self + 0xb0) = v0;
    *(uint32_t *)(self + 0xb4) = v1;
}
