#include "ffc/types.h"

struct Src {
    uint8_t pad[0x14];
    uint32_t f14;
};

struct Rec {
    uint32_t f0;
    uint32_t f4;
};

struct Obj {
    void *vt;
    uint8_t pad04[0x10];
    uint32_t f14;
    uint8_t f18[4];
    void *f1c;
    void *f20;
    uint32_t f24;
    uint8_t f28[0x10];
    uint32_t f38;
};

extern void func_02062848(void *object);
extern void func_02063520(void *object, uint32_t x);
extern uint32_t func_02063578(const void *object);
extern struct Rec *func_0205f81c(void *a, uint32_t b, uint32_t c);
extern void func_02063d00(void *object, uint32_t x);
extern char data_020b16d8[];

struct Obj *func_02063bd0(struct Obj *p, uint32_t a1, struct Src *a2, uint32_t a3, uint32_t a5)
{
    struct Rec *r;

    func_02062848(p);
    p->vt = data_020b16d8;
    p->f14 = a2->f14;
    func_02063520(&p->f18, a1);
    p->f1c = a2;
    p->f38 = a3;
    if (func_02063578(&p->f18)) {
        r = func_0205f81c(p->f1c, func_02063578(&p->f18), a5);
        p->f20 = r;
        p->f24 = r->f4;
    }
    func_02063d00(p, a5);
    return p;
}
