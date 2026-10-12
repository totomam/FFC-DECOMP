#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern uint32_t func_0203c0d0(uint32_t x);
extern uint32_t func_ov009_021ae590(void *obj, Pair s);
extern void *func_0205681c(uint32_t x);
extern uint32_t func_ov009_021aea78(void *obj, void *p, uint8_t c, uint32_t v);
extern uint32_t func_0203c058(uint32_t x);
extern uint32_t func_0203b708(uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov009_021b0e2c;
extern Pair data_ov009_021b0e34;

void func_ov009_021ae4fc(void *obj, uint32_t v)
{
    uint8_t *p = (uint8_t *)obj;
    uint8_t *q;
    uint32_t b, a, c, d, e, r7;
    void *t;

    *(uint32_t *)(p + 0x14c) = v;
    a = func_0203c0d0(0x1e);
    b = func_ov009_021ae590(obj, data_ov009_021b0e2c);
    t = func_0205681c(0xf8);
    r7 = (uint32_t)t;
    if (t != 0) {
        r7 = func_ov009_021aea78(t, p + 0xe8, p[0x148], *(uint32_t *)(p + 0x14c));
    }
    c = func_ov009_021ae590(obj, data_ov009_021b0e34);
    d = func_0203c058(0x1e);
    e = func_0203b708(0x1e);
    q = p + 0x14;
    func_02056bc0(q, (void *)e);
    func_02056bc0(q, (void *)d);
    func_02056bc0(q, (void *)c);
    func_02056bc0(q, (void *)r7);
    func_02056bc0(q, (void *)b);
    func_02056bc0(q, (void *)a);
}
