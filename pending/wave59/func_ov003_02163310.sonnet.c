#include "ffc/types.h"
typedef struct { uint32_t x, y; } S;
extern void *func_0205681c(uint32_t n);
extern void func_02056c9c(void *p, uint32_t v);
extern uint32_t data_ov003_0217a46c;
void *func_ov003_02163310(uint32_t a, S s, uint32_t d, ...) {
    uint32_t *p = (uint32_t *)func_0205681c(0x98);
    if (p != 0) {
        func_02056c9c(p, 0);
        p[0] = (uint32_t)&data_ov003_0217a46c;
        p[0x84/4] = a;
        p[0x88/4] = s.x;
        p[0x8c/4] = s.y;
        p[0x90/4] = d;
        p[0x94/4] = (&s.x)[3];
    }
    return p;
}
