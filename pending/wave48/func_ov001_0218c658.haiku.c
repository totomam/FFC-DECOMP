#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_02037550(void *self);
extern void *func_0202157c(int a, int b);
extern uint32_t func_0203c250(void);
extern void *func_02061128(uint32_t a, int b, int c, int d);
extern uint32_t func_0203c23c(void);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_020611bc(uint32_t a, int b, int c, int d);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *a, void *b);
extern void *func_02032d24(void *a, Pair p, void *d, uint32_t e, uint32_t f);
extern void *func_ov001_0218dde0(void *self, int n);
extern void *func_020059cc(void *object);
extern void *data_020b8e44;
extern uint32_t data_ov001_0219488c[2];
extern uint32_t data_ov001_02194894[2];

void func_ov001_0218c658(void *self)
{
    void *t14;
    void *t10;
    void *c;
    void *s8;
    uint8_t buf[12];
    Pair sz;
    int flag;
    void *t6;
    void *t7;
    void *r7;
    void *q;
    void *n;

    func_02037550(self);
    if (*(uint32_t *)((uint8_t *)self + 0x6fc) == 0) {
        flag = 0;
        s8 = func_0202157c(0x73, 0);
        t6 = func_02061128(func_0203c250(), 0x20, 0, 0);
        t7 = func_02061128(func_0203c23c(), 0x20, 0, 0);
        c = func_0203b6fc();
        func_02056bc0(c, t7);
        func_02056bc0(c, t6);
        t10 = func_020611bc(func_0203c250(), 0x20, 0, 0);
        t14 = func_020611bc(func_0203c23c(), 0x20, 0, 0);
        r7 = func_0205681c(0xb0);
        if (r7 != 0) {
            n = func_020159c8(data_020b8e44, 0x154);
            func_02005988(buf, n);
            sz.a = 0x80;
            sz.b = 0x60;
            flag = 1;
            r7 = func_02032d24(r7, sz, buf, 4, 0);
        }
        q = func_0203b6fc();
        func_02056bc0(q, r7);
        func_02056bc0(q, t14);
        func_02056bc0(q, t10);
        n = func_ov001_0218dde0(self, 2);
        func_02056bc0(n, q);
        func_02056bc0(n, c);
        func_02056bc0(n, s8);
        if (flag) {
            func_020059cc(buf);
        }
        *(Pair *)((uint8_t *)self + 0xb0) = *(Pair *)data_ov001_0219488c;
    } else {
        *(Pair *)((uint8_t *)self + 0xb0) = *(Pair *)data_ov001_02194894;
    }
}
