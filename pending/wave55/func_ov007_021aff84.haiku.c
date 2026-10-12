#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_0200d13c(void *p);
extern void func_02056bc0(void *object, void *node);
extern void *func_0202157c(uint32_t a, uint32_t b);
extern int func_02087460(void);
extern int func_0208d2e8(void);
extern void func_0206047c(void *a);
extern void func_02060548(void *a, uint32_t b);
extern void func_02060574(void *a, void *b);
extern void *func_02056aec(void *o);
extern void *func_02060634(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void *func_020159c8(void *a, uint32_t b);
extern void *func_02005988(void *a, void *b);
extern void *func_02032d24(void *a, uint32_t b, uint32_t c, void *d, uint32_t e, uint32_t f);
extern void *func_020059cc(void *o);
extern void func_02076248(void *a, uint32_t b);
extern void func_020762a4(void *a);
extern void func_0201cf34(void *a, void *b);
extern void func_02093bc8(void *a, void *b);
extern void *func_ov007_021b0dbc(void *a, void *b, void *c, void *d, void *e, uint32_t f, void *g);
extern void *func_ov001_0218dde0(void *a, uint32_t b);

extern uint32_t data_ov007_021c5ab4[2];
extern uint32_t data_ov007_021c5abc[2];
extern void *data_ov007_021c9708;
extern void *data_0213df20;
extern void *data_020b8e44;
extern uint32_t data_ov007_021c5acc[];
extern void *data_020b93b8;
extern uint32_t data_ov007_021c5ad8[];
extern uint32_t data_ov007_021c5ac4[2];

typedef struct { uint32_t a, b; } Pair;

void func_ov007_021aff84(uint8_t *self)
{
    void *n;
    void *r1;
    void *r4;
    int flag;
    void *r6;
    void *r7;
    void *res;
    void *obj;
    uint32_t pair[2];
    uint32_t blk[3];
    uint32_t blk2[0x28];

    if (**(uint32_t **)(self + 0xbc) == 1) {
        n = func_0205681c(0x80);
        r1 = n;
        if (n) {
            r1 = func_0200d13c(n);
        }
        func_02056bc0(self + 0x48, r1);
        r1 = func_0202157c(0x73, 0);
        func_02056bc0(self + 0x14, r1);
        *(Pair *)(self + 0xb0) = *(Pair *)data_ov007_021c5ab4;
        return;
    }
    if (**(uint32_t **)(self + 0xbc) == 2) {
        n = func_0205681c(0x80);
        r1 = n;
        if (n) {
            r1 = func_0200d13c(n);
        }
        func_02056bc0(self + 0x48, r1);
        *(uint32_t *)(self + 0xc0) = 3;
        *(Pair *)(self + 0xb0) = *(Pair *)data_ov007_021c5abc;
        return;
    }

    if (func_02087460() != 0 && func_0208d2e8() == 0) {
        **(uint32_t **)(self + 0xbc) = 0;
        if (data_ov007_021c9708) {
            func_0206047c(*(void **)((uint8_t *)data_0213df20 + 0x20));
            func_02060548(*(void **)((uint8_t *)data_0213df20 + 0x20), 3);
            r4 = *(void **)((uint8_t *)data_0213df20 + 0x20);
            obj = data_ov007_021c9708;
            r1 = ((void *(*)(void *))(*(void ***)obj)[13])(obj);
            func_02060574(r4, r1);
        }
        flag = 0;
        r7 = func_02056aec(self);
        res = func_02060634(*(void **)((uint8_t *)data_0213df20 + 0x20), 8, 0, 10, 0, 0);

        r6 = func_0205681c(0xb0);
        if (r6) {
            func_02005988(blk, func_020159c8(data_020b8e44, 0x34));
            pair[0] = 0x80;
            pair[1] = 0x60;
            r6 = func_02032d24(r6, pair[0], pair[1], blk, 4, 0);
            flag = 1;
        }
        r1 = func_02060634(*(void **)((uint8_t *)data_0213df20 + 0x20), 0, 8, 10, 0, 0);
        func_02056bc0(self + 0x14, r1);
        func_02056bc0(self + 0x14, r6);
        func_02056bc0(self + 0x14, res);
        func_02056bc0(self + 0x14, r7);
        if (flag) {
            func_020059cc(blk);
        }
        return;
    }

    **(uint32_t **)(self + 0xbc) = 0;
    func_02076248(data_ov007_021c5acc, 0x56444545);
    func_020762a4(*(void **)data_020b8e44);
    n = func_0205681c(0x80);
    r1 = n;
    if (n) {
        r1 = func_0200d13c(n);
    }
    func_02056bc0(self + 0x48, r1);
    func_0201cf34(data_020b93b8, blk2);
    func_02093bc8(self + 0xd8, blk2);
    r4 = func_0205681c(0xbc);
    if (r4) {
        r4 = func_ov007_021b0dbc(r4, *(void **)data_020b8e44, *(void **)(self + 0xb8), self + 0xc8, self + 0xd8, 0x30b9, data_ov007_021c5ad8);
    }
    func_02056bc0(func_ov001_0218dde0(self, 0), r4);
    *(Pair *)(self + 0xb0) = *(Pair *)data_ov007_021c5ac4;
}
