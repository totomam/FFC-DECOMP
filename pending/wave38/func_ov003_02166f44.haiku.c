#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, int x);
extern char data_ov003_0217b034[];

typedef struct Obj {
    void *vtbl;
    char pad[0x84 - 4];
    uint32_t f84;
    uint32_t f88;
    uint32_t f8c;
    uint32_t f90;
    uint32_t f94;
    uint32_t f98;
    uint32_t f9c;
    uint32_t fa0;
    uint8_t fa4;
} Obj;

typedef struct S3 {
    uint32_t w0;
    uint32_t w1;
    uint32_t w2;
} S3;

Obj *func_ov003_02166f44(uint32_t a, S3 s, uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint8_t i) {
    Obj *p = (Obj *)func_0205681c(0xa8);
    if (p) {
        func_02056c9c(p, 0);
        p->vtbl = data_ov003_0217b034;
        p->f84 = a;
        p->f88 = s.w0;
        p->f8c = s.w1;
        p->f90 = s.w2;
        p->f94 = e;
        p->f98 = f;
        p->f9c = g;
        p->fa0 = h;
        p->fa4 = i;
    }
    return p;
}
