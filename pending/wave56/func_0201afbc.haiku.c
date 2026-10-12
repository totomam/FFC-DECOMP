#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_02084ca4(void *p, void *q, uint32_t n);
extern uint32_t func_0201bd84(void *a, uint32_t n);
extern uint32_t func_0201c9ac(void *a, uint32_t n);
extern uint32_t data_020b93bc[];

typedef struct {
    uint32_t f0 : 1;
    uint32_t f1 : 1;
    uint32_t f2 : 5;
    uint32_t f7 : 8;
    uint32_t f15 : 16;
    uint32_t f31 : 1;
} W14;

typedef struct {
    uint32_t h0 : 1;
    uint32_t h1 : 1;
    uint32_t h2 : 3;
    uint32_t rest : 27;
} W18;

typedef struct {
    uint32_t g0 : 8;
    uint32_t pad1 : 6;
    uint32_t g14 : 5;
    uint32_t pad2 : 13;
} R14;

typedef struct {
    uint32_t w0, w4, w8, wc, w10;
    W14 w14;
    W18 w18;
    uint32_t w1c, w20, w24, w28;
} Obj;

typedef struct {
    void *p;
    volatile uint8_t f;
} Guard;

void func_0201afbc(void *a, void *b)
{
    Guard g;
    Obj *B = (Obj *)b;
    uint8_t *A = (uint8_t *)a;
    uint32_t *OW;
    R14 *O;
    uint32_t t;

    g.p = data_020b93bc;
    g.f = 1;
    if (g.f) {
        func_0208763c(g.p);
    }
    B->w14.f1 = 1;
    func_02084ca4(*(void **)(A + 0x3c), b, 0x12);
    t = func_0201bd84(a, 1);
    B->w14.f0 = t;
    O = (R14 *)((uint8_t *)*(void **)(A + 0x3c) + 0x14);
    B->w14.f2 = O->g14;
    B->w14.f7 = O->g0;
    B->w1c = *(uint32_t *)(A + 0x98);
    B->w20 = *(uint32_t *)(A + 0x9c);
    OW = (uint32_t *)*(void **)(A + 0x3c);
    B->w24 = OW[0x90 / 4];
    B->w28 = OW[0x94 / 4];
    t = func_0201bd84(a, 6);
    B->w14.f31 = t;
    t = func_0201bd84(a, 2);
    B->w18.h0 = t;
    t = func_0201bd84(a, 3);
    B->w18.h1 = t;
    B->w14.f15 = *(uint16_t *)(A + 0x10c);
    t = func_0201c9ac(a, 0x3d);
    B->w18.h2 = t;
    if (g.f) {
        func_02087678(g.p);
    }
}
