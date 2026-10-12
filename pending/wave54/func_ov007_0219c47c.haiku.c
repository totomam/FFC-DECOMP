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

    func_02056c9c(self, 0);
    data_ov007_021c9710 = self;
    *(char **)self = data_ov007_021c2dcc;
    *(uint32_t *)(self + 0x88) = a1;
    *(uint32_t *)(self + 0x94) = 0;
    *(uint32_t *)(self + 0x98) = 0;
    *(uint32_t *)(self + 0xdc) = a2;
    self[0xe0] = 0;
    *(uint32_t *)(self + 0xe4) = 0;
    self[0xec] = 0;
    self[0xed] = 0;
    t0 = data_ov007_021c2ea4[0];
    t1 = data_ov007_021c2ea4[1];
    *(uint32_t *)(self + 0x80) = t0;
    *(uint32_t *)(self + 0x84) = t1;

    q = self + 0xac;
    *q = 0;
    q[1] = 0;
    q[2] = 0;
    q[3] = 0;
    q[4] = 0;
    q[5] = 0;
    q[6] = 0;
    q[7] = 0;
    w = self + 0xb4;
    *w = 0;
    w[1] = 0;
    w[2] = 0;
    w[3] = 0;
    w[4] = 0;
    w[5] = 0;
    w[6] = 0;
    w[7] = 0;

    *(void **)(self + 0xbc) = func_0203b6f0();
    *(void **)(self + 0xc4) = func_0203b6f0();
    *(void **)(self + 0xc0) = func_0203b6f0();
    *(void **)(self + 0xc8) = func_0203b6f0();
    *(void **)(self + 0xcc) = func_0203b6f0();

    p = self + 0x14;
    p[0x12] = (p[0x12] & ~0xff) | 1;
    p = *(uint8_t **)(self + 0xc4);
    p[0x12] = (p[0x12] & ~0xff) | 1;
    p = *(uint8_t **)(self + 0xc0);
    p[0x12] = (p[0x12] & ~0xff) | 1;
    p = *(uint8_t **)(self + 0xc8);
    p[0x12] = (p[0x12] & ~0xff) | 1;

    r6 = *(void **)(self + 0xc8);
    r7 = *(void **)(self + 0xcc);
    s0 = *(void **)(self + 0xc0);
    s1 = *(void **)(self + 0xc4);
    func_02056bc0(self + 0x48, *(void **)(self + 0xbc));
    func_02056bc0(self + 0x48, s1);
    func_02056bc0(self + 0x48, s0);
    func_02056bc0(self + 0x48, r7);
    func_02056bc0(self + 0x48, r6);
    return self;
}
