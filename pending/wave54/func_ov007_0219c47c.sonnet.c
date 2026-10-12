#include "ffc/types.h"

extern void func_02056c9c(void *self, uint32_t zero);
extern void *func_0203b6f0(void);
extern void func_02056bc0(void *object, void *node);
extern void *data_ov007_021c9710;
extern char data_ov007_021c2dcc[];
extern uint32_t data_ov007_021c2ea4[2];

void *func_ov007_0219c47c(uint8_t *self, uint32_t a1, uint32_t a2)
{
    uint8_t *p;
    uint8_t *q;
    uint8_t *w;
    uint32_t t0, t1;
    void *r6;
    void *r7;
    void *s0;
    void *s1;

    uint32_t z = 0;
    uint8_t *l;
    func_02056c9c(self, z);
    data_ov007_021c9710 = self;
    *(char **)self = data_ov007_021c2dcc;
    *(uint32_t *)(self + 0x88) = a1;
    *(uint32_t *)(self + 0x94) = z;
    *(uint32_t *)(self + 0x98) = z;
    *(uint32_t *)(self + 0xdc) = a2;
    self[0xe0] = z;
    *(uint32_t *)(self + 0xe4) = z;
    self[0xec] = z;
    self[0xed] = z;
    t1 = data_ov007_021c2ea4[0];
    t0 = data_ov007_021c2ea4[1];
    *(uint32_t *)(self + 0x80) = t1;
    *(uint32_t *)(self + 0x84) = t0;

    q = self + 0xac;
    *q = z;
    q[1] = z;
    q[2] = z;
    q[3] = z;
    q[4] = z;
    q[5] = z;
    q[6] = z;
    q[7] = z;
    w = self + 0xb4;
    *w = z;
    w[1] = z;
    w[2] = z;
    w[3] = z;
    w[4] = z;
    w[5] = z;
    w[6] = z;
    w[7] = z;

    *(void **)(self + 0xbc) = func_0203b6f0();
    *(void **)(self + 0xc4) = func_0203b6f0();
    *(void **)(self + 0xc0) = func_0203b6f0();
    *(void **)(self + 0xc8) = func_0203b6f0();
    *(void **)(self + 0xcc) = func_0203b6f0();

    p = self + 0x14;
    l = self;
    p[0x12] = (p[0x12] & ~0xff) | 1;
    p = *(uint8_t **)(self + 0xc4);
    l = l + 0x48;
    p[0x12] = (p[0x12] & ~0xff) | 1;
    p = *(uint8_t **)(self + 0xc0);
    p[0x12] = (p[0x12] & ~0xff) | 1;
    p = *(uint8_t **)(self + 0xc8);
    p[0x12] = (p[0x12] & ~0xff) | 1;

    r6 = *(void **)(self + 0xc8);
    r7 = *(void **)(self + 0xcc);
    s0 = *(void **)(self + 0xc0);
    s1 = *(void **)(self + 0xc4);
    func_02056bc0(l, *(void **)(self + 0xbc));
    func_02056bc0(l, s1);
    func_02056bc0(l, s0);
    func_02056bc0(l, r7);
    func_02056bc0(l, r6);
    return self;
}
