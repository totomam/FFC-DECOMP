#include "ffc/types.h"

extern uint8_t data_ov004_02157f78[];
extern uint8_t data_ov004_02157e84[];
extern uint32_t data_020b8e44;

extern void func_02056c9c(void *obj, uint32_t v);
extern void func_02005988(void *out, uint32_t v);
extern void func_0205d508(void *dst, void *src, uint32_t n);
extern void *func_020059cc(void *object);
extern void func_020634e0(void *dst, void *src, uint32_t n);
extern void func_02019548(void *out, uint32_t v);
extern void *func_02052d90(const void *mar, uint32_t index);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern uint32_t func_0203b67c(void);
extern uint32_t func_0203b6f0(void);
extern void func_02056bc0(void *object, void *node);

void *func_ov004_021475fc(void *self, uint32_t param) {
    uint8_t *s = (uint8_t *)self;
    uint8_t *e;
    uint32_t t1[3];
    uint32_t t2[3];
    uint32_t a[4];
    uint32_t *pa;
    uint32_t v6;
    uint8_t *q;

    func_02056c9c(self, 0);
    *(void **)s = data_ov004_02157f78;
    *(uint32_t *)(s + 0x80) = param;

    e = data_ov004_02157e84;
    func_02005988(t1, *(uint32_t *)(e + 0xc));
    func_0205d508(s + 0x84, t1, 7);
    func_020059cc(t1);

    func_02005988(t2, *(uint32_t *)(e + 0x8));
    func_020634e0(s + 0xbc, t2, 7);
    func_020059cc(t2);

    *(uint32_t *)(s + 0xdc) = 0;
    *(uint32_t *)(s + 0xe0) = 0;

    pa = a;
    func_02019548(pa, data_020b8e44);
    *(uint32_t *)(s + 0xe8) = ((uint32_t *)func_02052d90((void *)pa[1], pa[2]))[4];

    if (pa[1] != 0) {
        if (*((uint8_t *)pa + 0xc) != 0) {
            func_02052d3c((void *)pa[1], pa[2]);
        }
        func_02052c04((void *)pa[1]);
    }

    func_02053290(pa);
    *(uint32_t *)(s + 0xc4) = func_0203b67c();
    v6 = func_0203b6f0();
    *(uint32_t *)(s + 0xc8) = v6;
    q = s + 0x48;

    func_02056bc0(q, (void *)*(uint32_t *)(s + 0xc4));
    func_02056bc0(q, (void *)v6);

    return self;
}
