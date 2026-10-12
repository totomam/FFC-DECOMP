#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, uint32_t arg);
extern char data_ov003_021795e4[];

typedef struct Pair {
    uint32_t x;
    uint32_t y;
} Pair;

typedef struct Obj {
    void *vtbl;
    uint8_t pad0[0x84 - 4];
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
    uint8_t e;
    uint8_t f;
    uint8_t g;
    uint8_t h;
    uint32_t i;
    uint32_t pad1;
    uint32_t j;
    uint32_t k;
} Obj;

void *func_ov003_0214b9a0(uint32_t a, Pair bc, uint32_t d,
                          uint8_t e, uint8_t f, uint8_t g, uint8_t h,
                          uint32_t i, uint32_t j, uint32_t k)
{
    Obj *p = (Obj *)func_0205681c(0xa4);
    if (p != 0) {
        func_02056c9c(p, 0);
        p->vtbl = data_ov003_021795e4;
        p->a = a;
        p->b = bc.x;
        p->c = bc.y;
        p->d = d;
        p->e = e;
        p->f = f;
        p->g = g;
        p->h = h;
        p->i = i;
        p->j = j;
        p->k = k;
    }
    return p;
}
