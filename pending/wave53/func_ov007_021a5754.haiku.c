#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_0205e7ac(void *x);
extern void *func_02058724(void *obj, void *arg, uint32_t a, uint32_t b);
extern void *func_0205da88(void *p);
extern void func_02058840(void *obj, void *arg);
extern void func_020588f0(void *obj, void *arg, uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0201f144(void *x);
extern void *func_020159c8(void *x, uint32_t y);
extern void func_02005988(void *dst, void *src);
extern void *func_02032d24(void *obj, Pair p, void *c, uint32_t d, uint32_t e);
extern void *func_020059cc(void *object);

extern void *data_ov007_021c9708;
extern void *data_020b93b8;
extern void *data_020b8e44;
extern Pair data_ov007_021c42c0;
extern Pair data_ov007_021c42c8;

void func_ov007_021a5754(uint8_t *self)
{
    uint8_t *n;
    uint8_t *m;
    uint32_t v[3];
    Pair pr;
    uint32_t zero;
    uint32_t flag;

    n = (uint8_t *)func_0205681c(0x60);
    if (n != 0) {
        n = (uint8_t *)func_02058724(n, func_0205e7ac(data_ov007_021c9708), 0, 0x7fff);
    }
    func_02058840(n, func_0205da88(self + 0xf4));
    func_020588f0(n, func_0205da88(self + 0xf4), 0, 0x10);
    *(uint32_t *)(n + 0x24) = 5;
    if (n[0x15] != 0) {
        *(uint32_t *)(n + 0x1c) = 0x50;
    }
    func_02056bc0(self + 0x14, n);

    if (func_0201f144(data_020b93b8)) {
        zero = 0;
        flag = 0;
        m = (uint8_t *)func_0205681c(0xb0);
        if (m != 0) {
            func_02005988(v, func_020159c8(data_020b8e44, 0x37));
            pr.a = 0x80;
            pr.b = 0x60;
            flag = 1;
            m = (uint8_t *)func_02032d24(m, pr, v, 4, zero);
        }
        if (flag) {
            func_020059cc(v);
        }
        func_02056bc0(self + 0x14, m);
        pr = data_ov007_021c42c0;
        *(Pair *)(self + 0xb8) = pr;
    } else {
        pr = data_ov007_021c42c8;
        *(Pair *)(self + 0xb8) = pr;
    }
}
