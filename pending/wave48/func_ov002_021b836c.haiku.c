/* cflags: -lang c++ */
#include "ffc/types.h"

struct Self {
    void *vt0;
    uint8_t pad0[0x10];
    void *f14;
    uint8_t pad1[0xa0];
    void *vt1;
    void *fbc;
    uint32_t fc0;
    uint8_t pad2[0x18];
    uint32_t fdc;
    uint32_t fe0;
    uint32_t fe4;
    uint32_t fe8;
    uint32_t fec;
    uint8_t f0;
    uint8_t f1;
    uint8_t pad3[2];
    uint32_t f4;
    uint32_t f8[6];
    uint32_t f110[3];
    uint32_t f11c;
    uint32_t f120;
    uint32_t f124;
    uint32_t f128;
    uint32_t f12c;
    uint8_t f130;
};

struct P2 {
    uint8_t pad[0x10];
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
};

struct Num {
    uint32_t v;
    Num(uint32_t x) : v(x) {}
    ~Num() {}
};

inline uint32_t diff(const Num &a, uint32_t b) { return a.v - b; }

extern "C" {
extern void func_020694ac(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_ov002_021c7f88(void *a, void *b, uint32_t c, uint32_t d);
extern void *func_0205681c(uint32_t size);
extern void *func_ov002_02198ddc(void *a);
extern void *func_ov002_021c2edc(void *a, void *b);
extern void func_02056bc0(void *object, void *node);
extern void *func_ov002_021b833c(void *a, void *b);
extern char data_ov002_021d6278[];
extern char data_ov002_021d62b8[];

void *func_ov002_021b836c(void *p0, void *p1, void *p2v, uint32_t p3, uint32_t p4, uint32_t p5)
{
    Self *self = (Self *)p0;
    P2 *p2 = (P2 *)p2v;
    uint32_t i;
    int off;
    uint32_t *q;
    uint32_t *r;
    void *node;

    func_020694ac(self, 0, 0, p3, p3);
    func_ov002_021c7f88((char *)self + 0xb8, p1, p3, p4);

    self->vt0 = (void *)data_ov002_021d6278;
    self->vt1 = (void *)data_ov002_021d62b8;
    self->fec = 0;
    self->f0 = 0;
    self->f1 = 1;
    self->f4 = 0;

    off = 0x120;
    q = (uint32_t *)((char *)self + off);
    q[0] = 0;
    q[1] = 0;
    q[2] = 0;
    *(uint32_t *)((char *)self + off + 0xc) = p5;
    *((char *)self + off + 0x10) = 0;
    self->fc0 = p2->f14;
    *(uint32_t *)((char *)self + off - 4) = p2->f10;
    self->fe0 = p2->f18;
    self->fe4 = p2->f20;
    self->fe8 = p2->f24;
    self->fdc = p2->f1c;

    r = (uint32_t *)((char *)self + off - 0x10);
    for (i = 0; i < 3; i++) {
        r[i] = i;
    }
    {
        Num n(q[1]);
        q[1] = diff(n, n.v);
    }
    for (i = 2; i < 6; i++) {
        self->f8[i] = 0;
    }

    node = func_0205681c(0x18);
    if (node != 0) {
        node = func_ov002_021c2edc(node, func_ov002_02198ddc(self->fbc));
    }
    func_02056bc0((char *)self + 0x14, node);

    node = func_0205681c(0x18);
    if (node != 0) {
        node = func_ov002_021b833c(node, self->fbc);
    }
    func_02056bc0((char *)self + 0x14, node);

    return self;
}
}
