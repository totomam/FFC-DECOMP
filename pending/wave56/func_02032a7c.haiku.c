#include "ffc/types.h"

typedef struct { uint32_t a, b, c, d; } Quad;
typedef struct { uint32_t a[10]; } Arr;
typedef struct { uint32_t s4; uint32_t s8; Arr t; } Loc;
typedef struct { uint32_t a, b; } Pair;

extern void func_02021338(void *owner);
extern void *func_02032b44(void *owner, Pair pr);
extern void *func_02062a30(void *owner);
extern uint32_t func_02020b58(void *owner, Quad q);
extern void *func_0203b720(void);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020ae174[];

void func_02032a7c(uint8_t *p) {
    void *r6;
    void *n;
    uint32_t r7;
    Loc L;
    Quad q;

    if (*(void **)(p + 0xb0)) {
        func_02021338(*(void **)(p + 0xb0));
    }
    r6 = func_02032b44(*(void **)(p + 0xbc), *(Pair *)data_020ae174);
    L.s4 = (uint32_t)func_02062a30(*(void **)(p + 0x80));
    L.t.a[0] = *(uint32_t *)(p + 0x88);
    L.t.a[1] = *(uint32_t *)(p + 0x8c);
    L.t.a[2] = L.t.a[0];
    L.t.a[3] = L.t.a[1];
    L.t.a[4] = L.t.a[0];
    L.t.a[5] = L.t.a[1];
    L.t.a[6] = L.t.a[0];
    L.t.a[7] = L.t.a[1];
    L.t.a[8] = L.t.a[0];
    L.t.a[9] = L.t.a[1];
    q = *(Quad *)&L.t.a[6];
    r7 = func_02020b58(*(void **)(p + 0x84), q);
    L.s8 = (uint32_t)func_02062a30(*(void **)(p + 0x84));
    n = func_0203b720();
    func_02056bc0(p + 0x14, n);
    func_02056bc0(p + 0x14, (void *)L.s8);
    func_02056bc0(p + 0x14, (void *)r7);
    func_02056bc0(p + 0x14, (void *)L.s4);
    func_02056bc0(p + 0x14, r6);
    if (*(void **)(p + 0xac)) {
        void *x = func_02062a30(*(void **)(p + 0xac));
        func_02056bc0(p + 0x14, x);
    }
}
