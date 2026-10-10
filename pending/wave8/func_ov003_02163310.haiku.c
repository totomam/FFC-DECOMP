#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, int x);
extern uint32_t data_ov003_0217a46c[];

typedef struct { uint32_t b, c; } P;

void *func_ov003_02163310(uint32_t a, P s, uint32_t d, uint32_t e) {
    uint32_t *p = (uint32_t *)func_0205681c(0x98);
    if (p != 0) {
        func_02056c9c(p, 0);
        p[0] = (uint32_t)data_ov003_0217a46c;
        p[0x21] = a;
        p[0x22] = s.b;
        p[0x23] = s.c;
        p[0x24] = d;
        p[0x25] = e;
    }
    return p;
}
