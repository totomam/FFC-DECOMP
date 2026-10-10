/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void func_02056bc0(void *object, void *node);
struct Pair { uint32_t a; uint32_t b; };
extern "C" Pair data_020b286c;
struct Q { virtual void v0(); virtual void v1(); virtual uint32_t v2(uint32_t, uint8_t *); };
struct P {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual uint32_t v5(uint32_t);
    uint8_t pad[0x84 - 4];
    Q *q;
    Pair pr;
    uint8_t pad2[0x94 - 0x90];
    uint8_t x[4];
    void run();
};
extern "C" void func_0207697c(P *p) {
    uint32_t a = p->v5(2);
    uint32_t b = p->q->v2(a, p->x);
    func_02056bc0((uint8_t *)p + 0x14, (void *)b);
    uint32_t s1, s0; s0 = data_020b286c.a; s1 = data_020b286c.b; uint32_t *d0 = &p->pr.a; uint32_t *d1 = &p->pr.b; *d0 = s0; *d1 = s1;
}
