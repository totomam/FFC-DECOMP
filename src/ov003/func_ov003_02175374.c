#include "ffc/types.h"

extern uint32_t func_02055054(uint32_t v);
extern void func_02060e80(void *object);
extern void func_020591f4(void *a, uint32_t b);
extern void *func_0203bb08(void *a, void *b, uint32_t c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void *func_0206aed4(void *p, uint32_t a, void *b, uint32_t c);
extern void func_0206b014(void *obj, uint32_t v);
extern void func_0206b034(void *obj, uint32_t v);
extern void func_0206afdc(void *obj);
extern void func_0206aff8(void *obj);
extern void *func_02056aec(void *obj);
extern void *func_0203b75c(uint32_t v);
extern void *func_0209a978(uint32_t a, uint32_t b);
typedef struct { uint32_t a, b; } S2;
typedef struct { uint32_t a, b, c, d; } S4;
extern void func_0206b54c(void *obj, S2 a, void *c);
extern void func_0206b484(void *obj, S4 a);
extern uint32_t data_0213e098;
extern uint8_t data_ov003_0217baf8[];

#define F32(o) (*(uint32_t *)(s + (o)))
#define PTR(o) (*(void **)(s + (o)))

void func_ov003_02175374(uint8_t *s) {
    uint32_t r4;
    uint32_t m;
    uint32_t v;
    S2 q;
    S4 w;
    void *p;

    if (F32(0x94) != 4 && F32(0x94) != 5) {
        return;
    }
    if (F32(0x94) == 4) {
        r4 = F32(0x88);
    } else {
        r4 = F32(0x98) - F32(0x88);
    }
    v = func_02055054(data_0213e098);
    F32(0x88) = F32(0x88) + v;

    m = F32(0x8c);
    switch (m) {
    case 0:
        func_02060e80(*(void **)((uint8_t *)*(void **)(s + 0x9c) + 0x24));
        func_020591f4(((void **)PTR(0x9c))[5], 0);
        p = func_0203bb08(PTR(0x9c), data_ov003_0217baf8, 1, 0, 0);
        PTR(0x90) = p;
        ((void (*)(void *))(*(void ***)p)[0x28 / 4])(p);
        func_02056bc0(s + 0x48, PTR(0x90));
        p = func_0205681c(0x4c);
        if (p != 0) {
            p = func_0206aed4(p, (uint32_t)-1, PTR(0x9c), 1);
        }
        PTR(0x84) = p;
        func_02056bc0(s + 0x48, p);
        v = ((uint32_t (*)(void *))(*(void ***)PTR(0x90))[0x34 / 4])(PTR(0x90));
        func_0206b014(PTR(0x84), 0x3f ^ v);
        v = ((uint32_t (*)(void *))(*(void ***)PTR(0x90))[0x34 / 4])(PTR(0x90));
        func_0206b034(PTR(0x84), v);
        func_0206afdc(PTR(0x84));
        F32(0x8c) = F32(0x8c) + 1;
        break;
    case 1:
        if (r4 >= F32(0x98)) {
            if (F32(0x94) == 4) {
                ((void (*)(void *))(*(void ***)PTR(0x90))[0x2c / 4])(PTR(0x90));
                func_0206aff8(PTR(0x84));
                r4 = (uint32_t)func_02056aec(s);
                p = func_0203b75c(1);
                { uint32_t *t = (uint32_t *)s + 5;
                func_02056bc0(t, p);
                func_02056bc0(t, (void *)r4); }
                return;
            } else {
                F32(0xc) = (F32(0xc) & ~0xffu) | 2u;
                return;
            }
        }
        break;
    default:
        break;
    }

    q.a = 0x80;
    q.b = 0x60;
    p = func_0209a978(0xa0 * r4, F32(0x98));
    func_0206b54c(PTR(0x84), q, p);
    w.a = 0xff;
    w.b = 0;
    w.c = 0x100;
    w.d = 0xc0;
    func_0206b484(PTR(0x84), w);
}
