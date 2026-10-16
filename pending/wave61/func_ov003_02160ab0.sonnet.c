#include "ffc/types.h"
typedef struct { uint32_t v; } W;
extern void *func_0205681c(uint32_t n);
extern void func_02056c9c(void *p, int v);
extern uint32_t data_ov003_0217a3c4;
void *func_ov003_02160ab0(uint32_t a, W b, W c, uint32_t d, uint32_t e, uint16_t f) {
    uint32_t *p = (uint32_t *)func_0205681c(0x9c);
    if (p != 0) {
        func_02056c9c(p, 0);
        p[0] = (uint32_t)&data_ov003_0217a3c4;
        p[0x84/4] = a;
        p[0x88/4] = b.v;
        p[0x8c/4] = c.v;
        p[0x90/4] = d;
        p[0x94/4] = e;
        *(uint16_t *)((uint8_t *)p + 0x98) = f;
    }
    return p;
}
