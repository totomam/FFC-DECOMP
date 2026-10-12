#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02055110(void *a, void *b);
extern char data_020b1744[];
extern void *data_0213e098;

typedef struct {
    uint32_t w0;
    uint32_t w1;
    uint32_t w2;
    uint32_t w3;
} Quad;

typedef struct {
    uint32_t a1;
    uint32_t a6;
    uint32_t a7;
    Quad q;
} Local;

typedef struct {
    void *vt;
    uint32_t pad04;
    uint32_t pad08;
    uint32_t flags;
    uint32_t pad10;
    uint32_t a1;
    uint32_t w0;
    uint32_t w1;
    uint32_t w2;
    uint32_t w3;
    uint32_t a0;
    uint32_t a6;
    uint32_t a7;
} Obj;

void func_02067e80(uint32_t a0, uint32_t a1, Quad q, uint32_t a6, uint32_t a7)
{
    Local s;
    Obj *p;
    s.a1 = a1;
    p = (Obj *)func_0205681c(0x34);
    if (p != 0) {
        p->flags &= ~0xffu;
        p->vt = data_020b1744;
        s.q = q;
        p->a1 = s.a1;
        p->w0 = s.q.w0;
        p->w1 = s.q.w1;
        p->w2 = s.q.w2;
        p->w3 = s.q.w3;
        p->a0 = a0;
        s.a6 = a6;
        s.a7 = a7;
        p->a6 = s.a6;
        p->a7 = s.a7;
    }
    func_02055110(data_0213e098, p);
}
