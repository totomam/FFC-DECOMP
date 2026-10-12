#include "ffc/types.h"

extern void *func_02069210(void *object);
extern void func_020095b8(void *dst, void *src);
extern void func_0206139c(void *out, void *p1, void *p2, uint32_t r3, uint32_t s0);
extern void func_020059cc(void *object);
extern void *func_020159f8(uint32_t v);
typedef struct { uint32_t a; uint32_t b; } Pair;
extern void *func_0203b9cc(Pair pr, void *c, uint32_t d);
extern void *func_0203b884(void *r0, void *p1, Pair pr, uint32_t s0);
extern void *func_02034e5c(void *p);
extern void *func_0205681c(uint32_t size);
extern void *func_020349e0(void *obj, Pair a, Pair b, uint32_t e, void *f, uint32_t g);
extern void func_02034e28(void);
extern void *func_02035298(void *a, void *b, void *c, uint32_t d);
extern void func_020686d0(void *obj, void *q);
extern void func_020686e8(void *obj, void *q);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020adfe4[];
extern uint32_t data_020b8e44[];

uint8_t *func_020313ac(uint8_t *self, uint8_t *p1, uint32_t a, uint32_t b, ...)
{
#define P_A (((uint32_t *)&a)[0])
#define P_B (((uint32_t *)&b)[0])
#define P_P2 (((void **)&b)[1])
#define P_C (((uint32_t *)&b)[2])
    uint32_t o58[3];
    uint32_t o4c[3];
    uint32_t o44[2];
    uint32_t r4;
    uint32_t sz;
    void *t;
    void *alloc;
    void *q;
    void *obj;
    void *t3;

    func_02069210(self);
    *(void **)self = (void *)data_020adfe4;
    *(uint32_t *)(self + 0x98) = 0;
    *(uint32_t *)(self + 0xac) = P_A;
    *(uint32_t *)(self + 0xb0) = P_B;
    func_020095b8(o58, P_P2);
    func_0206139c(o44, p1, o58, 0, 0);
    r4 = o44[0];
    func_020059cc(o58);
    sz = 0x10; if (r4 > 0x20) sz = 0x20;
    {
        Pair pr;
        Pair pz;
        pr.a = r4;
        pr.b = sz;
        t = func_0203b9cc(pr, func_020159f8(data_020b8e44[0]), 1);
        pz.a = 0;
        pz.b = 7;
        q = func_0203b884(t, p1, pz, 0);
    }
    *(void **)(self + 0x94) = q;
    t3 = func_02034e5c(P_P2);
    alloc = func_0205681c(0xe8);
    if (alloc) {
        { Pair z; Pair ab; z.a=0; z.b=7; ab.a=P_A; ab.b=P_B; alloc = func_020349e0(alloc, *(Pair *)(self+0xac), z, 0, t3, 0); }
    }
    *(void **)(self + 0x98) = alloc;
    func_02034e28();
    obj = *(void **)(self + 0x94);
    ((void (*)(void *, uint32_t, uint32_t))((void **)*(void **)obj)[3])(obj, P_A, P_B);
    obj = *(void **)(self + 0x94);
    ((void (*)(void *, uint32_t))((void **)*(void **)obj)[8])(obj, 0);
    alloc = func_0205681c(0x20);
    q = alloc;
    if (alloc) {
        q = func_02035298(alloc, p1, *(void **)(self + 0x98), 0);
    }
    obj = *(void **)(self + 0x94);
    func_020686d0(obj, q);
    obj = *(void **)(self + 0x94);
    ((void (*)(void *))((void **)*(void **)obj)[0xb])(obj);
    func_020095b8(o4c, P_P2);
    func_020686e8(*(void **)(self + 0x94), o4c);
    func_020059cc(o4c);
    obj = *(void **)(self + 0x94);
    if ((int8_t)((uint32_t *)obj)[3] == 0) {
        ((void (*)(void *))((void **)*(void **)obj)[2])(obj);
    }
    *(uint32_t *)(self + 0x9c) = P_A;
    *(uint32_t *)(self + 0xa0) = P_B;
    *(uint32_t *)(self + 0xa4) = P_A + P_C;
    *(uint32_t *)(self + 0xa8) = P_B + 0xe;
    r4 = *(uint32_t *)(self + 0x98);
    {
        volatile uint32_t u[2]; volatile uint32_t w2[2]; volatile uint32_t w1[2];
        uint32_t x = P_A + P_C; uint32_t y = P_B + 0xe;
        u[0] = x; w1[0] = x; u[1] = y; w1[1] = y; w2[0] = P_A; w2[1] = P_B;
        r4 = *(uint32_t *)(self + 0x98);
        func_02056bc0(self + 0x48, *(void **)(self + 0x94));
        func_02056bc0(self + 0x48, (void *)r4);
    }
    return self;
}
