#include "ffc/types.h"

typedef struct VT { void *f0; void (*dtor)(void *); } VT;
typedef struct Node { VT *vt; } Node;

typedef struct Buf { uint32_t w[11]; } Buf;
typedef struct Size { uint32_t w, h; } Size;

typedef struct Obj {
    uint8_t pad0[0xbc];
    void *bc;
    void *c0[2];
    uint8_t pad1[4];
    void *cc;
    uint8_t d0;
    uint8_t pad2[3];
    void *d4;
} Obj;

extern void *data_020b93b8;
extern uint8_t data_ov007_021c9700;
extern uint32_t data_ov007_021c2bec[2];

extern void func_02084b2c(void *p, int v, uint32_t n);
extern void func_0201af3c(void *g, uint32_t idx, void *buf);
extern void func_0201af38(void *g, uint32_t v);
extern void func_0201af7c(void *g, uint32_t idx, void *buf);
extern void func_02069288(void *o);
extern void func_020697ac(void *o, void *n);
extern void func_02056bf4(void *o, void *n);
extern void func_02069600(void *o, void *n);
extern void func_020695ec(void *o);
extern void func_02069670(void *o, void *n, uint32_t a, uint32_t b);
extern void *func_0205681c(uint32_t sz);
extern void *func_02008ce8(void *p, uint32_t a, uint32_t b, uint32_t c);
extern void *func_ov007_0219a2d4(void *p, void *bc, uint32_t idx, Buf arg);
extern void func_ov007_0219add8(Obj *o);
extern void func_ov007_0219ad20(Obj *o);
extern void func_ov007_0219ae58(Obj *o);
extern void *func_ov007_0219b460(void *g, uint32_t a, uint32_t b, uint32_t c);
extern void func_02056bc0(void *o, void *n);

void func_ov007_0219b274(Obj *self, uint32_t flag)
{
    Buf buf;
    Size sz;
    Size sa, sb;
    Size sc;
    Size sd;
    Node *n;
    void *res;
    void *a;
    void *b;
    uint32_t i;
    uint32_t done;

    func_02084b2c(&buf, 0, 0x2c);
    func_0201af3c(data_020b93b8, flag, &buf);
    func_0201af38(data_020b93b8, (flag + 1) & 1);

    func_02069288(self->c0[0]);
    func_02069288(self->c0[1]);
    func_020697ac(self, 0);

    self->d0 = 0;
    data_ov007_021c9700 = 0;
    func_02056bf4((uint8_t *)self + 0x48, self->d4);
    if (self->d4 != 0) {
        n = self->d4;
        n->vt->dtor(n);
    }
    self->d4 = 0;

    if (self->c0[flag] != 0) {
        func_02069600(self, self->c0[flag]);
        n = self->c0[flag];
        if (n != 0) {
            n->vt->dtor(n);
        }
        self->c0[flag] = 0;
    }

    n = func_0205681c(0xb4);
    res = n;
    if (n != 0) {
        if (flag == 0) {
            sa.w = 0x7c;
            sa.h = 0x40;
        } else {
            sb.w = 0x7c;
            sb.h = 0x80;
        }
        sc.w = 0x7c;
        sc.h = (flag == 0) ? 0x40 : 0x80;
        sz = sc;
        sd = sz;
        res = func_ov007_0219a2d4(n, self->bc, flag, buf);
    }
    self->c0[flag] = res;
    func_020695ec(self);
    func_020697ac(self, self->c0[flag]);
    func_02069670(self, self->c0[flag], 1, 0);
    func_ov007_0219add8(self);

    done = 1;
    for (i = 0; i < 2; i++) {
        func_0201af7c(data_020b93b8, i, &buf);
        if ((buf.w[5] >> 1) & 1) {
            done = 0;
        }
    }

    if (done != 0) {
        func_02069600(self, self->cc);
        n = self->cc;
        if (n != 0) {
            n->vt->dtor(n);
        }
        self->cc = 0;
        func_ov007_0219ad20(self);
    } else {
        func_02069288(self->cc);
        func_ov007_0219ae58(self);
    }

    a = func_0205681c(0x94);
    if (a != 0) {
        a = func_02008ce8(a, 0, 0, 0);
    }
    b = func_ov007_0219b460(data_020b93b8, data_ov007_021c2bec[0], data_ov007_021c2bec[1], 1);

    n = func_0205681c(0x94);
    res = n;
    if (n != 0) {
        res = func_02008ce8(n, 0, 0, 0);
    }

    func_02056bc0((uint8_t *)self + 0x14, res);
    func_02056bc0((uint8_t *)self + 0x14, b);
    func_02056bc0((uint8_t *)self + 0x14, a);
}
