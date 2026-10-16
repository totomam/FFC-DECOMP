#include "ffc/types.h"
typedef struct { uint32_t b, c; } S;
extern void *func_0205681c(uint32_t sz);
extern void func_02056c9c(void *p, int x);
extern uint32_t data_ov003_0217b064;
void *func_ov003_02167048(uint32_t a, S s, uint32_t d, uint32_t e, uint32_t f) {
    uint32_t *p = (uint32_t *)func_0205681c(0x9c);
    if (p != 0) {
        func_02056c9c(p, 0);
        p[0] = (uint32_t)&data_ov003_0217b064;
        p[0x84/4] = a;
        *(S*)(p + 0x88/4) = s;
        p[0x90/4] = d;
        p[0x94/4] = e;
        p[0x98/4] = f;
    }
    return p;
}
