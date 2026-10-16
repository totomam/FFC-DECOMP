#include "ffc/types.h"
extern void *func_0205681c(int n);
extern void func_02056c9c(void *p, int v);
extern uint32_t data_ov003_0217a030;
typedef struct { uint32_t b, c; } P;
typedef struct { uint8_t pad[0x84]; uint32_t a, b, c; uint16_t d, e; uint32_t f, g; uint16_t h; uint32_t i; } O;
void *func_ov003_0215b224(uint32_t a, P pr, uint16_t d, uint16_t e, uint32_t f, uint32_t g, uint16_t h, uint32_t i) {
    O *p = (O *)func_0205681c(0xa4);
    if (p != 0) {
        func_02056c9c(p, 0);
        *(uint32_t *)p = (uint32_t)&data_ov003_0217a030;
        p->a = a;
        p->b = pr.b;
        p->c = pr.c;
        p->d = d;
        p->e = e;
        p->f = f;
        p->g = g;
        p->h = h;
        p->i = i;
    }
    return p;
}
